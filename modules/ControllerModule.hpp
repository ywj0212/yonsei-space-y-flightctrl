#ifndef __SPACE_Y_MODULE_NAME__
#define __SPACE_Y_MODULE_NAME__

#include "lib/scheduler/scheduler.hpp"

struct __ControllerModule : public Module {
  __ControllerModule() : Module("Controller") {}
  
  virtual bool init(unsigned long time) { return true; }
  virtual bool loop(unsigned long time) { return true; }
};
// static __ControllerModule ControllerModule;

#endif