#ifndef __SPACE_Y_MODULE_IMU__
#define __SPACE_Y_MODULE_IMU__

#include <Arduino_LSM6DSOX.h>
#include "lib/mathlib/mathlib.hpp"
#include "lib/kernel/kernel.hpp"

struct __IMUModule : public Module {
  vec3 acc, gyro;
  float temperature;

  __IMUModule() : Module("IMU") {}
  virtual bool init(unsigned long) {
    IMU.begin();
    float rate = max(IMU.accelerationSampleRate(), IMU.gyroscopeSampleRate()); // 104.0F
    interval = ceil(1000 / rate);
    
    log_info("[IMU] Sample rate: %.3f", rate);
    return true;
  }
  virtual bool loop(unsigned long) {
    if (IMU.accelerationAvailable()) IMU.readAcceleration(acc.x, acc.y, acc.z);
    else log_warn("[IMU] Fail to read accelerometer data");
    if (IMU.gyroscopeAvailable()) IMU.readGyroscope(gyro.x, gyro.y, gyro.z);
    else log_warn("[IMU] Fail to read gyroscope data");
    IMU.readTemperatureFloat(temperature);
    return true;
  }
};
__IMUModule IMUModule;

#endif