#include "scheduler.hpp"

Module* ModuleList[MAX_MODULES] = {NULL, };

static int new_pid = 0;
static bool is_init_dispatched = false;

bool is_init_done() { return is_init_dispatched; }
void init_done() { is_init_dispatched = true; }
bool module_attach(Module* module) {
  for(int i = 0; i < MAX_MODULES; i++) {
    if(ModuleList[i] == NULL) {
      module -> pid = new_pid++;
      module -> attached = true;
      ModuleList[i] = module;

      if(is_init_done()) {
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
