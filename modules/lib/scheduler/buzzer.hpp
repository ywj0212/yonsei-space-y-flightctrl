#ifndef __SPACE_Y_BUZZER__
#define __SPACE_Y_BUZZER__

#include <Arduino.h>
#define BUZZER_PIN 7

void buzz_init() {
  pinMode(BUZZER_PIN, OUTPUT);
}
void buzz_error(int err) { // DO NOT USE IN TIME PRECIOUS PROCESSES
  for(int i = 0; i < err; i++) {
    digitalWrite(BUZZER_PIN, HIGH);
    delay(120);
    digitalWrite(BUZZER_PIN, LOW);
    delay(120);
  }
}
void buzz_success() { // DO NOT USE IN TIME PRECIOUS PROCESSES
  digitalWrite(BUZZER_PIN, HIGH);
  delay(50);
  digitalWrite(BUZZER_PIN, LOW);
  delay(50);
  digitalWrite(BUZZER_PIN, HIGH);
  delay(50);
  digitalWrite(BUZZER_PIN, LOW);
}
void buzz_notificate() { // DO NOT USE IN TIME PRECIOUS PROCESSES
  digitalWrite(BUZZER_PIN, HIGH);
  delay(200);
  digitalWrite(BUZZER_PIN, LOW);
}

#endif