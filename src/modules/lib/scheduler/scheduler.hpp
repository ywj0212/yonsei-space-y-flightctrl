#ifndef __SPACE_Y_SCHEDULER__
#define __SPACE_Y_SCHEDULER__

#include <Arduino.h>
#include <MBED_RPi_Pico_TimerInterrupt.h>
#include <cstring>
#include "../logger.hpp"

#define MAX_MODULES 16
#define MAX_TASK_NAME_LEN 16
#define TASK_PRIORITY_IDLE 255

#if ( defined(ARDUINO_NANO_RP2040_CONNECT) || defined(ARDUINO_RASPBERRY_PI_PICO) || defined(ARDUINO_ADAFRUIT_FEATHER_RP2040) || \
      defined(ARDUINO_GENERIC_RP2040) ) && defined(ARDUINO_ARCH_MBED)
  #define USING_MBED_RPI_PICO_TIMER_INTERRUPT        true
#else
  #error This code is intended to run on the MBED RASPBERRY_PI_PICO platform! Please check your Tools->Board setting.
#endif

static bool is_init_routine_done = false;
static unsigned char new_pid = 0;

#include "buzzer.hpp"
#define PANIC_BUZZ_DEFAULT 255
void panic(int err = PANIC_BUZZ_DEFAULT) {
  log_error("[Panic] Shutting down...");
  buzz_error(err);
  while(true);
}

struct Module;
bool module_attach(Module*);
bool module_detach(unsigned char);

struct Module {
  char name[MAX_TASK_NAME_LEN];
  unsigned char pid = -1;
  bool attached = false;
  bool initialized = false;
  bool running = false;
  unsigned char init_priority = TASK_PRIORITY_IDLE; // 0 - highest, 255 - lowest
  unsigned char loop_priority = TASK_PRIORITY_IDLE; // 0 - highest, 255 - lowest
  unsigned long interval = -1;
  unsigned long last_execution_time = -1;

  Module(char* name) : attached(false), initialized(false), running(false), init_priority(TASK_PRIORITY_IDLE), loop_priority(TASK_PRIORITY_IDLE), interval(-1), last_execution_time(-1) {
    if(strnlen(name, MAX_TASK_NAME_LEN + 1) > MAX_TASK_NAME_LEN) {
      log_error("The given name '%s' is too long! (init_priority = %d, loop_priority = %d)", name, this -> init_priority, this -> loop_priority);
      panic();
    }
    strncpy(this -> name, name, MAX_TASK_NAME_LEN);
    log_info("test");
    if(!module_attach(this)) {
      log_error("Failed to attach module '%s'(init_priority = %d, loop_priority = %d)", this -> name, this -> init_priority, this -> loop_priority);
      panic();
    }
  }
  virtual bool init(unsigned long) = 0;
  virtual bool loop(unsigned long) = 0;
};
static Module* ModuleList[MAX_MODULES] = {NULL, };
bool module_attach(Module* module) {
  for(int i = 0; i < MAX_MODULES; i++) {
    if(ModuleList[i] == NULL) {
      module -> pid = new_pid++;
      module -> attached = true;
      ModuleList[i] = module;

      if(is_init_routine_done) {
        if(!module -> init(millis())) {
          log_error("Module '%s'(pid = %d, init_priority = %d), initialization failed", ModuleList[i] -> name, ModuleList[i] -> pid, ModuleList[i] -> init_priority);
          panic();
        }
        log_info("Module '%s'(pid = %d, init_priority = %d), initialization success", ModuleList[i] -> name, ModuleList[i] -> pid, ModuleList[i] -> init_priority);
        module -> initialized = true;
      }
      return true;
    }
  }
  return false;
}
bool module_detach(unsigned char pid) {
  for(int i = 0; i < MAX_MODULES; i++) {
    if(ModuleList[i] != NULL && ModuleList[i] -> pid == pid) {
      log_info("Module '%s'(pid = %d) has detached", ModuleList[i] -> name, ModuleList[i] -> pid);
      ModuleList[i] -> attached = false;
      ModuleList[i] -> initialized = false;
      ModuleList[i] -> running = false;
      ModuleList[i] -> pid = -1;
      ModuleList[i] = NULL;
      return true;
    }
  }
  return false;
}

void init_routine() {
  delay(1000);

  buzz_init();
  log_info("Buzzer initialized");

  log_info("Initalization start");
  buzz_notificate();
  unsigned long time = millis();

  unsigned char max_priority = TASK_PRIORITY_IDLE, max_index = -1;
  bool found;
  
  while(true) {
    found = false;

    for(int i = 0; i < MAX_MODULES; i++) {
      if(ModuleList[i] == NULL) continue;
      if(!(ModuleList[i] -> initialized) && ModuleList[i] -> init_priority >= max_priority) {
        max_index = i;
        max_priority = ModuleList[i] -> init_priority;
        found = true;
        break;
      }
    }
    if(found) {
      if(!ModuleList[max_index] -> init(millis())) {
        log_error("Module '%s'(pid = %d, init_priority = %d), initialization failed", ModuleList[max_index] -> name, ModuleList[max_index] -> pid, ModuleList[max_index] -> init_priority);
        panic();
      }

      log_info("Module '%s'(pid = %d, init_priority = %d), initialization success", ModuleList[max_index] -> name, ModuleList[max_index] -> pid, ModuleList[max_index] -> init_priority);
      ModuleList[max_index] -> initialized = true;
    }
    else break;
  }

  is_init_routine_done = true;
  buzz_success();
  log_info("Initalization took %.3f seconds.", ((millis() - time) / 1000.0f));
}

#include "../../ModuleMgmt.hpp"
#define SCHEDULER_FREQ 1000 // run loop routine in every millisecond
MBED_RPI_PICO_Timer ITimer(0);

void schedulerIRQ(uint);
void setup() {
  Serial.begin(9600);
  while (!Serial);

#ifdef LOG_USE_COLOR
  log_info("Serial connection has established (color enabled)");
#else
  log_info("Serial connection has established (color disabled)");
#endif

  static __Modules Modules;
  init_routine();

  if (ITimer.attachInterrupt(SCHEDULER_FREQ, schedulerIRQ)) {
    log_info("Starting ITimer OK, millis() = %lu", millis());
  }
  else {
    log_error("Can't set ITimer. Select another freq. or timer");
    panic();
  }
}


unsigned char RunningModuleList[MAX_MODULES] = {TASK_PRIORITY_IDLE,};
unsigned char RunningModuleCount = 0;
void schedulerIRQ(uint alarm_num)
{
  TIMER_ISR_START(alarm_num);
  ///////////////////////////////////////////////////////////
  unsigned long time = millis();

  for(int i = 0; i < MAX_MODULES; i++) {
    if(
      ((time - ModuleList[i] -> last_execution_time) >= ModuleList[i] -> interval)
      && (RunningModuleList[RunningModuleCount] > ModuleList[i] -> loop_priority)
      && (!ModuleList[i] -> running)  
    ) {
      ModuleList[i] -> last_execution_time = time;
      ModuleList[i] -> running = true;
      RunningModuleCount++;

      log_info("Module '%s'(pid = %d), preemptied previous module", ModuleList[i] -> name, ModuleList[i] -> pid);
      RunningModuleList[RunningModuleCount] = ModuleList[i] -> loop_priority;
      ModuleList[i] -> loop(time);

      ModuleList[i] -> running = false;
      RunningModuleList[RunningModuleCount] = TASK_PRIORITY_IDLE;
      RunningModuleCount--;
    }
  }
  ////////////////////////////////////////////////////////////
  TIMER_ISR_END(alarm_num);
}

#endif