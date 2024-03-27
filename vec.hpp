#ifndef __SPACE_Y_MATHLIB_VEC__
#define __SPACE_Y_MATHLIB_VEC__

#include "tuple.hpp"
#include "swizzling_decl.hpp"
#include "swizzling_shorthand.hpp"

// * bvecn 들에게 hamming distance 제공
// ? 다른 애들한테도 hamming distance 제공
// ? bvecn을 제외하고 다른 애들에게 non-euclidian distance 제공

struct bvec2;
struct ivec2;
struct fvec2;
struct dvec2;
struct bvec3;
struct ivec3;
struct fvec3;
struct dvec3;
struct bvec4;
struct ivec4;
struct fvec4;
struct dvec4;
struct quaternion;
struct dQuaternion;
struct eulerAngle;
struct dEulerAngle;

typedef fvec2 vec2;
typedef fvec3 vec3;
typedef fvec4 vec4;

// Boolean 2D Vector `(bool x, y)`
struct bvec2 {
  bool x;
  bool y;

  bvec2();
  bvec2(bool _identity);
  bvec2(bool _x, bool _y);
  bvec2(__b_tuple_2 _t);

  bvec2 operator=(const bvec2 &ref);

  bvec2 operator&=(const bvec2 &ref);
  bvec2 operator|=(const bvec2 &ref);
  bvec2 operator^=(const bvec2 &ref);

  bvec2 operator&(const bvec2 &ref) const;
  bvec2 operator|(const bvec2 &ref) const;
  bvec2 operator^(const bvec2 &ref) const;

  bvec2 operator~() const;
  
  bool operator==(const bvec2 &ref) const;
  bool operator!=(const bvec2 &ref) const;

  operator __b_tuple_2() const;

  operator ivec2() const;
  operator fvec2() const;
  operator dvec2() const;

  __VEC2_SWIZZLE_DECL(b);
};
// Boolean 3D Vector `(bool x, y, z)`
struct bvec3 {
  bool x;
  bool y;
  bool z;

  bvec3();
  bvec3(bool _identity);
  bvec3(bool _x, bool _y, bool _z);
  bvec3(__b_tuple_3 _t);
  
  bvec3 operator=(const bvec3 &ref);

  bvec3 operator&=(const bvec3 &ref);
  bvec3 operator|=(const bvec3 &ref);
  bvec3 operator^=(const bvec3 &ref);

  bvec3 operator&(const bvec3 &ref) const;
  bvec3 operator|(const bvec3 &ref) const;
  bvec3 operator^(const bvec3 &ref) const;

  bvec3 operator~() const;

  bool operator==(const bvec3 &ref) const;
  bool operator!=(const bvec3 &ref) const;

  operator __b_tuple_3() const;

  operator ivec3() const;
  operator fvec3() const;
  operator dvec3() const;

  __VEC3_SWIZZLE_DECL(b);
};
// Boolean 4D Vector `(bool x, y, z, w)`
struct bvec4 {
  bool x;
  bool y;
  bool z;
  bool w;

  bvec4();
  bvec4(bool _identity);
  bvec4(bool _x, bool _y, bool _z, bool _w);
  bvec4(__b_tuple_4 _t);

  bvec4 operator=(const bvec4 &ref);

  bvec4 operator&=(const bvec4 &ref);
  bvec4 operator|=(const bvec4 &ref);
  bvec4 operator^=(const bvec4 &ref);

  bvec4 operator&(const bvec4 &ref) const;
  bvec4 operator|(const bvec4 &ref) const;
  bvec4 operator^(const bvec4 &ref) const;

  bvec4 operator~() const;

  bool operator==(const bvec4 &ref) const;
  bool operator!=(const bvec4 &ref) const;

  operator __b_tuple_4() const;

  operator ivec4() const;
  operator fvec4() const;
  operator dvec4() const;

  __VEC4_SWIZZLE_DECL(b);
};

// Integer 2D Vector `(int x, y)`
struct ivec2 {
  int x;
  int y;

  ivec2();
  ivec2(int _identity);
  ivec2(int _x, int _y);
  ivec2(__i_tuple_2 _t);

  float len() const;
  double dlen() const;
  fvec2 normalized() const;
  dvec2 dnormalized() const;
  
  ivec2 operator=(const ivec2 &ref);

  ivec2 operator+=(const ivec2 &ref);
  ivec2 operator-=(const ivec2 &ref);
  ivec2 operator*=(const ivec2 &ref);
  ivec2 operator/=(const ivec2 &ref);
  ivec2 operator%=(const ivec2 &ref);
  ivec2 operator*=(const int scalar);
  ivec2 operator/=(const int scalar);
  ivec2 operator%=(const int mod);

  ivec2 operator+(const ivec2 &ref) const;
  ivec2 operator-(const ivec2 &ref) const;
  ivec2 operator*(const ivec2 &ref) const;
  ivec2 operator/(const ivec2 &ref) const;
  ivec2 operator%(const ivec2 &ref) const;
  ivec2 operator*(const int scalar) const;
  ivec2 operator/(const int scalar) const;
  ivec2 operator%(const int mod) const;

  ivec2 operator+() const;
  ivec2 operator-() const;
  
  bool operator==(const ivec2 &ref) const;
  bool operator!=(const ivec2 &ref) const;

  operator __i_tuple_2() const;

  operator bvec2() const;
  operator fvec2() const;
  operator dvec2() const;

  const static ivec2 up;
  const static ivec2 down;
  const static ivec2 left;
  const static ivec2 right;
  const static ivec2 zero;
  const static ivec2 one;

  const static ivec2 e1;
  const static ivec2 e2;

  __VEC2_SWIZZLE_DECL(i);
};
ivec2 operator*(const int scalar, const ivec2 &ref);
ivec2 operator/(const int scalar, const ivec2 &ref);
// Integer 3D Vector `(int x, y, z)`
struct ivec3 {
  int x;
  int y;
  int z;

  ivec3();
  ivec3(int _identity);
  ivec3(int _x, int _y, int _z);  
  ivec3(__i_tuple_3 _t);

  float len() const;
  double dlen() const;
  fvec3 normalized() const;
  dvec3 dnormalized() const;

  ivec3 operator=(const ivec3 &ref);

  ivec3 operator+=(const ivec3 &ref);
  ivec3 operator-=(const ivec3 &ref);
  ivec3 operator*=(const ivec3 &ref);
  ivec3 operator/=(const ivec3 &ref);
  ivec3 operator%=(const ivec3 &ref);
  ivec3 operator*=(const int scalar);
  ivec3 operator/=(const int scalar);
  ivec3 operator%=(const int mod);

  ivec3 operator+(const ivec3 &ref) const;
  ivec3 operator-(const ivec3 &ref) const;
  ivec3 operator*(const ivec3 &ref) const;
  ivec3 operator/(const ivec3 &ref) const;
  ivec3 operator%(const ivec3 &ref) const;
  ivec3 operator*(const int scalar) const;
  ivec3 operator/(const int scalar) const;
  ivec3 operator%(const int mod) const;

  ivec3 operator+() const;
  ivec3 operator-() const;
  
  bool operator==(const ivec3 &ref) const;
  bool operator!=(const ivec3 &ref) const;

  operator __i_tuple_3() const;

  operator bvec3() const;
  operator fvec3() const;
  operator dvec3() const;

  const static ivec3 up;
  const static ivec3 down;
  const static ivec3 left;
  const static ivec3 right;
  const static ivec3 back;
  const static ivec3 forward;
  const static ivec3 zero;
  const static ivec3 one;

  const static ivec3 e1;
  const static ivec3 e2;
  const static ivec3 e3;

  __VEC3_SWIZZLE_DECL(i);
};
ivec3 operator*(const int scalar, const ivec3 &ref);
ivec3 operator/(const int scalar, const ivec3 &ref);
// Integer 4D Vector `(bool x, y, z, w)`
struct ivec4 {
  int x;
  int y;
  int z;
  int w;

  ivec4();
  ivec4(int _identity);
  ivec4(int _x, int _y, int _z, int _w);
  ivec4(__i_tuple_4 _t);

  float len() const;
  double dlen() const;
  fvec4 normalized() const;
  dvec4 dnormalized() const;

  ivec4 operator=(const ivec4 &ref);

  ivec4 operator+=(const ivec4 &ref);
  ivec4 operator-=(const ivec4 &ref);
  ivec4 operator*=(const ivec4 &ref);
  ivec4 operator/=(const ivec4 &ref);
  ivec4 operator%=(const ivec4 &ref);
  ivec4 operator*=(const int scalar);
  ivec4 operator/=(const int scalar);
  ivec4 operator%=(const int mod);

  ivec4 operator+(const ivec4 &ref) const;
  ivec4 operator-(const ivec4 &ref) const;
  ivec4 operator*(const ivec4 &ref) const;
  ivec4 operator/(const ivec4 &ref) const;
  ivec4 operator%(const ivec4 &ref) const;
  ivec4 operator*(const int scalar) const;
  ivec4 operator/(const int scalar) const;
  ivec4 operator%(const int mod) const;

  ivec4 operator+() const;
  ivec4 operator-() const;
  
  bool operator==(const ivec4 &ref) const;
  bool operator!=(const ivec4 &ref) const;

  operator __i_tuple_4() const;

  operator bvec4() const;
  operator fvec4() const;
  operator dvec4() const;

  const static ivec4 e1;
  const static ivec4 e2;
  const static ivec4 e3;
  const static ivec4 e4;

  __VEC4_SWIZZLE_DECL(i);
};
ivec4 operator*(const int scalar, const ivec4 &ref);
ivec4 operator/(const int scalar, const ivec4 &ref);

// Float 2D Vector `(float x, y)`
struct fvec2 {
  float x;
  float y;

  fvec2();
  fvec2(float _identity);
  fvec2(float _x, float _y);
  fvec2(__f_tuple_2 _t);

  float len() const;
  double dlen() const;
  fvec2 normalized() const;
  dvec2 dnormalized() const;
  
  fvec2 operator=(const fvec2 &ref);

  fvec2 operator+=(const fvec2 &ref);
  fvec2 operator-=(const fvec2 &ref);
  fvec2 operator*=(const fvec2 &ref);
  fvec2 operator/=(const fvec2 &ref);
  fvec2 operator*=(const float scalar);
  fvec2 operator/=(const float scalar);

  fvec2 operator+(const fvec2 &ref) const;
  fvec2 operator-(const fvec2 &ref) const;
  fvec2 operator*(const fvec2 &ref) const;
  fvec2 operator/(const fvec2 &ref) const;
  fvec2 operator*(const float scalar) const;
  fvec2 operator/(const float scalar) const;

  fvec2 operator+() const;
  fvec2 operator-() const;
  
  bool operator==(const fvec2 &ref) const;
  bool operator!=(const fvec2 &ref) const;

  operator __f_tuple_2() const;

  operator bvec2() const;
  operator ivec2() const;
  operator dvec2() const;

  const static fvec2 up;
  const static fvec2 down;
  const static fvec2 left;
  const static fvec2 right;
  const static fvec2 zero;
  const static fvec2 one;

  const static fvec2 e1;
  const static fvec2 e2;

  __VEC2_SWIZZLE_DECL(f);
};
fvec2 operator*(const float scalar, const fvec2 &ref);
fvec2 operator/(const float scalar, const fvec2 &ref);
// Float 3D Vector `(float x, y, z)`
struct fvec3 {
  float x;
  float y;
  float z;
  
  fvec3();
  fvec3(float _identity);
  fvec3(float _x, float _y, float _z);
  fvec3(__f_tuple_3 _t);

  float len() const;
  double dlen() const;
  fvec3 normalized() const;
  dvec3 dnormalized() const;

  fvec3 operator=(const fvec3 &ref);

  fvec3 operator+=(const fvec3 &ref);
  fvec3 operator-=(const fvec3 &ref);
  fvec3 operator*=(const fvec3 &ref);
  fvec3 operator/=(const fvec3 &ref);
  fvec3 operator*=(const float scalar);
  fvec3 operator/=(const float scalar);

  fvec3 operator+(const fvec3 &ref) const;
  fvec3 operator-(const fvec3 &ref) const;
  fvec3 operator*(const fvec3 &ref) const;
  fvec3 operator/(const fvec3 &ref) const;
  fvec3 operator*(const float scalar) const;
  fvec3 operator/(const float scalar) const;

  fvec3 operator+() const;
  fvec3 operator-() const;
  
  bool operator==(const fvec3 &ref) const;
  bool operator!=(const fvec3 &ref) const;

  operator __f_tuple_3() const;

  operator bvec3() const;
  operator ivec3() const;
  operator dvec3() const;

  const static fvec3 up;
  const static fvec3 down;
  const static fvec3 left;
  const static fvec3 right;
  const static fvec3 back;
  const static fvec3 forward;
  const static fvec3 zero;
  const static fvec3 one;

  const static fvec3 e1;
  const static fvec3 e2;
  const static fvec3 e3;

  __VEC3_SWIZZLE_DECL(f);
};
fvec3 operator*(const float scalar, const fvec3 &ref);
fvec3 operator/(const float scalar, const fvec3 &ref);
// Float 4D Vector `(float x, y, z, w)`
struct fvec4 {
  float x;
  float y;
  float z;
  float w;

  fvec4();
  fvec4(float _identity);
  fvec4(float _x, float _y, float _z, float _w);
  fvec4(__f_tuple_4 _t);

  float len() const;
  double dlen() const;
  fvec4 normalized() const;
  dvec4 dnormalized() const;

  fvec4 operator=(const fvec4 &ref);

  fvec4 operator+=(const fvec4 &ref);
  fvec4 operator-=(const fvec4 &ref);
  fvec4 operator*=(const fvec4 &ref);
  fvec4 operator/=(const fvec4 &ref);
  fvec4 operator*=(const float scalar);
  fvec4 operator/=(const float scalar);

  fvec4 operator+(const fvec4 &ref) const;
  fvec4 operator-(const fvec4 &ref) const;
  fvec4 operator*(const fvec4 &ref) const;
  fvec4 operator/(const fvec4 &ref) const;
  fvec4 operator*(const float scalar) const;
  fvec4 operator/(const float scalar) const;

  fvec4 operator+() const;
  fvec4 operator-() const;
  
  bool operator==(const fvec4 &ref) const;
  bool operator!=(const fvec4 &ref) const;

  operator __f_tuple_4() const;

  operator bvec4() const;
  operator ivec4() const;
  operator dvec4() const;

  const static fvec4 e1;
  const static fvec4 e2;
  const static fvec4 e3;
  const static fvec4 e4;

  __VEC4_SWIZZLE_DECL(f);
};
fvec4 operator*(const float scalar, const fvec4 &ref);
fvec4 operator/(const float scalar, const fvec4 &ref);

// Double 2D Vector `(double x, y)`
struct dvec2 {
  double x;
  double y;

  dvec2();
  dvec2(double _identity);
  dvec2(double _x, double _y);
  dvec2(__d_tuple_2 _t);

  float len() const;
  double dlen() const;
  fvec2 normalized() const;
  dvec2 dnormalized() const;
  
  dvec2 operator=(const dvec2 &ref);

  dvec2 operator+=(const dvec2 &ref);
  dvec2 operator-=(const dvec2 &ref);
  dvec2 operator*=(const dvec2 &ref);
  dvec2 operator/=(const dvec2 &ref);
  dvec2 operator*=(const double scalar);
  dvec2 operator/=(const double scalar);

  dvec2 operator+(const dvec2 &ref) const;
  dvec2 operator-(const dvec2 &ref) const;
  dvec2 operator*(const dvec2 &ref) const;
  dvec2 operator/(const dvec2 &ref) const;
  dvec2 operator*(const double scalar) const;
  dvec2 operator/(const double scalar) const;

  dvec2 operator+() const;
  dvec2 operator-() const;
  
  bool operator==(const dvec2 &ref) const;
  bool operator!=(const dvec2 &ref) const;

  operator __d_tuple_2() const;

  operator bvec2() const;
  operator ivec2() const;
  operator fvec2() const;

  const static dvec2 up;
  const static dvec2 down;
  const static dvec2 left;
  const static dvec2 right;
  const static dvec2 zero;
  const static dvec2 one;

  const static dvec2 e1;
  const static dvec2 e2;

  __VEC2_SWIZZLE_DECL(d);
};
dvec2 operator*(const double scalar, const dvec2 &ref);
dvec2 operator/(const double scalar, const dvec2 &ref);
// Double 3D Vector `(double x, y, z)`
struct dvec3 {
  double x;
  double y;
  double z;

  dvec3();
  dvec3(double _identity);
  dvec3(double _x, double _y, double _z);
  dvec3(__d_tuple_3 _t);

  float len() const;
  double dlen() const;
  fvec3 normalized() const;
  dvec3 dnormalized() const;

  dvec3 operator=(const dvec3 &ref);

  dvec3 operator+=(const dvec3 &ref);
  dvec3 operator-=(const dvec3 &ref);
  dvec3 operator*=(const dvec3 &ref);
  dvec3 operator/=(const dvec3 &ref);
  dvec3 operator*=(const double scalar);
  dvec3 operator/=(const double scalar);

  dvec3 operator+(const dvec3 &ref) const;
  dvec3 operator-(const dvec3 &ref) const;
  dvec3 operator*(const dvec3 &ref) const;
  dvec3 operator/(const dvec3 &ref) const;
  dvec3 operator*(const double scalar) const;
  dvec3 operator/(const double scalar) const;

  dvec3 operator+() const;
  dvec3 operator-() const;
  
  bool operator==(const dvec3 &ref) const;
  bool operator!=(const dvec3 &ref) const;

  operator __d_tuple_3() const;

  operator bvec3() const;
  operator ivec3() const;
  operator fvec3() const;

  const static dvec3 up;
  const static dvec3 down;
  const static dvec3 left;
  const static dvec3 right;
  const static dvec3 back;
  const static dvec3 forward;
  const static dvec3 zero;
  const static dvec3 one;

  const static dvec3 e1;
  const static dvec3 e2;
  const static dvec3 e3;

  __VEC3_SWIZZLE_DECL(d);
};
dvec3 operator*(const double scalar, const dvec3 &ref);
dvec3 operator/(const double scalar, const dvec3 &ref);
// Double 4D Vector `(double x, y, z, w)`
struct dvec4 {
  double x;
  double y;
  double z;
  double w;

  dvec4();
  dvec4(double _identity);
  dvec4(double _x, double _y, double _z, double _w);
  dvec4(__d_tuple_4 _t);

  float len() const;
  double dlen() const;
  fvec4 normalized() const;
  dvec4 dnormalized() const;

  dvec4 operator=(const dvec4 &ref);

  dvec4 operator+=(const dvec4 &ref);
  dvec4 operator-=(const dvec4 &ref);
  dvec4 operator*=(const dvec4 &ref);
  dvec4 operator/=(const dvec4 &ref);
  dvec4 operator*=(const double scalar);
  dvec4 operator/=(const double scalar);

  dvec4 operator+(const dvec4 &ref) const;
  dvec4 operator-(const dvec4 &ref) const;
  dvec4 operator*(const dvec4 &ref) const;
  dvec4 operator/(const dvec4 &ref) const;
  dvec4 operator*(const double scalar) const;
  dvec4 operator/(const double scalar) const;

  dvec4 operator+() const;
  dvec4 operator-() const;
  
  bool operator==(const dvec4 &ref) const;
  bool operator!=(const dvec4 &ref) const;

  operator __d_tuple_4() const;

  operator bvec4() const;
  operator ivec4() const;
  operator fvec4() const;

  const static dvec4 e1;
  const static dvec4 e2;
  const static dvec4 e3;
  const static dvec4 e4;

  __VEC4_SWIZZLE_DECL(d);
};
dvec4 operator*(const double scalar, const dvec4 &ref);
dvec4 operator/(const double scalar, const dvec4 &ref);

// * WIP * //
// Float Quaternion (4D Vector) `(float x, y, z, w)`
struct quaternion {
  float x;
  float y;
  float z;
  float w;

  quaternion();
  quaternion(float _x, float _y, float _z, float _w);
  quaternion(eulerAngle e);

  bool operator==(const quaternion &ref);

  eulerAngle eulerAngles();

  const static quaternion identity;
  quaternion static slerp(const quaternion &a, const quaternion &b, float t);
};
// Double Quaternion (4D Vector) `(double x, y, z, w)`
struct dQuaternion {
  double x;
  double y;
  double z;
  double w;
};

// Float EulerAngle (3D Vector(radian)) `(float x, y, z)`
struct eulerAngle {
  float x;
  float y;
  float z;

  eulerAngle();
  eulerAngle(float _x, float _y, float _z);
  eulerAngle(quaternion q);

  bool operator==(const eulerAngle &ref);

  quaternion quaternions();

  eulerAngle static slerp(const eulerAngle &a, const eulerAngle &b, float t);
};
// Double EulerAngle (3D Vector(radian)) `(double x, y, z)`
struct dEulerAngle {
  double x;
  double y;
  double z;
};


int    dot(const ivec2 &a, const ivec2 &b);
float  dot(const fvec2 &a, const fvec2 &b);
double dot(const dvec2 &a, const dvec2 &b);
int    dot(const ivec3 &a, const ivec3 &b);
float  dot(const fvec3 &a, const fvec3 &b);
double dot(const dvec3 &a, const dvec3 &b);
int    dot(const ivec4 &a, const ivec4 &b);
float  dot(const fvec4 &a, const fvec4 &b);
double dot(const dvec4 &a, const dvec4 &b);

ivec3 cross(const ivec3 &a, const ivec3 &b);
fvec3 cross(const fvec3 &a, const fvec3 &b);
dvec3 cross(const dvec3 &a, const dvec3 &b);

float len(const ivec2 &ref);
float len(const fvec2 &ref);
float len(const dvec2 &ref);
float len(const ivec3 &ref);
float len(const fvec3 &ref);
float len(const dvec3 &ref);
float len(const ivec4 &ref);
float len(const fvec4 &ref);
float len(const dvec4 &ref);
double dlen(const ivec2 &ref);
double dlen(const fvec2 &ref);
double dlen(const dvec2 &ref);
double dlen(const ivec3 &ref);
double dlen(const fvec3 &ref);
double dlen(const dvec3 &ref);
double dlen(const ivec4 &ref);
double dlen(const fvec4 &ref);
double dlen(const dvec4 &ref);

#include "swizzling.hpp"

#endif