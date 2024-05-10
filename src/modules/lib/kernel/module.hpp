#ifndef __SPACE_Y_KERNEL_MODULE__
#define __SPACE_Y_KERNEL_MODULE__

#include "kernel.hpp"

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

  Module(const char* name);
  virtual bool init(unsigned long) = 0;
  virtual bool loop(unsigned long) = 0;
};

#endif