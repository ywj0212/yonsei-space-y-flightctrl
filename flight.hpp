#ifndef __SPACE_Y_FLIGHT_CONTROLLER__
#define __SPACE_Y_FLIGHT_CONTROLLER__

// to use swizzle, define this
#define __SPACE_Y_VECTOR_SWIZZLE_ENABLE__

#include <Arduino.h>
#include "mathlib.hpp"

// for logger function
typedef bool (*loggerFcn)(String);

 /* 
  * the type of this flight object is a plane, a drone, a rocket.
  * how many actuator(stepping moter, servo moter, a propellant, etc) are existing, and the type of each actuator.
  * 
  * imu associated options. : LSM9DS1;
  * 
  * is the gps module exists?
  * if the gps module exists, gps associated options.
  * take care of gps error
  * 
  * is RAiDAR module exists?
  * if RAiDAR module exists, RAiDAR associated options.
  * 
  * is logging needed?
  * how log should be provided? (via function pointer(loggerFcn))
  * formatting provide
  */
class FlightCtrl {
  private:
  public:
};

#endif