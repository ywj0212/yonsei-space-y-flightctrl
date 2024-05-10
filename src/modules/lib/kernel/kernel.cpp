#include "kernel.hpp"

void panic(int err) {
  log_error("[Panic] Shutting down...");
  buzz_error(err);
  while(true);
}
