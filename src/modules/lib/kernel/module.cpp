#include <cstring>
#include "kernel.hpp"
#include "module.hpp"
#include "scheduler.hpp"

Module::Module(const char* name) : attached(false), initialized(false), running(false), init_priority(TASK_PRIORITY_IDLE), loop_priority(TASK_PRIORITY_IDLE), interval(-1), last_execution_time(-1) {
  if(strnlen(name, MAX_TASK_NAME_LEN + 1) > MAX_TASK_NAME_LEN) {
    log_error("The given name '%s' is too long! (init_priority = %d, loop_priority = %d)", name, this -> init_priority, this -> loop_priority);
    panic();
  }
  strncpy(this -> name, name, MAX_TASK_NAME_LEN);
  if(!module_attach(this)) {
    log_error("Failed to attach module '%s'(init_priority = %d, loop_priority = %d)", this -> name, this -> init_priority, this -> loop_priority);
    panic();
  }
}