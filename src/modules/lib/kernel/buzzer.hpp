#ifndef __SPACE_Y_KERNEL_BUZZER__
#define __SPACE_Y_KERNEL_BUZZER__

#ifdef ARDUINO
  #include <Arduino.h>
  #define BUZZER_PIN 7
#endif

void buzz_init();
void buzz_error(int err);
void buzz_success();
void buzz_notificate();

#endif