#ifndef __SPACE_Y_LIB_INTEG__
#define __SPACE_Y_LIB_INTEG__

#include <type_traits>

template <class T, typename std::enable_if<std::is_floating_point<T>::value, int>::type = 0>
class Integrator {
private:
  unsigned long last_time;

public:
  T I;
  Integrator() : I(0), last_time(0) {}

  void reset() {
    I = 0;
    last_time = millis();
  }

  float integrate(float value) {
    unsigned long current_time = millis();
    unsigned long delta_time = current_time - last_time;
    last_time = current_time;
    
    I += value * (delta_time / 1000.0);
    return I;
  }
};

#endif