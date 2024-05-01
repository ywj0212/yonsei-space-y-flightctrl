#ifndef __SPACE_Y_MATHLIB_QUATERNION__
#define __SPACE_Y_MATHLIB_QUATERNION__

// TODO: 필요한 기능 정리

#include "vec.hpp"
#include "swizzler.hpp"
#include "mat.hpp"

struct eulerAngles : public dvec3 {  // roll(x), pitch(y), yaw(z)
};
struct quaternion : public dvec4 {
  quaternion(double w, double x, double y , double z) : dvec4(x, y, z, w) {}
  quaternion(double roll, double pitch, double yaw) { // roll(x), pitch(y), yaw(z)
    double cr = cos(roll * 0.5);
    double sr = sin(roll * 0.5);
    double cp = cos(pitch * 0.5);
    double sp = sin(pitch * 0.5);
    double cy = cos(yaw * 0.5);
    double sy = sin(yaw * 0.5);

    w = cr * cp * cy + sr * sp * sy;
    x = sr * cp * cy - cr * sp * sy;
    y = cr * sp * cy + sr * cp * sy;
    z = cr * cp * sy - sr * sp * cy;
  }
  double norm() { return len(*this); }
};

eulerAngles toEulerAngles(quaternion q) {
  eulerAngles angles;
  // roll (x-axis rotation)
  double sinr_cosp = 2 * (q.w * q.x + q.y * q.z);
  double cosr_cosp = 1 - 2 * (q.x * q.x + q.y * q.y);
  angles.x = atan2(sinr_cosp, cosr_cosp);

  // pitch (y-axis rotation)
  double sinp = sqrt(1 + 2 * (q.w * q.y - q.x * q.z));
  double cosp = sqrt(1 - 2 * (q.w * q.y - q.x * q.z));
  angles.y = 2 * atan2(sinp, cosp) - PI / 2;

  // yaw (z-axis rotation)
  double siny_cosp = 2 * (q.w * q.z + q.x * q.y);
  double cosy_cosp = 1 - 2 * (q.y * q.y + q.z * q.z);
  angles.z = atan2(siny_cosp, cosy_cosp);

  return angles;
}
dmat3x3 eulerAnglesToRotMat(eulerAngles angles) {
  return dmat3x3(
    (angles.z) * cos(angles.y),         cos(angles.z) * sin(angles.y) * sin(angles.x) - sin(angles.z) * cos(angles.x),          cos(angles.z) * sin(angles.y) * cos(angles.x) + sin(angles.z) * sin(angles.x),
    sin(angles.z) * cos(angles.y),      sin(angles.z) * sin(angles.y) * sin(angles.x) + cos(angles.z) * cos(angles.x),          sin(angles.z) * sin(angles.y) * cos(angles.x) - cos(angles.z) * sin(angles.x),
    -sin(angles.y),                     cos(angles.y) * sin(angles.x),                                                          cos(angles.y) * cos(angles.x)
  );
}
dmat3x3 quaternionToRotMat(quaternion q) {
  return dmat3x3(
    2 * (q.w * q.w + q.x * q.x) - 1,    2 * (q.x * q.y - q.w * q.z),        2 * (q.x * q.z + q.w * q.y),
    2 * (q.x * q.y + q.w * q.z),        2 * (q.w * q.w + q.y * q.y) - 1,    2 * (q.y * q.z - q.w * q.x),
    2 * (q.x * q.z - q.w * q.y),        2 * (q.y * q.z + q.w * q.x),        2 * (q.w * q.w + q.z * q.z) - 1
  );
}
// quaternion slerp(quaternion &a, quaternion &b, double t);
// dvec3 rotate(dvec3 p, quaternion r) {
//   quaternion _r(r.w, -r.x, -r.y, -r.z);  
// }
#endif