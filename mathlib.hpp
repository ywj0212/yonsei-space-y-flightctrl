#ifndef __SPACE_Y_MATHLIB__
#define __SPACE_Y_MATHLIB__

#define NULL 0

#include "vec.hpp"
#include <cmath>

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

float  atan(float  y, float  x) { return atan2(y, x); }
double atan(double y, double x) { return atan2(y, x); }

float  mod (float  x, float  y) { return fmod(x, y); }
double mod (double x, double y) { return fmod(x, y); }

// float  degrees(float  x) { return x*(180.0f / 3.14159265358979323846f         ); }     // already defined in rp2040 api
// double degrees(double x) { return x*(180.0  / 3.14159265358979323846          ); }     // already defined in rp2040 api
// float  radians(float  x) { return x*(         3.14159265358979323846f / 180.0f); }     // already defined in rp2040 api
// double radians(double x) { return x*(         3.14159265358979323846  / 180.0 ); }     // already defined in rp2040 api

int    fract(int    a) { return a           ; }
float  fract(float  a) { return a - floor(a); }
double fract(double a) { return a - floor(a); }

float  inversesqrt(float  x) { return 1.0f/sqrt(x); }
double inversesqrt(double x) { return 1.0 /sqrt(x); }

int    clamp(int    x, int    a, int    b) { return max(a, min(b, x)); }
float  clamp(float  x, float  a, float  b) { return max(a, min(b, x)); }
double clamp(double x, double a, double b) { return max(a, min(b, x)); }

float smoothstep(float edge0, float edge1, float x){
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

float  lerp(float  x, float  y, float  a) { return x * (1.0f - a) + y * a; }
double lerp(double x, double y, double a) { return x * (1.0  - a) + y * a; }

#define __OP_VEC_VEC_FUNC1_2(func, T) \
T##vec2 func(T##vec2 &a) {\
  T##vec2 b;\
  b.x = func(a.x); b.y = func(a.y);\
  return b;\
}
#define __OP_VEC_VEC_FUNC1_3(func, T) \
T##vec3 func(T##vec3 &a) {\
  T##vec3 b;\
  b.x = func(a.x); b.y = func(a.y); b.z = func(a.z);\
  return b;\
}
#define __OP_VEC_VEC_FUNC1_4(func, T) \
T##vec4 func(T##vec4 &a) {\
  T##vec4 b;\
  b.x = func(a.x); b.y = func(a.y); b.z = func(a.z); b.w = func(a.w);\
  return b;\
}

#define __OP_VEC_VEC_FUNC2_2(func, T) \
T##vec2 func(T##vec2 &a, T##vec2 &b) {\
  T##vec2 c;\
  c.x = func(a.x, b.x); c.y = func(a.y, b.y);\
  return c;\
}
#define __OP_VEC_VEC_FUNC2_3(func, T) \
T##vec3 func(T##vec3 &a, T##vec3 &b) {\
  T##vec3 c;\
  c.x = func(a.x, b.x); c.y = func(a.y, b.y); c.z = func(a.z, b.z);\
  return c;\
}
#define __OP_VEC_VEC_FUNC2_4(func, T) \
T##vec4 func(T##vec4 &a, T##vec4 &b) {\
  T##vec4 c;\
  c.x = func(a.x, b.x); c.y = func(a.y, b.y); c.z = func(a.z, b.z); c.w = func(a.w, b.w);\
  return c;\
}

#define __OP_VEC_VEC_FUNC3_2(func, T) \
T##vec2 func(T##vec2 &a, T##vec2 &b, T##vec2 &c) {\
  T##vec2 d;\
  d.x = func(a.x, b.x, c.x); d.y = func(a.y, b.y, c.y);\
  return d;\
}
#define __OP_VEC_VEC_FUNC3_3(func, T) \
T##vec3 func(T##vec3 &a, T##vec3 &b, T##vec3 &c) {\
  T##vec3 d;\
  d.x = func(a.x, b.x, c.x); d.y = func(a.y, b.y, c.y); d.z = func(a.z, b.z, c.z);\
  return d;\
}
#define __OP_VEC_VEC_FUNC3_4(func, T) \
T##vec4 func(T##vec4 &a, T##vec4 &b, T##vec4 &c) {\
  T##vec4 d;\
  d.x = func(a.x, b.x, c.x); d.y = func(a.y, b.y, c.y); d.z = func(a.z, b.z, c.z); d.w = func(a.w, b.w, c.w);\
  return d;\
}

#define __OP_VEC_SCALAR_FUNC2_2(func, T, scalarType) \
T##vec2 func(T##vec2 &a, scalarType &b) {\
  T##vec2 c;\
  c.x = func(a.x, b); c.y = func(a.y, b);\
  return c;\
}
#define __OP_VEC_SCALAR_FUNC2_3(func, T, scalarType) \
T##vec3 func(T##vec3 &a, scalarType &b) {\
  T##vec3 c;\
  c.x = func(a.x, b); c.y = func(a.y, b); c.z = func(a.z, b);\
  return c;\
}
#define __OP_VEC_SCALAR_FUNC2_4(func, T, scalarType) \
T##vec4 func(T##vec4 &a, scalarType &b) {\
  T##vec4 c;\
  c.x = func(a.x, b); c.y = func(a.y, b); c.z = func(a.z, b); c.w = func(a.w, b);\
  return c;\
}

#define __OP_SCALAR_VEC_FUNC2_2(func, T, scalarType) \
T##vec2 func(scalarType &a, T##vec2 &b) {\
  T##vec2 c;\
  c.x = func(a, b.x); c.y = func(a, b.y);\
  return c;\
}
#define __OP_SCALAR_VEC_FUNC2_3(func, T, scalarType) \
T##vec3 func(scalarType &a, T##vec3 &b) {\
  T##vec3 c;\
  c.x = func(a, b.x); c.y = func(a, b.y); c.z = func(a, b.z);\
  return c;\
}
#define __OP_SCALAR_VEC_FUNC2_4(func, T, scalarType) \
T##vec4 func(scalarType &a, T##vec4 &b) {\
  T##vec4 c;\
  c.x = func(a, b.x); c.y = func(a, b.y); c.z = func(a, b.z); c.w = func(a, b.w);\
  return c;\
}

#define __OP_VEC_VEC_FUNC1_ALL_T_DIM(func) \
__OP_VEC_VEC_FUNC1_2(func, i);\
__OP_VEC_VEC_FUNC1_3(func, i);\
__OP_VEC_VEC_FUNC1_4(func, i);\
__OP_VEC_VEC_FUNC1_2(func,  );\
__OP_VEC_VEC_FUNC1_3(func,  );\
__OP_VEC_VEC_FUNC1_4(func,  );\
__OP_VEC_VEC_FUNC1_2(func, d);\
__OP_VEC_VEC_FUNC1_3(func, d);\
__OP_VEC_VEC_FUNC1_4(func, d);
#define __OP_VEC_VEC_FUNC2_ALL_T_DIM(func) \
__OP_VEC_VEC_FUNC2_2(func, i);\
__OP_VEC_VEC_FUNC2_3(func, i);\
__OP_VEC_VEC_FUNC2_4(func, i);\
__OP_VEC_VEC_FUNC2_2(func,  );\
__OP_VEC_VEC_FUNC2_3(func,  );\
__OP_VEC_VEC_FUNC2_4(func,  );\
__OP_VEC_VEC_FUNC2_2(func, d);\
__OP_VEC_VEC_FUNC2_3(func, d);\
__OP_VEC_VEC_FUNC2_4(func, d);
#define __OP_VEC_VEC_FUNC3_ALL_T_DIM(func) \
__OP_VEC_VEC_FUNC3_2(func, i);\
__OP_VEC_VEC_FUNC3_3(func, i);\
__OP_VEC_VEC_FUNC3_4(func, i);\
__OP_VEC_VEC_FUNC3_2(func,  );\
__OP_VEC_VEC_FUNC3_3(func,  );\
__OP_VEC_VEC_FUNC3_4(func,  );\
__OP_VEC_VEC_FUNC3_2(func, d);\
__OP_VEC_VEC_FUNC3_3(func, d);\
__OP_VEC_VEC_FUNC3_4(func, d);
#define __OP_VEC_SCALAR_FUNC2_ALL_T_DIM(func) \
__OP_VEC_SCALAR_FUNC2_2(func, i, int);\
__OP_VEC_SCALAR_FUNC2_3(func, i, int);\
__OP_VEC_SCALAR_FUNC2_4(func, i, int);\
__OP_VEC_SCALAR_FUNC2_2(func,  , float);\
__OP_VEC_SCALAR_FUNC2_3(func,  , float);\
__OP_VEC_SCALAR_FUNC2_4(func,  , float);\
__OP_VEC_SCALAR_FUNC2_2(func, d, double);\
__OP_VEC_SCALAR_FUNC2_3(func, d, double);\
__OP_VEC_SCALAR_FUNC2_4(func, d, double);
#define __OP_SCALAR_VEC_FUNC2_ALL_T_DIM(func) \
__OP_SCALAR_VEC_FUNC2_2(func, i, int);\
__OP_SCALAR_VEC_FUNC2_3(func, i, int);\
__OP_SCALAR_VEC_FUNC2_4(func, i, int);\
__OP_SCALAR_VEC_FUNC2_2(func,  , float);\
__OP_SCALAR_VEC_FUNC2_3(func,  , float);\
__OP_SCALAR_VEC_FUNC2_4(func,  , float);\
__OP_SCALAR_VEC_FUNC2_2(func, d, double);\
__OP_SCALAR_VEC_FUNC2_3(func, d, double);\
__OP_SCALAR_VEC_FUNC2_4(func, d, double);

// __OP_VEC_VEC_FUNC1_ALL_T_DIM(degrees); 
// __OP_VEC_VEC_FUNC1_ALL_T_DIM(radians);
__OP_VEC_VEC_FUNC1_ALL_T_DIM(sign);
__OP_VEC_VEC_FUNC1_ALL_T_DIM(fract);
__OP_VEC_VEC_FUNC1_ALL_T_DIM(abs);
__OP_VEC_VEC_FUNC1_ALL_T_DIM(floor);
__OP_VEC_VEC_FUNC1_ALL_T_DIM(ceil);
__OP_VEC_VEC_FUNC1_ALL_T_DIM(round);
__OP_VEC_VEC_FUNC1_ALL_T_DIM(trunc);
__OP_VEC_VEC_FUNC1_ALL_T_DIM(sin);
__OP_VEC_VEC_FUNC1_ALL_T_DIM(cos);
__OP_VEC_VEC_FUNC1_ALL_T_DIM(tan);
__OP_VEC_VEC_FUNC1_ALL_T_DIM(asin);
__OP_VEC_VEC_FUNC1_ALL_T_DIM(acos);
__OP_VEC_VEC_FUNC1_ALL_T_DIM(atan);
__OP_VEC_VEC_FUNC1_ALL_T_DIM(log);
__OP_VEC_VEC_FUNC1_ALL_T_DIM(exp);
__OP_VEC_VEC_FUNC1_ALL_T_DIM(log2);
__OP_VEC_VEC_FUNC1_ALL_T_DIM(exp2);
__OP_VEC_VEC_FUNC1_ALL_T_DIM(sqrt);

__OP_VEC_VEC_FUNC2_ALL_T_DIM(min);
__OP_VEC_VEC_FUNC2_ALL_T_DIM(max);
// __OP_VEC_VEC_FUNC2_ALL_T_DIM(mod);
__OP_VEC_VEC_FUNC2_ALL_T_DIM(pow);
__OP_VEC_VEC_FUNC2_ALL_T_DIM(step);
// __OP_VEC_VEC_FUNC2_ALL_T_DIM(atan);
__OP_VEC_VEC_FUNC2_ALL_T_DIM(atan2);

__OP_VEC_SCALAR_FUNC2_ALL_T_DIM(min);
__OP_VEC_SCALAR_FUNC2_ALL_T_DIM(max);
// __OP_VEC_SCALAR_FUNC2_ALL_T_DIM(mod);
__OP_VEC_SCALAR_FUNC2_ALL_T_DIM(pow);
__OP_VEC_SCALAR_FUNC2_ALL_T_DIM(step);
// __OP_VEC_SCALAR_FUNC2_ALL_T_DIM(atan);
__OP_VEC_SCALAR_FUNC2_ALL_T_DIM(atan2);

__OP_SCALAR_VEC_FUNC2_ALL_T_DIM(min);
__OP_SCALAR_VEC_FUNC2_ALL_T_DIM(max);
// __OP_SCALAR_VEC_FUNC2_ALL_T_DIM(mod);
__OP_SCALAR_VEC_FUNC2_ALL_T_DIM(pow);
__OP_SCALAR_VEC_FUNC2_ALL_T_DIM(step);
// __OP_SCALAR_VEC_FUNC2_ALL_T_DIM(atan);
__OP_SCALAR_VEC_FUNC2_ALL_T_DIM(atan2);

// __OP_VEC_VEC_FUNC3_ALL_T_DIM(lerp);
__OP_VEC_VEC_FUNC3_ALL_T_DIM(clamp);
// __OP_VEC_VEC_FUNC3_ALL_T_DIM(smoothstep);

#endif