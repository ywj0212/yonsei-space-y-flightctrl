#ifndef __SPACE_Y_MODULE_CONTROLLER__
#define __SPACE_Y_MODULE_CONTROLLER__

#include "lib/scheduler/scheduler.hpp"

struct __ControllerModule : public Module {
  __ControllerModule() : Module("Controller") {}
  
  virtual bool init(unsigned long time) { 
    interval = 10;
    return true;
  }
  virtual bool loop(unsigned long time) { return true; }
};
static __ControllerModule ControllerModule;

#endif