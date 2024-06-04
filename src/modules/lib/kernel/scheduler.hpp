#ifndef __SPACE_Y_KERNEL_SCHEDULER__
#define __SPACE_Y_KERNEL_SCHEDULER__

#ifdef ARDUINO
  #include <Arduino.h>
  // #include <MBED_RPi_Pico_TimerInterrupt.h>
  #if ( defined(ARDUINO_NANO_RP2040_CONNECT) || defined(ARDUINO_RASPBERRY_PI_PICO) || defined(ARDUINO_ADAFRUIT_FEATHER_RP2040) || \
        defined(ARDUINO_GENERIC_RP2040) ) && defined(ARDUINO_ARCH_MBED)
    #define USING_MBED_RPI_PICO_TIMER_INTERRUPT        true
  #else
    #error This code is intended to run on the MBED RASPBERRY_PI_PICO platform! Please check your Tools -> Board setting.
  #endif
#endif

#include "kernel.hpp"
#include "module.hpp"

extern Module** ModuleList;
extern bool is_init_dispatched;

bool is_init_done();
void module_list_init_check();
bool module_attach(Module* module);
bool module_detach(unsigned char pid);

#endif