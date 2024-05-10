#ifndef __SPACE_Y_KERNEL_BUZZER__
#define __SPACE_Y_KERNEL_BUZZER__

#ifdef ARDUINO
#include <Arduino.h>
#define BUZZER_PIN 7

void buzz_init() {
  pinMode(LEDR, OUTPUT);
  pinMode(LEDG, OUTPUT);
  pinMode(LEDB, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  digitalWrite(LEDB, HIGH);
}
void buzz_error(int err) { // DO NOT USE IN TIME PRECIOUS PROCESSES
  for(int i = 0; i < err; i++) {
    digitalWrite(BUZZER_PIN, HIGH);
    digitalWrite(LEDR, HIGH);
    digitalWrite(LEDG, LOW);
    digitalWrite(LEDB, LOW);
    delay(120);
    digitalWrite(BUZZER_PIN, LOW);
    digitalWrite(LEDR, LOW);
    delay(120);
    digitalWrite(LEDB, HIGH);
  }
}
void buzz_success() { // DO NOT USE IN TIME PRECIOUS PROCESSES
  digitalWrite(BUZZER_PIN, HIGH);
  digitalWrite(LEDR, LOW);
  digitalWrite(LEDG, HIGH);
  digitalWrite(LEDB, LOW);
  delay(50);
  digitalWrite(BUZZER_PIN, LOW);
  digitalWrite(LEDG, LOW);
  delay(50);
  digitalWrite(BUZZER_PIN, HIGH);
  digitalWrite(LEDG, HIGH);
  delay(50);
  digitalWrite(BUZZER_PIN, LOW);
  digitalWrite(LEDG, LOW);
  digitalWrite(LEDB, HIGH);
}
void buzz_notificate() { // DO NOT USE IN TIME PRECIOUS PROCESSES
  digitalWrite(BUZZER_PIN, HIGH);
  digitalWrite(LEDR, HIGH);
  digitalWrite(LEDG, HIGH);
  digitalWrite(LEDB, LOW);
  delay(200);
  digitalWrite(BUZZER_PIN, LOW);
  digitalWrite(LEDR, LOW);
  digitalWrite(LEDG, LOW);
  digitalWrite(LEDB, HIGH);
}
#else
void buzz_init() {}
void buzz_error(int) {}
void buzz_success() {}
void buzz_notificate() {}
#endif

#endif