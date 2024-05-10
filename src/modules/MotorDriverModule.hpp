#ifndef __SPACE_Y_MODULE_MOTOR_DRIVER__
#define __SPACE_Y_MODULE_MOTOR_DRIVER__

#include <Arduino.h>
#include <RP2040_PWM.h>
#include "lib/kernel/kernel.hpp"
#include "lib/kernel/module.hpp"
#include "lib/mathlib/mathlib.hpp"
#include "lib/control/pid.hpp"

struct __MotorDriverModule : public Module {
  const int FL = 0; // CW
  const int FR = 0; // CCW
  const int RL = 0; // CCW
  const int RR = 0; // CW
  const float FREQ = 10000.0f;

  PIDController<float>* PID;
  RP2040_PWM* PWM_FL; // CW
  RP2040_PWM* PWM_FR; // CCW
  RP2040_PWM* PWM_RL; // CCW
  RP2040_PWM* PWM_RR; // CW
  
  float basis;
  vec2 horizontal_diff;
  float cross_diff; // positive to rotate right (CCW : CW ratio)

  float ratio(float x) {
    return (x < 0 ? 0 : (1 - 1 / (x * 0.1 + 1))) * 100;
  }
  __MotorDriverModule() : Module("Motor Driver") {

  }

  virtual bool init(unsigned long time) {
    pinMode(FL, OUTPUT);
    pinMode(FR, OUTPUT);
    pinMode(RL, OUTPUT);
    pinMode(RR, OUTPUT);

    PWM_FL = new RP2040_PWM(FL, FREQ, 0);
    PWM_FR = new RP2040_PWM(FR, FREQ, 0);
    PWM_RL = new RP2040_PWM(RL, FREQ, 0);
    PWM_RR = new RP2040_PWM(RR, FREQ, 0);

    PID = new PIDController<float>(1, 1, 1);

    if (!PWM_FL && !PWM_FR && !PWM_RL && !PWM_RR)
      return false;
    
    PWM_FL -> setPWM();
    PWM_FR -> setPWM();
    PWM_RL -> setPWM();
    PWM_RR -> setPWM();

    return true;
  }
  virtual bool loop(unsigned long time) {
    float duty_fl = ratio(basis - cross_diff + horizontal_diff.x * 0.5f - horizontal_diff.y * 0.5f);
    float duty_fr = ratio(basis + cross_diff - horizontal_diff.x * 0.5f - horizontal_diff.y * 0.5f);
    float duty_rl = ratio(basis - cross_diff + horizontal_diff.x * 0.5f + horizontal_diff.y * 0.5f);
    float duty_rr = ratio(basis + cross_diff - horizontal_diff.x * 0.5f + horizontal_diff.y * 0.5f);

    PWM_FL -> setPWM_DCPercentage_manual(FL, duty_fl);
    PWM_FR -> setPWM_DCPercentage_manual(FR, duty_fr);
    PWM_RL -> setPWM_DCPercentage_manual(RL, duty_rl);
    PWM_RR -> setPWM_DCPercentage_manual(RR, duty_rr);

    return true;
  }
};
__MotorDriverModule MotorDriverModule;

#endif