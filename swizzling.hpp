#ifndef __SPACE_Y_MATHLIB_SWIZZLING__
#define __SPACE_Y_MATHLIB_SWIZZLING__

#include "tuple.hpp"

#define __VEC2_SWIZZLE( T ) \
    /* Swizzler Getter Function(`xx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_2( x, x )` */ \
    __##T##_tuple_2 __xx() { return __##T##_tuple_2( x, x ); } \
    /* Swizzler Getter Function(`yx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_2( y, x )` */ \
    __##T##_tuple_2 __yx() { return __##T##_tuple_2( y, x ); } \
    /* Swizzler Getter Function(`xy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_2( x, y )` */ \
    __##T##_tuple_2 __xy() { return __##T##_tuple_2( x, y ); } \
    /* Swizzler Getter Function(`yy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_2( y, y )` */ \
    __##T##_tuple_2 __yy() { return __##T##_tuple_2( y, y ); } \
    /* Swizzler Getter Function(`xxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( x, x, x )` */ \
    __##T##_tuple_3 __xxx() { return __##T##_tuple_3( x, x, x ); } \
    /* Swizzler Getter Function(`yxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( y, x, x )` */ \
    __##T##_tuple_3 __yxx() { return __##T##_tuple_3( y, x, x ); } \
    /* Swizzler Getter Function(`xyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( x, y, x )` */ \
    __##T##_tuple_3 __xyx() { return __##T##_tuple_3( x, y, x ); } \
    /* Swizzler Getter Function(`yyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( y, y, x )` */ \
    __##T##_tuple_3 __yyx() { return __##T##_tuple_3( y, y, x ); } \
    /* Swizzler Getter Function(`xxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( x, x, y )` */ \
    __##T##_tuple_3 __xxy() { return __##T##_tuple_3( x, x, y ); } \
    /* Swizzler Getter Function(`yxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( y, x, y )` */ \
    __##T##_tuple_3 __yxy() { return __##T##_tuple_3( y, x, y ); } \
    /* Swizzler Getter Function(`xyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( x, y, y )` */ \
    __##T##_tuple_3 __xyy() { return __##T##_tuple_3( x, y, y ); } \
    /* Swizzler Getter Function(`yyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( y, y, y )` */ \
    __##T##_tuple_3 __yyy() { return __##T##_tuple_3( y, y, y ); } \
    /* Swizzler Getter Function(`xxxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, x, x, x )` */ \
    __##T##_tuple_4 __xxxx() { return __##T##_tuple_4( x, x, x, x ); } \
    /* Swizzler Getter Function(`yxxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, x, x, x )` */ \
    __##T##_tuple_4 __yxxx() { return __##T##_tuple_4( y, x, x, x ); } \
    /* Swizzler Getter Function(`xyxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, y, x, x )` */ \
    __##T##_tuple_4 __xyxx() { return __##T##_tuple_4( x, y, x, x ); } \
    /* Swizzler Getter Function(`yyxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, y, x, x )` */ \
    __##T##_tuple_4 __yyxx() { return __##T##_tuple_4( y, y, x, x ); } \
    /* Swizzler Getter Function(`xxyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, x, y, x )` */ \
    __##T##_tuple_4 __xxyx() { return __##T##_tuple_4( x, x, y, x ); } \
    /* Swizzler Getter Function(`yxyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, x, y, x )` */ \
    __##T##_tuple_4 __yxyx() { return __##T##_tuple_4( y, x, y, x ); } \
    /* Swizzler Getter Function(`xyyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, y, y, x )` */ \
    __##T##_tuple_4 __xyyx() { return __##T##_tuple_4( x, y, y, x ); } \
    /* Swizzler Getter Function(`yyyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, y, y, x )` */ \
    __##T##_tuple_4 __yyyx() { return __##T##_tuple_4( y, y, y, x ); } \
    /* Swizzler Getter Function(`xxxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, x, x, y )` */ \
    __##T##_tuple_4 __xxxy() { return __##T##_tuple_4( x, x, x, y ); } \
    /* Swizzler Getter Function(`yxxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, x, x, y )` */ \
    __##T##_tuple_4 __yxxy() { return __##T##_tuple_4( y, x, x, y ); } \
    /* Swizzler Getter Function(`xyxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, y, x, y )` */ \
    __##T##_tuple_4 __xyxy() { return __##T##_tuple_4( x, y, x, y ); } \
    /* Swizzler Getter Function(`yyxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, y, x, y )` */ \
    __##T##_tuple_4 __yyxy() { return __##T##_tuple_4( y, y, x, y ); } \
    /* Swizzler Getter Function(`xxyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, x, y, y )` */ \
    __##T##_tuple_4 __xxyy() { return __##T##_tuple_4( x, x, y, y ); } \
    /* Swizzler Getter Function(`yxyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, x, y, y )` */ \
    __##T##_tuple_4 __yxyy() { return __##T##_tuple_4( y, x, y, y ); } \
    /* Swizzler Getter Function(`xyyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, y, y, y )` */ \
    __##T##_tuple_4 __xyyy() { return __##T##_tuple_4( x, y, y, y ); } \
    /* Swizzler Getter Function(`yyyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, y, y, y )` */ \
    __##T##_tuple_4 __yyyy() { return __##T##_tuple_4( y, y, y, y ); } \


#define __VEC3_SWIZZLE( T ) \
    /* Swizzler Getter Function(`xx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_2( x, x )` */ \
    __##T##_tuple_2 __xx() { return __##T##_tuple_2( x, x ); } \
    /* Swizzler Getter Function(`yx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_2( y, x )` */ \
    __##T##_tuple_2 __yx() { return __##T##_tuple_2( y, x ); } \
    /* Swizzler Getter Function(`zx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_2( z, x )` */ \
    __##T##_tuple_2 __zx() { return __##T##_tuple_2( z, x ); } \
    /* Swizzler Getter Function(`xy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_2( x, y )` */ \
    __##T##_tuple_2 __xy() { return __##T##_tuple_2( x, y ); } \
    /* Swizzler Getter Function(`yy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_2( y, y )` */ \
    __##T##_tuple_2 __yy() { return __##T##_tuple_2( y, y ); } \
    /* Swizzler Getter Function(`zy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_2( z, y )` */ \
    __##T##_tuple_2 __zy() { return __##T##_tuple_2( z, y ); } \
    /* Swizzler Getter Function(`xz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_2( x, z )` */ \
    __##T##_tuple_2 __xz() { return __##T##_tuple_2( x, z ); } \
    /* Swizzler Getter Function(`yz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_2( y, z )` */ \
    __##T##_tuple_2 __yz() { return __##T##_tuple_2( y, z ); } \
    /* Swizzler Getter Function(`zz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_2( z, z )` */ \
    __##T##_tuple_2 __zz() { return __##T##_tuple_2( z, z ); } \
    /* Swizzler Getter Function(`xxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( x, x, x )` */ \
    __##T##_tuple_3 __xxx() { return __##T##_tuple_3( x, x, x ); } \
    /* Swizzler Getter Function(`yxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( y, x, x )` */ \
    __##T##_tuple_3 __yxx() { return __##T##_tuple_3( y, x, x ); } \
    /* Swizzler Getter Function(`zxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( z, x, x )` */ \
    __##T##_tuple_3 __zxx() { return __##T##_tuple_3( z, x, x ); } \
    /* Swizzler Getter Function(`xyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( x, y, x )` */ \
    __##T##_tuple_3 __xyx() { return __##T##_tuple_3( x, y, x ); } \
    /* Swizzler Getter Function(`yyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( y, y, x )` */ \
    __##T##_tuple_3 __yyx() { return __##T##_tuple_3( y, y, x ); } \
    /* Swizzler Getter Function(`zyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( z, y, x )` */ \
    __##T##_tuple_3 __zyx() { return __##T##_tuple_3( z, y, x ); } \
    /* Swizzler Getter Function(`xzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( x, z, x )` */ \
    __##T##_tuple_3 __xzx() { return __##T##_tuple_3( x, z, x ); } \
    /* Swizzler Getter Function(`yzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( y, z, x )` */ \
    __##T##_tuple_3 __yzx() { return __##T##_tuple_3( y, z, x ); } \
    /* Swizzler Getter Function(`zzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( z, z, x )` */ \
    __##T##_tuple_3 __zzx() { return __##T##_tuple_3( z, z, x ); } \
    /* Swizzler Getter Function(`xxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( x, x, y )` */ \
    __##T##_tuple_3 __xxy() { return __##T##_tuple_3( x, x, y ); } \
    /* Swizzler Getter Function(`yxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( y, x, y )` */ \
    __##T##_tuple_3 __yxy() { return __##T##_tuple_3( y, x, y ); } \
    /* Swizzler Getter Function(`zxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( z, x, y )` */ \
    __##T##_tuple_3 __zxy() { return __##T##_tuple_3( z, x, y ); } \
    /* Swizzler Getter Function(`xyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( x, y, y )` */ \
    __##T##_tuple_3 __xyy() { return __##T##_tuple_3( x, y, y ); } \
    /* Swizzler Getter Function(`yyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( y, y, y )` */ \
    __##T##_tuple_3 __yyy() { return __##T##_tuple_3( y, y, y ); } \
    /* Swizzler Getter Function(`zyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( z, y, y )` */ \
    __##T##_tuple_3 __zyy() { return __##T##_tuple_3( z, y, y ); } \
    /* Swizzler Getter Function(`xzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( x, z, y )` */ \
    __##T##_tuple_3 __xzy() { return __##T##_tuple_3( x, z, y ); } \
    /* Swizzler Getter Function(`yzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( y, z, y )` */ \
    __##T##_tuple_3 __yzy() { return __##T##_tuple_3( y, z, y ); } \
    /* Swizzler Getter Function(`zzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( z, z, y )` */ \
    __##T##_tuple_3 __zzy() { return __##T##_tuple_3( z, z, y ); } \
    /* Swizzler Getter Function(`xxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( x, x, z )` */ \
    __##T##_tuple_3 __xxz() { return __##T##_tuple_3( x, x, z ); } \
    /* Swizzler Getter Function(`yxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( y, x, z )` */ \
    __##T##_tuple_3 __yxz() { return __##T##_tuple_3( y, x, z ); } \
    /* Swizzler Getter Function(`zxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( z, x, z )` */ \
    __##T##_tuple_3 __zxz() { return __##T##_tuple_3( z, x, z ); } \
    /* Swizzler Getter Function(`xyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( x, y, z )` */ \
    __##T##_tuple_3 __xyz() { return __##T##_tuple_3( x, y, z ); } \
    /* Swizzler Getter Function(`yyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( y, y, z )` */ \
    __##T##_tuple_3 __yyz() { return __##T##_tuple_3( y, y, z ); } \
    /* Swizzler Getter Function(`zyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( z, y, z )` */ \
    __##T##_tuple_3 __zyz() { return __##T##_tuple_3( z, y, z ); } \
    /* Swizzler Getter Function(`xzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( x, z, z )` */ \
    __##T##_tuple_3 __xzz() { return __##T##_tuple_3( x, z, z ); } \
    /* Swizzler Getter Function(`yzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( y, z, z )` */ \
    __##T##_tuple_3 __yzz() { return __##T##_tuple_3( y, z, z ); } \
    /* Swizzler Getter Function(`zzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( z, z, z )` */ \
    __##T##_tuple_3 __zzz() { return __##T##_tuple_3( z, z, z ); } \
    /* Swizzler Getter Function(`xxxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, x, x, x )` */ \
    __##T##_tuple_4 __xxxx() { return __##T##_tuple_4( x, x, x, x ); } \
    /* Swizzler Getter Function(`yxxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, x, x, x )` */ \
    __##T##_tuple_4 __yxxx() { return __##T##_tuple_4( y, x, x, x ); } \
    /* Swizzler Getter Function(`zxxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, x, x, x )` */ \
    __##T##_tuple_4 __zxxx() { return __##T##_tuple_4( z, x, x, x ); } \
    /* Swizzler Getter Function(`xyxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, y, x, x )` */ \
    __##T##_tuple_4 __xyxx() { return __##T##_tuple_4( x, y, x, x ); } \
    /* Swizzler Getter Function(`yyxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, y, x, x )` */ \
    __##T##_tuple_4 __yyxx() { return __##T##_tuple_4( y, y, x, x ); } \
    /* Swizzler Getter Function(`zyxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, y, x, x )` */ \
    __##T##_tuple_4 __zyxx() { return __##T##_tuple_4( z, y, x, x ); } \
    /* Swizzler Getter Function(`xzxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, z, x, x )` */ \
    __##T##_tuple_4 __xzxx() { return __##T##_tuple_4( x, z, x, x ); } \
    /* Swizzler Getter Function(`yzxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, z, x, x )` */ \
    __##T##_tuple_4 __yzxx() { return __##T##_tuple_4( y, z, x, x ); } \
    /* Swizzler Getter Function(`zzxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, z, x, x )` */ \
    __##T##_tuple_4 __zzxx() { return __##T##_tuple_4( z, z, x, x ); } \
    /* Swizzler Getter Function(`xxyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, x, y, x )` */ \
    __##T##_tuple_4 __xxyx() { return __##T##_tuple_4( x, x, y, x ); } \
    /* Swizzler Getter Function(`yxyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, x, y, x )` */ \
    __##T##_tuple_4 __yxyx() { return __##T##_tuple_4( y, x, y, x ); } \
    /* Swizzler Getter Function(`zxyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, x, y, x )` */ \
    __##T##_tuple_4 __zxyx() { return __##T##_tuple_4( z, x, y, x ); } \
    /* Swizzler Getter Function(`xyyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, y, y, x )` */ \
    __##T##_tuple_4 __xyyx() { return __##T##_tuple_4( x, y, y, x ); } \
    /* Swizzler Getter Function(`yyyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, y, y, x )` */ \
    __##T##_tuple_4 __yyyx() { return __##T##_tuple_4( y, y, y, x ); } \
    /* Swizzler Getter Function(`zyyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, y, y, x )` */ \
    __##T##_tuple_4 __zyyx() { return __##T##_tuple_4( z, y, y, x ); } \
    /* Swizzler Getter Function(`xzyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, z, y, x )` */ \
    __##T##_tuple_4 __xzyx() { return __##T##_tuple_4( x, z, y, x ); } \
    /* Swizzler Getter Function(`yzyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, z, y, x )` */ \
    __##T##_tuple_4 __yzyx() { return __##T##_tuple_4( y, z, y, x ); } \
    /* Swizzler Getter Function(`zzyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, z, y, x )` */ \
    __##T##_tuple_4 __zzyx() { return __##T##_tuple_4( z, z, y, x ); } \
    /* Swizzler Getter Function(`xxzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, x, z, x )` */ \
    __##T##_tuple_4 __xxzx() { return __##T##_tuple_4( x, x, z, x ); } \
    /* Swizzler Getter Function(`yxzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, x, z, x )` */ \
    __##T##_tuple_4 __yxzx() { return __##T##_tuple_4( y, x, z, x ); } \
    /* Swizzler Getter Function(`zxzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, x, z, x )` */ \
    __##T##_tuple_4 __zxzx() { return __##T##_tuple_4( z, x, z, x ); } \
    /* Swizzler Getter Function(`xyzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, y, z, x )` */ \
    __##T##_tuple_4 __xyzx() { return __##T##_tuple_4( x, y, z, x ); } \
    /* Swizzler Getter Function(`yyzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, y, z, x )` */ \
    __##T##_tuple_4 __yyzx() { return __##T##_tuple_4( y, y, z, x ); } \
    /* Swizzler Getter Function(`zyzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, y, z, x )` */ \
    __##T##_tuple_4 __zyzx() { return __##T##_tuple_4( z, y, z, x ); } \
    /* Swizzler Getter Function(`xzzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, z, z, x )` */ \
    __##T##_tuple_4 __xzzx() { return __##T##_tuple_4( x, z, z, x ); } \
    /* Swizzler Getter Function(`yzzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, z, z, x )` */ \
    __##T##_tuple_4 __yzzx() { return __##T##_tuple_4( y, z, z, x ); } \
    /* Swizzler Getter Function(`zzzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, z, z, x )` */ \
    __##T##_tuple_4 __zzzx() { return __##T##_tuple_4( z, z, z, x ); } \
    /* Swizzler Getter Function(`xxxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, x, x, y )` */ \
    __##T##_tuple_4 __xxxy() { return __##T##_tuple_4( x, x, x, y ); } \
    /* Swizzler Getter Function(`yxxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, x, x, y )` */ \
    __##T##_tuple_4 __yxxy() { return __##T##_tuple_4( y, x, x, y ); } \
    /* Swizzler Getter Function(`zxxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, x, x, y )` */ \
    __##T##_tuple_4 __zxxy() { return __##T##_tuple_4( z, x, x, y ); } \
    /* Swizzler Getter Function(`xyxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, y, x, y )` */ \
    __##T##_tuple_4 __xyxy() { return __##T##_tuple_4( x, y, x, y ); } \
    /* Swizzler Getter Function(`yyxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, y, x, y )` */ \
    __##T##_tuple_4 __yyxy() { return __##T##_tuple_4( y, y, x, y ); } \
    /* Swizzler Getter Function(`zyxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, y, x, y )` */ \
    __##T##_tuple_4 __zyxy() { return __##T##_tuple_4( z, y, x, y ); } \
    /* Swizzler Getter Function(`xzxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, z, x, y )` */ \
    __##T##_tuple_4 __xzxy() { return __##T##_tuple_4( x, z, x, y ); } \
    /* Swizzler Getter Function(`yzxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, z, x, y )` */ \
    __##T##_tuple_4 __yzxy() { return __##T##_tuple_4( y, z, x, y ); } \
    /* Swizzler Getter Function(`zzxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, z, x, y )` */ \
    __##T##_tuple_4 __zzxy() { return __##T##_tuple_4( z, z, x, y ); } \
    /* Swizzler Getter Function(`xxyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, x, y, y )` */ \
    __##T##_tuple_4 __xxyy() { return __##T##_tuple_4( x, x, y, y ); } \
    /* Swizzler Getter Function(`yxyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, x, y, y )` */ \
    __##T##_tuple_4 __yxyy() { return __##T##_tuple_4( y, x, y, y ); } \
    /* Swizzler Getter Function(`zxyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, x, y, y )` */ \
    __##T##_tuple_4 __zxyy() { return __##T##_tuple_4( z, x, y, y ); } \
    /* Swizzler Getter Function(`xyyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, y, y, y )` */ \
    __##T##_tuple_4 __xyyy() { return __##T##_tuple_4( x, y, y, y ); } \
    /* Swizzler Getter Function(`yyyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, y, y, y )` */ \
    __##T##_tuple_4 __yyyy() { return __##T##_tuple_4( y, y, y, y ); } \
    /* Swizzler Getter Function(`zyyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, y, y, y )` */ \
    __##T##_tuple_4 __zyyy() { return __##T##_tuple_4( z, y, y, y ); } \
    /* Swizzler Getter Function(`xzyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, z, y, y )` */ \
    __##T##_tuple_4 __xzyy() { return __##T##_tuple_4( x, z, y, y ); } \
    /* Swizzler Getter Function(`yzyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, z, y, y )` */ \
    __##T##_tuple_4 __yzyy() { return __##T##_tuple_4( y, z, y, y ); } \
    /* Swizzler Getter Function(`zzyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, z, y, y )` */ \
    __##T##_tuple_4 __zzyy() { return __##T##_tuple_4( z, z, y, y ); } \
    /* Swizzler Getter Function(`xxzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, x, z, y )` */ \
    __##T##_tuple_4 __xxzy() { return __##T##_tuple_4( x, x, z, y ); } \
    /* Swizzler Getter Function(`yxzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, x, z, y )` */ \
    __##T##_tuple_4 __yxzy() { return __##T##_tuple_4( y, x, z, y ); } \
    /* Swizzler Getter Function(`zxzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, x, z, y )` */ \
    __##T##_tuple_4 __zxzy() { return __##T##_tuple_4( z, x, z, y ); } \
    /* Swizzler Getter Function(`xyzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, y, z, y )` */ \
    __##T##_tuple_4 __xyzy() { return __##T##_tuple_4( x, y, z, y ); } \
    /* Swizzler Getter Function(`yyzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, y, z, y )` */ \
    __##T##_tuple_4 __yyzy() { return __##T##_tuple_4( y, y, z, y ); } \
    /* Swizzler Getter Function(`zyzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, y, z, y )` */ \
    __##T##_tuple_4 __zyzy() { return __##T##_tuple_4( z, y, z, y ); } \
    /* Swizzler Getter Function(`xzzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, z, z, y )` */ \
    __##T##_tuple_4 __xzzy() { return __##T##_tuple_4( x, z, z, y ); } \
    /* Swizzler Getter Function(`yzzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, z, z, y )` */ \
    __##T##_tuple_4 __yzzy() { return __##T##_tuple_4( y, z, z, y ); } \
    /* Swizzler Getter Function(`zzzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, z, z, y )` */ \
    __##T##_tuple_4 __zzzy() { return __##T##_tuple_4( z, z, z, y ); } \
    /* Swizzler Getter Function(`xxxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, x, x, z )` */ \
    __##T##_tuple_4 __xxxz() { return __##T##_tuple_4( x, x, x, z ); } \
    /* Swizzler Getter Function(`yxxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, x, x, z )` */ \
    __##T##_tuple_4 __yxxz() { return __##T##_tuple_4( y, x, x, z ); } \
    /* Swizzler Getter Function(`zxxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, x, x, z )` */ \
    __##T##_tuple_4 __zxxz() { return __##T##_tuple_4( z, x, x, z ); } \
    /* Swizzler Getter Function(`xyxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, y, x, z )` */ \
    __##T##_tuple_4 __xyxz() { return __##T##_tuple_4( x, y, x, z ); } \
    /* Swizzler Getter Function(`yyxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, y, x, z )` */ \
    __##T##_tuple_4 __yyxz() { return __##T##_tuple_4( y, y, x, z ); } \
    /* Swizzler Getter Function(`zyxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, y, x, z )` */ \
    __##T##_tuple_4 __zyxz() { return __##T##_tuple_4( z, y, x, z ); } \
    /* Swizzler Getter Function(`xzxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, z, x, z )` */ \
    __##T##_tuple_4 __xzxz() { return __##T##_tuple_4( x, z, x, z ); } \
    /* Swizzler Getter Function(`yzxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, z, x, z )` */ \
    __##T##_tuple_4 __yzxz() { return __##T##_tuple_4( y, z, x, z ); } \
    /* Swizzler Getter Function(`zzxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, z, x, z )` */ \
    __##T##_tuple_4 __zzxz() { return __##T##_tuple_4( z, z, x, z ); } \
    /* Swizzler Getter Function(`xxyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, x, y, z )` */ \
    __##T##_tuple_4 __xxyz() { return __##T##_tuple_4( x, x, y, z ); } \
    /* Swizzler Getter Function(`yxyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, x, y, z )` */ \
    __##T##_tuple_4 __yxyz() { return __##T##_tuple_4( y, x, y, z ); } \
    /* Swizzler Getter Function(`zxyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, x, y, z )` */ \
    __##T##_tuple_4 __zxyz() { return __##T##_tuple_4( z, x, y, z ); } \
    /* Swizzler Getter Function(`xyyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, y, y, z )` */ \
    __##T##_tuple_4 __xyyz() { return __##T##_tuple_4( x, y, y, z ); } \
    /* Swizzler Getter Function(`yyyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, y, y, z )` */ \
    __##T##_tuple_4 __yyyz() { return __##T##_tuple_4( y, y, y, z ); } \
    /* Swizzler Getter Function(`zyyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, y, y, z )` */ \
    __##T##_tuple_4 __zyyz() { return __##T##_tuple_4( z, y, y, z ); } \
    /* Swizzler Getter Function(`xzyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, z, y, z )` */ \
    __##T##_tuple_4 __xzyz() { return __##T##_tuple_4( x, z, y, z ); } \
    /* Swizzler Getter Function(`yzyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, z, y, z )` */ \
    __##T##_tuple_4 __yzyz() { return __##T##_tuple_4( y, z, y, z ); } \
    /* Swizzler Getter Function(`zzyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, z, y, z )` */ \
    __##T##_tuple_4 __zzyz() { return __##T##_tuple_4( z, z, y, z ); } \
    /* Swizzler Getter Function(`xxzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, x, z, z )` */ \
    __##T##_tuple_4 __xxzz() { return __##T##_tuple_4( x, x, z, z ); } \
    /* Swizzler Getter Function(`yxzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, x, z, z )` */ \
    __##T##_tuple_4 __yxzz() { return __##T##_tuple_4( y, x, z, z ); } \
    /* Swizzler Getter Function(`zxzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, x, z, z )` */ \
    __##T##_tuple_4 __zxzz() { return __##T##_tuple_4( z, x, z, z ); } \
    /* Swizzler Getter Function(`xyzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, y, z, z )` */ \
    __##T##_tuple_4 __xyzz() { return __##T##_tuple_4( x, y, z, z ); } \
    /* Swizzler Getter Function(`yyzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, y, z, z )` */ \
    __##T##_tuple_4 __yyzz() { return __##T##_tuple_4( y, y, z, z ); } \
    /* Swizzler Getter Function(`zyzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, y, z, z )` */ \
    __##T##_tuple_4 __zyzz() { return __##T##_tuple_4( z, y, z, z ); } \
    /* Swizzler Getter Function(`xzzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, z, z, z )` */ \
    __##T##_tuple_4 __xzzz() { return __##T##_tuple_4( x, z, z, z ); } \
    /* Swizzler Getter Function(`yzzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, z, z, z )` */ \
    __##T##_tuple_4 __yzzz() { return __##T##_tuple_4( y, z, z, z ); } \
    /* Swizzler Getter Function(`zzzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, z, z, z )` */ \
    __##T##_tuple_4 __zzzz() { return __##T##_tuple_4( z, z, z, z ); } \


#define __VEC4_SWIZZLE( T ) \
    /* Swizzler Getter Function(`xx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_2( x, x )` */ \
    __##T##_tuple_2 __xx() { return __##T##_tuple_2( x, x ); } \
    /* Swizzler Getter Function(`yx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_2( y, x )` */ \
    __##T##_tuple_2 __yx() { return __##T##_tuple_2( y, x ); } \
    /* Swizzler Getter Function(`zx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_2( z, x )` */ \
    __##T##_tuple_2 __zx() { return __##T##_tuple_2( z, x ); } \
    /* Swizzler Getter Function(`wx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_2( w, x )` */ \
    __##T##_tuple_2 __wx() { return __##T##_tuple_2( w, x ); } \
    /* Swizzler Getter Function(`xy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_2( x, y )` */ \
    __##T##_tuple_2 __xy() { return __##T##_tuple_2( x, y ); } \
    /* Swizzler Getter Function(`yy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_2( y, y )` */ \
    __##T##_tuple_2 __yy() { return __##T##_tuple_2( y, y ); } \
    /* Swizzler Getter Function(`zy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_2( z, y )` */ \
    __##T##_tuple_2 __zy() { return __##T##_tuple_2( z, y ); } \
    /* Swizzler Getter Function(`wy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_2( w, y )` */ \
    __##T##_tuple_2 __wy() { return __##T##_tuple_2( w, y ); } \
    /* Swizzler Getter Function(`xz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_2( x, z )` */ \
    __##T##_tuple_2 __xz() { return __##T##_tuple_2( x, z ); } \
    /* Swizzler Getter Function(`yz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_2( y, z )` */ \
    __##T##_tuple_2 __yz() { return __##T##_tuple_2( y, z ); } \
    /* Swizzler Getter Function(`zz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_2( z, z )` */ \
    __##T##_tuple_2 __zz() { return __##T##_tuple_2( z, z ); } \
    /* Swizzler Getter Function(`wz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_2( w, z )` */ \
    __##T##_tuple_2 __wz() { return __##T##_tuple_2( w, z ); } \
    /* Swizzler Getter Function(`xw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_2( x, w )` */ \
    __##T##_tuple_2 __xw() { return __##T##_tuple_2( x, w ); } \
    /* Swizzler Getter Function(`yw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_2( y, w )` */ \
    __##T##_tuple_2 __yw() { return __##T##_tuple_2( y, w ); } \
    /* Swizzler Getter Function(`zw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_2( z, w )` */ \
    __##T##_tuple_2 __zw() { return __##T##_tuple_2( z, w ); } \
    /* Swizzler Getter Function(`ww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_2( w, w )` */ \
    __##T##_tuple_2 __ww() { return __##T##_tuple_2( w, w ); } \
    /* Swizzler Getter Function(`xxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( x, x, x )` */ \
    __##T##_tuple_3 __xxx() { return __##T##_tuple_3( x, x, x ); } \
    /* Swizzler Getter Function(`yxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( y, x, x )` */ \
    __##T##_tuple_3 __yxx() { return __##T##_tuple_3( y, x, x ); } \
    /* Swizzler Getter Function(`zxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( z, x, x )` */ \
    __##T##_tuple_3 __zxx() { return __##T##_tuple_3( z, x, x ); } \
    /* Swizzler Getter Function(`wxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( w, x, x )` */ \
    __##T##_tuple_3 __wxx() { return __##T##_tuple_3( w, x, x ); } \
    /* Swizzler Getter Function(`xyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( x, y, x )` */ \
    __##T##_tuple_3 __xyx() { return __##T##_tuple_3( x, y, x ); } \
    /* Swizzler Getter Function(`yyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( y, y, x )` */ \
    __##T##_tuple_3 __yyx() { return __##T##_tuple_3( y, y, x ); } \
    /* Swizzler Getter Function(`zyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( z, y, x )` */ \
    __##T##_tuple_3 __zyx() { return __##T##_tuple_3( z, y, x ); } \
    /* Swizzler Getter Function(`wyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( w, y, x )` */ \
    __##T##_tuple_3 __wyx() { return __##T##_tuple_3( w, y, x ); } \
    /* Swizzler Getter Function(`xzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( x, z, x )` */ \
    __##T##_tuple_3 __xzx() { return __##T##_tuple_3( x, z, x ); } \
    /* Swizzler Getter Function(`yzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( y, z, x )` */ \
    __##T##_tuple_3 __yzx() { return __##T##_tuple_3( y, z, x ); } \
    /* Swizzler Getter Function(`zzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( z, z, x )` */ \
    __##T##_tuple_3 __zzx() { return __##T##_tuple_3( z, z, x ); } \
    /* Swizzler Getter Function(`wzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( w, z, x )` */ \
    __##T##_tuple_3 __wzx() { return __##T##_tuple_3( w, z, x ); } \
    /* Swizzler Getter Function(`xwx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( x, w, x )` */ \
    __##T##_tuple_3 __xwx() { return __##T##_tuple_3( x, w, x ); } \
    /* Swizzler Getter Function(`ywx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( y, w, x )` */ \
    __##T##_tuple_3 __ywx() { return __##T##_tuple_3( y, w, x ); } \
    /* Swizzler Getter Function(`zwx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( z, w, x )` */ \
    __##T##_tuple_3 __zwx() { return __##T##_tuple_3( z, w, x ); } \
    /* Swizzler Getter Function(`wwx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( w, w, x )` */ \
    __##T##_tuple_3 __wwx() { return __##T##_tuple_3( w, w, x ); } \
    /* Swizzler Getter Function(`xxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( x, x, y )` */ \
    __##T##_tuple_3 __xxy() { return __##T##_tuple_3( x, x, y ); } \
    /* Swizzler Getter Function(`yxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( y, x, y )` */ \
    __##T##_tuple_3 __yxy() { return __##T##_tuple_3( y, x, y ); } \
    /* Swizzler Getter Function(`zxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( z, x, y )` */ \
    __##T##_tuple_3 __zxy() { return __##T##_tuple_3( z, x, y ); } \
    /* Swizzler Getter Function(`wxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( w, x, y )` */ \
    __##T##_tuple_3 __wxy() { return __##T##_tuple_3( w, x, y ); } \
    /* Swizzler Getter Function(`xyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( x, y, y )` */ \
    __##T##_tuple_3 __xyy() { return __##T##_tuple_3( x, y, y ); } \
    /* Swizzler Getter Function(`yyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( y, y, y )` */ \
    __##T##_tuple_3 __yyy() { return __##T##_tuple_3( y, y, y ); } \
    /* Swizzler Getter Function(`zyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( z, y, y )` */ \
    __##T##_tuple_3 __zyy() { return __##T##_tuple_3( z, y, y ); } \
    /* Swizzler Getter Function(`wyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( w, y, y )` */ \
    __##T##_tuple_3 __wyy() { return __##T##_tuple_3( w, y, y ); } \
    /* Swizzler Getter Function(`xzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( x, z, y )` */ \
    __##T##_tuple_3 __xzy() { return __##T##_tuple_3( x, z, y ); } \
    /* Swizzler Getter Function(`yzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( y, z, y )` */ \
    __##T##_tuple_3 __yzy() { return __##T##_tuple_3( y, z, y ); } \
    /* Swizzler Getter Function(`zzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( z, z, y )` */ \
    __##T##_tuple_3 __zzy() { return __##T##_tuple_3( z, z, y ); } \
    /* Swizzler Getter Function(`wzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( w, z, y )` */ \
    __##T##_tuple_3 __wzy() { return __##T##_tuple_3( w, z, y ); } \
    /* Swizzler Getter Function(`xwy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( x, w, y )` */ \
    __##T##_tuple_3 __xwy() { return __##T##_tuple_3( x, w, y ); } \
    /* Swizzler Getter Function(`ywy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( y, w, y )` */ \
    __##T##_tuple_3 __ywy() { return __##T##_tuple_3( y, w, y ); } \
    /* Swizzler Getter Function(`zwy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( z, w, y )` */ \
    __##T##_tuple_3 __zwy() { return __##T##_tuple_3( z, w, y ); } \
    /* Swizzler Getter Function(`wwy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( w, w, y )` */ \
    __##T##_tuple_3 __wwy() { return __##T##_tuple_3( w, w, y ); } \
    /* Swizzler Getter Function(`xxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( x, x, z )` */ \
    __##T##_tuple_3 __xxz() { return __##T##_tuple_3( x, x, z ); } \
    /* Swizzler Getter Function(`yxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( y, x, z )` */ \
    __##T##_tuple_3 __yxz() { return __##T##_tuple_3( y, x, z ); } \
    /* Swizzler Getter Function(`zxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( z, x, z )` */ \
    __##T##_tuple_3 __zxz() { return __##T##_tuple_3( z, x, z ); } \
    /* Swizzler Getter Function(`wxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( w, x, z )` */ \
    __##T##_tuple_3 __wxz() { return __##T##_tuple_3( w, x, z ); } \
    /* Swizzler Getter Function(`xyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( x, y, z )` */ \
    __##T##_tuple_3 __xyz() { return __##T##_tuple_3( x, y, z ); } \
    /* Swizzler Getter Function(`yyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( y, y, z )` */ \
    __##T##_tuple_3 __yyz() { return __##T##_tuple_3( y, y, z ); } \
    /* Swizzler Getter Function(`zyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( z, y, z )` */ \
    __##T##_tuple_3 __zyz() { return __##T##_tuple_3( z, y, z ); } \
    /* Swizzler Getter Function(`wyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( w, y, z )` */ \
    __##T##_tuple_3 __wyz() { return __##T##_tuple_3( w, y, z ); } \
    /* Swizzler Getter Function(`xzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( x, z, z )` */ \
    __##T##_tuple_3 __xzz() { return __##T##_tuple_3( x, z, z ); } \
    /* Swizzler Getter Function(`yzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( y, z, z )` */ \
    __##T##_tuple_3 __yzz() { return __##T##_tuple_3( y, z, z ); } \
    /* Swizzler Getter Function(`zzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( z, z, z )` */ \
    __##T##_tuple_3 __zzz() { return __##T##_tuple_3( z, z, z ); } \
    /* Swizzler Getter Function(`wzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( w, z, z )` */ \
    __##T##_tuple_3 __wzz() { return __##T##_tuple_3( w, z, z ); } \
    /* Swizzler Getter Function(`xwz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( x, w, z )` */ \
    __##T##_tuple_3 __xwz() { return __##T##_tuple_3( x, w, z ); } \
    /* Swizzler Getter Function(`ywz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( y, w, z )` */ \
    __##T##_tuple_3 __ywz() { return __##T##_tuple_3( y, w, z ); } \
    /* Swizzler Getter Function(`zwz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( z, w, z )` */ \
    __##T##_tuple_3 __zwz() { return __##T##_tuple_3( z, w, z ); } \
    /* Swizzler Getter Function(`wwz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( w, w, z )` */ \
    __##T##_tuple_3 __wwz() { return __##T##_tuple_3( w, w, z ); } \
    /* Swizzler Getter Function(`xxw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( x, x, w )` */ \
    __##T##_tuple_3 __xxw() { return __##T##_tuple_3( x, x, w ); } \
    /* Swizzler Getter Function(`yxw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( y, x, w )` */ \
    __##T##_tuple_3 __yxw() { return __##T##_tuple_3( y, x, w ); } \
    /* Swizzler Getter Function(`zxw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( z, x, w )` */ \
    __##T##_tuple_3 __zxw() { return __##T##_tuple_3( z, x, w ); } \
    /* Swizzler Getter Function(`wxw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( w, x, w )` */ \
    __##T##_tuple_3 __wxw() { return __##T##_tuple_3( w, x, w ); } \
    /* Swizzler Getter Function(`xyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( x, y, w )` */ \
    __##T##_tuple_3 __xyw() { return __##T##_tuple_3( x, y, w ); } \
    /* Swizzler Getter Function(`yyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( y, y, w )` */ \
    __##T##_tuple_3 __yyw() { return __##T##_tuple_3( y, y, w ); } \
    /* Swizzler Getter Function(`zyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( z, y, w )` */ \
    __##T##_tuple_3 __zyw() { return __##T##_tuple_3( z, y, w ); } \
    /* Swizzler Getter Function(`wyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( w, y, w )` */ \
    __##T##_tuple_3 __wyw() { return __##T##_tuple_3( w, y, w ); } \
    /* Swizzler Getter Function(`xzw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( x, z, w )` */ \
    __##T##_tuple_3 __xzw() { return __##T##_tuple_3( x, z, w ); } \
    /* Swizzler Getter Function(`yzw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( y, z, w )` */ \
    __##T##_tuple_3 __yzw() { return __##T##_tuple_3( y, z, w ); } \
    /* Swizzler Getter Function(`zzw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( z, z, w )` */ \
    __##T##_tuple_3 __zzw() { return __##T##_tuple_3( z, z, w ); } \
    /* Swizzler Getter Function(`wzw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( w, z, w )` */ \
    __##T##_tuple_3 __wzw() { return __##T##_tuple_3( w, z, w ); } \
    /* Swizzler Getter Function(`xww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( x, w, w )` */ \
    __##T##_tuple_3 __xww() { return __##T##_tuple_3( x, w, w ); } \
    /* Swizzler Getter Function(`yww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( y, w, w )` */ \
    __##T##_tuple_3 __yww() { return __##T##_tuple_3( y, w, w ); } \
    /* Swizzler Getter Function(`zww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( z, w, w )` */ \
    __##T##_tuple_3 __zww() { return __##T##_tuple_3( z, w, w ); } \
    /* Swizzler Getter Function(`www`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_3( w, w, w )` */ \
    __##T##_tuple_3 __www() { return __##T##_tuple_3( w, w, w ); } \
    /* Swizzler Getter Function(`xxxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, x, x, x )` */ \
    __##T##_tuple_4 __xxxx() { return __##T##_tuple_4( x, x, x, x ); } \
    /* Swizzler Getter Function(`yxxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, x, x, x )` */ \
    __##T##_tuple_4 __yxxx() { return __##T##_tuple_4( y, x, x, x ); } \
    /* Swizzler Getter Function(`zxxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, x, x, x )` */ \
    __##T##_tuple_4 __zxxx() { return __##T##_tuple_4( z, x, x, x ); } \
    /* Swizzler Getter Function(`wxxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, x, x, x )` */ \
    __##T##_tuple_4 __wxxx() { return __##T##_tuple_4( w, x, x, x ); } \
    /* Swizzler Getter Function(`xyxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, y, x, x )` */ \
    __##T##_tuple_4 __xyxx() { return __##T##_tuple_4( x, y, x, x ); } \
    /* Swizzler Getter Function(`yyxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, y, x, x )` */ \
    __##T##_tuple_4 __yyxx() { return __##T##_tuple_4( y, y, x, x ); } \
    /* Swizzler Getter Function(`zyxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, y, x, x )` */ \
    __##T##_tuple_4 __zyxx() { return __##T##_tuple_4( z, y, x, x ); } \
    /* Swizzler Getter Function(`wyxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, y, x, x )` */ \
    __##T##_tuple_4 __wyxx() { return __##T##_tuple_4( w, y, x, x ); } \
    /* Swizzler Getter Function(`xzxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, z, x, x )` */ \
    __##T##_tuple_4 __xzxx() { return __##T##_tuple_4( x, z, x, x ); } \
    /* Swizzler Getter Function(`yzxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, z, x, x )` */ \
    __##T##_tuple_4 __yzxx() { return __##T##_tuple_4( y, z, x, x ); } \
    /* Swizzler Getter Function(`zzxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, z, x, x )` */ \
    __##T##_tuple_4 __zzxx() { return __##T##_tuple_4( z, z, x, x ); } \
    /* Swizzler Getter Function(`wzxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, z, x, x )` */ \
    __##T##_tuple_4 __wzxx() { return __##T##_tuple_4( w, z, x, x ); } \
    /* Swizzler Getter Function(`xwxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, w, x, x )` */ \
    __##T##_tuple_4 __xwxx() { return __##T##_tuple_4( x, w, x, x ); } \
    /* Swizzler Getter Function(`ywxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, w, x, x )` */ \
    __##T##_tuple_4 __ywxx() { return __##T##_tuple_4( y, w, x, x ); } \
    /* Swizzler Getter Function(`zwxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, w, x, x )` */ \
    __##T##_tuple_4 __zwxx() { return __##T##_tuple_4( z, w, x, x ); } \
    /* Swizzler Getter Function(`wwxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, w, x, x )` */ \
    __##T##_tuple_4 __wwxx() { return __##T##_tuple_4( w, w, x, x ); } \
    /* Swizzler Getter Function(`xxyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, x, y, x )` */ \
    __##T##_tuple_4 __xxyx() { return __##T##_tuple_4( x, x, y, x ); } \
    /* Swizzler Getter Function(`yxyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, x, y, x )` */ \
    __##T##_tuple_4 __yxyx() { return __##T##_tuple_4( y, x, y, x ); } \
    /* Swizzler Getter Function(`zxyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, x, y, x )` */ \
    __##T##_tuple_4 __zxyx() { return __##T##_tuple_4( z, x, y, x ); } \
    /* Swizzler Getter Function(`wxyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, x, y, x )` */ \
    __##T##_tuple_4 __wxyx() { return __##T##_tuple_4( w, x, y, x ); } \
    /* Swizzler Getter Function(`xyyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, y, y, x )` */ \
    __##T##_tuple_4 __xyyx() { return __##T##_tuple_4( x, y, y, x ); } \
    /* Swizzler Getter Function(`yyyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, y, y, x )` */ \
    __##T##_tuple_4 __yyyx() { return __##T##_tuple_4( y, y, y, x ); } \
    /* Swizzler Getter Function(`zyyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, y, y, x )` */ \
    __##T##_tuple_4 __zyyx() { return __##T##_tuple_4( z, y, y, x ); } \
    /* Swizzler Getter Function(`wyyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, y, y, x )` */ \
    __##T##_tuple_4 __wyyx() { return __##T##_tuple_4( w, y, y, x ); } \
    /* Swizzler Getter Function(`xzyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, z, y, x )` */ \
    __##T##_tuple_4 __xzyx() { return __##T##_tuple_4( x, z, y, x ); } \
    /* Swizzler Getter Function(`yzyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, z, y, x )` */ \
    __##T##_tuple_4 __yzyx() { return __##T##_tuple_4( y, z, y, x ); } \
    /* Swizzler Getter Function(`zzyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, z, y, x )` */ \
    __##T##_tuple_4 __zzyx() { return __##T##_tuple_4( z, z, y, x ); } \
    /* Swizzler Getter Function(`wzyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, z, y, x )` */ \
    __##T##_tuple_4 __wzyx() { return __##T##_tuple_4( w, z, y, x ); } \
    /* Swizzler Getter Function(`xwyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, w, y, x )` */ \
    __##T##_tuple_4 __xwyx() { return __##T##_tuple_4( x, w, y, x ); } \
    /* Swizzler Getter Function(`ywyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, w, y, x )` */ \
    __##T##_tuple_4 __ywyx() { return __##T##_tuple_4( y, w, y, x ); } \
    /* Swizzler Getter Function(`zwyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, w, y, x )` */ \
    __##T##_tuple_4 __zwyx() { return __##T##_tuple_4( z, w, y, x ); } \
    /* Swizzler Getter Function(`wwyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, w, y, x )` */ \
    __##T##_tuple_4 __wwyx() { return __##T##_tuple_4( w, w, y, x ); } \
    /* Swizzler Getter Function(`xxzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, x, z, x )` */ \
    __##T##_tuple_4 __xxzx() { return __##T##_tuple_4( x, x, z, x ); } \
    /* Swizzler Getter Function(`yxzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, x, z, x )` */ \
    __##T##_tuple_4 __yxzx() { return __##T##_tuple_4( y, x, z, x ); } \
    /* Swizzler Getter Function(`zxzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, x, z, x )` */ \
    __##T##_tuple_4 __zxzx() { return __##T##_tuple_4( z, x, z, x ); } \
    /* Swizzler Getter Function(`wxzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, x, z, x )` */ \
    __##T##_tuple_4 __wxzx() { return __##T##_tuple_4( w, x, z, x ); } \
    /* Swizzler Getter Function(`xyzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, y, z, x )` */ \
    __##T##_tuple_4 __xyzx() { return __##T##_tuple_4( x, y, z, x ); } \
    /* Swizzler Getter Function(`yyzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, y, z, x )` */ \
    __##T##_tuple_4 __yyzx() { return __##T##_tuple_4( y, y, z, x ); } \
    /* Swizzler Getter Function(`zyzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, y, z, x )` */ \
    __##T##_tuple_4 __zyzx() { return __##T##_tuple_4( z, y, z, x ); } \
    /* Swizzler Getter Function(`wyzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, y, z, x )` */ \
    __##T##_tuple_4 __wyzx() { return __##T##_tuple_4( w, y, z, x ); } \
    /* Swizzler Getter Function(`xzzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, z, z, x )` */ \
    __##T##_tuple_4 __xzzx() { return __##T##_tuple_4( x, z, z, x ); } \
    /* Swizzler Getter Function(`yzzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, z, z, x )` */ \
    __##T##_tuple_4 __yzzx() { return __##T##_tuple_4( y, z, z, x ); } \
    /* Swizzler Getter Function(`zzzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, z, z, x )` */ \
    __##T##_tuple_4 __zzzx() { return __##T##_tuple_4( z, z, z, x ); } \
    /* Swizzler Getter Function(`wzzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, z, z, x )` */ \
    __##T##_tuple_4 __wzzx() { return __##T##_tuple_4( w, z, z, x ); } \
    /* Swizzler Getter Function(`xwzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, w, z, x )` */ \
    __##T##_tuple_4 __xwzx() { return __##T##_tuple_4( x, w, z, x ); } \
    /* Swizzler Getter Function(`ywzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, w, z, x )` */ \
    __##T##_tuple_4 __ywzx() { return __##T##_tuple_4( y, w, z, x ); } \
    /* Swizzler Getter Function(`zwzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, w, z, x )` */ \
    __##T##_tuple_4 __zwzx() { return __##T##_tuple_4( z, w, z, x ); } \
    /* Swizzler Getter Function(`wwzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, w, z, x )` */ \
    __##T##_tuple_4 __wwzx() { return __##T##_tuple_4( w, w, z, x ); } \
    /* Swizzler Getter Function(`xxwx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, x, w, x )` */ \
    __##T##_tuple_4 __xxwx() { return __##T##_tuple_4( x, x, w, x ); } \
    /* Swizzler Getter Function(`yxwx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, x, w, x )` */ \
    __##T##_tuple_4 __yxwx() { return __##T##_tuple_4( y, x, w, x ); } \
    /* Swizzler Getter Function(`zxwx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, x, w, x )` */ \
    __##T##_tuple_4 __zxwx() { return __##T##_tuple_4( z, x, w, x ); } \
    /* Swizzler Getter Function(`wxwx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, x, w, x )` */ \
    __##T##_tuple_4 __wxwx() { return __##T##_tuple_4( w, x, w, x ); } \
    /* Swizzler Getter Function(`xywx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, y, w, x )` */ \
    __##T##_tuple_4 __xywx() { return __##T##_tuple_4( x, y, w, x ); } \
    /* Swizzler Getter Function(`yywx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, y, w, x )` */ \
    __##T##_tuple_4 __yywx() { return __##T##_tuple_4( y, y, w, x ); } \
    /* Swizzler Getter Function(`zywx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, y, w, x )` */ \
    __##T##_tuple_4 __zywx() { return __##T##_tuple_4( z, y, w, x ); } \
    /* Swizzler Getter Function(`wywx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, y, w, x )` */ \
    __##T##_tuple_4 __wywx() { return __##T##_tuple_4( w, y, w, x ); } \
    /* Swizzler Getter Function(`xzwx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, z, w, x )` */ \
    __##T##_tuple_4 __xzwx() { return __##T##_tuple_4( x, z, w, x ); } \
    /* Swizzler Getter Function(`yzwx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, z, w, x )` */ \
    __##T##_tuple_4 __yzwx() { return __##T##_tuple_4( y, z, w, x ); } \
    /* Swizzler Getter Function(`zzwx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, z, w, x )` */ \
    __##T##_tuple_4 __zzwx() { return __##T##_tuple_4( z, z, w, x ); } \
    /* Swizzler Getter Function(`wzwx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, z, w, x )` */ \
    __##T##_tuple_4 __wzwx() { return __##T##_tuple_4( w, z, w, x ); } \
    /* Swizzler Getter Function(`xwwx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, w, w, x )` */ \
    __##T##_tuple_4 __xwwx() { return __##T##_tuple_4( x, w, w, x ); } \
    /* Swizzler Getter Function(`ywwx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, w, w, x )` */ \
    __##T##_tuple_4 __ywwx() { return __##T##_tuple_4( y, w, w, x ); } \
    /* Swizzler Getter Function(`zwwx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, w, w, x )` */ \
    __##T##_tuple_4 __zwwx() { return __##T##_tuple_4( z, w, w, x ); } \
    /* Swizzler Getter Function(`wwwx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, w, w, x )` */ \
    __##T##_tuple_4 __wwwx() { return __##T##_tuple_4( w, w, w, x ); } \
    /* Swizzler Getter Function(`xxxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, x, x, y )` */ \
    __##T##_tuple_4 __xxxy() { return __##T##_tuple_4( x, x, x, y ); } \
    /* Swizzler Getter Function(`yxxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, x, x, y )` */ \
    __##T##_tuple_4 __yxxy() { return __##T##_tuple_4( y, x, x, y ); } \
    /* Swizzler Getter Function(`zxxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, x, x, y )` */ \
    __##T##_tuple_4 __zxxy() { return __##T##_tuple_4( z, x, x, y ); } \
    /* Swizzler Getter Function(`wxxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, x, x, y )` */ \
    __##T##_tuple_4 __wxxy() { return __##T##_tuple_4( w, x, x, y ); } \
    /* Swizzler Getter Function(`xyxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, y, x, y )` */ \
    __##T##_tuple_4 __xyxy() { return __##T##_tuple_4( x, y, x, y ); } \
    /* Swizzler Getter Function(`yyxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, y, x, y )` */ \
    __##T##_tuple_4 __yyxy() { return __##T##_tuple_4( y, y, x, y ); } \
    /* Swizzler Getter Function(`zyxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, y, x, y )` */ \
    __##T##_tuple_4 __zyxy() { return __##T##_tuple_4( z, y, x, y ); } \
    /* Swizzler Getter Function(`wyxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, y, x, y )` */ \
    __##T##_tuple_4 __wyxy() { return __##T##_tuple_4( w, y, x, y ); } \
    /* Swizzler Getter Function(`xzxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, z, x, y )` */ \
    __##T##_tuple_4 __xzxy() { return __##T##_tuple_4( x, z, x, y ); } \
    /* Swizzler Getter Function(`yzxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, z, x, y )` */ \
    __##T##_tuple_4 __yzxy() { return __##T##_tuple_4( y, z, x, y ); } \
    /* Swizzler Getter Function(`zzxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, z, x, y )` */ \
    __##T##_tuple_4 __zzxy() { return __##T##_tuple_4( z, z, x, y ); } \
    /* Swizzler Getter Function(`wzxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, z, x, y )` */ \
    __##T##_tuple_4 __wzxy() { return __##T##_tuple_4( w, z, x, y ); } \
    /* Swizzler Getter Function(`xwxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, w, x, y )` */ \
    __##T##_tuple_4 __xwxy() { return __##T##_tuple_4( x, w, x, y ); } \
    /* Swizzler Getter Function(`ywxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, w, x, y )` */ \
    __##T##_tuple_4 __ywxy() { return __##T##_tuple_4( y, w, x, y ); } \
    /* Swizzler Getter Function(`zwxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, w, x, y )` */ \
    __##T##_tuple_4 __zwxy() { return __##T##_tuple_4( z, w, x, y ); } \
    /* Swizzler Getter Function(`wwxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, w, x, y )` */ \
    __##T##_tuple_4 __wwxy() { return __##T##_tuple_4( w, w, x, y ); } \
    /* Swizzler Getter Function(`xxyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, x, y, y )` */ \
    __##T##_tuple_4 __xxyy() { return __##T##_tuple_4( x, x, y, y ); } \
    /* Swizzler Getter Function(`yxyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, x, y, y )` */ \
    __##T##_tuple_4 __yxyy() { return __##T##_tuple_4( y, x, y, y ); } \
    /* Swizzler Getter Function(`zxyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, x, y, y )` */ \
    __##T##_tuple_4 __zxyy() { return __##T##_tuple_4( z, x, y, y ); } \
    /* Swizzler Getter Function(`wxyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, x, y, y )` */ \
    __##T##_tuple_4 __wxyy() { return __##T##_tuple_4( w, x, y, y ); } \
    /* Swizzler Getter Function(`xyyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, y, y, y )` */ \
    __##T##_tuple_4 __xyyy() { return __##T##_tuple_4( x, y, y, y ); } \
    /* Swizzler Getter Function(`yyyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, y, y, y )` */ \
    __##T##_tuple_4 __yyyy() { return __##T##_tuple_4( y, y, y, y ); } \
    /* Swizzler Getter Function(`zyyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, y, y, y )` */ \
    __##T##_tuple_4 __zyyy() { return __##T##_tuple_4( z, y, y, y ); } \
    /* Swizzler Getter Function(`wyyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, y, y, y )` */ \
    __##T##_tuple_4 __wyyy() { return __##T##_tuple_4( w, y, y, y ); } \
    /* Swizzler Getter Function(`xzyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, z, y, y )` */ \
    __##T##_tuple_4 __xzyy() { return __##T##_tuple_4( x, z, y, y ); } \
    /* Swizzler Getter Function(`yzyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, z, y, y )` */ \
    __##T##_tuple_4 __yzyy() { return __##T##_tuple_4( y, z, y, y ); } \
    /* Swizzler Getter Function(`zzyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, z, y, y )` */ \
    __##T##_tuple_4 __zzyy() { return __##T##_tuple_4( z, z, y, y ); } \
    /* Swizzler Getter Function(`wzyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, z, y, y )` */ \
    __##T##_tuple_4 __wzyy() { return __##T##_tuple_4( w, z, y, y ); } \
    /* Swizzler Getter Function(`xwyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, w, y, y )` */ \
    __##T##_tuple_4 __xwyy() { return __##T##_tuple_4( x, w, y, y ); } \
    /* Swizzler Getter Function(`ywyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, w, y, y )` */ \
    __##T##_tuple_4 __ywyy() { return __##T##_tuple_4( y, w, y, y ); } \
    /* Swizzler Getter Function(`zwyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, w, y, y )` */ \
    __##T##_tuple_4 __zwyy() { return __##T##_tuple_4( z, w, y, y ); } \
    /* Swizzler Getter Function(`wwyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, w, y, y )` */ \
    __##T##_tuple_4 __wwyy() { return __##T##_tuple_4( w, w, y, y ); } \
    /* Swizzler Getter Function(`xxzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, x, z, y )` */ \
    __##T##_tuple_4 __xxzy() { return __##T##_tuple_4( x, x, z, y ); } \
    /* Swizzler Getter Function(`yxzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, x, z, y )` */ \
    __##T##_tuple_4 __yxzy() { return __##T##_tuple_4( y, x, z, y ); } \
    /* Swizzler Getter Function(`zxzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, x, z, y )` */ \
    __##T##_tuple_4 __zxzy() { return __##T##_tuple_4( z, x, z, y ); } \
    /* Swizzler Getter Function(`wxzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, x, z, y )` */ \
    __##T##_tuple_4 __wxzy() { return __##T##_tuple_4( w, x, z, y ); } \
    /* Swizzler Getter Function(`xyzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, y, z, y )` */ \
    __##T##_tuple_4 __xyzy() { return __##T##_tuple_4( x, y, z, y ); } \
    /* Swizzler Getter Function(`yyzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, y, z, y )` */ \
    __##T##_tuple_4 __yyzy() { return __##T##_tuple_4( y, y, z, y ); } \
    /* Swizzler Getter Function(`zyzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, y, z, y )` */ \
    __##T##_tuple_4 __zyzy() { return __##T##_tuple_4( z, y, z, y ); } \
    /* Swizzler Getter Function(`wyzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, y, z, y )` */ \
    __##T##_tuple_4 __wyzy() { return __##T##_tuple_4( w, y, z, y ); } \
    /* Swizzler Getter Function(`xzzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, z, z, y )` */ \
    __##T##_tuple_4 __xzzy() { return __##T##_tuple_4( x, z, z, y ); } \
    /* Swizzler Getter Function(`yzzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, z, z, y )` */ \
    __##T##_tuple_4 __yzzy() { return __##T##_tuple_4( y, z, z, y ); } \
    /* Swizzler Getter Function(`zzzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, z, z, y )` */ \
    __##T##_tuple_4 __zzzy() { return __##T##_tuple_4( z, z, z, y ); } \
    /* Swizzler Getter Function(`wzzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, z, z, y )` */ \
    __##T##_tuple_4 __wzzy() { return __##T##_tuple_4( w, z, z, y ); } \
    /* Swizzler Getter Function(`xwzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, w, z, y )` */ \
    __##T##_tuple_4 __xwzy() { return __##T##_tuple_4( x, w, z, y ); } \
    /* Swizzler Getter Function(`ywzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, w, z, y )` */ \
    __##T##_tuple_4 __ywzy() { return __##T##_tuple_4( y, w, z, y ); } \
    /* Swizzler Getter Function(`zwzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, w, z, y )` */ \
    __##T##_tuple_4 __zwzy() { return __##T##_tuple_4( z, w, z, y ); } \
    /* Swizzler Getter Function(`wwzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, w, z, y )` */ \
    __##T##_tuple_4 __wwzy() { return __##T##_tuple_4( w, w, z, y ); } \
    /* Swizzler Getter Function(`xxwy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, x, w, y )` */ \
    __##T##_tuple_4 __xxwy() { return __##T##_tuple_4( x, x, w, y ); } \
    /* Swizzler Getter Function(`yxwy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, x, w, y )` */ \
    __##T##_tuple_4 __yxwy() { return __##T##_tuple_4( y, x, w, y ); } \
    /* Swizzler Getter Function(`zxwy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, x, w, y )` */ \
    __##T##_tuple_4 __zxwy() { return __##T##_tuple_4( z, x, w, y ); } \
    /* Swizzler Getter Function(`wxwy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, x, w, y )` */ \
    __##T##_tuple_4 __wxwy() { return __##T##_tuple_4( w, x, w, y ); } \
    /* Swizzler Getter Function(`xywy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, y, w, y )` */ \
    __##T##_tuple_4 __xywy() { return __##T##_tuple_4( x, y, w, y ); } \
    /* Swizzler Getter Function(`yywy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, y, w, y )` */ \
    __##T##_tuple_4 __yywy() { return __##T##_tuple_4( y, y, w, y ); } \
    /* Swizzler Getter Function(`zywy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, y, w, y )` */ \
    __##T##_tuple_4 __zywy() { return __##T##_tuple_4( z, y, w, y ); } \
    /* Swizzler Getter Function(`wywy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, y, w, y )` */ \
    __##T##_tuple_4 __wywy() { return __##T##_tuple_4( w, y, w, y ); } \
    /* Swizzler Getter Function(`xzwy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, z, w, y )` */ \
    __##T##_tuple_4 __xzwy() { return __##T##_tuple_4( x, z, w, y ); } \
    /* Swizzler Getter Function(`yzwy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, z, w, y )` */ \
    __##T##_tuple_4 __yzwy() { return __##T##_tuple_4( y, z, w, y ); } \
    /* Swizzler Getter Function(`zzwy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, z, w, y )` */ \
    __##T##_tuple_4 __zzwy() { return __##T##_tuple_4( z, z, w, y ); } \
    /* Swizzler Getter Function(`wzwy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, z, w, y )` */ \
    __##T##_tuple_4 __wzwy() { return __##T##_tuple_4( w, z, w, y ); } \
    /* Swizzler Getter Function(`xwwy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, w, w, y )` */ \
    __##T##_tuple_4 __xwwy() { return __##T##_tuple_4( x, w, w, y ); } \
    /* Swizzler Getter Function(`ywwy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, w, w, y )` */ \
    __##T##_tuple_4 __ywwy() { return __##T##_tuple_4( y, w, w, y ); } \
    /* Swizzler Getter Function(`zwwy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, w, w, y )` */ \
    __##T##_tuple_4 __zwwy() { return __##T##_tuple_4( z, w, w, y ); } \
    /* Swizzler Getter Function(`wwwy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, w, w, y )` */ \
    __##T##_tuple_4 __wwwy() { return __##T##_tuple_4( w, w, w, y ); } \
    /* Swizzler Getter Function(`xxxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, x, x, z )` */ \
    __##T##_tuple_4 __xxxz() { return __##T##_tuple_4( x, x, x, z ); } \
    /* Swizzler Getter Function(`yxxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, x, x, z )` */ \
    __##T##_tuple_4 __yxxz() { return __##T##_tuple_4( y, x, x, z ); } \
    /* Swizzler Getter Function(`zxxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, x, x, z )` */ \
    __##T##_tuple_4 __zxxz() { return __##T##_tuple_4( z, x, x, z ); } \
    /* Swizzler Getter Function(`wxxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, x, x, z )` */ \
    __##T##_tuple_4 __wxxz() { return __##T##_tuple_4( w, x, x, z ); } \
    /* Swizzler Getter Function(`xyxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, y, x, z )` */ \
    __##T##_tuple_4 __xyxz() { return __##T##_tuple_4( x, y, x, z ); } \
    /* Swizzler Getter Function(`yyxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, y, x, z )` */ \
    __##T##_tuple_4 __yyxz() { return __##T##_tuple_4( y, y, x, z ); } \
    /* Swizzler Getter Function(`zyxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, y, x, z )` */ \
    __##T##_tuple_4 __zyxz() { return __##T##_tuple_4( z, y, x, z ); } \
    /* Swizzler Getter Function(`wyxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, y, x, z )` */ \
    __##T##_tuple_4 __wyxz() { return __##T##_tuple_4( w, y, x, z ); } \
    /* Swizzler Getter Function(`xzxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, z, x, z )` */ \
    __##T##_tuple_4 __xzxz() { return __##T##_tuple_4( x, z, x, z ); } \
    /* Swizzler Getter Function(`yzxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, z, x, z )` */ \
    __##T##_tuple_4 __yzxz() { return __##T##_tuple_4( y, z, x, z ); } \
    /* Swizzler Getter Function(`zzxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, z, x, z )` */ \
    __##T##_tuple_4 __zzxz() { return __##T##_tuple_4( z, z, x, z ); } \
    /* Swizzler Getter Function(`wzxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, z, x, z )` */ \
    __##T##_tuple_4 __wzxz() { return __##T##_tuple_4( w, z, x, z ); } \
    /* Swizzler Getter Function(`xwxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, w, x, z )` */ \
    __##T##_tuple_4 __xwxz() { return __##T##_tuple_4( x, w, x, z ); } \
    /* Swizzler Getter Function(`ywxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, w, x, z )` */ \
    __##T##_tuple_4 __ywxz() { return __##T##_tuple_4( y, w, x, z ); } \
    /* Swizzler Getter Function(`zwxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, w, x, z )` */ \
    __##T##_tuple_4 __zwxz() { return __##T##_tuple_4( z, w, x, z ); } \
    /* Swizzler Getter Function(`wwxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, w, x, z )` */ \
    __##T##_tuple_4 __wwxz() { return __##T##_tuple_4( w, w, x, z ); } \
    /* Swizzler Getter Function(`xxyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, x, y, z )` */ \
    __##T##_tuple_4 __xxyz() { return __##T##_tuple_4( x, x, y, z ); } \
    /* Swizzler Getter Function(`yxyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, x, y, z )` */ \
    __##T##_tuple_4 __yxyz() { return __##T##_tuple_4( y, x, y, z ); } \
    /* Swizzler Getter Function(`zxyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, x, y, z )` */ \
    __##T##_tuple_4 __zxyz() { return __##T##_tuple_4( z, x, y, z ); } \
    /* Swizzler Getter Function(`wxyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, x, y, z )` */ \
    __##T##_tuple_4 __wxyz() { return __##T##_tuple_4( w, x, y, z ); } \
    /* Swizzler Getter Function(`xyyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, y, y, z )` */ \
    __##T##_tuple_4 __xyyz() { return __##T##_tuple_4( x, y, y, z ); } \
    /* Swizzler Getter Function(`yyyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, y, y, z )` */ \
    __##T##_tuple_4 __yyyz() { return __##T##_tuple_4( y, y, y, z ); } \
    /* Swizzler Getter Function(`zyyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, y, y, z )` */ \
    __##T##_tuple_4 __zyyz() { return __##T##_tuple_4( z, y, y, z ); } \
    /* Swizzler Getter Function(`wyyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, y, y, z )` */ \
    __##T##_tuple_4 __wyyz() { return __##T##_tuple_4( w, y, y, z ); } \
    /* Swizzler Getter Function(`xzyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, z, y, z )` */ \
    __##T##_tuple_4 __xzyz() { return __##T##_tuple_4( x, z, y, z ); } \
    /* Swizzler Getter Function(`yzyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, z, y, z )` */ \
    __##T##_tuple_4 __yzyz() { return __##T##_tuple_4( y, z, y, z ); } \
    /* Swizzler Getter Function(`zzyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, z, y, z )` */ \
    __##T##_tuple_4 __zzyz() { return __##T##_tuple_4( z, z, y, z ); } \
    /* Swizzler Getter Function(`wzyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, z, y, z )` */ \
    __##T##_tuple_4 __wzyz() { return __##T##_tuple_4( w, z, y, z ); } \
    /* Swizzler Getter Function(`xwyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, w, y, z )` */ \
    __##T##_tuple_4 __xwyz() { return __##T##_tuple_4( x, w, y, z ); } \
    /* Swizzler Getter Function(`ywyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, w, y, z )` */ \
    __##T##_tuple_4 __ywyz() { return __##T##_tuple_4( y, w, y, z ); } \
    /* Swizzler Getter Function(`zwyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, w, y, z )` */ \
    __##T##_tuple_4 __zwyz() { return __##T##_tuple_4( z, w, y, z ); } \
    /* Swizzler Getter Function(`wwyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, w, y, z )` */ \
    __##T##_tuple_4 __wwyz() { return __##T##_tuple_4( w, w, y, z ); } \
    /* Swizzler Getter Function(`xxzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, x, z, z )` */ \
    __##T##_tuple_4 __xxzz() { return __##T##_tuple_4( x, x, z, z ); } \
    /* Swizzler Getter Function(`yxzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, x, z, z )` */ \
    __##T##_tuple_4 __yxzz() { return __##T##_tuple_4( y, x, z, z ); } \
    /* Swizzler Getter Function(`zxzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, x, z, z )` */ \
    __##T##_tuple_4 __zxzz() { return __##T##_tuple_4( z, x, z, z ); } \
    /* Swizzler Getter Function(`wxzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, x, z, z )` */ \
    __##T##_tuple_4 __wxzz() { return __##T##_tuple_4( w, x, z, z ); } \
    /* Swizzler Getter Function(`xyzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, y, z, z )` */ \
    __##T##_tuple_4 __xyzz() { return __##T##_tuple_4( x, y, z, z ); } \
    /* Swizzler Getter Function(`yyzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, y, z, z )` */ \
    __##T##_tuple_4 __yyzz() { return __##T##_tuple_4( y, y, z, z ); } \
    /* Swizzler Getter Function(`zyzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, y, z, z )` */ \
    __##T##_tuple_4 __zyzz() { return __##T##_tuple_4( z, y, z, z ); } \
    /* Swizzler Getter Function(`wyzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, y, z, z )` */ \
    __##T##_tuple_4 __wyzz() { return __##T##_tuple_4( w, y, z, z ); } \
    /* Swizzler Getter Function(`xzzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, z, z, z )` */ \
    __##T##_tuple_4 __xzzz() { return __##T##_tuple_4( x, z, z, z ); } \
    /* Swizzler Getter Function(`yzzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, z, z, z )` */ \
    __##T##_tuple_4 __yzzz() { return __##T##_tuple_4( y, z, z, z ); } \
    /* Swizzler Getter Function(`zzzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, z, z, z )` */ \
    __##T##_tuple_4 __zzzz() { return __##T##_tuple_4( z, z, z, z ); } \
    /* Swizzler Getter Function(`wzzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, z, z, z )` */ \
    __##T##_tuple_4 __wzzz() { return __##T##_tuple_4( w, z, z, z ); } \
    /* Swizzler Getter Function(`xwzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, w, z, z )` */ \
    __##T##_tuple_4 __xwzz() { return __##T##_tuple_4( x, w, z, z ); } \
    /* Swizzler Getter Function(`ywzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, w, z, z )` */ \
    __##T##_tuple_4 __ywzz() { return __##T##_tuple_4( y, w, z, z ); } \
    /* Swizzler Getter Function(`zwzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, w, z, z )` */ \
    __##T##_tuple_4 __zwzz() { return __##T##_tuple_4( z, w, z, z ); } \
    /* Swizzler Getter Function(`wwzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, w, z, z )` */ \
    __##T##_tuple_4 __wwzz() { return __##T##_tuple_4( w, w, z, z ); } \
    /* Swizzler Getter Function(`xxwz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, x, w, z )` */ \
    __##T##_tuple_4 __xxwz() { return __##T##_tuple_4( x, x, w, z ); } \
    /* Swizzler Getter Function(`yxwz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, x, w, z )` */ \
    __##T##_tuple_4 __yxwz() { return __##T##_tuple_4( y, x, w, z ); } \
    /* Swizzler Getter Function(`zxwz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, x, w, z )` */ \
    __##T##_tuple_4 __zxwz() { return __##T##_tuple_4( z, x, w, z ); } \
    /* Swizzler Getter Function(`wxwz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, x, w, z )` */ \
    __##T##_tuple_4 __wxwz() { return __##T##_tuple_4( w, x, w, z ); } \
    /* Swizzler Getter Function(`xywz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, y, w, z )` */ \
    __##T##_tuple_4 __xywz() { return __##T##_tuple_4( x, y, w, z ); } \
    /* Swizzler Getter Function(`yywz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, y, w, z )` */ \
    __##T##_tuple_4 __yywz() { return __##T##_tuple_4( y, y, w, z ); } \
    /* Swizzler Getter Function(`zywz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, y, w, z )` */ \
    __##T##_tuple_4 __zywz() { return __##T##_tuple_4( z, y, w, z ); } \
    /* Swizzler Getter Function(`wywz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, y, w, z )` */ \
    __##T##_tuple_4 __wywz() { return __##T##_tuple_4( w, y, w, z ); } \
    /* Swizzler Getter Function(`xzwz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, z, w, z )` */ \
    __##T##_tuple_4 __xzwz() { return __##T##_tuple_4( x, z, w, z ); } \
    /* Swizzler Getter Function(`yzwz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, z, w, z )` */ \
    __##T##_tuple_4 __yzwz() { return __##T##_tuple_4( y, z, w, z ); } \
    /* Swizzler Getter Function(`zzwz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, z, w, z )` */ \
    __##T##_tuple_4 __zzwz() { return __##T##_tuple_4( z, z, w, z ); } \
    /* Swizzler Getter Function(`wzwz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, z, w, z )` */ \
    __##T##_tuple_4 __wzwz() { return __##T##_tuple_4( w, z, w, z ); } \
    /* Swizzler Getter Function(`xwwz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, w, w, z )` */ \
    __##T##_tuple_4 __xwwz() { return __##T##_tuple_4( x, w, w, z ); } \
    /* Swizzler Getter Function(`ywwz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, w, w, z )` */ \
    __##T##_tuple_4 __ywwz() { return __##T##_tuple_4( y, w, w, z ); } \
    /* Swizzler Getter Function(`zwwz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, w, w, z )` */ \
    __##T##_tuple_4 __zwwz() { return __##T##_tuple_4( z, w, w, z ); } \
    /* Swizzler Getter Function(`wwwz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, w, w, z )` */ \
    __##T##_tuple_4 __wwwz() { return __##T##_tuple_4( w, w, w, z ); } \
    /* Swizzler Getter Function(`xxxw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, x, x, w )` */ \
    __##T##_tuple_4 __xxxw() { return __##T##_tuple_4( x, x, x, w ); } \
    /* Swizzler Getter Function(`yxxw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, x, x, w )` */ \
    __##T##_tuple_4 __yxxw() { return __##T##_tuple_4( y, x, x, w ); } \
    /* Swizzler Getter Function(`zxxw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, x, x, w )` */ \
    __##T##_tuple_4 __zxxw() { return __##T##_tuple_4( z, x, x, w ); } \
    /* Swizzler Getter Function(`wxxw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, x, x, w )` */ \
    __##T##_tuple_4 __wxxw() { return __##T##_tuple_4( w, x, x, w ); } \
    /* Swizzler Getter Function(`xyxw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, y, x, w )` */ \
    __##T##_tuple_4 __xyxw() { return __##T##_tuple_4( x, y, x, w ); } \
    /* Swizzler Getter Function(`yyxw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, y, x, w )` */ \
    __##T##_tuple_4 __yyxw() { return __##T##_tuple_4( y, y, x, w ); } \
    /* Swizzler Getter Function(`zyxw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, y, x, w )` */ \
    __##T##_tuple_4 __zyxw() { return __##T##_tuple_4( z, y, x, w ); } \
    /* Swizzler Getter Function(`wyxw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, y, x, w )` */ \
    __##T##_tuple_4 __wyxw() { return __##T##_tuple_4( w, y, x, w ); } \
    /* Swizzler Getter Function(`xzxw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, z, x, w )` */ \
    __##T##_tuple_4 __xzxw() { return __##T##_tuple_4( x, z, x, w ); } \
    /* Swizzler Getter Function(`yzxw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, z, x, w )` */ \
    __##T##_tuple_4 __yzxw() { return __##T##_tuple_4( y, z, x, w ); } \
    /* Swizzler Getter Function(`zzxw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, z, x, w )` */ \
    __##T##_tuple_4 __zzxw() { return __##T##_tuple_4( z, z, x, w ); } \
    /* Swizzler Getter Function(`wzxw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, z, x, w )` */ \
    __##T##_tuple_4 __wzxw() { return __##T##_tuple_4( w, z, x, w ); } \
    /* Swizzler Getter Function(`xwxw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, w, x, w )` */ \
    __##T##_tuple_4 __xwxw() { return __##T##_tuple_4( x, w, x, w ); } \
    /* Swizzler Getter Function(`ywxw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, w, x, w )` */ \
    __##T##_tuple_4 __ywxw() { return __##T##_tuple_4( y, w, x, w ); } \
    /* Swizzler Getter Function(`zwxw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, w, x, w )` */ \
    __##T##_tuple_4 __zwxw() { return __##T##_tuple_4( z, w, x, w ); } \
    /* Swizzler Getter Function(`wwxw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, w, x, w )` */ \
    __##T##_tuple_4 __wwxw() { return __##T##_tuple_4( w, w, x, w ); } \
    /* Swizzler Getter Function(`xxyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, x, y, w )` */ \
    __##T##_tuple_4 __xxyw() { return __##T##_tuple_4( x, x, y, w ); } \
    /* Swizzler Getter Function(`yxyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, x, y, w )` */ \
    __##T##_tuple_4 __yxyw() { return __##T##_tuple_4( y, x, y, w ); } \
    /* Swizzler Getter Function(`zxyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, x, y, w )` */ \
    __##T##_tuple_4 __zxyw() { return __##T##_tuple_4( z, x, y, w ); } \
    /* Swizzler Getter Function(`wxyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, x, y, w )` */ \
    __##T##_tuple_4 __wxyw() { return __##T##_tuple_4( w, x, y, w ); } \
    /* Swizzler Getter Function(`xyyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, y, y, w )` */ \
    __##T##_tuple_4 __xyyw() { return __##T##_tuple_4( x, y, y, w ); } \
    /* Swizzler Getter Function(`yyyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, y, y, w )` */ \
    __##T##_tuple_4 __yyyw() { return __##T##_tuple_4( y, y, y, w ); } \
    /* Swizzler Getter Function(`zyyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, y, y, w )` */ \
    __##T##_tuple_4 __zyyw() { return __##T##_tuple_4( z, y, y, w ); } \
    /* Swizzler Getter Function(`wyyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, y, y, w )` */ \
    __##T##_tuple_4 __wyyw() { return __##T##_tuple_4( w, y, y, w ); } \
    /* Swizzler Getter Function(`xzyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, z, y, w )` */ \
    __##T##_tuple_4 __xzyw() { return __##T##_tuple_4( x, z, y, w ); } \
    /* Swizzler Getter Function(`yzyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, z, y, w )` */ \
    __##T##_tuple_4 __yzyw() { return __##T##_tuple_4( y, z, y, w ); } \
    /* Swizzler Getter Function(`zzyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, z, y, w )` */ \
    __##T##_tuple_4 __zzyw() { return __##T##_tuple_4( z, z, y, w ); } \
    /* Swizzler Getter Function(`wzyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, z, y, w )` */ \
    __##T##_tuple_4 __wzyw() { return __##T##_tuple_4( w, z, y, w ); } \
    /* Swizzler Getter Function(`xwyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, w, y, w )` */ \
    __##T##_tuple_4 __xwyw() { return __##T##_tuple_4( x, w, y, w ); } \
    /* Swizzler Getter Function(`ywyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, w, y, w )` */ \
    __##T##_tuple_4 __ywyw() { return __##T##_tuple_4( y, w, y, w ); } \
    /* Swizzler Getter Function(`zwyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, w, y, w )` */ \
    __##T##_tuple_4 __zwyw() { return __##T##_tuple_4( z, w, y, w ); } \
    /* Swizzler Getter Function(`wwyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, w, y, w )` */ \
    __##T##_tuple_4 __wwyw() { return __##T##_tuple_4( w, w, y, w ); } \
    /* Swizzler Getter Function(`xxzw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, x, z, w )` */ \
    __##T##_tuple_4 __xxzw() { return __##T##_tuple_4( x, x, z, w ); } \
    /* Swizzler Getter Function(`yxzw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, x, z, w )` */ \
    __##T##_tuple_4 __yxzw() { return __##T##_tuple_4( y, x, z, w ); } \
    /* Swizzler Getter Function(`zxzw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, x, z, w )` */ \
    __##T##_tuple_4 __zxzw() { return __##T##_tuple_4( z, x, z, w ); } \
    /* Swizzler Getter Function(`wxzw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, x, z, w )` */ \
    __##T##_tuple_4 __wxzw() { return __##T##_tuple_4( w, x, z, w ); } \
    /* Swizzler Getter Function(`xyzw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, y, z, w )` */ \
    __##T##_tuple_4 __xyzw() { return __##T##_tuple_4( x, y, z, w ); } \
    /* Swizzler Getter Function(`yyzw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, y, z, w )` */ \
    __##T##_tuple_4 __yyzw() { return __##T##_tuple_4( y, y, z, w ); } \
    /* Swizzler Getter Function(`zyzw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, y, z, w )` */ \
    __##T##_tuple_4 __zyzw() { return __##T##_tuple_4( z, y, z, w ); } \
    /* Swizzler Getter Function(`wyzw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, y, z, w )` */ \
    __##T##_tuple_4 __wyzw() { return __##T##_tuple_4( w, y, z, w ); } \
    /* Swizzler Getter Function(`xzzw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, z, z, w )` */ \
    __##T##_tuple_4 __xzzw() { return __##T##_tuple_4( x, z, z, w ); } \
    /* Swizzler Getter Function(`yzzw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, z, z, w )` */ \
    __##T##_tuple_4 __yzzw() { return __##T##_tuple_4( y, z, z, w ); } \
    /* Swizzler Getter Function(`zzzw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, z, z, w )` */ \
    __##T##_tuple_4 __zzzw() { return __##T##_tuple_4( z, z, z, w ); } \
    /* Swizzler Getter Function(`wzzw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, z, z, w )` */ \
    __##T##_tuple_4 __wzzw() { return __##T##_tuple_4( w, z, z, w ); } \
    /* Swizzler Getter Function(`xwzw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, w, z, w )` */ \
    __##T##_tuple_4 __xwzw() { return __##T##_tuple_4( x, w, z, w ); } \
    /* Swizzler Getter Function(`ywzw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, w, z, w )` */ \
    __##T##_tuple_4 __ywzw() { return __##T##_tuple_4( y, w, z, w ); } \
    /* Swizzler Getter Function(`zwzw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, w, z, w )` */ \
    __##T##_tuple_4 __zwzw() { return __##T##_tuple_4( z, w, z, w ); } \
    /* Swizzler Getter Function(`wwzw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, w, z, w )` */ \
    __##T##_tuple_4 __wwzw() { return __##T##_tuple_4( w, w, z, w ); } \
    /* Swizzler Getter Function(`xxww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, x, w, w )` */ \
    __##T##_tuple_4 __xxww() { return __##T##_tuple_4( x, x, w, w ); } \
    /* Swizzler Getter Function(`yxww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, x, w, w )` */ \
    __##T##_tuple_4 __yxww() { return __##T##_tuple_4( y, x, w, w ); } \
    /* Swizzler Getter Function(`zxww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, x, w, w )` */ \
    __##T##_tuple_4 __zxww() { return __##T##_tuple_4( z, x, w, w ); } \
    /* Swizzler Getter Function(`wxww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, x, w, w )` */ \
    __##T##_tuple_4 __wxww() { return __##T##_tuple_4( w, x, w, w ); } \
    /* Swizzler Getter Function(`xyww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, y, w, w )` */ \
    __##T##_tuple_4 __xyww() { return __##T##_tuple_4( x, y, w, w ); } \
    /* Swizzler Getter Function(`yyww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, y, w, w )` */ \
    __##T##_tuple_4 __yyww() { return __##T##_tuple_4( y, y, w, w ); } \
    /* Swizzler Getter Function(`zyww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, y, w, w )` */ \
    __##T##_tuple_4 __zyww() { return __##T##_tuple_4( z, y, w, w ); } \
    /* Swizzler Getter Function(`wyww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, y, w, w )` */ \
    __##T##_tuple_4 __wyww() { return __##T##_tuple_4( w, y, w, w ); } \
    /* Swizzler Getter Function(`xzww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, z, w, w )` */ \
    __##T##_tuple_4 __xzww() { return __##T##_tuple_4( x, z, w, w ); } \
    /* Swizzler Getter Function(`yzww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, z, w, w )` */ \
    __##T##_tuple_4 __yzww() { return __##T##_tuple_4( y, z, w, w ); } \
    /* Swizzler Getter Function(`zzww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, z, w, w )` */ \
    __##T##_tuple_4 __zzww() { return __##T##_tuple_4( z, z, w, w ); } \
    /* Swizzler Getter Function(`wzww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, z, w, w )` */ \
    __##T##_tuple_4 __wzww() { return __##T##_tuple_4( w, z, w, w ); } \
    /* Swizzler Getter Function(`xwww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( x, w, w, w )` */ \
    __##T##_tuple_4 __xwww() { return __##T##_tuple_4( x, w, w, w ); } \
    /* Swizzler Getter Function(`ywww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( y, w, w, w )` */ \
    __##T##_tuple_4 __ywww() { return __##T##_tuple_4( y, w, w, w ); } \
    /* Swizzler Getter Function(`zwww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( z, w, w, w )` */ \
    __##T##_tuple_4 __zwww() { return __##T##_tuple_4( z, w, w, w ); } \
    /* Swizzler Getter Function(`wwww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `__##T##_tuple_4( w, w, w, w )` */ \
    __##T##_tuple_4 __wwww() { return __##T##_tuple_4( w, w, w, w ); } \


#endif