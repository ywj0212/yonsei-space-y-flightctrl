#ifndef __SPACE_Y_LIB_INTEG__
#define __SPACE_Y_LIB_INTEG__

#include <type_traits>

template <class T>
class Integrator {
public:
  T I;
  Integrator();
  void reset();
  T integrate(T value);
  
private:
  unsigned long last_time;
};

#endif