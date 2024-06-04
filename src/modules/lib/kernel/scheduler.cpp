#include "scheduler.hpp"

Module** ModuleList = NULL;

static int new_pid = 0;
bool is_init_dispatched = false;

void module_list_init_check() {
  if(ModuleList == NULL) {
    ModuleList = new Module*[MAX_MODULES];
    for(int j = 0; j < MAX_MODULES; j++) {
      ModuleList[j] = NULL;
    }
  }
}
bool module_attach(Module* module) {
  module_list_init_check();
  for(int i = 0; i < MAX_MODULES; i++) {
    
    if(ModuleList[i] == NULL) {
      module -> pid = new_pid++;
      module -> attached = true;
      ModuleList[i] = module;

      if(is_init_dispatched) {
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
  module_list_init_check();
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
