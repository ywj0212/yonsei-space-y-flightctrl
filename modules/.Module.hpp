#ifndef __SPACE_Y_MODULE_NAME__
#define __SPACE_Y_MODULE_NAME__

#include "lib/scheduler/scheduler.hpp"

struct __Module : public Module {
  // * to set name of module replate "NAME"
  __Module() : Module("NAME") {}

  // ? time: execution time in millisecond
  // * you should set `interval`, `init_priority`, `loop_priority`
  virtual bool init(unsigned long time) { return true; }
  // ? time: execution time in millisecond
  // * this function will executed every `interval` millisecond
  virtual bool loop(unsigned long time) { return true; }
};
// * uncomment the line below and set the module's variable name by replacing `ModuleTemplate`
// static __Module ModuleTemplate;

#endif