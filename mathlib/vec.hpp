#ifndef __SPACE_Y_MATHLIB_VEC__
#define __SPACE_Y_MATHLIB_VEC__

template <class T, int N>
struct vec;
template <class T, int N, int I>
struct swizzler;

#include "swizzling.hpp"
#include "swizzler.hpp"

#pragma region Define Member and Constructor of Vectors
#define __VEC_MEMBER(U, member, N) \
union {\
  U data[N];\
  member\
};

#define __VEC_DEFAULT_CONSTRUCTOR(V, N) \
  vec() {}\
  vec(const vec& ref) {\
    for(int i = 0; i < N; i++) {\
      data[i] = ref.data[i];\
    }\
  }\
  vec(V* arr) {\
    for(int i = 0; i < N; i++) {\
      data[i] = arr[i];\
    }\
  }
#define __VEC_1_MEMBER_W_CONSTRUCTOR(W) \
  __VEC_DEFAULT_CONSTRUCTOR(W, 1)\
  __VEC_MEMBER(\
    W,\
    struct { W x; };\
    struct { W r; };\
    struct { W s; };,\
    1\
  )\
  vec(W _x) { x = _x; }\

#define __VEC_2_MEMBER_W_CONSTRUCTOR(W) \
  __VEC_DEFAULT_CONSTRUCTOR(W, 2)\
  __VEC_MEMBER(\
    W,\
    struct { W x; W y; };\
    struct { W r; W g; };\
    struct { W s; W t; };\
    __VEC2_SWIZZLE(W),\
    2\
  )\
  vec(W _x, W _y) { x = _x; y = _y; }

#define __VEC_3_MEMBER_W_CONSTRUCTOR(W) \
  __VEC_DEFAULT_CONSTRUCTOR(W, 3)\
  __VEC_MEMBER(\
    W,\
    struct { W x; W y; W z; };\
    struct { W r; W g; W b; };\
    struct { W s; W t; W p; };\
    __VEC3_SWIZZLE(W),\
    3\
  )\
  vec(W _x, W _y, W _z) { x = _x; y = _y; z = _z; }

#define __VEC_4_MEMBER_W_CONSTRUCTOR(W) \
  __VEC_DEFAULT_CONSTRUCTOR(W, 4)\
  __VEC_MEMBER(\
    W,\
    struct { W x; W y; W z; W w; };\
    struct { W r; W g; W b; W a; };\
    struct { W s; W t; W p; W q; };\
    __VEC4_SWIZZLE(W),\
    4\
  )\
  vec(W _x, W _y, W _z, W _w) { x = _x; y = _y; z = _z; w = _w; }
#pragma endregion
#pragma region Definition of Vectors
template <class T, int N>
struct vec {
  __VEC_MEMBER(T, , N)
  __VEC_DEFAULT_CONSTRUCTOR(T, N)
};
template <int N>
struct vec<bool, N> {
  __VEC_MEMBER(bool, , N)
  __VEC_DEFAULT_CONSTRUCTOR(bool, N)
};

template <class T>
struct vec<T, 1> {
  __VEC_1_MEMBER_W_CONSTRUCTOR(T)
};
template <class T>
struct vec<T, 2> {
  __VEC_2_MEMBER_W_CONSTRUCTOR(T)
  
  static const vec up;
  static const vec down;
  static const vec left;
  static const vec right;
  static const vec zero;
  static const vec one;

  static const vec e1;
  static const vec e2;
};
template <class T>
struct vec<T, 3> {
  __VEC_3_MEMBER_W_CONSTRUCTOR(T)

  static const vec up;
  static const vec down;
  static const vec left;
  static const vec right;
  static const vec forward;
  static const vec back;
  static const vec zero;
  static const vec one;

  static const vec e1;
  static const vec e2;
  static const vec e3;
};
template <class T>
struct vec<T, 4> {
  __VEC_4_MEMBER_W_CONSTRUCTOR(T)

  static const vec e1;
  static const vec e2;
  static const vec e3;
  static const vec e4;
};

template <>
struct vec<bool, 1> {
  __VEC_1_MEMBER_W_CONSTRUCTOR(bool)
  static const vec T;
  static const vec F;
};
template <>
struct vec<bool, 2> {
  __VEC_2_MEMBER_W_CONSTRUCTOR(bool)
  static const vec T;
  static const vec F;
};
template <>
struct vec<bool, 3> {
  __VEC_3_MEMBER_W_CONSTRUCTOR(bool)
  static const vec T;
  static const vec F;
};
template <>
struct vec<bool, 4> {
  __VEC_4_MEMBER_W_CONSTRUCTOR(bool)
  static const vec T;
  static const vec F;
};
#pragma endregion

typedef vec<bool, 1> bvec1;
typedef vec<bool, 2> bvec2;
typedef vec<bool, 3> bvec3;
typedef vec<bool, 4> bvec4;
typedef vec<int, 1> ivec1;
typedef vec<int, 2> ivec2;
typedef vec<int, 3> ivec3;
typedef vec<int, 4> ivec4;
typedef vec<float, 1> fvec1;
typedef vec<float, 1> vec1;
typedef vec<float, 2> fvec2;
typedef vec<float, 2> vec2;
typedef vec<float, 3> fvec3;
typedef vec<float, 3> vec3;
typedef vec<float, 4> fvec4;
typedef vec<float, 4> vec4;
typedef vec<double, 1> dvec1;
typedef vec<double, 2> dvec2;
typedef vec<double, 3> dvec3;
typedef vec<double, 4> dvec4;

template <class T> const vec<T, 2> vec<T, 2>::up      = vec<T, 2>(0, 1);
template <class T> const vec<T, 2> vec<T, 2>::down    = vec<T, 2>(0, -1);
template <class T> const vec<T, 2> vec<T, 2>::left    = vec<T, 2>(-1, 0);
template <class T> const vec<T, 2> vec<T, 2>::right   = vec<T, 2>(1, 0);
template <class T> const vec<T, 2> vec<T, 2>::zero    = vec<T, 2>(0, 0);
template <class T> const vec<T, 2> vec<T, 2>::one     = vec<T, 2>(1, 1);
template <class T> const vec<T, 2> vec<T, 2>::e1      = vec<T, 2>(1, 0);
template <class T> const vec<T, 2> vec<T, 2>::e2      = vec<T, 2>(0, 1);

template <class T> const vec<T, 3> vec<T, 3>::up      = vec<T, 3>(0, 1, 0);
template <class T> const vec<T, 3> vec<T, 3>::down    = vec<T, 3>(0, -1, 0);
template <class T> const vec<T, 3> vec<T, 3>::left    = vec<T, 3>(-1, 0, 0);
template <class T> const vec<T, 3> vec<T, 3>::right   = vec<T, 3>(1, 0, 0);
template <class T> const vec<T, 3> vec<T, 3>::forward = vec<T, 3>(0, 0, 1);
template <class T> const vec<T, 3> vec<T, 3>::back    = vec<T, 3>(0, 0, -1);
template <class T> const vec<T, 3> vec<T, 3>::zero    = vec<T, 3>(0, 0, 0);
template <class T> const vec<T, 3> vec<T, 3>::one     = vec<T, 3>(1, 1, 1);
template <class T> const vec<T, 3> vec<T, 3>::e1      = vec<T, 3>(1, 0, 0);
template <class T> const vec<T, 3> vec<T, 3>::e2      = vec<T, 3>(0, 1, 0);
template <class T> const vec<T, 3> vec<T, 3>::e3      = vec<T, 3>(0, 0, 1);

template <class T> const vec<T, 4> vec<T, 4>::e1      = vec<T, 4>(1, 0, 0, 0);
template <class T> const vec<T, 4> vec<T, 4>::e2      = vec<T, 4>(0, 1, 0, 0);
template <class T> const vec<T, 4> vec<T, 4>::e3      = vec<T, 4>(0, 0, 1, 0);
template <class T> const vec<T, 4> vec<T, 4>::e4      = vec<T, 4>(0, 0, 0, 1);

const vec<bool, 1> vec<bool, 1>::F        = vec<bool, 1>(false);
const vec<bool, 2> vec<bool, 2>::F        = vec<bool, 2>(false, false);
const vec<bool, 3> vec<bool, 3>::F        = vec<bool, 3>(false, false, false);
const vec<bool, 4> vec<bool, 4>::F        = vec<bool, 4>(false, false, false, false);
const vec<bool, 1> vec<bool, 1>::T        = vec<bool, 1>(true);
const vec<bool, 2> vec<bool, 2>::T        = vec<bool, 2>(true, true);
const vec<bool, 3> vec<bool, 3>::T        = vec<bool, 3>(true, true, true);
const vec<bool, 4> vec<bool, 4>::T        = vec<bool, 4>(true, true, true, true);

#include "vec_operations.hpp"

#endif