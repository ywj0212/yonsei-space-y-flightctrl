#ifndef __SPACE_Y_MATHLIB_VEC_SWIZZLE_OPERATION__
#define __SPACE_Y_MATHLIB_VEC_SWIZZLE_OPERATION__

#include <cmath>

#ifndef ARDUINO
  #define PI          3.1415926535897932384626433832795
  #define HALF_PI     1.5707963267948966192313216916398
  #define TWO_PI      6.283185307179586476925286766559
  #define DEG_TO_RAD  0.017453292519943295769236907684886
  #define RAD_TO_DEG  57.295779513082320876798154814105
  #define EULER       2.718281828459045235360287471352
#else
  #undef degrees
  #undef radians
  #undef abs
#endif

#include "vec.hpp"
#include "swizzler.hpp"

#pragma region Definition of Primitive Math Operations
int    abs(int    a) { return a < 0    ? -a : a; }
// float  abs(float  a) { return a < 0.0f ? -a : a; }     // already defined in cmath
// double abs(double a) { return a < 0.0  ? -a : a; }     // already defined in cmath

int    sign(int    x) { return x < 0    ? -1    : x > 0    ? +1    : 0   ; }
float  sign(float  x) { return x < 0.0f ? -1.0f : x > 0.0f ? +1.0f : 0.0f; }
double sign(double x) { return x < 0.0  ? -1.0  : x > 0.0  ? +1.0  : 0.0 ; }

int    min(int    a, int    b) { return a < b ? a : b; }
float  min(float  a, float  b) { return a < b ? a : b; }
double min(double a, double b) { return a < b ? a : b; }

int    max(int    a, int    b) { return a > b ? a : b; }
float  max(float  a, float  b) { return a > b ? a : b; }
double max(double a, double b) { return a > b ? a : b; }

int    atan(int    y, int    x) { return (int)atan2(y, x); }
float  atan(float  y, float  x) { return atan2(y, x); }
double atan(double y, double x) { return atan2(y, x); }

int    mod(int    x, int    y) { return x % y; }
float  mod(float  x, float  y) { return fmod(x, y); }
double mod(double x, double y) { return fmod(x, y); }

// #ifndef ARDUINO // math functions below already defined in rp2040 api
int    degrees(int    x) { return (int)(x*(180    / 3.14159265358979323846f         )); }
float  degrees(float  x) { return       x*(180.0f / 3.14159265358979323846f         ); }
double degrees(double x) { return       x*(180.0  / 3.14159265358979323846          ); }
int    radians(int    x) { return (int)(x*(         3.14159265358979323846f / 180.0f)); }
float  radians(float  x) { return       x*(         3.14159265358979323846f / 180.0f); }
double radians(double x) { return       x*(         3.14159265358979323846  / 180.0 ); }
// #endif

int    fract(int    a) { return a           ; }
float  fract(float  a) { return a - floor(a); }
double fract(double a) { return a - floor(a); }

int    inversesqrt(int    x) { return (int)(1/sqrt(x)); }
float  inversesqrt(float  x) { return 1.0f/sqrt(x); }
double inversesqrt(double x) { return 1.0 /sqrt(x); }

int    clamp(int    x, int    a, int    b) { return max(a, min(b, x)); }
float  clamp(float  x, float  a, float  b) { return max(a, min(b, x)); }
double clamp(double x, double a, double b) { return max(a, min(b, x)); }

int    smoothstep(int edge0, int edge1, int x) {
  int t = clamp((x - edge0) / (edge1 - edge0), 0, 1);
  return t * t * (3 - 2 * t);
}
float  smoothstep(float edge0, float edge1, float x){
  float t = clamp((x - edge0) / (edge1 - edge0), 0.0f, 1.0f);
  return t * t * (3.0f - 2.0f * t);
}
double smoothstep(double edge0, double edge1, double x){
  double t = clamp((x - edge0) / (edge1 - edge0), 0.0, 1.0);
  return t * t * (3.0 - 2.0 * t);
}

int    step(int    edge, int    x) { return x < edge ? 0    : 1   ; }
float  step(float  edge, float  x) { return x < edge ? 0.0f : 1.0f; }
double step(double edge, double x) { return x < edge ? 0.0  : 1.0 ; }

int    lerp(int    x, int    y, int    a) { return x * (1 - a) + y * a; }
float  lerp(float  x, float  y, float  a) { return x * (1.0f - a) + y * a; }
double lerp(double x, double y, double a) { return x * (1.0  - a) + y * a; }
#pragma endregion
#pragma region Apply Primitive Math Operations
#define __VEC_VEC_FUNC_ARG1_OP_T_N(func, T, N) \
  vec<T, N> func(vec<T, N> &a) {\
    vec<T, N> tmp;\
    for(int i = 0; i < N; i++) {\
      tmp.data[i] = func(a.data[i]);\
    }\
    return tmp;\
  }\
  template <int I>\
  vec<T, N> func(swizzler<T, N, I> &a) {\
    vec<T, N> tmp;\
    for(int i = 0; i < N; i++) {\
      tmp.data[i] = func(__SWIZZLER_VALUE(a, i));\
    }\
    return tmp;\
  }
#define __VEC_VEC_FUNC_ARG2_OP_T_N(func, T, N) \
  vec<T, N> func(vec<T, N> &a, vec<T, N> &b) {\
    vec<T, N> tmp;\
    for(int i = 0; i < N; i++) {\
      tmp.data[i] = func(a.data[i], b.data[i]);\
    }\
    return tmp;\
  }\
  template <int I, int J>\
  vec<T, N> func(swizzler<T, N, I> &a, swizzler<T, N, J> &b) {\
    vec<T, N> tmp;\
    for(int i = 0; i < N; i++) {\
      tmp.data[i] = func(__SWIZZLER_VALUE(a, i), __SWIZZLER_VALUE(b, i));\
    }\
    return tmp;\
  }\
  template <int I>\
  vec<T, N> func(vec<T, N> &a, swizzler<T, N, I> &b) {\
    vec<T, N> tmp;\
    for(int i = 0; i < N; i++) {\
      tmp.data[i] = func(a.data[i], __SWIZZLER_VALUE(b, i));\
    }\
    return tmp;\
  }\
  template <int I>\
  vec<T, N> func(swizzler<T, N, I> &a, vec<T, N> &b) {\
    vec<T, N> tmp;\
    for(int i = 0; i < N; i++) {\
      tmp.data[i] = func(__SWIZZLER_VALUE(a, i), b.data[i]);\
    }\
    return tmp;\
  }
#define __VEC_VEC_FUNC_ARG3_OP_T_N(func, T, N) \
  vec<T, N> func(vec<T, N> &a, vec<T, N> &b, vec<T, N> &c) {\
    vec<T, N> tmp;\
    for(int i = 0; i < N; i++) {\
      tmp.data[i] = func(a.data[i], b.data[i], c.data[i]);\
    }\
    return tmp;\
  }\
  template <int I, int J, int K>\
  vec<T, N> func(swizzler<T, N, I> &a, swizzler<T, N, J> &b, swizzler<T, N, K> &c) {\
    vec<T, N> tmp;\
    for(int i = 0; i < N; i++) {\
      tmp.data[i] = func(__SWIZZLER_VALUE(a, i), __SWIZZLER_VALUE(b, i), __SWIZZLER_VALUE(c, i));\
    }\
    return tmp;\
  }\
  template <int I, int J>\
  vec<T, N> func(vec<T, N> &a, swizzler<T, N, I> &b, swizzler<T, N, J> &c) {\
    vec<T, N> tmp;\
    for(int i = 0; i < N; i++) {\
      tmp.data[i] = func(a.data[i], __SWIZZLER_VALUE(b, i), __SWIZZLER_VALUE(c, i));\
    }\
    return tmp;\
  }\
  template <int I, int J>\
  vec<T, N> func(swizzler<T, N, I> &a, vec<T, N> &b, swizzler<T, N, J> &c) {\
    vec<T, N> tmp;\
    for(int i = 0; i < N; i++) {\
      tmp.data[i] = func(__SWIZZLER_VALUE(a, i), b.data[i], __SWIZZLER_VALUE(c, i));\
    }\
    return tmp;\
  }\
  template <int I, int J>\
  vec<T, N> func(swizzler<T, N, I> &a, swizzler<T, N, J> &b, vec<T, N> &c) {\
    vec<T, N> tmp;\
    for(int i = 0; i < N; i++) {\
      tmp.data[i] = func(__SWIZZLER_VALUE(a, i), __SWIZZLER_VALUE(b, i), c.data[i]);\
    }\
    return tmp;\
  }\
  template <int I>\
  vec<T, N> func(swizzler<T, N, I> &a, vec<T, N> &b, vec<T, N> &c) {\
    vec<T, N> tmp;\
    for(int i = 0; i < N; i++) {\
      tmp.data[i] = func(__SWIZZLER_VALUE(a, i), b.data[i], c.data[i]);\
    }\
    return tmp;\
  }\
  template <int I>\
  vec<T, N> func(vec<T, N> &a, swizzler<T, N, I> &b, vec<T, N> &c) {\
    vec<T, N> tmp;\
    for(int i = 0; i < N; i++) {\
      tmp.data[i] = func(a.data[i], __SWIZZLER_VALUE(b, i), c.data[i]);\
    }\
    return tmp;\
  }\
  template <int I>\
  vec<T, N> func(vec<T, N> &a, vec<T, N> &b, swizzler<T, N, I> &c) {\
    vec<T, N> tmp;\
    for(int i = 0; i < N; i++) {\
      tmp.data[i] = func(a.data[i], b.data[i], __SWIZZLER_VALUE(c, i));\
    }\
    return tmp;\
  }
#define __VEC_SCALAR_FUNC_ARG2_OP_T_N(func, T, N) \
  vec<T, N> func(vec<T, N> &a, T &b) {\
    vec<T, N> tmp;\
    for(int i = 0; i < N; i++) {\
      tmp.data[i] = func(a.data[i], b);\
    }\
    return tmp;\
  }\
  template <int I>\
  vec<T, N> func(swizzler<T, N, I> &a, T &b) {\
    vec<T, N> tmp;\
    for(int i = 0; i < N; i++) {\
      tmp.data[i] = func(__SWIZZLER_VALUE(a, i), b);\
    }\
    return tmp;\
  }
#define __SCALAR_VEC_FUNC_ARG2_OP_T_N(func, T, N) \
  vec<T, N> func(T &a, vec<T, N> &b) {\
    vec<T, N> tmp;\
    for(int i = 0; i < N; i++) {\
      tmp.data[i] = func(a, b.data[i]);\
    }\
    return tmp;\
  }\
  template <int I>\
  vec<T, N> func(T &a, swizzler<T, N, I> &b) {\
    vec<T, N> tmp;\
    for(int i = 0; i < N; i++) {\
      tmp.data[i] = func(a, __SWIZZLER_VALUE(b, i));\
    }\
    return tmp;\
  }
#define __VEC_VEC_FUNC_ARG1_OP(func) \
  __VEC_VEC_FUNC_ARG1_OP_T_N(func, int, 1)\
  __VEC_VEC_FUNC_ARG1_OP_T_N(func, float, 1)\
  __VEC_VEC_FUNC_ARG1_OP_T_N(func, double, 1)\
  __VEC_VEC_FUNC_ARG1_OP_T_N(func, int, 2)\
  __VEC_VEC_FUNC_ARG1_OP_T_N(func, float, 2)\
  __VEC_VEC_FUNC_ARG1_OP_T_N(func, double, 2)\
  __VEC_VEC_FUNC_ARG1_OP_T_N(func, int, 3)\
  __VEC_VEC_FUNC_ARG1_OP_T_N(func, float, 3)\
  __VEC_VEC_FUNC_ARG1_OP_T_N(func, double, 3)\
  __VEC_VEC_FUNC_ARG1_OP_T_N(func, int, 4)\
  __VEC_VEC_FUNC_ARG1_OP_T_N(func, float, 4)\
  __VEC_VEC_FUNC_ARG1_OP_T_N(func, double, 4)
#define __VEC_VEC_FUNC_ARG2_OP(func) \
  __VEC_VEC_FUNC_ARG2_OP_T_N(func, int, 1)\
  __VEC_VEC_FUNC_ARG2_OP_T_N(func, float, 1)\
  __VEC_VEC_FUNC_ARG2_OP_T_N(func, double, 1)\
  __VEC_VEC_FUNC_ARG2_OP_T_N(func, int, 2)\
  __VEC_VEC_FUNC_ARG2_OP_T_N(func, float, 2)\
  __VEC_VEC_FUNC_ARG2_OP_T_N(func, double, 2)\
  __VEC_VEC_FUNC_ARG2_OP_T_N(func, int, 3)\
  __VEC_VEC_FUNC_ARG2_OP_T_N(func, float, 3)\
  __VEC_VEC_FUNC_ARG2_OP_T_N(func, double, 3)\
  __VEC_VEC_FUNC_ARG2_OP_T_N(func, int, 4)\
  __VEC_VEC_FUNC_ARG2_OP_T_N(func, float, 4)\
  __VEC_VEC_FUNC_ARG2_OP_T_N(func, double, 4)
#define __VEC_VEC_FUNC_ARG3_OP(func) \
  __VEC_VEC_FUNC_ARG3_OP_T_N(func, int, 1)\
  __VEC_VEC_FUNC_ARG3_OP_T_N(func, float, 1)\
  __VEC_VEC_FUNC_ARG3_OP_T_N(func, double, 1)\
  __VEC_VEC_FUNC_ARG3_OP_T_N(func, int, 2)\
  __VEC_VEC_FUNC_ARG3_OP_T_N(func, float, 2)\
  __VEC_VEC_FUNC_ARG3_OP_T_N(func, double, 2)\
  __VEC_VEC_FUNC_ARG3_OP_T_N(func, int, 3)\
  __VEC_VEC_FUNC_ARG3_OP_T_N(func, float, 3)\
  __VEC_VEC_FUNC_ARG3_OP_T_N(func, double, 3)\
  __VEC_VEC_FUNC_ARG3_OP_T_N(func, int, 4)\
  __VEC_VEC_FUNC_ARG3_OP_T_N(func, float, 4)\
  __VEC_VEC_FUNC_ARG3_OP_T_N(func, double, 4)
#define __VEC_SCALAR_FUNC_ARG2_OP(func) \
  __VEC_SCALAR_FUNC_ARG2_OP_T_N(func, int, 1)\
  __VEC_SCALAR_FUNC_ARG2_OP_T_N(func, float, 1)\
  __VEC_SCALAR_FUNC_ARG2_OP_T_N(func, double, 1)\
  __VEC_SCALAR_FUNC_ARG2_OP_T_N(func, int, 2)\
  __VEC_SCALAR_FUNC_ARG2_OP_T_N(func, float, 2)\
  __VEC_SCALAR_FUNC_ARG2_OP_T_N(func, double, 2)\
  __VEC_SCALAR_FUNC_ARG2_OP_T_N(func, int, 3)\
  __VEC_SCALAR_FUNC_ARG2_OP_T_N(func, float, 3)\
  __VEC_SCALAR_FUNC_ARG2_OP_T_N(func, double, 3)\
  __VEC_SCALAR_FUNC_ARG2_OP_T_N(func, int, 4)\
  __VEC_SCALAR_FUNC_ARG2_OP_T_N(func, float, 4)\
  __VEC_SCALAR_FUNC_ARG2_OP_T_N(func, double, 4)
#define __SCALAR_VEC_FUNC_ARG2_OP(func) \
  __SCALAR_VEC_FUNC_ARG2_OP_T_N(func, int, 1)\
  __SCALAR_VEC_FUNC_ARG2_OP_T_N(func, float, 1)\
  __SCALAR_VEC_FUNC_ARG2_OP_T_N(func, double, 1)\
  __SCALAR_VEC_FUNC_ARG2_OP_T_N(func, int, 2)\
  __SCALAR_VEC_FUNC_ARG2_OP_T_N(func, float, 2)\
  __SCALAR_VEC_FUNC_ARG2_OP_T_N(func, double, 2)\
  __SCALAR_VEC_FUNC_ARG2_OP_T_N(func, int, 3)\
  __SCALAR_VEC_FUNC_ARG2_OP_T_N(func, float, 3)\
  __SCALAR_VEC_FUNC_ARG2_OP_T_N(func, double, 3)\
  __SCALAR_VEC_FUNC_ARG2_OP_T_N(func, int, 4)\
  __SCALAR_VEC_FUNC_ARG2_OP_T_N(func, float, 4)\
  __SCALAR_VEC_FUNC_ARG2_OP_T_N(func, double, 4)
#pragma endregion
#pragma region Vector Length and Normalization
#define __VEC_LEN(T) \
  template <int N>\
  float len(const vec<T, N> &ref) {\
    float tmp = 0;\
    for(int i = 0; i < N; i++) {\
      tmp += (ref.data[i]*ref.data[i]);\
    }\
    return (tmp / N);\
  }
#define __VEC_DLEN(T) \
  template <int N>\
  double dlen(const vec<T, N> &ref) {\
    double tmp = 0;\
    for(int i = 0; i < N; i++) {\
      tmp += (ref.data[i]*ref.data[i]);\
    }\
    return (tmp / N);\
  }

__VEC_LEN(int)
__VEC_LEN(float)
__VEC_LEN(double)
__VEC_DLEN(int)
__VEC_DLEN(float)
__VEC_DLEN(double)

#define __VEC_NORMALIZED(T) \
  template <int N>\
  vec<float, N> normalized(const vec<T, N> &ref) {\
    float l = len(ref);\
    vec<float, N> result;\
    for(int i = 0; i < N; i++) {\
      result.data[i] = (ref.data[i] / l);\
    }\
    return result;\
  }
#define __VEC_DNORMALIZED(T) \
template <int N>\
vec<double, N> dnormalized(const vec<T, N> &ref) {\
  double l = dlen(ref);\
  vec<double, N> result;\
  for(int i = 0; i < N; i++) {\
    result.data[i] = (ref.data[i] / l);\
  }\
  return result;\
}

__VEC_NORMALIZED(int)
__VEC_NORMALIZED(float)
__VEC_NORMALIZED(double)
__VEC_DNORMALIZED(int)
__VEC_DNORMALIZED(float)
__VEC_DNORMALIZED(double)
#pragma endregion
#pragma region Dot and Cross Products
template <class T, int N>
T dot(const vec<T, N> &a, const vec<T, N> &b) {
  T result = 0;
  for(int i = 0; i < N; i++) {
    result += (a.data[i] * b.data[i]);
  }
  return result;
}
template <class T, int N>
vec<T, 3> cross(const vec<T, N> &a, const vec<T, N> &b) {
  return (a.y*b.z - a.z*b.y, a.x*b.z - a.z*b.x, a.x*b.y - a.y*b.x);
}
#pragma endregion
#pragma region Vector and Swizzler Default Operations
template <class T, int N, int I, int J>
bool swizzlerRefEquals(swizzler<T, N, I> &a, swizzler<T, N, J> &b) {
  return ((&a == &b) && (I == J));
}

#define __SWIZZLER_VEC_VEC_BIN_OP(op, T) \
  template <int N, int I, int J>\
  vec<T, N> operator op(const swizzler<T, N, I> &a, const swizzler<T, N, J> &b) {\
    vec<T, N> tmp;\
    for(int i = 0; i < N; i++) {\
      tmp.data[i] = __SWIZZLER_VALUE(a, i) op __SWIZZLER_VALUE(b, i);\
    }\
    return tmp;\
  }\
  template <int N, int I>\
  vec<T, N> operator op(const swizzler<T, N, I> &a, const ::vec<T, N> &vec) {\
    ::vec<T, N> tmp;\
    for(int i = 0; i < N; i++) {\
      tmp.data[i] = __SWIZZLER_VALUE(a, i) op vec.data[i];\
    }\
    return tmp;\
  }\
  template <int N, int I>\
  vec<T, N> operator op(const ::vec<T, N> &vec, const swizzler<T, N, I> &a) {\
    ::vec<T, N> tmp;\
    for(int i = 0; i < N; i++) {\
      tmp.data[i] = vec.data[i] op __SWIZZLER_VALUE(a, i);\
    }\
    return tmp;\
  }

#define __SWIZZLER_VEC_SCALAR_BIN_OP(op, T) \
  template <int N, int I>\
  vec<T, N> operator op(const swizzler<T, N, I> &a, const T &scalar) {\
    vec<T, N> tmp;\
    for(int i = 0; i < N; i++) {\
      tmp.data[i] = __SWIZZLER_VALUE(a, i) op scalar;\
    }\
    return tmp;\
  }\
  template <int N>\
  vec<T, N> operator op(const vec<T, N> &a, const T &scalar) {\
    vec<T, N> tmp;\
    for(int i = 0; i < N; i++) {\
      tmp.data[i] = a.data[i] op scalar;\
    }\
    return tmp;\
  }

#define __SWIZZLER_SCALAR_VEC_BIN_OP(op, T) \
  template <int N, int I>\
  vec<T, N> operator op(const T &scalar, const swizzler<T, N, I> &a) {\
    vec<T, N> tmp;\
    for(int i = 0; i < N; i++) {\
      tmp.data[i] = scalar op __SWIZZLER_VALUE(a, i);\
    }\
    return tmp;\
  }\
  template <int N>\
  vec<T, N> operator op(const T &scalar, const vec<T, N> &a) {\
    vec<T, N> tmp;\
    for(int i = 0; i < N; i++) {\
      tmp.data[i] = scalar op a.data[i];\
    }\
    return tmp;\
  }

#define __SWIZZLER_VEC_COMB_OP(op, T) \
  template <int N, int I, int J>\
  swizzler<T, N, I>& operator op(swizzler<T, N, I> &left, const swizzler<T, N, J> &right) {\
    T tmp[N];\
    for(int i = 0; i < N; i++) tmp[i] = __SWIZZLER_VALUE(right, i);\
    for(int i = 0; i < N; i++) {\
      T *ptr = (left.getPtrByIndex(i));\
      if(ptr != NULL)\
        *ptr op (tmp[i]);\
    }\
    return left;\
  }\
  template <int N, int I>\
  swizzler<T, N, I>& operator op(swizzler<T, N, I> &left, const vec<T, N> &vec) {\
    T tmp[N];\
    for(int i = 0; i < N; i++) tmp[i] = (vec.data[i]);\
    for(int i = 0; i < N; i++) {\
      T *ptr = (left.getPtrByIndex(i));\
      if(ptr != NULL)\
        *ptr op (tmp[i]);\
    }\
    return left;\
  }

#define __SWIZZLER_SCALAR_COMB_OP(op, T) \
  template <int N, int I>\
  swizzler<T, N, I>& operator op(swizzler<T, N, I> &left, const T &scalar) {\
    for(int i = 0; i < N; i++) {\
      T *ptr = (left.getPtrByIndex(i));\
      if(ptr != NULL)\
        *ptr op scalar;\
    }\
    return left;\
  }

#define __SWIZZLER_UNI_OP(op, T) \
  template <int N, int I>\
  vec<T, N>& operator op(swizzler<T, N, I> &a) {\
    vec<T, N> tmp;\
    for(int i = 0; i < N; i++) {\
      tmp.data[i] = op __SWIZZLER_VALUE(a, i);\
    }\
    return tmp;\
  }
#define __SWIZZLER_EQ_OP(T) \
  template <int N, int I, int J>\
  bool operator==(const swizzler<T, N, I> &a, const swizzler<T, N, J> &b) {\
    bool res = true;\
    for(int i = 0; i < N; i++) {\
      res &= (__SWIZZLER_VALUE(a, i) == __SWIZZLER_VALUE(b, i));\
    }\
    return res;\
  }\
  template <int N, int I>\
  bool operator==(const swizzler<T, N, I> &a, const vec<T, N> &b) {\
    bool res = true;\
    for(int i = 0; i < N; i++) {\
      res &= (__SWIZZLER_VALUE(a, i) == b.data[i]);\
    }\
    return res;\
  }\
  template <int N, int I>\
  bool operator==(const vec<T, N> &a, const swizzler<T, N, I> &b) {\
    bool res = true;\
    for(int i = 0; i < N; i++) {\
      res &= (a.data[i] == __SWIZZLER_VALUE(b, i));\
    }\
    return res;\
  }
#define __SWIZZLER_NEQ_OP(T) \
  template <int N, int I, int J>\
  bool operator!=(const swizzler<T, N, I> &a, const swizzler<T, N, J> &b) {\
    bool res = false;\
    for(int i = 0; i < N; i++) {\
      res != (__SWIZZLER_VALUE(a, i) != __SWIZZLER_VALUE(b, i));\
    }\
    return res;\
  }\
  template <int N, int I>\
  bool operator!=(const swizzler<T, N, I> &a, const vec<T, N> &b) {\
    bool res = false;\
    for(int i = 0; i < N; i++) {\
      res != (__SWIZZLER_VALUE(a, i) != b.data[i]);\
    }\
    return res;\
  }\
  template <int N, int I>\
  bool operator!=(const vec<T, N> &a, const swizzler<T, N, I> &b) {\
    bool res = false;\
    for(int i = 0; i < N; i++) {\
      res != (a.data[i] != __SWIZZLER_VALUE(b, i));\
    }\
    return res;\
  }

#define __VEC_VEC_COMB_OP(op, T, N) \
  vec<T, N>& operator op(vec<T, N> &a, const vec<T, N> &b) {\
    for(int i = 0; i < N; i++) {\
      a.data[i] op b.data[i];\
    }\
    return a;\
  }\
  template <int I>\
  vec<T, N>& operator op(vec<T, N> &a, const swizzler<T, N, I> &b) {\
    for(int i = 0; i < N; i++) {\
      a.data[i] op __SWIZZLER_VALUE(b, i);\
    }\
    return a;\
  }
#define __VEC_VEC_BIN_OP(op, T, N) \
  vec<T, N> operator op(const vec<T, N> &a, const vec<T, N> &b) {\
    vec<T, N> tmp;\
    for(int i = 0; i < N; i++) {\
      tmp.data[i] = a.data[i] op b.data[i];\
    }\
    return tmp;\
  }
#define __VEC_SCL_COMB_OP(op, T, N) \
  vec<T, N>& operator op(vec<T, N> &a, const T &scalar) {\
    for(int i = 0; i < N; i++) {\
      a.data[i] op scalar;\
    }\
    return a;\
  }
#define __VEC_SCL_BIN_OP(op, T, N) \
  vec<T, N> operator op(const vec<T, N> &a, const T &scalar) {\
    vec<T, N> tmp;\
    for(int i = 0; i < N; i++) {\
      tmp.data[i] = a.data[i] op scalar;\
    }\
    return tmp;\
  }
#define __SCL_VEC_BIN_OP(op, T, N) \
  vec<T, N> operator op(const T &scalar, const vec<T, N> &a) {\
    vec<T, N> tmp;\
    for(int i = 0; i < N; i++) {\
      tmp.data[i] = scalar op a.data[i];\
    }\
    return tmp;\
  }
#define __VEC_UNI_OP(op, T, N) \
  vec<T, N> operator op(const vec<T, N> &a) {\
    vec<T, N> tmp;\
    for(int i = 0; i < N; i++) {\
      tmp.data[i] = (op a.data[i]);\
    }\
    return tmp;\
  }
#define __VEC_VEC_EQ_OP(T, N) \
  bool operator==(const vec<T, N> &a, const vec<T, N> &b) {\
    bool res = true;\
    for(int i = 0; i < N; i++) {\
      res &= (a.data[i] == b.data[i]);\
    }\
    return res;\
  }
#define __VEC_VEC_NEQ_OP(T, N) \
  bool operator!=(const vec<T, N> &a, const vec<T, N> &b) {\
    bool res = false;\
    for(int i = 0; i < N; i++) {\
      res |= (a.data[i] != b.data[i]);\
    }\
    return res;\
  }
#pragma endregion
#pragma region Distance
#define __VEC_DISTANCE(T) \
template <int N>\
float distance(vec<T, N> &a, vec<T, N> &b) {\
  return len(a - b);\
}\
template <int N, int I>\
float distance(swizzler<T, N, I> &a, vec<T, N> &b) {\
  return len(a - b);\
}\
template <int N, int I>\
float distance(vec<T, N> &a, swizzler<T, N, I> &b) {\
  return len(a - b);\
}\
template <int N, int I, int J>\
float distance(swizzler<T, N, I> &a, swizzler<T, N, J> &b) {\
  return len(a - b);\
}
__VEC_DISTANCE(int)
__VEC_DISTANCE(float)
__VEC_DISTANCE(double)

#define __VEC_DDISTANCE(T) \
template <int N>\
double ddistance(vec<T, N> &a, vec<T, N> &b) {\
  return dlen(a - b);\
}\
template <int N, int I>\
double ddistance(swizzler<T, N, I> &a, vec<T, N> &b) {\
  return dlen(a - b);\
}\
template <int N, int I>\
double ddistance(vec<T, N> &a, swizzler<T, N, I> &b) {\
  return dlen(a - b);\
}\
template <int N, int I, int J>\
double ddistance(swizzler<T, N, I> &a, swizzler<T, N, J> &b) {\
  return dlen(a - b);\
}
__VEC_DDISTANCE(int)
__VEC_DDISTANCE(float)
__VEC_DDISTANCE(double)

template <class T, int N>
unsigned int hamming_distance(vec<T, N> &a, vec<T, N> &b) {
  unsigned int mismatch = 0;
  for(int i = 0; i < N; i++) {
    mismatch += (a.data[i] != b.data[i]);
  }
  return mismatch;
}
template <class T, int N, int I>
unsigned int hamming_distance(swizzler<T, N, I> &a, vec<T, N> &b) {
  unsigned int mismatch = 0;
  for(int i = 0; i < N; i++) {
    mismatch += (__SWIZZLER_VALUE(a, i) != b.data[i]);
  }
  return mismatch;
}
template <class T, int N, int I>
unsigned int hamming_distance(vec<T, N> &a, swizzler<T, N, I> &b) {
  unsigned int mismatch = 0;
  for(int i = 0; i < N; i++) {
    mismatch += (a.data[i] != __SWIZZLER_VALUE(b, i));
  }
  return mismatch;
}
template <class T, int N, int I, int J>
unsigned int hamming_distance(swizzler<T, N, I> &a, swizzler<T, N, J> &b) {
  unsigned int mismatch = 0;
  for(int i = 0; i < N; i++) {
    mismatch += (__SWIZZLER_VALUE(a, i) != __SWIZZLER_VALUE(b, i));
  }
  return mismatch;
}
#pragma endregion

__VEC_VEC_FUNC_ARG1_OP(degrees); 
__VEC_VEC_FUNC_ARG1_OP(radians);
__VEC_VEC_FUNC_ARG1_OP(sign);
__VEC_VEC_FUNC_ARG1_OP(fract);
__VEC_VEC_FUNC_ARG1_OP(abs);
__VEC_VEC_FUNC_ARG1_OP(floor);
__VEC_VEC_FUNC_ARG1_OP(ceil);
__VEC_VEC_FUNC_ARG1_OP(round);
__VEC_VEC_FUNC_ARG1_OP(trunc);
__VEC_VEC_FUNC_ARG1_OP(sin);
__VEC_VEC_FUNC_ARG1_OP(cos);
__VEC_VEC_FUNC_ARG1_OP(tan);
__VEC_VEC_FUNC_ARG1_OP(asin);
__VEC_VEC_FUNC_ARG1_OP(acos);
__VEC_VEC_FUNC_ARG1_OP(atan);
__VEC_VEC_FUNC_ARG1_OP(log);
__VEC_VEC_FUNC_ARG1_OP(exp);
__VEC_VEC_FUNC_ARG1_OP(log2);
__VEC_VEC_FUNC_ARG1_OP(exp2);
__VEC_VEC_FUNC_ARG1_OP(sqrt);

__VEC_VEC_FUNC_ARG2_OP(min);
__VEC_VEC_FUNC_ARG2_OP(max);
__VEC_VEC_FUNC_ARG2_OP(mod);
__VEC_VEC_FUNC_ARG2_OP(pow);
__VEC_VEC_FUNC_ARG2_OP(step);
__VEC_VEC_FUNC_ARG2_OP(atan);
__VEC_VEC_FUNC_ARG2_OP(atan2);

__VEC_SCALAR_FUNC_ARG2_OP(min);
__VEC_SCALAR_FUNC_ARG2_OP(max);
__VEC_SCALAR_FUNC_ARG2_OP(mod);
__VEC_SCALAR_FUNC_ARG2_OP(pow);
__VEC_SCALAR_FUNC_ARG2_OP(step);
__VEC_SCALAR_FUNC_ARG2_OP(atan);
__VEC_SCALAR_FUNC_ARG2_OP(atan2);

__SCALAR_VEC_FUNC_ARG2_OP(min);
__SCALAR_VEC_FUNC_ARG2_OP(max);
__SCALAR_VEC_FUNC_ARG2_OP(mod);
__SCALAR_VEC_FUNC_ARG2_OP(pow);
__SCALAR_VEC_FUNC_ARG2_OP(step);
__SCALAR_VEC_FUNC_ARG2_OP(atan);
__SCALAR_VEC_FUNC_ARG2_OP(atan2);

__VEC_VEC_FUNC_ARG3_OP(lerp);
__VEC_VEC_FUNC_ARG3_OP(clamp);
__VEC_VEC_FUNC_ARG3_OP(smoothstep);

#define __BSWIZZLER_OPS_T \
  __SWIZZLER_VEC_VEC_BIN_OP(&, bool)\
  __SWIZZLER_VEC_VEC_BIN_OP(|, bool)\
  __SWIZZLER_VEC_VEC_BIN_OP(^, bool)\
  __SWIZZLER_VEC_COMB_OP(&=, bool)\
  __SWIZZLER_VEC_COMB_OP(|=, bool)\
  __SWIZZLER_VEC_COMB_OP(^=, bool)\
  __SWIZZLER_UNI_OP(!, bool)\
  __SWIZZLER_EQ_OP(bool)\
  __SWIZZLER_NEQ_OP(bool)
#define __ISWIZZLER_OPS_T \
  __SWIZZLER_VEC_VEC_BIN_OP(+, int)\
  __SWIZZLER_VEC_VEC_BIN_OP(-, int)\
  __SWIZZLER_VEC_SCALAR_BIN_OP(*, int)\
  __SWIZZLER_SCALAR_VEC_BIN_OP(*, int)\
  __SWIZZLER_VEC_SCALAR_BIN_OP(/, int)\
  __SWIZZLER_VEC_SCALAR_BIN_OP(%, int)\
  __SWIZZLER_VEC_COMB_OP(+=, int)\
  __SWIZZLER_VEC_COMB_OP(-=, int)\
  __SWIZZLER_SCALAR_COMB_OP(*=, int)\
  __SWIZZLER_SCALAR_COMB_OP(/=, int)\
  __SWIZZLER_SCALAR_COMB_OP(%=, int)\
  __SWIZZLER_UNI_OP(-, int)\
  __SWIZZLER_EQ_OP(int)\
  __SWIZZLER_NEQ_OP(int)
#define __FSWIZZLER_OPS_T(T) \
  __SWIZZLER_VEC_VEC_BIN_OP(+, T)\
  __SWIZZLER_VEC_VEC_BIN_OP(-, T)\
  __SWIZZLER_VEC_SCALAR_BIN_OP(*, T)\
  __SWIZZLER_SCALAR_VEC_BIN_OP(*, T)\
  __SWIZZLER_VEC_SCALAR_BIN_OP(/, T)\
  __SWIZZLER_VEC_COMB_OP(+=, T)\
  __SWIZZLER_VEC_COMB_OP(-=, T)\
  __SWIZZLER_SCALAR_COMB_OP(*=, T)\
  __SWIZZLER_SCALAR_COMB_OP(/=, T)\
  __SWIZZLER_UNI_OP(-, T)\
  __SWIZZLER_EQ_OP(T)\
  __SWIZZLER_NEQ_OP(T)

__BSWIZZLER_OPS_T
__ISWIZZLER_OPS_T
__FSWIZZLER_OPS_T(float)
__FSWIZZLER_OPS_T(double)

#define __VEC_BVEC_OPS(N) \
  __VEC_VEC_COMB_OP(|=, bool, N)\
  __VEC_VEC_BIN_OP(|, bool, N)\
  __VEC_VEC_COMB_OP(&=, bool, N)\
  __VEC_VEC_BIN_OP(&, bool, N)\
  __VEC_VEC_COMB_OP(^=, bool, N)\
  __VEC_VEC_BIN_OP(^, bool, N)\
  __VEC_UNI_OP(!, bool, N)\
  __VEC_VEC_EQ_OP(bool, N)\
  __VEC_VEC_NEQ_OP(bool, N)

#define __VEC_IVEC_OPS(N) \
  __VEC_VEC_COMB_OP(+=, int, N)\
  __VEC_VEC_BIN_OP(+, int, N)\
  __VEC_VEC_COMB_OP(-=, int, N)\
  __VEC_VEC_BIN_OP(-, int, N)\
  __VEC_SCL_COMB_OP(*=, int, N)\
  __VEC_VEC_BIN_OP(*, int, N)\
  __VEC_SCL_BIN_OP(*, int, N)\
  __SCL_VEC_BIN_OP(*, int, N)\
  __VEC_SCL_COMB_OP(/=, int, N)\
  __VEC_VEC_BIN_OP(/, int, N)\
  __VEC_SCL_BIN_OP(/, int, N)\
  __VEC_SCL_COMB_OP(%=, int, N)\
  __VEC_VEC_BIN_OP(%, int, N)\
  __VEC_SCL_BIN_OP(%, int, N)\
  __VEC_UNI_OP(+, int, N)\
  __VEC_UNI_OP(-, int, N)\
  __VEC_VEC_EQ_OP(int, N)\
  __VEC_VEC_NEQ_OP(int, N)

#define __VEC_FVEC_OPS_T(T, N) \
  __VEC_VEC_COMB_OP(+=, T, N)\
  __VEC_VEC_BIN_OP(+, T, N)\
  __VEC_VEC_COMB_OP(-=, T, N)\
  __VEC_VEC_BIN_OP(-, T, N)\
  __VEC_SCL_COMB_OP(*=, T, N)\
  __VEC_VEC_BIN_OP(*, T, N)\
  __VEC_SCL_BIN_OP(*, T, N)\
  __SCL_VEC_BIN_OP(*, T, N)\
  __VEC_SCL_COMB_OP(/=, T, N)\
  __VEC_VEC_BIN_OP(/, T, N)\
  __VEC_SCL_BIN_OP(/, T, N)\
  __VEC_UNI_OP(+, T, N)\
  __VEC_UNI_OP(-, T, N)\
  __VEC_VEC_EQ_OP(T, N)\
  __VEC_VEC_NEQ_OP(T, N)

#define __VEC_FVEC_OPS(N) \
  __VEC_FVEC_OPS_T(float, N)\
  __VEC_FVEC_OPS_T(double, N)

__VEC_BVEC_OPS(1)
__VEC_BVEC_OPS(2)
__VEC_BVEC_OPS(3)
__VEC_BVEC_OPS(4)
__VEC_IVEC_OPS(1)
__VEC_IVEC_OPS(2)
__VEC_IVEC_OPS(3)
__VEC_IVEC_OPS(4)
__VEC_FVEC_OPS(1)
__VEC_FVEC_OPS(2)
__VEC_FVEC_OPS(3)
__VEC_FVEC_OPS(4)

#endif