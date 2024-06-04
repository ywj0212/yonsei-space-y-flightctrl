#include "dispatcher.hpp"
#include "scheduler.hpp"

void init_dispatch() {
  module_list_init_check();
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

  is_init_dispatched = true;
  log_info("Initalization took %.3f seconds.", ((millis() - time) / 1000.0f));
  buzz_success();
}
void dispatch() {
  unsigned long time = millis();
  // unsigned char index = MAX_MODULES, max_priority = TASK_PRIORITY_IDLE;
  // for(int i = 0; i < MAX_MODULES; i++) {
  //   if(
  //        (ModuleList[i] != NULL)
  //     && ((time - ModuleList[i] -> last_execution_time) >= ModuleList[i] -> interval)
  //     && (!ModuleList[i] -> running)
  //     && (ModuleList[i] -> loop_priority <= max_priority)
  //   ) {
  //     max_priority = ModuleList[i] -> loop_priority;
  //     index = i;
  //   }
  // }

  for(int i = 0; i < MAX_MODULES; i++) {
    if(ModuleList[i] == NULL) continue;
    if(((time - ModuleList[i] -> last_execution_time) >= (ModuleList[i] -> interval))) {
      ModuleList[i] -> running = true;
      ModuleList[i] -> loop(time);
      ModuleList[i] -> running = false;
      ModuleList[i] -> last_execution_time = time;
    }
  }
  // if(index != MAX_MODULES) {
  //   // log_info("Module '%s'(pid = %d), executed", ModuleList[index] -> name, ModuleList[index] -> pid);
  //   ModuleList[index] -> last_execution_time = time;
  //   ModuleList[index] -> running = true;
  //   ModuleList[index] -> loop(time);
  //   ModuleList[index] -> running = false;
  // }
}
void setup() {
#ifdef ARDUINO
  Serial.begin(9600);
  while (!Serial);
#endif

#ifdef LOG_USE_COLOR
  log_info("Serial connection has established (color enabled)");
#else
  log_info("Serial connection has established (color disabled)");
#endif

  init_dispatch();

  // ! disabled prempetive scheduler
  // if (ITimer.attachInterrupt(SCHEDULER_FREQ, schedulerIRQ)) {
  //   log_info("Starting ITimer OK, millis() = %lu", millis());
  // }
  // else {
  //   log_error("Can't set ITimer. Select another freq. or timer");
  //   panic();
  // }

  // ! using non-prempetive scheduler
  while(true) {
    dispatch();
  }
}

// void schedulerIRQ(uint alarm_num) {
//   TIMER_ISR_START(alarm_num);
//   // ! do not use Serial related functions in here
//   ///////////////////////////////////////////////////////////
//   unsigned long time = millis();
//
//   for(int i = 0; i < MAX_MODULES; i++) {
//     if(
//       ((time - ModuleList[i] -> last_execution_time) >= ModuleList[i] -> interval)
//       && (RunningModuleList[RunningModuleCount] > ModuleList[i] -> loop_priority)
//       && (!ModuleList[i] -> running)  
//     ) {
//       ModuleList[i] -> last_execution_time = time;
//       ModuleList[i] -> running = true;
//       RunningModuleCount++;
//
//       // log_info("Module '%s'(pid = %d), preemptied previous module", ModuleList[i] -> name, ModuleList[i] -> pid);
//       RunningModuleList[RunningModuleCount] = ModuleList[i] -> loop_priority;
//       ModuleList[i] -> loop(time);
//
//       ModuleList[i] -> running = false;
//       RunningModuleList[RunningModuleCount] = TASK_PRIORITY_IDLE;
//       RunningModuleCount--;
//     }
//   }
//   ////////////////////////////////////////////////////////////
//   TIMER_ISR_END(alarm_num);
// }