#ifndef __SPACE_Y_LIB_CTRL_PID__
#define __SPACE_Y_LIB_CTRL_PID__

#include <type_traits>

template <class T, typename std::enable_if<std::is_floating_point<T>::value, int>::type = 0>
class PIDController {
private:
  T setpoint;
  T currentValue;
  T Kp;
  T Ki;
  T Kd;
  T error;
  T last_error = 0;
  T P;
  T I = 0;
  T D;
  unsigned long last_time;

public:
  PIDController(T propotional, T integral, T derivative) : last_time(millis()) {}
  T getNext(T current, T target) {
    unsigned long current_time = millis();
    T delta_time = (current_time - last_time) / 1000.0;
    last_time = current_time;
    
    error = target - current;
    P = Kp * error;
    I += Ki * error * delta_time;
    D = Kd * (error - last_error) / delta_time;
    T output = P + I + D;

    last_error = error;
    return output;
  }
};

#endif