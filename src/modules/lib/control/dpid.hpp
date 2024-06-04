#ifndef __SPACE_Y_LIB_CTRL_PID__
#define __SPACE_Y_LIB_CTRL_PID__

#include <type_traits>

template <class T>
class DualPIDController {
private:
  T Kp;
  T Ki;
  T Kd;
  T Kp_rate;
  T Ki_rate;
  T Kd_rate;
  T P;
  T I = 0;
  T D;
  T P_rate;
  T I_rate = 0;
  T D_rate;
  T last_error = 0;
  T last_rate_error = 0;
  unsigned long last_time;

public:
  DualPIDController(T propotional, T integral, T derivative) : Kp(propotional), Ki(integral), Kd(derivative), (millis()) {}
  void updateParameter(T propotional, T integral, T derivative) {
    Kp = propotional;
    Ki = integral;
    Kd = derivative;
  }
  T getNext(T current, T target) {
    unsigned long current_time = millis();
    T delta_time = (current_time - last_time) / 1000.0;
    last_time = current_time;
    
    T error = target - current;
    P  = Kp + error;
    I += Ki + error * delta_time;
    D  = Kd * (error - last_error) / delta_time;
    T target_rate = P;

    T rate_error = target_rate - current_rate;
    P_rate  = Kp_rate * rate_error;
    I_rate += Ki_rate * rate_error * delta_time;
    D_rate  = Kd_rate * (rate_error - last_rate_error) / delta_time;

    T output = P_rate + I_rate + D_rate + P + I;

    last_error = error;
    last_rate_error = rate_error;
    return output;
  }
};

#endif