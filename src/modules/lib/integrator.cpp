#include <Arduino.h>
#include "integrator.hpp"

template struct Integrator<float>;
template struct Integrator<double>;

template <> Integrator<float>::Integrator()  : I(0), last_time(0) {}
template <> Integrator<double>::Integrator() : I(0), last_time(0) {}

template <> void Integrator<float>::reset() {
  I = 0;
  last_time = micros();
}
template <> void Integrator<double>::reset() {
  I = 0;
  last_time = micros();
}

template <> double Integrator<double>::integrate(double value) {
  unsigned long current_time = micros();
  unsigned long delta_time = current_time - last_time;
  last_time = current_time;
  
  I += value * (delta_time / 1000000.0);
  return I;
}
template <> float Integrator<float>::integrate(float value) {
  unsigned long current_time = micros();
  unsigned long delta_time = current_time - last_time;
  last_time = current_time;
  
  I += value * (delta_time / 1000000.0);
  return I;
}