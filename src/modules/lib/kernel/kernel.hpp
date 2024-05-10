#ifndef __SPACE_Y_KERNEL__
#define __SPACE_Y_KERNEL__

#define MAX_MODULES 16
#define MAX_TASK_NAME_LEN 16
#define TASK_PRIORITY_IDLE 255
#define TASK_PRIORITY_LOW  200
#define TASK_PRIORITY_HIGH 100
#define TASK_PRIORITY_LIVE 0

#include "../logger.hpp"
#include "buzzer.hpp"
#define PANIC_BUZZ_DEFAULT 255
void panic(int err = PANIC_BUZZ_DEFAULT);

#endif