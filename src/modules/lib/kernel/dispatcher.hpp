#ifndef __SPACE_Y_KERNEL_DISPATCHER__
#define __SPACE_Y_KERNEL_DISPATCHER__

#include "kernel.hpp"
#include "scheduler.hpp"

void init_routine();
void setup();
void scheduler();

// #define SCHEDULER_FREQ 1000 // run loop routine in every millisecond
// unsigned char RunningModuleList[MAX_MODULES] = {TASK_PRIORITY_IDLE,};
// unsigned char RunningModuleCount = 0;
// MBED_RPI_PICO_Timer ITimer(0);
// void schedulerIRQ(uint);
#endif