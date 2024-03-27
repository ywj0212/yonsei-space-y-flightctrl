#ifndef __SPACE_Y_MATHLIB_TUPLE__
#define __SPACE_Y_MATHLIB_TUPLE__

#define NULL 0

inline bool   __tuple_resolve_pointer(bool*   ptr) { return (ptr == NULL) ? false : *ptr; }
inline int    __tuple_resolve_pointer(int*    ptr) { return (ptr == NULL) ? 0     : *ptr; }
inline float  __tuple_resolve_pointer(float*  ptr) { return (ptr == NULL) ? 0.0f  : *ptr; }
inline double __tuple_resolve_pointer(double* ptr) { return (ptr == NULL) ? 0.0   : *ptr; }

#define __TUPLE_1( T, TF ) \
  struct __##T##_tuple_1 { \
    TF x; \
    TF * xPtr; \
    __##T##_tuple_1(TF * _x) : xPtr(_x) { x = __tuple_resolve_pointer(xPtr); } \
    __##T##_tuple_1& operator=(const __##T##_tuple_1 &ref) { \
      TF _x = __tuple_resolve_pointer(ref.xPtr); \
      *xPtr = _x; \
      x = _x; \
      return *this; \
    } \
  }
#define __TUPLE_2( T, TF ) \
  struct __##T##_tuple_2 { \
    TF x; \
    TF y; \
    TF * xPtr; \
    TF * yPtr; \
    __##T##_tuple_2(TF * _x, TF * _y) : xPtr(_x), yPtr(_y) { x = __tuple_resolve_pointer(xPtr); y = __tuple_resolve_pointer(yPtr); } \
    __##T##_tuple_2& operator=(const __##T##_tuple_2 &ref) { \
      TF _x = __tuple_resolve_pointer(ref.xPtr); \
      TF _y = __tuple_resolve_pointer(ref.yPtr); \
      *xPtr = _x; \
      *yPtr = _y; \
      x = _x; \
      y = _y; \
      return *this; \
    } \
  }
#define __TUPLE_3( T, TF ) \
  struct __##T##_tuple_3 { \
    TF x; \
    TF y; \
    TF z; \
    TF * xPtr; \
    TF * yPtr; \
    TF * zPtr; \
    __##T##_tuple_3(TF * _x, TF * _y, TF * _z) : xPtr(_x), yPtr(_y), zPtr(_z) { x = __tuple_resolve_pointer(xPtr); y = __tuple_resolve_pointer(yPtr); z = __tuple_resolve_pointer(zPtr); } \
    __##T##_tuple_3& operator=(const __##T##_tuple_3 &ref) { \
      TF _x = __tuple_resolve_pointer(ref.xPtr); \
      TF _y = __tuple_resolve_pointer(ref.yPtr); \
      TF _z = __tuple_resolve_pointer(ref.zPtr); \
      *xPtr = _x; \
      *yPtr = _y; \
      *zPtr = _z; \
      x = _x; \
      y = _y; \
      z = _z; \
      return *this; \
    } \
  }
#define __TUPLE_4( T, TF ) \
  struct __##T##_tuple_4 { \
    TF x; \
    TF y; \
    TF z; \
    TF w; \
    TF * xPtr; \
    TF * yPtr; \
    TF * zPtr; \
    TF * wPtr; \
    __##T##_tuple_4(TF * _x, TF * _y, TF * _z, TF * _w) : xPtr(_x), yPtr(_y), zPtr(_z), wPtr(_w) { x = __tuple_resolve_pointer(xPtr); y = __tuple_resolve_pointer(yPtr); z = __tuple_resolve_pointer(zPtr); w = __tuple_resolve_pointer(wPtr); } \
    __##T##_tuple_4& operator=(const __##T##_tuple_4 &ref) { \
      TF _x = __tuple_resolve_pointer(ref.xPtr); \
      TF _y = __tuple_resolve_pointer(ref.yPtr); \
      TF _z = __tuple_resolve_pointer(ref.zPtr); \
      TF _w = __tuple_resolve_pointer(ref.wPtr); \
      *xPtr = _x; \
      *yPtr = _y; \
      *zPtr = _z; \
      *wPtr = _w; \
      x = _x; \
      y = _y; \
      z = _z; \
      w = _w; \
      return *this; \
    } \
  }

__TUPLE_1( b, bool );
__TUPLE_1( i, int );
__TUPLE_1( f, float );
__TUPLE_1( d, double );

__TUPLE_2( b, bool );
__TUPLE_2( i, int );
__TUPLE_2( f, float );
__TUPLE_2( d, double );

__TUPLE_3( b, bool );
__TUPLE_3( i, int );
__TUPLE_3( f, float );
__TUPLE_3( d, double );

__TUPLE_4( b, bool );
__TUPLE_4( i, int );
__TUPLE_4( f, float );
__TUPLE_4( d, double );

#endif