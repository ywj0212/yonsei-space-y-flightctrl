#ifndef __SPACE_Y_FLIGHT_CONTROLLER__
#define __SPACE_Y_FLIGHT_CONTROLLER__

#ifdef ARDUINO
#include <Arduino.h>
#endif
#include "mathlib/mathlib.hpp"

// for logger function
typedef bool (*loggerFcn)(char*);

 /* 
  * the type of this flight object is a plane, a drone, a rocket.
  * how many actuator(stepping moter, servo moter, a propellant, etc) are existing, and the type of each actuator.
  * 
    #include <Arduino_LSM6DSOX.h>
  * imu associated options. : LSM6DSOX;
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


#endif