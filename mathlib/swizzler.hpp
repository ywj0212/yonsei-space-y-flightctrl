#ifndef __SPACE_Y_MATHLIB_SWIZZLER__
#define __SPACE_Y_MATHLIB_SWIZZLER__

#include "swizzling.hpp"
#include "vec.hpp"

#undef NULL
#define NULL 0
#define DEFAULT 0

#define __ENCODE_PTR_4(i0, i1, i2, i3) ((i0 & 0b1111) + ((i1 & 0b1111) << (4*1)) + ((i2 & 0b1111) << (4*2)) + ((i3 & 0b1111) << (4*3)))
#define __DECODE_PTR_4(I, i) ((I >> (i*4) & 0b1111))
#define __RESOLVE_SWIZZLER_PTR(ptr) ((ptr == NULL) ? DEFAULT : (*ptr))
#define __SWIZZLER_VALUE(SW, I) (__RESOLVE_SWIZZLER_PTR((SW).getPtrByIndex(I)))

#define __SWIZZLER_SAFE_COPY(src, dst, N) \
  T tmp[N];\
  for(int i = 0; i < N; i++) (tmp)[i] = __SWIZZLER_VALUE(src, i);\
  for(int i = 0; i < N; i++) {\
    T *ptr = ((dst).getPtrByIndex(i));\
    if(ptr != NULL)\
      *ptr = ((tmp)[i]);\
  }

template <class T, int N, int I>
struct swizzler {
  template <int J>  swizzler& operator=(const swizzler<T, N, J> &a) { __SWIZZLER_SAFE_COPY(a, *this, N); return *this; }
                    swizzler& operator=(const vec<T, N> &a) {
                      for(int i = 0; i < N; i++) {
                        T *ptr = (getPtrByIndex(i));
                        if(ptr != NULL)
                          *ptr = a.data[i];
                      }
                      return *this;
                    }

  const T* getPtrByIndex(int i) const { int index = __DECODE_PTR_4(I, i); return (index & 0b1000) ? (T*)NULL : &((T*)this)[index]; }
        T* getPtrByIndex(int i)       { int index = __DECODE_PTR_4(I, i); return (index & 0b1000) ? (T*)NULL : &((T*)this)[index]; }

  operator vec<T, N>() {
    vec<T, N> tmp;
    for(int i = 0; i < N; i++) {
      tmp.data[i] = __SWIZZLER_VALUE(*this, i);
    }
    return tmp;
  }
};

#endif