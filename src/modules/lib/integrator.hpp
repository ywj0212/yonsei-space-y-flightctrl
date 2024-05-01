#ifndef __SPACE_Y_LIB_INTEG__
#define __SPACE_Y_LIB_INTEG__

#include <type_traits>

template <class T, typename std::enable_if<std::is_floating_point<T>::value, int>::type = 0>
class Integrator {
private:
    T I;
    unsigned long lastExecutionTime;

public:
    Integrator() : I(0), previousTime(0) {}

    void reset() {
        currentValue = 0;
        previousTime = millis();
    }

    float integrate(float value) {
        unsigned long currentTime = millis();
        unsigned long deltaTime = currentTime - previousTime;
        previousTime = currentTime;
        
        currentValue += value * (deltaTime / 1000.0);
        return currentValue;
    }

    float getValue() {
        return currentValue;
    }
};
// hasher.

#endif