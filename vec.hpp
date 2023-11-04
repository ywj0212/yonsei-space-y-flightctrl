#ifndef __SPACE_Y_MATHLIB_VEC__
#define __SPACE_Y_MATHLIB_VEC__

#include "tuple.hpp"
#include "swizzling.hpp"
#include "swizzling_shorthand.hpp"

struct bvec2;
struct ivec2;
struct vec2;
struct dvec2;
struct bvec3;
struct ivec3;
struct vec3;
struct dvec3;
struct bvec4;
struct ivec4;
struct vec4;
struct dvec4;
struct quaternion;
struct dQuaternion;
struct eulerAngle;
struct dEulerAngle;

// Boolean 2D Vector `(bool x, y)`
struct bvec2 {
  bool x;
  bool y;

  bvec2();
  bvec2(bool _identity);
  bvec2(bool _x, bool _y);

  bvec2(ivec2 _ivec2);
  bvec2(vec2  _vec2);
  bvec2(dvec2 _dvec2);

  bvec2(bvec3 _bvec3);
  bvec2(ivec3 _ivec3);
  bvec2(vec3  _vec3);
  bvec2(dvec3 _dvec3);
  
  bvec2(bvec4 _bvec4);
  bvec2(ivec4 _ivec4);
  bvec2(vec4  _vec4);
  bvec2(dvec4 _dvec4);

  bvec2(__b_tuple_2 _t);
  bvec2(__i_tuple_2 _t);
  bvec2(__f_tuple_2 _t);
  bvec2(__d_tuple_2 _t);
  bvec2(__b_tuple_3 _t);
  bvec2(__i_tuple_3 _t);
  bvec2(__f_tuple_3 _t);
  bvec2(__d_tuple_3 _t);
  bvec2(__b_tuple_4 _t);
  bvec2(__i_tuple_4 _t);
  bvec2(__f_tuple_4 _t);
  bvec2(__d_tuple_4 _t);

  bvec2 operator&(const bvec2 &ref);
  bvec2 operator|(const bvec2 &ref);

  bool operator==(const bvec2 &ref);
  bool operator!=(const bvec2 &ref);

  bvec2& operator=(const bvec2 &ref);
  bvec2& operator=(const ivec2 &ref);
  bvec2& operator=(const vec2  &ref);
  bvec2& operator=(const dvec2 &ref);
  bvec2& operator=(const bvec3 &ref);
  bvec2& operator=(const ivec3 &ref);
  bvec2& operator=(const vec3  &ref);
  bvec2& operator=(const dvec3 &ref);
  bvec2& operator=(const bvec4 &ref);
  bvec2& operator=(const ivec4 &ref);
  bvec2& operator=(const vec4  &ref);
  bvec2& operator=(const dvec4 &ref);
  bvec2& operator=(const __b_tuple_2 &ref);
  bvec2& operator=(const __i_tuple_2 &ref);
  bvec2& operator=(const __f_tuple_2 &ref);
  bvec2& operator=(const __d_tuple_2 &ref);
  bvec2& operator=(const __b_tuple_3 &ref);
  bvec2& operator=(const __i_tuple_3 &ref);
  bvec2& operator=(const __f_tuple_3 &ref);
  bvec2& operator=(const __d_tuple_3 &ref);
  bvec2& operator=(const __b_tuple_4 &ref);
  bvec2& operator=(const __i_tuple_4 &ref);
  bvec2& operator=(const __f_tuple_4 &ref);
  bvec2& operator=(const __d_tuple_4 &ref);

  operator ivec2() const;
  operator vec2()  const;
  operator dvec2() const;

  __VEC2_SWIZZLE(b);
};
// Integer 2D Vector `(int x, y)`
struct ivec2 {
  int x;
  int y;

  ivec2();
  ivec2(int _identity);
  ivec2(int _x, int _y);
  
  ivec2(bvec2 _bvec2);
  ivec2(vec2  _vec2);
  ivec2(dvec2 _dvec2);
  
  ivec2(bvec3 _bvec3);
  ivec2(ivec3 _ivec3);
  ivec2(vec3  _vec3);
  ivec2(dvec3 _dvec3);
  
  ivec2(bvec4 _bvec4);
  ivec2(ivec4 _ivec4);
  ivec2(vec4  _vec4);
  ivec2(dvec4 _dvec4);

  ivec2(__b_tuple_2 _t);
  ivec2(__i_tuple_2 _t);
  ivec2(__f_tuple_2 _t);
  ivec2(__d_tuple_2 _t);
  ivec2(__b_tuple_3 _t);
  ivec2(__i_tuple_3 _t);
  ivec2(__f_tuple_3 _t);
  ivec2(__d_tuple_3 _t);
  ivec2(__b_tuple_4 _t);
  ivec2(__i_tuple_4 _t);
  ivec2(__f_tuple_4 _t);
  ivec2(__d_tuple_4 _t);

  float len() const;
  double dlen() const;
  vec2 normalized() const;
  
  ivec2 operator+();
  ivec2 operator-();
  
  ivec2 operator+(const ivec2 &ref);
  ivec2 operator-(const ivec2 &ref);
  ivec2 operator*(const int scalar);
  ivec2 operator/(const int scalar);

  bool operator==(const ivec2 &ref);
  bool operator!=(const ivec2 &ref);

  ivec2& operator=(const bvec2 &ref);
  ivec2& operator=(const ivec2 &ref);
  ivec2& operator=(const vec2  &ref);
  ivec2& operator=(const dvec2 &ref);
  ivec2& operator=(const bvec3 &ref);
  ivec2& operator=(const ivec3 &ref);
  ivec2& operator=(const vec3  &ref);
  ivec2& operator=(const dvec3 &ref);
  ivec2& operator=(const bvec4 &ref);
  ivec2& operator=(const ivec4 &ref);
  ivec2& operator=(const vec4  &ref);
  ivec2& operator=(const dvec4 &ref);
  ivec2& operator=(const __b_tuple_2 &ref);
  ivec2& operator=(const __i_tuple_2 &ref);
  ivec2& operator=(const __f_tuple_2 &ref);
  ivec2& operator=(const __d_tuple_2 &ref);
  ivec2& operator=(const __b_tuple_3 &ref);
  ivec2& operator=(const __i_tuple_3 &ref);
  ivec2& operator=(const __f_tuple_3 &ref);
  ivec2& operator=(const __d_tuple_3 &ref);
  ivec2& operator=(const __b_tuple_4 &ref);
  ivec2& operator=(const __i_tuple_4 &ref);
  ivec2& operator=(const __f_tuple_4 &ref);
  ivec2& operator=(const __d_tuple_4 &ref);

  operator bvec2() const;
  operator vec2()  const;
  operator dvec2() const;

  const static ivec2 up;
  const static ivec2 down;
  const static ivec2 left;
  const static ivec2 right;
  const static ivec2 zero;
  const static ivec2 one;

  __VEC2_SWIZZLE(i);
};
ivec2 operator*(const int scalar, const ivec2 &ref);
ivec2 operator/(const int scalar, const ivec2 &ref);
// Float 2D Vector `(float x, y)`
struct vec2 {
  float x;
  float y;

  vec2();
  vec2(float _identity);
  vec2(float _x, float _y);

  vec2(bvec2 _bvec2);
  vec2(ivec2 _ivec2);
  vec2(dvec2 _dvec2);
  
  vec2(bvec3 _bvec3);
  vec2(ivec3 _ivec3);
  vec2(vec3  _vec3);
  vec2(dvec3 _dvec3);
  
  vec2(bvec4 _bvec4);
  vec2(ivec4 _ivec4);
  vec2(vec4  _vec4);
  vec2(dvec4 _dvec4);

  vec2(__b_tuple_2 _t);
  vec2(__i_tuple_2 _t);
  vec2(__f_tuple_2 _t);
  vec2(__d_tuple_2 _t);
  vec2(__b_tuple_3 _t);
  vec2(__i_tuple_3 _t);
  vec2(__f_tuple_3 _t);
  vec2(__d_tuple_3 _t);
  vec2(__b_tuple_4 _t);
  vec2(__i_tuple_4 _t);
  vec2(__f_tuple_4 _t);
  vec2(__d_tuple_4 _t);

  float len() const;
  double dlen() const;
  vec2 normalized() const;

  vec2 operator+();
  vec2 operator-();

  vec2 operator+(const vec2 &ref);
  vec2 operator-(const vec2 &ref);
  vec2 operator*(const float scalar);
  vec2 operator/(const float scalar);

  bool operator==(const vec2 &ref);
  bool operator!=(const vec2 &ref);

  vec2& operator=(const bvec2 &ref);
  vec2& operator=(const ivec2 &ref);
  vec2& operator=(const vec2  &ref);
  vec2& operator=(const dvec2 &ref);
  vec2& operator=(const bvec3 &ref);
  vec2& operator=(const ivec3 &ref);
  vec2& operator=(const vec3  &ref);
  vec2& operator=(const dvec3 &ref);
  vec2& operator=(const bvec4 &ref);
  vec2& operator=(const ivec4 &ref);
  vec2& operator=(const vec4  &ref);
  vec2& operator=(const dvec4 &ref);
  vec2& operator=(const __b_tuple_2 &ref);
  vec2& operator=(const __i_tuple_2 &ref);
  vec2& operator=(const __f_tuple_2 &ref);
  vec2& operator=(const __d_tuple_2 &ref);
  vec2& operator=(const __b_tuple_3 &ref);
  vec2& operator=(const __i_tuple_3 &ref);
  vec2& operator=(const __f_tuple_3 &ref);
  vec2& operator=(const __d_tuple_3 &ref);
  vec2& operator=(const __b_tuple_4 &ref);
  vec2& operator=(const __i_tuple_4 &ref);
  vec2& operator=(const __f_tuple_4 &ref);
  vec2& operator=(const __d_tuple_4 &ref);

  operator bvec2() const;
  operator ivec2() const;
  operator dvec2() const;

  const static vec2 up;
  const static vec2 down;
  const static vec2 left;
  const static vec2 right;
  const static vec2 zero;
  const static vec2 one;

  __VEC2_SWIZZLE(f);
};
vec2 operator*(const float scalar, const vec2 &ref);
vec2 operator/(const float scalar, const vec2 &ref);
// Double 2D Vector `(double x, y)`
struct dvec2 {
  double x;
  double y;

  dvec2();
  dvec2(double _identity);
  dvec2(double _x, double _y);

  dvec2(bvec2 _bvec2);
  dvec2(ivec2 _ivec2);
  dvec2(vec2  _vec2);
  
  dvec2(bvec3 _bvec3);
  dvec2(ivec3 _ivec3);
  dvec2(vec3  _vec3);
  dvec2(dvec3 _dvec3);
  
  dvec2(bvec4 _bvec4);
  dvec2(ivec4 _ivec4);
  dvec2(vec4  _vec4);
  dvec2(dvec4 _dvec4);
  
  dvec2(__b_tuple_2 _t);
  dvec2(__i_tuple_2 _t);
  dvec2(__f_tuple_2 _t);
  dvec2(__d_tuple_2 _t);
  dvec2(__b_tuple_3 _t);
  dvec2(__i_tuple_3 _t);
  dvec2(__f_tuple_3 _t);
  dvec2(__d_tuple_3 _t);
  dvec2(__b_tuple_4 _t);
  dvec2(__i_tuple_4 _t);
  dvec2(__f_tuple_4 _t);
  dvec2(__d_tuple_4 _t);

  float len() const;
  double dlen() const;
  dvec2 normalized() const;

  dvec2 operator+();
  dvec2 operator-();

  dvec2 operator+(const dvec2 &ref);
  dvec2 operator-(const dvec2 &ref);
  dvec2 operator*(const double scalar);
  dvec2 operator/(const double scalar);

  bool operator==(const dvec2 &ref);
  bool operator!=(const dvec2 &ref);

  dvec2& operator=(const bvec2 &ref);
  dvec2& operator=(const ivec2 &ref);
  dvec2& operator=(const vec2  &ref);
  dvec2& operator=(const dvec2 &ref);
  dvec2& operator=(const bvec3 &ref);
  dvec2& operator=(const ivec3 &ref);
  dvec2& operator=(const vec3  &ref);
  dvec2& operator=(const dvec3 &ref);
  dvec2& operator=(const bvec4 &ref);
  dvec2& operator=(const ivec4 &ref);
  dvec2& operator=(const vec4  &ref);
  dvec2& operator=(const dvec4 &ref);
  dvec2& operator=(const __b_tuple_2 &ref);
  dvec2& operator=(const __i_tuple_2 &ref);
  dvec2& operator=(const __f_tuple_2 &ref);
  dvec2& operator=(const __d_tuple_2 &ref);
  dvec2& operator=(const __b_tuple_3 &ref);
  dvec2& operator=(const __i_tuple_3 &ref);
  dvec2& operator=(const __f_tuple_3 &ref);
  dvec2& operator=(const __d_tuple_3 &ref);
  dvec2& operator=(const __b_tuple_4 &ref);
  dvec2& operator=(const __i_tuple_4 &ref);
  dvec2& operator=(const __f_tuple_4 &ref);
  dvec2& operator=(const __d_tuple_4 &ref);

  operator bvec2() const;
  operator ivec2() const;
  operator vec2()  const;

  const static dvec2 up;
  const static dvec2 down;
  const static dvec2 left;
  const static dvec2 right;
  const static dvec2 zero;
  const static dvec2 one;

  __VEC2_SWIZZLE(d);
};
dvec2 operator*(const double scalar, const dvec2 &ref);
dvec2 operator/(const double scalar, const dvec2 &ref);

// Boolean 3D Vector `(bool x, y, z)`
struct bvec3 {
  bool x;
  bool y;
  bool z;

  bvec3();
  bvec3(bool _identity);
  bvec3(bool _x, bool _y, bool _z);
  
  bvec3(ivec3 _ivec3);
  bvec3(vec3  _vec3);
  bvec3(dvec3 _dvec3);
  
  bvec3(bvec4 _bvec4);
  bvec3(ivec4 _ivec4);
  bvec3(vec4  _vec4);
  bvec3(dvec4 _dvec4);

  bvec3(__b_tuple_3 _t);
  bvec3(__i_tuple_3 _t);
  bvec3(__f_tuple_3 _t);
  bvec3(__d_tuple_3 _t);
  bvec3(__b_tuple_4 _t);
  bvec3(__i_tuple_4 _t);
  bvec3(__f_tuple_4 _t);
  bvec3(__d_tuple_4 _t);

  bvec3 operator&(const bvec2 &ref);
  bvec3 operator&(const bvec3 &ref);
  bvec3 operator|(const bvec2 &ref);
  bvec3 operator|(const bvec3 &ref);
  
  bool operator==(const bvec3 &ref);
  bool operator!=(const bvec3 &ref);

  bvec3& operator=(const bvec3 &ref);
  bvec3& operator=(const ivec3 &ref);
  bvec3& operator=(const vec3  &ref);
  bvec3& operator=(const dvec3 &ref);
  bvec3& operator=(const bvec4 &ref);
  bvec3& operator=(const ivec4 &ref);
  bvec3& operator=(const vec4  &ref);
  bvec3& operator=(const dvec4 &ref);
  bvec3& operator=(const __b_tuple_3 &ref);
  bvec3& operator=(const __i_tuple_3 &ref);
  bvec3& operator=(const __f_tuple_3 &ref);
  bvec3& operator=(const __d_tuple_3 &ref);
  bvec3& operator=(const __b_tuple_4 &ref);
  bvec3& operator=(const __i_tuple_4 &ref);
  bvec3& operator=(const __f_tuple_4 &ref);
  bvec3& operator=(const __d_tuple_4 &ref);

  operator bvec2() const;
  operator ivec2() const;
  operator vec2()  const;
  operator dvec2() const;
  operator ivec3() const;
  operator vec3()  const;
  operator dvec3() const;

  __VEC3_SWIZZLE(b);
};
// Integer 3D Vector `(int x, y, z)`
struct ivec3 {
  int x;
  int y;
  int z;

  ivec3();
  ivec3(int _identity);
  ivec3(int _x, int _y, int _z);
  
  ivec3(bvec3 _bvec3);
  ivec3(vec3  _vec3);
  ivec3(dvec3 _dvec3);
  
  ivec3(bvec4 _bvec4);
  ivec3(ivec4 _ivec4);
  ivec3(vec4  _vec4);
  ivec3(dvec4 _dvec4);

  ivec3(__b_tuple_3 _t);
  ivec3(__i_tuple_3 _t);
  ivec3(__f_tuple_3 _t);
  ivec3(__d_tuple_3 _t);
  ivec3(__b_tuple_4 _t);
  ivec3(__i_tuple_4 _t);
  ivec3(__f_tuple_4 _t);
  ivec3(__d_tuple_4 _t);

  float len() const;
  double dlen() const;
  vec3 normalized() const;

  ivec3 operator+();
  ivec3 operator-();

  ivec3 operator+(const ivec2 &ref);
  ivec3 operator+(const ivec3 &ref);
  ivec3 operator-(const ivec2 &ref);
  ivec3 operator-(const ivec3 &ref);
  ivec3 operator*(const int scalar);
  ivec3 operator/(const int scalar);

  bool operator==(const ivec3 &ref);
  bool operator!=(const ivec3 &ref);

  ivec3& operator=(const bvec3 &ref);
  ivec3& operator=(const ivec3 &ref);
  ivec3& operator=(const vec3  &ref);
  ivec3& operator=(const dvec3 &ref);
  ivec3& operator=(const bvec4 &ref);
  ivec3& operator=(const ivec4 &ref);
  ivec3& operator=(const vec4  &ref);
  ivec3& operator=(const dvec4 &ref);
  ivec3& operator=(const __b_tuple_3 &ref);
  ivec3& operator=(const __i_tuple_3 &ref);
  ivec3& operator=(const __f_tuple_3 &ref);
  ivec3& operator=(const __d_tuple_3 &ref);
  ivec3& operator=(const __b_tuple_4 &ref);
  ivec3& operator=(const __i_tuple_4 &ref);
  ivec3& operator=(const __f_tuple_4 &ref);
  ivec3& operator=(const __d_tuple_4 &ref);

  operator bvec2() const;
  operator ivec2() const;
  operator vec2()  const;
  operator dvec2() const;
  operator bvec3() const;
  operator vec3()  const;
  operator dvec3() const;

  const static ivec3 up;
  const static ivec3 down;
  const static ivec3 left;
  const static ivec3 right;
  const static ivec3 back;
  const static ivec3 forward;
  const static ivec3 zero;
  const static ivec3 one;

  __VEC3_SWIZZLE(i);
};
ivec3 operator*(const int scalar, const ivec3 &ref);
ivec3 operator/(const int scalar, const ivec3 &ref);
// Float 3D Vector `(float x, y, z)`
struct vec3 {
  float x;
  float y;
  float z;
  
  vec3();
  vec3(float _identity);
  vec3(float _x, float _y, float _z);

  vec3(bvec3 _bvec3);
  vec3(ivec3 _ivec3);
  vec3(dvec3 _dvec3);
  
  vec3(bvec4 _bvec4);
  vec3(ivec4 _ivec4);
  vec3(vec4  _vec4);
  vec3(dvec4 _dvec4);

  vec3(__b_tuple_3 _t);
  vec3(__i_tuple_3 _t);
  vec3(__f_tuple_3 _t);
  vec3(__d_tuple_3 _t);
  vec3(__b_tuple_4 _t);
  vec3(__i_tuple_4 _t);
  vec3(__f_tuple_4 _t);
  vec3(__d_tuple_4 _t);

  float len() const;
  double dlen() const;
  vec3 normalized() const;

  vec3 operator+();
  vec3 operator-();

  vec3 operator+(const vec2 &ref);
  vec3 operator+(const vec3 &ref);
  vec3 operator-(const vec2 &ref);
  vec3 operator-(const vec3 &ref);
  vec3 operator*(const float scalar);
  vec3 operator/(const float scalar);

  bool operator==(const vec3 &ref);
  bool operator!=(const vec3 &ref);

  vec3& operator=(const bvec3 &ref);
  vec3& operator=(const ivec3 &ref);
  vec3& operator=(const vec3  &ref);
  vec3& operator=(const dvec3 &ref);
  vec3& operator=(const bvec4 &ref);
  vec3& operator=(const ivec4 &ref);
  vec3& operator=(const vec4  &ref);
  vec3& operator=(const dvec4 &ref);
  vec3& operator=(const __b_tuple_3 &ref);
  vec3& operator=(const __i_tuple_3 &ref);
  vec3& operator=(const __f_tuple_3 &ref);
  vec3& operator=(const __d_tuple_3 &ref);
  vec3& operator=(const __b_tuple_4 &ref);
  vec3& operator=(const __i_tuple_4 &ref);
  vec3& operator=(const __f_tuple_4 &ref);
  vec3& operator=(const __d_tuple_4 &ref);

  operator bvec2() const;
  operator ivec2() const;
  operator vec2()  const;
  operator dvec2() const;
  operator bvec3() const;
  operator ivec3() const;
  operator dvec3() const;

  const static vec3 up;
  const static vec3 down;
  const static vec3 left;
  const static vec3 right;
  const static vec3 back;
  const static vec3 forward;
  const static vec3 zero;
  const static vec3 one;

  __VEC3_SWIZZLE(f);
};
vec3 operator*(const float scalar, const vec3 &ref);
vec3 operator/(const float scalar, const vec3 &ref);
// Double 3D Vector `(double x, y, z)`
struct dvec3 {
  double x;
  double y;
  double z;

  dvec3();
  dvec3(double _identity);
  dvec3(double _x, double _y, double _z);

  dvec3(bvec3 _bvec3);
  dvec3(ivec3 _ivec3);
  dvec3(vec3  _vec3);
  
  dvec3(bvec4 _bvec4);
  dvec3(ivec4 _ivec4);
  dvec3(vec4  _vec4);
  dvec3(dvec4 _dvec4);

  dvec3(__b_tuple_3 _t);
  dvec3(__i_tuple_3 _t);
  dvec3(__f_tuple_3 _t);
  dvec3(__d_tuple_3 _t);
  dvec3(__b_tuple_4 _t);
  dvec3(__i_tuple_4 _t);
  dvec3(__f_tuple_4 _t);
  dvec3(__d_tuple_4 _t);

  float len() const;
  double dlen() const;
  dvec3 normalized() const;

  dvec3 operator+();
  dvec3 operator-();

  dvec3 operator+(const dvec2 &ref);
  dvec3 operator+(const dvec3 &ref);
  dvec3 operator-(const dvec2 &ref);
  dvec3 operator-(const dvec3 &ref);
  dvec3 operator*(const double scalar);
  dvec3 operator/(const double scalar);

  bool operator==(const dvec3 &ref);
  bool operator!=(const dvec3 &ref);

  dvec3& operator=(const bvec3 &ref);
  dvec3& operator=(const ivec3 &ref);
  dvec3& operator=(const vec3  &ref);
  dvec3& operator=(const dvec3 &ref);
  dvec3& operator=(const bvec4 &ref);
  dvec3& operator=(const ivec4 &ref);
  dvec3& operator=(const vec4  &ref);
  dvec3& operator=(const dvec4 &ref);
  dvec3& operator=(const __b_tuple_3 &ref);
  dvec3& operator=(const __i_tuple_3 &ref);
  dvec3& operator=(const __f_tuple_3 &ref);
  dvec3& operator=(const __d_tuple_3 &ref);
  dvec3& operator=(const __b_tuple_4 &ref);
  dvec3& operator=(const __i_tuple_4 &ref);
  dvec3& operator=(const __f_tuple_4 &ref);
  dvec3& operator=(const __d_tuple_4 &ref);

  operator bvec2() const;
  operator ivec2() const;
  operator vec2()  const;
  operator dvec2() const;
  operator bvec3() const;
  operator ivec3() const;
  operator vec3()  const;

  const static dvec3 up;
  const static dvec3 down;
  const static dvec3 left;
  const static dvec3 right;
  const static dvec3 back;
  const static dvec3 forward;
  const static dvec3 zero;
  const static dvec3 one;

  __VEC3_SWIZZLE(d);
};
dvec3 operator*(const double scalar, const dvec3 &ref);
dvec3 operator/(const double scalar, const dvec3 &ref);

// Boolean 4D Vector `(bool x, y, z, w)`
struct bvec4 {
  bool x;
  bool y;
  bool z;
  bool w;

  bvec4();
  bvec4(bool _identity);
  bvec4(bool _x, bool _y, bool _z, bool _w);

  bvec4(vec4  _vec4);
  bvec4(ivec4 _ivec4);
  bvec4(dvec4 _dvec4);

  bvec4(__b_tuple_4 _t);
  bvec4(__i_tuple_4 _t);
  bvec4(__f_tuple_4 _t);
  bvec4(__d_tuple_4 _t);

  bvec4 operator&(const bvec2 &ref);
  bvec4 operator&(const bvec3 &ref);
  bvec4 operator&(const bvec4 &ref);
  bvec4 operator|(const bvec2 &ref);
  bvec4 operator|(const bvec3 &ref);
  bvec4 operator|(const bvec4 &ref);

  bool operator==(const bvec4 &ref);
  bool operator!=(const bvec4 &ref);

  bvec4& operator=(const bvec4 &ref);
  bvec4& operator=(const ivec4 &ref);
  bvec4& operator=(const vec4  &ref);
  bvec4& operator=(const dvec4 &ref);
  bvec4& operator=(const __b_tuple_4 &ref);
  bvec4& operator=(const __i_tuple_4 &ref);
  bvec4& operator=(const __f_tuple_4 &ref);
  bvec4& operator=(const __d_tuple_4 &ref);

  operator bvec2() const;
  operator ivec2() const;
  operator vec2()  const;
  operator dvec2() const;
  operator bvec3() const;
  operator ivec3() const;
  operator vec3()  const;
  operator dvec3() const;
  operator ivec4() const;
  operator vec4()  const;
  operator dvec4() const;

  __VEC4_SWIZZLE(b);
};
// Integer 4D Vector `(bool x, y, z, w)`
struct ivec4 {
  int x;
  int y;
  int z;
  int w;

  ivec4();
  ivec4(int _identity);
  ivec4(int _x, int _y, int _z, int _w);

  ivec4(bvec4 _bvec4);
  ivec4(vec4  _vec4);
  ivec4(dvec4 _dvec4);

  ivec4(__b_tuple_4 _t);
  ivec4(__i_tuple_4 _t);
  ivec4(__f_tuple_4 _t);
  ivec4(__d_tuple_4 _t);

  float len() const;
  double dlen() const;
  vec4 normalized() const;
  
  ivec4 operator+();
  ivec4 operator-();

  ivec4 operator+(const ivec2 &ref);
  ivec4 operator+(const ivec3 &ref);
  ivec4 operator+(const ivec4 &ref);
  ivec4 operator-(const ivec2 &ref);
  ivec4 operator-(const ivec3 &ref);
  ivec4 operator-(const ivec4 &ref);
  ivec4 operator*(const int scalar);
  ivec4 operator/(const int scalar);

  bool operator==(const ivec4 &ref);
  bool operator!=(const ivec4 &ref);

  ivec4& operator=(const bvec4 &ref);
  ivec4& operator=(const ivec4 &ref);
  ivec4& operator=(const vec4  &ref);
  ivec4& operator=(const dvec4 &ref);
  ivec4& operator=(const __b_tuple_4 &ref);
  ivec4& operator=(const __i_tuple_4 &ref);
  ivec4& operator=(const __f_tuple_4 &ref);
  ivec4& operator=(const __d_tuple_4 &ref);

  operator bvec2() const;
  operator ivec2() const;
  operator vec2()  const;
  operator dvec2() const;
  operator bvec3() const;
  operator ivec3() const;
  operator vec3()  const;
  operator dvec3() const;
  operator bvec4() const;
  operator vec4()  const;
  operator dvec4() const;

  __VEC4_SWIZZLE(i);
};
ivec4 operator*(const int scalar, const ivec4 &ref);
ivec4 operator/(const int scalar, const ivec4 &ref);
// Float 4D Vector `(float x, y, z, w)`
struct vec4 {
  float x;
  float y;
  float z;
  float w;

  vec4();
  vec4(float _identity);
  vec4(float _x, float _y, float _z, float _w);

  vec4(bvec4 _bvec4);
  vec4(ivec4 _ivec4);
  vec4(dvec4 _dvec4);

  vec4(__b_tuple_4 _t);
  vec4(__i_tuple_4 _t);
  vec4(__f_tuple_4 _t);
  vec4(__d_tuple_4 _t);

  float len() const;
  double dlen() const;
  vec4 normalized() const;

  vec4 operator+();
  vec4 operator-();

  vec4 operator+(const vec2 &ref);
  vec4 operator+(const vec3 &ref);
  vec4 operator+(const vec4 &ref);
  vec4 operator-(const vec2 &ref);
  vec4 operator-(const vec3 &ref);
  vec4 operator-(const vec4 &ref);
  vec4 operator*(const float scalar);
  vec4 operator/(const float scalar);

  bool operator==(const vec4 &ref);
  bool operator!=(const vec4 &ref);

  vec4& operator=(const bvec4 &ref);
  vec4& operator=(const ivec4 &ref);
  vec4& operator=(const vec4  &ref);
  vec4& operator=(const dvec4 &ref);
  vec4& operator=(const __b_tuple_4 &ref);
  vec4& operator=(const __i_tuple_4 &ref);
  vec4& operator=(const __f_tuple_4 &ref);
  vec4& operator=(const __d_tuple_4 &ref);

  operator bvec2() const;
  operator ivec2() const;
  operator vec2()  const;
  operator dvec2() const;
  operator bvec3() const;
  operator ivec3() const;
  operator vec3()  const;
  operator dvec3() const;
  operator bvec4() const;
  operator ivec4() const;
  operator dvec4() const;

  __VEC4_SWIZZLE(f);
};
vec4 operator*(const float scalar, const vec4 &ref);
vec4 operator/(const float scalar, const vec4 &ref);
// Double 4D Vector `(double x, y, z, w)`
struct dvec4 {
  double x;
  double y;
  double z;
  double w;

  dvec4();
  dvec4(double _identity);
  dvec4(double _x, double _y, double _z, double _w);

  dvec4(bvec4 _bvec4);
  dvec4(ivec4 _ivec4);
  dvec4(vec4  _vec4);

  dvec4(__b_tuple_4 _t);
  dvec4(__i_tuple_4 _t);
  dvec4(__f_tuple_4 _t);
  dvec4(__d_tuple_4 _t);

  float len() const;
  double dlen() const;
  dvec4 normalized() const;

  dvec4 operator+();
  dvec4 operator-();

  dvec4 operator+(const dvec2 &ref);
  dvec4 operator+(const dvec3 &ref);
  dvec4 operator+(const dvec4 &ref);
  dvec4 operator-(const dvec2 &ref);
  dvec4 operator-(const dvec3 &ref);
  dvec4 operator-(const dvec4 &ref);
  dvec4 operator*(const double scalar);
  dvec4 operator/(const double scalar);

  bool operator==(const dvec4 &ref);
  bool operator!=(const dvec4 &ref);

  dvec4& operator=(const bvec4 &ref);
  dvec4& operator=(const ivec4 &ref);
  dvec4& operator=(const vec4  &ref);
  dvec4& operator=(const dvec4 &ref);
  dvec4& operator=(const __b_tuple_4 &ref);
  dvec4& operator=(const __i_tuple_4 &ref);
  dvec4& operator=(const __f_tuple_4 &ref);
  dvec4& operator=(const __d_tuple_4 &ref);

  operator bvec2() const;
  operator ivec2() const;
  operator vec2()  const;
  operator dvec2() const;
  operator bvec3() const;
  operator ivec3() const;
  operator vec3()  const;
  operator dvec3() const;
  operator bvec4() const;
  operator ivec4() const;
  operator vec4()  const;

  __VEC4_SWIZZLE(d);
};
dvec4 operator*(const double scalar, const dvec4 &ref);
dvec4 operator/(const double scalar, const dvec4 &ref);

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
float  dot(const vec2  &a, const vec2  &b);
double dot(const dvec2 &a, const dvec2 &b);
int    dot(const ivec3 &a, const ivec3 &b);
float  dot(const vec3  &a, const vec3  &b);
double dot(const dvec3 &a, const dvec3 &b);
int    dot(const ivec4 &a, const ivec4 &b);
float  dot(const vec4  &a, const vec4  &b);
double dot(const dvec4 &a, const dvec4 &b);

ivec3 cross(const ivec3 &a, const ivec3 &b);
vec3  cross(const vec3  &a, const vec3  &b);
dvec3 cross(const dvec3 &a, const dvec3 &b);

float len(const ivec2 &ref);
float len(const vec2  &ref);
float len(const dvec2 &ref);
float len(const ivec3 &ref);
float len(const vec3  &ref);
float len(const dvec3 &ref);
float len(const ivec4 &ref);
float len(const vec4  &ref);
float len(const dvec4 &ref);
double dlen(const ivec2 &ref);
double dlen(const vec2  &ref);
double dlen(const dvec2 &ref);
double dlen(const ivec3 &ref);
double dlen(const vec3  &ref);
double dlen(const dvec3 &ref);
double dlen(const ivec4 &ref);
double dlen(const vec4  &ref);
double dlen(const dvec4 &ref);

#endif