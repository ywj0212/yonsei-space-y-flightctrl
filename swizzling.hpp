#ifndef __SPACE_Y_MATHLIB_SWIZZLING__
  #define __SPACE_Y_MATHLIB_SWIZZLING__

  #include "tuple.hpp"
  
#define __VEC2_SWIZZLE( T ) \
    /* Swizzler Getter Function(`xx`) */ \
    __##T##_tuple_2 T##vec2::__xx() { return __##T##_tuple_2( &x, &x ); } \
    /* Swizzler Getter Function(`xy`) */ \
    __##T##_tuple_2 T##vec2::__xy() { return __##T##_tuple_2( &x, &y ); } \
    /* Swizzler Getter Function(`xi`) */ \
    __##T##_tuple_2 T##vec2::__xi() { return __##T##_tuple_2( &x, NULL ); } \
    /* Swizzler Getter Function(`yx`) */ \
    __##T##_tuple_2 T##vec2::__yx() { return __##T##_tuple_2( &y, &x ); } \
    /* Swizzler Getter Function(`yy`) */ \
    __##T##_tuple_2 T##vec2::__yy() { return __##T##_tuple_2( &y, &y ); } \
    /* Swizzler Getter Function(`yi`) */ \
    __##T##_tuple_2 T##vec2::__yi() { return __##T##_tuple_2( &y, NULL ); } \
    /* Swizzler Getter Function(`ix`) */ \
    __##T##_tuple_2 T##vec2::__ix() { return __##T##_tuple_2( NULL, &x ); } \
    /* Swizzler Getter Function(`iy`) */ \
    __##T##_tuple_2 T##vec2::__iy() { return __##T##_tuple_2( NULL, &y ); } \
    /* Swizzler Getter Function(`ii`) */ \
    __##T##_tuple_2 T##vec2::__ii() { return __##T##_tuple_2( NULL, NULL ); } \
    /* Swizzler Getter Function(`xxx`) */ \
    __##T##_tuple_3 T##vec2::__xxx() { return __##T##_tuple_3( &x, &x, &x ); } \
    /* Swizzler Getter Function(`xxy`) */ \
    __##T##_tuple_3 T##vec2::__xxy() { return __##T##_tuple_3( &x, &x, &y ); } \
    /* Swizzler Getter Function(`xxi`) */ \
    __##T##_tuple_3 T##vec2::__xxi() { return __##T##_tuple_3( &x, &x, NULL ); } \
    /* Swizzler Getter Function(`xyx`) */ \
    __##T##_tuple_3 T##vec2::__xyx() { return __##T##_tuple_3( &x, &y, &x ); } \
    /* Swizzler Getter Function(`xyy`) */ \
    __##T##_tuple_3 T##vec2::__xyy() { return __##T##_tuple_3( &x, &y, &y ); } \
    /* Swizzler Getter Function(`xyi`) */ \
    __##T##_tuple_3 T##vec2::__xyi() { return __##T##_tuple_3( &x, &y, NULL ); } \
    /* Swizzler Getter Function(`xix`) */ \
    __##T##_tuple_3 T##vec2::__xix() { return __##T##_tuple_3( &x, NULL, &x ); } \
    /* Swizzler Getter Function(`xiy`) */ \
    __##T##_tuple_3 T##vec2::__xiy() { return __##T##_tuple_3( &x, NULL, &y ); } \
    /* Swizzler Getter Function(`xii`) */ \
    __##T##_tuple_3 T##vec2::__xii() { return __##T##_tuple_3( &x, NULL, NULL ); } \
    /* Swizzler Getter Function(`yxx`) */ \
    __##T##_tuple_3 T##vec2::__yxx() { return __##T##_tuple_3( &y, &x, &x ); } \
    /* Swizzler Getter Function(`yxy`) */ \
    __##T##_tuple_3 T##vec2::__yxy() { return __##T##_tuple_3( &y, &x, &y ); } \
    /* Swizzler Getter Function(`yxi`) */ \
    __##T##_tuple_3 T##vec2::__yxi() { return __##T##_tuple_3( &y, &x, NULL ); } \
    /* Swizzler Getter Function(`yyx`) */ \
    __##T##_tuple_3 T##vec2::__yyx() { return __##T##_tuple_3( &y, &y, &x ); } \
    /* Swizzler Getter Function(`yyy`) */ \
    __##T##_tuple_3 T##vec2::__yyy() { return __##T##_tuple_3( &y, &y, &y ); } \
    /* Swizzler Getter Function(`yyi`) */ \
    __##T##_tuple_3 T##vec2::__yyi() { return __##T##_tuple_3( &y, &y, NULL ); } \
    /* Swizzler Getter Function(`yix`) */ \
    __##T##_tuple_3 T##vec2::__yix() { return __##T##_tuple_3( &y, NULL, &x ); } \
    /* Swizzler Getter Function(`yiy`) */ \
    __##T##_tuple_3 T##vec2::__yiy() { return __##T##_tuple_3( &y, NULL, &y ); } \
    /* Swizzler Getter Function(`yii`) */ \
    __##T##_tuple_3 T##vec2::__yii() { return __##T##_tuple_3( &y, NULL, NULL ); } \
    /* Swizzler Getter Function(`ixx`) */ \
    __##T##_tuple_3 T##vec2::__ixx() { return __##T##_tuple_3( NULL, &x, &x ); } \
    /* Swizzler Getter Function(`ixy`) */ \
    __##T##_tuple_3 T##vec2::__ixy() { return __##T##_tuple_3( NULL, &x, &y ); } \
    /* Swizzler Getter Function(`ixi`) */ \
    __##T##_tuple_3 T##vec2::__ixi() { return __##T##_tuple_3( NULL, &x, NULL ); } \
    /* Swizzler Getter Function(`iyx`) */ \
    __##T##_tuple_3 T##vec2::__iyx() { return __##T##_tuple_3( NULL, &y, &x ); } \
    /* Swizzler Getter Function(`iyy`) */ \
    __##T##_tuple_3 T##vec2::__iyy() { return __##T##_tuple_3( NULL, &y, &y ); } \
    /* Swizzler Getter Function(`iyi`) */ \
    __##T##_tuple_3 T##vec2::__iyi() { return __##T##_tuple_3( NULL, &y, NULL ); } \
    /* Swizzler Getter Function(`iix`) */ \
    __##T##_tuple_3 T##vec2::__iix() { return __##T##_tuple_3( NULL, NULL, &x ); } \
    /* Swizzler Getter Function(`iiy`) */ \
    __##T##_tuple_3 T##vec2::__iiy() { return __##T##_tuple_3( NULL, NULL, &y ); } \
    /* Swizzler Getter Function(`iii`) */ \
    __##T##_tuple_3 T##vec2::__iii() { return __##T##_tuple_3( NULL, NULL, NULL ); } \
    /* Swizzler Getter Function(`xxxx`) */ \
    __##T##_tuple_4 T##vec2::__xxxx() { return __##T##_tuple_4( &x, &x, &x, &x ); } \
    /* Swizzler Getter Function(`xxxy`) */ \
    __##T##_tuple_4 T##vec2::__xxxy() { return __##T##_tuple_4( &x, &x, &x, &y ); } \
    /* Swizzler Getter Function(`xxxi`) */ \
    __##T##_tuple_4 T##vec2::__xxxi() { return __##T##_tuple_4( &x, &x, &x, NULL ); } \
    /* Swizzler Getter Function(`xxyx`) */ \
    __##T##_tuple_4 T##vec2::__xxyx() { return __##T##_tuple_4( &x, &x, &y, &x ); } \
    /* Swizzler Getter Function(`xxyy`) */ \
    __##T##_tuple_4 T##vec2::__xxyy() { return __##T##_tuple_4( &x, &x, &y, &y ); } \
    /* Swizzler Getter Function(`xxyi`) */ \
    __##T##_tuple_4 T##vec2::__xxyi() { return __##T##_tuple_4( &x, &x, &y, NULL ); } \
    /* Swizzler Getter Function(`xxix`) */ \
    __##T##_tuple_4 T##vec2::__xxix() { return __##T##_tuple_4( &x, &x, NULL, &x ); } \
    /* Swizzler Getter Function(`xxiy`) */ \
    __##T##_tuple_4 T##vec2::__xxiy() { return __##T##_tuple_4( &x, &x, NULL, &y ); } \
    /* Swizzler Getter Function(`xxii`) */ \
    __##T##_tuple_4 T##vec2::__xxii() { return __##T##_tuple_4( &x, &x, NULL, NULL ); } \
    /* Swizzler Getter Function(`xyxx`) */ \
    __##T##_tuple_4 T##vec2::__xyxx() { return __##T##_tuple_4( &x, &y, &x, &x ); } \
    /* Swizzler Getter Function(`xyxy`) */ \
    __##T##_tuple_4 T##vec2::__xyxy() { return __##T##_tuple_4( &x, &y, &x, &y ); } \
    /* Swizzler Getter Function(`xyxi`) */ \
    __##T##_tuple_4 T##vec2::__xyxi() { return __##T##_tuple_4( &x, &y, &x, NULL ); } \
    /* Swizzler Getter Function(`xyyx`) */ \
    __##T##_tuple_4 T##vec2::__xyyx() { return __##T##_tuple_4( &x, &y, &y, &x ); } \
    /* Swizzler Getter Function(`xyyy`) */ \
    __##T##_tuple_4 T##vec2::__xyyy() { return __##T##_tuple_4( &x, &y, &y, &y ); } \
    /* Swizzler Getter Function(`xyyi`) */ \
    __##T##_tuple_4 T##vec2::__xyyi() { return __##T##_tuple_4( &x, &y, &y, NULL ); } \
    /* Swizzler Getter Function(`xyix`) */ \
    __##T##_tuple_4 T##vec2::__xyix() { return __##T##_tuple_4( &x, &y, NULL, &x ); } \
    /* Swizzler Getter Function(`xyiy`) */ \
    __##T##_tuple_4 T##vec2::__xyiy() { return __##T##_tuple_4( &x, &y, NULL, &y ); } \
    /* Swizzler Getter Function(`xyii`) */ \
    __##T##_tuple_4 T##vec2::__xyii() { return __##T##_tuple_4( &x, &y, NULL, NULL ); } \
    /* Swizzler Getter Function(`xixx`) */ \
    __##T##_tuple_4 T##vec2::__xixx() { return __##T##_tuple_4( &x, NULL, &x, &x ); } \
    /* Swizzler Getter Function(`xixy`) */ \
    __##T##_tuple_4 T##vec2::__xixy() { return __##T##_tuple_4( &x, NULL, &x, &y ); } \
    /* Swizzler Getter Function(`xixi`) */ \
    __##T##_tuple_4 T##vec2::__xixi() { return __##T##_tuple_4( &x, NULL, &x, NULL ); } \
    /* Swizzler Getter Function(`xiyx`) */ \
    __##T##_tuple_4 T##vec2::__xiyx() { return __##T##_tuple_4( &x, NULL, &y, &x ); } \
    /* Swizzler Getter Function(`xiyy`) */ \
    __##T##_tuple_4 T##vec2::__xiyy() { return __##T##_tuple_4( &x, NULL, &y, &y ); } \
    /* Swizzler Getter Function(`xiyi`) */ \
    __##T##_tuple_4 T##vec2::__xiyi() { return __##T##_tuple_4( &x, NULL, &y, NULL ); } \
    /* Swizzler Getter Function(`xiix`) */ \
    __##T##_tuple_4 T##vec2::__xiix() { return __##T##_tuple_4( &x, NULL, NULL, &x ); } \
    /* Swizzler Getter Function(`xiiy`) */ \
    __##T##_tuple_4 T##vec2::__xiiy() { return __##T##_tuple_4( &x, NULL, NULL, &y ); } \
    /* Swizzler Getter Function(`xiii`) */ \
    __##T##_tuple_4 T##vec2::__xiii() { return __##T##_tuple_4( &x, NULL, NULL, NULL ); } \
    /* Swizzler Getter Function(`yxxx`) */ \
    __##T##_tuple_4 T##vec2::__yxxx() { return __##T##_tuple_4( &y, &x, &x, &x ); } \
    /* Swizzler Getter Function(`yxxy`) */ \
    __##T##_tuple_4 T##vec2::__yxxy() { return __##T##_tuple_4( &y, &x, &x, &y ); } \
    /* Swizzler Getter Function(`yxxi`) */ \
    __##T##_tuple_4 T##vec2::__yxxi() { return __##T##_tuple_4( &y, &x, &x, NULL ); } \
    /* Swizzler Getter Function(`yxyx`) */ \
    __##T##_tuple_4 T##vec2::__yxyx() { return __##T##_tuple_4( &y, &x, &y, &x ); } \
    /* Swizzler Getter Function(`yxyy`) */ \
    __##T##_tuple_4 T##vec2::__yxyy() { return __##T##_tuple_4( &y, &x, &y, &y ); } \
    /* Swizzler Getter Function(`yxyi`) */ \
    __##T##_tuple_4 T##vec2::__yxyi() { return __##T##_tuple_4( &y, &x, &y, NULL ); } \
    /* Swizzler Getter Function(`yxix`) */ \
    __##T##_tuple_4 T##vec2::__yxix() { return __##T##_tuple_4( &y, &x, NULL, &x ); } \
    /* Swizzler Getter Function(`yxiy`) */ \
    __##T##_tuple_4 T##vec2::__yxiy() { return __##T##_tuple_4( &y, &x, NULL, &y ); } \
    /* Swizzler Getter Function(`yxii`) */ \
    __##T##_tuple_4 T##vec2::__yxii() { return __##T##_tuple_4( &y, &x, NULL, NULL ); } \
    /* Swizzler Getter Function(`yyxx`) */ \
    __##T##_tuple_4 T##vec2::__yyxx() { return __##T##_tuple_4( &y, &y, &x, &x ); } \
    /* Swizzler Getter Function(`yyxy`) */ \
    __##T##_tuple_4 T##vec2::__yyxy() { return __##T##_tuple_4( &y, &y, &x, &y ); } \
    /* Swizzler Getter Function(`yyxi`) */ \
    __##T##_tuple_4 T##vec2::__yyxi() { return __##T##_tuple_4( &y, &y, &x, NULL ); } \
    /* Swizzler Getter Function(`yyyx`) */ \
    __##T##_tuple_4 T##vec2::__yyyx() { return __##T##_tuple_4( &y, &y, &y, &x ); } \
    /* Swizzler Getter Function(`yyyy`) */ \
    __##T##_tuple_4 T##vec2::__yyyy() { return __##T##_tuple_4( &y, &y, &y, &y ); } \
    /* Swizzler Getter Function(`yyyi`) */ \
    __##T##_tuple_4 T##vec2::__yyyi() { return __##T##_tuple_4( &y, &y, &y, NULL ); } \
    /* Swizzler Getter Function(`yyix`) */ \
    __##T##_tuple_4 T##vec2::__yyix() { return __##T##_tuple_4( &y, &y, NULL, &x ); } \
    /* Swizzler Getter Function(`yyiy`) */ \
    __##T##_tuple_4 T##vec2::__yyiy() { return __##T##_tuple_4( &y, &y, NULL, &y ); } \
    /* Swizzler Getter Function(`yyii`) */ \
    __##T##_tuple_4 T##vec2::__yyii() { return __##T##_tuple_4( &y, &y, NULL, NULL ); } \
    /* Swizzler Getter Function(`yixx`) */ \
    __##T##_tuple_4 T##vec2::__yixx() { return __##T##_tuple_4( &y, NULL, &x, &x ); } \
    /* Swizzler Getter Function(`yixy`) */ \
    __##T##_tuple_4 T##vec2::__yixy() { return __##T##_tuple_4( &y, NULL, &x, &y ); } \
    /* Swizzler Getter Function(`yixi`) */ \
    __##T##_tuple_4 T##vec2::__yixi() { return __##T##_tuple_4( &y, NULL, &x, NULL ); } \
    /* Swizzler Getter Function(`yiyx`) */ \
    __##T##_tuple_4 T##vec2::__yiyx() { return __##T##_tuple_4( &y, NULL, &y, &x ); } \
    /* Swizzler Getter Function(`yiyy`) */ \
    __##T##_tuple_4 T##vec2::__yiyy() { return __##T##_tuple_4( &y, NULL, &y, &y ); } \
    /* Swizzler Getter Function(`yiyi`) */ \
    __##T##_tuple_4 T##vec2::__yiyi() { return __##T##_tuple_4( &y, NULL, &y, NULL ); } \
    /* Swizzler Getter Function(`yiix`) */ \
    __##T##_tuple_4 T##vec2::__yiix() { return __##T##_tuple_4( &y, NULL, NULL, &x ); } \
    /* Swizzler Getter Function(`yiiy`) */ \
    __##T##_tuple_4 T##vec2::__yiiy() { return __##T##_tuple_4( &y, NULL, NULL, &y ); } \
    /* Swizzler Getter Function(`yiii`) */ \
    __##T##_tuple_4 T##vec2::__yiii() { return __##T##_tuple_4( &y, NULL, NULL, NULL ); } \
    /* Swizzler Getter Function(`ixxx`) */ \
    __##T##_tuple_4 T##vec2::__ixxx() { return __##T##_tuple_4( NULL, &x, &x, &x ); } \
    /* Swizzler Getter Function(`ixxy`) */ \
    __##T##_tuple_4 T##vec2::__ixxy() { return __##T##_tuple_4( NULL, &x, &x, &y ); } \
    /* Swizzler Getter Function(`ixxi`) */ \
    __##T##_tuple_4 T##vec2::__ixxi() { return __##T##_tuple_4( NULL, &x, &x, NULL ); } \
    /* Swizzler Getter Function(`ixyx`) */ \
    __##T##_tuple_4 T##vec2::__ixyx() { return __##T##_tuple_4( NULL, &x, &y, &x ); } \
    /* Swizzler Getter Function(`ixyy`) */ \
    __##T##_tuple_4 T##vec2::__ixyy() { return __##T##_tuple_4( NULL, &x, &y, &y ); } \
    /* Swizzler Getter Function(`ixyi`) */ \
    __##T##_tuple_4 T##vec2::__ixyi() { return __##T##_tuple_4( NULL, &x, &y, NULL ); } \
    /* Swizzler Getter Function(`ixix`) */ \
    __##T##_tuple_4 T##vec2::__ixix() { return __##T##_tuple_4( NULL, &x, NULL, &x ); } \
    /* Swizzler Getter Function(`ixiy`) */ \
    __##T##_tuple_4 T##vec2::__ixiy() { return __##T##_tuple_4( NULL, &x, NULL, &y ); } \
    /* Swizzler Getter Function(`ixii`) */ \
    __##T##_tuple_4 T##vec2::__ixii() { return __##T##_tuple_4( NULL, &x, NULL, NULL ); } \
    /* Swizzler Getter Function(`iyxx`) */ \
    __##T##_tuple_4 T##vec2::__iyxx() { return __##T##_tuple_4( NULL, &y, &x, &x ); } \
    /* Swizzler Getter Function(`iyxy`) */ \
    __##T##_tuple_4 T##vec2::__iyxy() { return __##T##_tuple_4( NULL, &y, &x, &y ); } \
    /* Swizzler Getter Function(`iyxi`) */ \
    __##T##_tuple_4 T##vec2::__iyxi() { return __##T##_tuple_4( NULL, &y, &x, NULL ); } \
    /* Swizzler Getter Function(`iyyx`) */ \
    __##T##_tuple_4 T##vec2::__iyyx() { return __##T##_tuple_4( NULL, &y, &y, &x ); } \
    /* Swizzler Getter Function(`iyyy`) */ \
    __##T##_tuple_4 T##vec2::__iyyy() { return __##T##_tuple_4( NULL, &y, &y, &y ); } \
    /* Swizzler Getter Function(`iyyi`) */ \
    __##T##_tuple_4 T##vec2::__iyyi() { return __##T##_tuple_4( NULL, &y, &y, NULL ); } \
    /* Swizzler Getter Function(`iyix`) */ \
    __##T##_tuple_4 T##vec2::__iyix() { return __##T##_tuple_4( NULL, &y, NULL, &x ); } \
    /* Swizzler Getter Function(`iyiy`) */ \
    __##T##_tuple_4 T##vec2::__iyiy() { return __##T##_tuple_4( NULL, &y, NULL, &y ); } \
    /* Swizzler Getter Function(`iyii`) */ \
    __##T##_tuple_4 T##vec2::__iyii() { return __##T##_tuple_4( NULL, &y, NULL, NULL ); } \
    /* Swizzler Getter Function(`iixx`) */ \
    __##T##_tuple_4 T##vec2::__iixx() { return __##T##_tuple_4( NULL, NULL, &x, &x ); } \
    /* Swizzler Getter Function(`iixy`) */ \
    __##T##_tuple_4 T##vec2::__iixy() { return __##T##_tuple_4( NULL, NULL, &x, &y ); } \
    /* Swizzler Getter Function(`iixi`) */ \
    __##T##_tuple_4 T##vec2::__iixi() { return __##T##_tuple_4( NULL, NULL, &x, NULL ); } \
    /* Swizzler Getter Function(`iiyx`) */ \
    __##T##_tuple_4 T##vec2::__iiyx() { return __##T##_tuple_4( NULL, NULL, &y, &x ); } \
    /* Swizzler Getter Function(`iiyy`) */ \
    __##T##_tuple_4 T##vec2::__iiyy() { return __##T##_tuple_4( NULL, NULL, &y, &y ); } \
    /* Swizzler Getter Function(`iiyi`) */ \
    __##T##_tuple_4 T##vec2::__iiyi() { return __##T##_tuple_4( NULL, NULL, &y, NULL ); } \
    /* Swizzler Getter Function(`iiix`) */ \
    __##T##_tuple_4 T##vec2::__iiix() { return __##T##_tuple_4( NULL, NULL, NULL, &x ); } \
    /* Swizzler Getter Function(`iiiy`) */ \
    __##T##_tuple_4 T##vec2::__iiiy() { return __##T##_tuple_4( NULL, NULL, NULL, &y ); } \
    /* Swizzler Getter Function(`iiii`) */ \
    __##T##_tuple_4 T##vec2::__iiii() { return __##T##_tuple_4( NULL, NULL, NULL, NULL ); } \



#define __VEC3_SWIZZLE( T ) \
    /* Swizzler Getter Function(`xx`) */ \
    __##T##_tuple_2 T##vec3::__xx() { return __##T##_tuple_2( &x, &x ); } \
    /* Swizzler Getter Function(`xy`) */ \
    __##T##_tuple_2 T##vec3::__xy() { return __##T##_tuple_2( &x, &y ); } \
    /* Swizzler Getter Function(`xz`) */ \
    __##T##_tuple_2 T##vec3::__xz() { return __##T##_tuple_2( &x, &z ); } \
    /* Swizzler Getter Function(`xi`) */ \
    __##T##_tuple_2 T##vec3::__xi() { return __##T##_tuple_2( &x, NULL ); } \
    /* Swizzler Getter Function(`yx`) */ \
    __##T##_tuple_2 T##vec3::__yx() { return __##T##_tuple_2( &y, &x ); } \
    /* Swizzler Getter Function(`yy`) */ \
    __##T##_tuple_2 T##vec3::__yy() { return __##T##_tuple_2( &y, &y ); } \
    /* Swizzler Getter Function(`yz`) */ \
    __##T##_tuple_2 T##vec3::__yz() { return __##T##_tuple_2( &y, &z ); } \
    /* Swizzler Getter Function(`yi`) */ \
    __##T##_tuple_2 T##vec3::__yi() { return __##T##_tuple_2( &y, NULL ); } \
    /* Swizzler Getter Function(`zx`) */ \
    __##T##_tuple_2 T##vec3::__zx() { return __##T##_tuple_2( &z, &x ); } \
    /* Swizzler Getter Function(`zy`) */ \
    __##T##_tuple_2 T##vec3::__zy() { return __##T##_tuple_2( &z, &y ); } \
    /* Swizzler Getter Function(`zz`) */ \
    __##T##_tuple_2 T##vec3::__zz() { return __##T##_tuple_2( &z, &z ); } \
    /* Swizzler Getter Function(`zi`) */ \
    __##T##_tuple_2 T##vec3::__zi() { return __##T##_tuple_2( &z, NULL ); } \
    /* Swizzler Getter Function(`ix`) */ \
    __##T##_tuple_2 T##vec3::__ix() { return __##T##_tuple_2( NULL, &x ); } \
    /* Swizzler Getter Function(`iy`) */ \
    __##T##_tuple_2 T##vec3::__iy() { return __##T##_tuple_2( NULL, &y ); } \
    /* Swizzler Getter Function(`iz`) */ \
    __##T##_tuple_2 T##vec3::__iz() { return __##T##_tuple_2( NULL, &z ); } \
    /* Swizzler Getter Function(`ii`) */ \
    __##T##_tuple_2 T##vec3::__ii() { return __##T##_tuple_2( NULL, NULL ); } \
    /* Swizzler Getter Function(`xxx`) */ \
    __##T##_tuple_3 T##vec3::__xxx() { return __##T##_tuple_3( &x, &x, &x ); } \
    /* Swizzler Getter Function(`xxy`) */ \
    __##T##_tuple_3 T##vec3::__xxy() { return __##T##_tuple_3( &x, &x, &y ); } \
    /* Swizzler Getter Function(`xxz`) */ \
    __##T##_tuple_3 T##vec3::__xxz() { return __##T##_tuple_3( &x, &x, &z ); } \
    /* Swizzler Getter Function(`xxi`) */ \
    __##T##_tuple_3 T##vec3::__xxi() { return __##T##_tuple_3( &x, &x, NULL ); } \
    /* Swizzler Getter Function(`xyx`) */ \
    __##T##_tuple_3 T##vec3::__xyx() { return __##T##_tuple_3( &x, &y, &x ); } \
    /* Swizzler Getter Function(`xyy`) */ \
    __##T##_tuple_3 T##vec3::__xyy() { return __##T##_tuple_3( &x, &y, &y ); } \
    /* Swizzler Getter Function(`xyz`) */ \
    __##T##_tuple_3 T##vec3::__xyz() { return __##T##_tuple_3( &x, &y, &z ); } \
    /* Swizzler Getter Function(`xyi`) */ \
    __##T##_tuple_3 T##vec3::__xyi() { return __##T##_tuple_3( &x, &y, NULL ); } \
    /* Swizzler Getter Function(`xzx`) */ \
    __##T##_tuple_3 T##vec3::__xzx() { return __##T##_tuple_3( &x, &z, &x ); } \
    /* Swizzler Getter Function(`xzy`) */ \
    __##T##_tuple_3 T##vec3::__xzy() { return __##T##_tuple_3( &x, &z, &y ); } \
    /* Swizzler Getter Function(`xzz`) */ \
    __##T##_tuple_3 T##vec3::__xzz() { return __##T##_tuple_3( &x, &z, &z ); } \
    /* Swizzler Getter Function(`xzi`) */ \
    __##T##_tuple_3 T##vec3::__xzi() { return __##T##_tuple_3( &x, &z, NULL ); } \
    /* Swizzler Getter Function(`xix`) */ \
    __##T##_tuple_3 T##vec3::__xix() { return __##T##_tuple_3( &x, NULL, &x ); } \
    /* Swizzler Getter Function(`xiy`) */ \
    __##T##_tuple_3 T##vec3::__xiy() { return __##T##_tuple_3( &x, NULL, &y ); } \
    /* Swizzler Getter Function(`xiz`) */ \
    __##T##_tuple_3 T##vec3::__xiz() { return __##T##_tuple_3( &x, NULL, &z ); } \
    /* Swizzler Getter Function(`xii`) */ \
    __##T##_tuple_3 T##vec3::__xii() { return __##T##_tuple_3( &x, NULL, NULL ); } \
    /* Swizzler Getter Function(`yxx`) */ \
    __##T##_tuple_3 T##vec3::__yxx() { return __##T##_tuple_3( &y, &x, &x ); } \
    /* Swizzler Getter Function(`yxy`) */ \
    __##T##_tuple_3 T##vec3::__yxy() { return __##T##_tuple_3( &y, &x, &y ); } \
    /* Swizzler Getter Function(`yxz`) */ \
    __##T##_tuple_3 T##vec3::__yxz() { return __##T##_tuple_3( &y, &x, &z ); } \
    /* Swizzler Getter Function(`yxi`) */ \
    __##T##_tuple_3 T##vec3::__yxi() { return __##T##_tuple_3( &y, &x, NULL ); } \
    /* Swizzler Getter Function(`yyx`) */ \
    __##T##_tuple_3 T##vec3::__yyx() { return __##T##_tuple_3( &y, &y, &x ); } \
    /* Swizzler Getter Function(`yyy`) */ \
    __##T##_tuple_3 T##vec3::__yyy() { return __##T##_tuple_3( &y, &y, &y ); } \
    /* Swizzler Getter Function(`yyz`) */ \
    __##T##_tuple_3 T##vec3::__yyz() { return __##T##_tuple_3( &y, &y, &z ); } \
    /* Swizzler Getter Function(`yyi`) */ \
    __##T##_tuple_3 T##vec3::__yyi() { return __##T##_tuple_3( &y, &y, NULL ); } \
    /* Swizzler Getter Function(`yzx`) */ \
    __##T##_tuple_3 T##vec3::__yzx() { return __##T##_tuple_3( &y, &z, &x ); } \
    /* Swizzler Getter Function(`yzy`) */ \
    __##T##_tuple_3 T##vec3::__yzy() { return __##T##_tuple_3( &y, &z, &y ); } \
    /* Swizzler Getter Function(`yzz`) */ \
    __##T##_tuple_3 T##vec3::__yzz() { return __##T##_tuple_3( &y, &z, &z ); } \
    /* Swizzler Getter Function(`yzi`) */ \
    __##T##_tuple_3 T##vec3::__yzi() { return __##T##_tuple_3( &y, &z, NULL ); } \
    /* Swizzler Getter Function(`yix`) */ \
    __##T##_tuple_3 T##vec3::__yix() { return __##T##_tuple_3( &y, NULL, &x ); } \
    /* Swizzler Getter Function(`yiy`) */ \
    __##T##_tuple_3 T##vec3::__yiy() { return __##T##_tuple_3( &y, NULL, &y ); } \
    /* Swizzler Getter Function(`yiz`) */ \
    __##T##_tuple_3 T##vec3::__yiz() { return __##T##_tuple_3( &y, NULL, &z ); } \
    /* Swizzler Getter Function(`yii`) */ \
    __##T##_tuple_3 T##vec3::__yii() { return __##T##_tuple_3( &y, NULL, NULL ); } \
    /* Swizzler Getter Function(`zxx`) */ \
    __##T##_tuple_3 T##vec3::__zxx() { return __##T##_tuple_3( &z, &x, &x ); } \
    /* Swizzler Getter Function(`zxy`) */ \
    __##T##_tuple_3 T##vec3::__zxy() { return __##T##_tuple_3( &z, &x, &y ); } \
    /* Swizzler Getter Function(`zxz`) */ \
    __##T##_tuple_3 T##vec3::__zxz() { return __##T##_tuple_3( &z, &x, &z ); } \
    /* Swizzler Getter Function(`zxi`) */ \
    __##T##_tuple_3 T##vec3::__zxi() { return __##T##_tuple_3( &z, &x, NULL ); } \
    /* Swizzler Getter Function(`zyx`) */ \
    __##T##_tuple_3 T##vec3::__zyx() { return __##T##_tuple_3( &z, &y, &x ); } \
    /* Swizzler Getter Function(`zyy`) */ \
    __##T##_tuple_3 T##vec3::__zyy() { return __##T##_tuple_3( &z, &y, &y ); } \
    /* Swizzler Getter Function(`zyz`) */ \
    __##T##_tuple_3 T##vec3::__zyz() { return __##T##_tuple_3( &z, &y, &z ); } \
    /* Swizzler Getter Function(`zyi`) */ \
    __##T##_tuple_3 T##vec3::__zyi() { return __##T##_tuple_3( &z, &y, NULL ); } \
    /* Swizzler Getter Function(`zzx`) */ \
    __##T##_tuple_3 T##vec3::__zzx() { return __##T##_tuple_3( &z, &z, &x ); } \
    /* Swizzler Getter Function(`zzy`) */ \
    __##T##_tuple_3 T##vec3::__zzy() { return __##T##_tuple_3( &z, &z, &y ); } \
    /* Swizzler Getter Function(`zzz`) */ \
    __##T##_tuple_3 T##vec3::__zzz() { return __##T##_tuple_3( &z, &z, &z ); } \
    /* Swizzler Getter Function(`zzi`) */ \
    __##T##_tuple_3 T##vec3::__zzi() { return __##T##_tuple_3( &z, &z, NULL ); } \
    /* Swizzler Getter Function(`zix`) */ \
    __##T##_tuple_3 T##vec3::__zix() { return __##T##_tuple_3( &z, NULL, &x ); } \
    /* Swizzler Getter Function(`ziy`) */ \
    __##T##_tuple_3 T##vec3::__ziy() { return __##T##_tuple_3( &z, NULL, &y ); } \
    /* Swizzler Getter Function(`ziz`) */ \
    __##T##_tuple_3 T##vec3::__ziz() { return __##T##_tuple_3( &z, NULL, &z ); } \
    /* Swizzler Getter Function(`zii`) */ \
    __##T##_tuple_3 T##vec3::__zii() { return __##T##_tuple_3( &z, NULL, NULL ); } \
    /* Swizzler Getter Function(`ixx`) */ \
    __##T##_tuple_3 T##vec3::__ixx() { return __##T##_tuple_3( NULL, &x, &x ); } \
    /* Swizzler Getter Function(`ixy`) */ \
    __##T##_tuple_3 T##vec3::__ixy() { return __##T##_tuple_3( NULL, &x, &y ); } \
    /* Swizzler Getter Function(`ixz`) */ \
    __##T##_tuple_3 T##vec3::__ixz() { return __##T##_tuple_3( NULL, &x, &z ); } \
    /* Swizzler Getter Function(`ixi`) */ \
    __##T##_tuple_3 T##vec3::__ixi() { return __##T##_tuple_3( NULL, &x, NULL ); } \
    /* Swizzler Getter Function(`iyx`) */ \
    __##T##_tuple_3 T##vec3::__iyx() { return __##T##_tuple_3( NULL, &y, &x ); } \
    /* Swizzler Getter Function(`iyy`) */ \
    __##T##_tuple_3 T##vec3::__iyy() { return __##T##_tuple_3( NULL, &y, &y ); } \
    /* Swizzler Getter Function(`iyz`) */ \
    __##T##_tuple_3 T##vec3::__iyz() { return __##T##_tuple_3( NULL, &y, &z ); } \
    /* Swizzler Getter Function(`iyi`) */ \
    __##T##_tuple_3 T##vec3::__iyi() { return __##T##_tuple_3( NULL, &y, NULL ); } \
    /* Swizzler Getter Function(`izx`) */ \
    __##T##_tuple_3 T##vec3::__izx() { return __##T##_tuple_3( NULL, &z, &x ); } \
    /* Swizzler Getter Function(`izy`) */ \
    __##T##_tuple_3 T##vec3::__izy() { return __##T##_tuple_3( NULL, &z, &y ); } \
    /* Swizzler Getter Function(`izz`) */ \
    __##T##_tuple_3 T##vec3::__izz() { return __##T##_tuple_3( NULL, &z, &z ); } \
    /* Swizzler Getter Function(`izi`) */ \
    __##T##_tuple_3 T##vec3::__izi() { return __##T##_tuple_3( NULL, &z, NULL ); } \
    /* Swizzler Getter Function(`iix`) */ \
    __##T##_tuple_3 T##vec3::__iix() { return __##T##_tuple_3( NULL, NULL, &x ); } \
    /* Swizzler Getter Function(`iiy`) */ \
    __##T##_tuple_3 T##vec3::__iiy() { return __##T##_tuple_3( NULL, NULL, &y ); } \
    /* Swizzler Getter Function(`iiz`) */ \
    __##T##_tuple_3 T##vec3::__iiz() { return __##T##_tuple_3( NULL, NULL, &z ); } \
    /* Swizzler Getter Function(`iii`) */ \
    __##T##_tuple_3 T##vec3::__iii() { return __##T##_tuple_3( NULL, NULL, NULL ); } \
    /* Swizzler Getter Function(`xxxx`) */ \
    __##T##_tuple_4 T##vec3::__xxxx() { return __##T##_tuple_4( &x, &x, &x, &x ); } \
    /* Swizzler Getter Function(`xxxy`) */ \
    __##T##_tuple_4 T##vec3::__xxxy() { return __##T##_tuple_4( &x, &x, &x, &y ); } \
    /* Swizzler Getter Function(`xxxz`) */ \
    __##T##_tuple_4 T##vec3::__xxxz() { return __##T##_tuple_4( &x, &x, &x, &z ); } \
    /* Swizzler Getter Function(`xxxi`) */ \
    __##T##_tuple_4 T##vec3::__xxxi() { return __##T##_tuple_4( &x, &x, &x, NULL ); } \
    /* Swizzler Getter Function(`xxyx`) */ \
    __##T##_tuple_4 T##vec3::__xxyx() { return __##T##_tuple_4( &x, &x, &y, &x ); } \
    /* Swizzler Getter Function(`xxyy`) */ \
    __##T##_tuple_4 T##vec3::__xxyy() { return __##T##_tuple_4( &x, &x, &y, &y ); } \
    /* Swizzler Getter Function(`xxyz`) */ \
    __##T##_tuple_4 T##vec3::__xxyz() { return __##T##_tuple_4( &x, &x, &y, &z ); } \
    /* Swizzler Getter Function(`xxyi`) */ \
    __##T##_tuple_4 T##vec3::__xxyi() { return __##T##_tuple_4( &x, &x, &y, NULL ); } \
    /* Swizzler Getter Function(`xxzx`) */ \
    __##T##_tuple_4 T##vec3::__xxzx() { return __##T##_tuple_4( &x, &x, &z, &x ); } \
    /* Swizzler Getter Function(`xxzy`) */ \
    __##T##_tuple_4 T##vec3::__xxzy() { return __##T##_tuple_4( &x, &x, &z, &y ); } \
    /* Swizzler Getter Function(`xxzz`) */ \
    __##T##_tuple_4 T##vec3::__xxzz() { return __##T##_tuple_4( &x, &x, &z, &z ); } \
    /* Swizzler Getter Function(`xxzi`) */ \
    __##T##_tuple_4 T##vec3::__xxzi() { return __##T##_tuple_4( &x, &x, &z, NULL ); } \
    /* Swizzler Getter Function(`xxix`) */ \
    __##T##_tuple_4 T##vec3::__xxix() { return __##T##_tuple_4( &x, &x, NULL, &x ); } \
    /* Swizzler Getter Function(`xxiy`) */ \
    __##T##_tuple_4 T##vec3::__xxiy() { return __##T##_tuple_4( &x, &x, NULL, &y ); } \
    /* Swizzler Getter Function(`xxiz`) */ \
    __##T##_tuple_4 T##vec3::__xxiz() { return __##T##_tuple_4( &x, &x, NULL, &z ); } \
    /* Swizzler Getter Function(`xxii`) */ \
    __##T##_tuple_4 T##vec3::__xxii() { return __##T##_tuple_4( &x, &x, NULL, NULL ); } \
    /* Swizzler Getter Function(`xyxx`) */ \
    __##T##_tuple_4 T##vec3::__xyxx() { return __##T##_tuple_4( &x, &y, &x, &x ); } \
    /* Swizzler Getter Function(`xyxy`) */ \
    __##T##_tuple_4 T##vec3::__xyxy() { return __##T##_tuple_4( &x, &y, &x, &y ); } \
    /* Swizzler Getter Function(`xyxz`) */ \
    __##T##_tuple_4 T##vec3::__xyxz() { return __##T##_tuple_4( &x, &y, &x, &z ); } \
    /* Swizzler Getter Function(`xyxi`) */ \
    __##T##_tuple_4 T##vec3::__xyxi() { return __##T##_tuple_4( &x, &y, &x, NULL ); } \
    /* Swizzler Getter Function(`xyyx`) */ \
    __##T##_tuple_4 T##vec3::__xyyx() { return __##T##_tuple_4( &x, &y, &y, &x ); } \
    /* Swizzler Getter Function(`xyyy`) */ \
    __##T##_tuple_4 T##vec3::__xyyy() { return __##T##_tuple_4( &x, &y, &y, &y ); } \
    /* Swizzler Getter Function(`xyyz`) */ \
    __##T##_tuple_4 T##vec3::__xyyz() { return __##T##_tuple_4( &x, &y, &y, &z ); } \
    /* Swizzler Getter Function(`xyyi`) */ \
    __##T##_tuple_4 T##vec3::__xyyi() { return __##T##_tuple_4( &x, &y, &y, NULL ); } \
    /* Swizzler Getter Function(`xyzx`) */ \
    __##T##_tuple_4 T##vec3::__xyzx() { return __##T##_tuple_4( &x, &y, &z, &x ); } \
    /* Swizzler Getter Function(`xyzy`) */ \
    __##T##_tuple_4 T##vec3::__xyzy() { return __##T##_tuple_4( &x, &y, &z, &y ); } \
    /* Swizzler Getter Function(`xyzz`) */ \
    __##T##_tuple_4 T##vec3::__xyzz() { return __##T##_tuple_4( &x, &y, &z, &z ); } \
    /* Swizzler Getter Function(`xyzi`) */ \
    __##T##_tuple_4 T##vec3::__xyzi() { return __##T##_tuple_4( &x, &y, &z, NULL ); } \
    /* Swizzler Getter Function(`xyix`) */ \
    __##T##_tuple_4 T##vec3::__xyix() { return __##T##_tuple_4( &x, &y, NULL, &x ); } \
    /* Swizzler Getter Function(`xyiy`) */ \
    __##T##_tuple_4 T##vec3::__xyiy() { return __##T##_tuple_4( &x, &y, NULL, &y ); } \
    /* Swizzler Getter Function(`xyiz`) */ \
    __##T##_tuple_4 T##vec3::__xyiz() { return __##T##_tuple_4( &x, &y, NULL, &z ); } \
    /* Swizzler Getter Function(`xyii`) */ \
    __##T##_tuple_4 T##vec3::__xyii() { return __##T##_tuple_4( &x, &y, NULL, NULL ); } \
    /* Swizzler Getter Function(`xzxx`) */ \
    __##T##_tuple_4 T##vec3::__xzxx() { return __##T##_tuple_4( &x, &z, &x, &x ); } \
    /* Swizzler Getter Function(`xzxy`) */ \
    __##T##_tuple_4 T##vec3::__xzxy() { return __##T##_tuple_4( &x, &z, &x, &y ); } \
    /* Swizzler Getter Function(`xzxz`) */ \
    __##T##_tuple_4 T##vec3::__xzxz() { return __##T##_tuple_4( &x, &z, &x, &z ); } \
    /* Swizzler Getter Function(`xzxi`) */ \
    __##T##_tuple_4 T##vec3::__xzxi() { return __##T##_tuple_4( &x, &z, &x, NULL ); } \
    /* Swizzler Getter Function(`xzyx`) */ \
    __##T##_tuple_4 T##vec3::__xzyx() { return __##T##_tuple_4( &x, &z, &y, &x ); } \
    /* Swizzler Getter Function(`xzyy`) */ \
    __##T##_tuple_4 T##vec3::__xzyy() { return __##T##_tuple_4( &x, &z, &y, &y ); } \
    /* Swizzler Getter Function(`xzyz`) */ \
    __##T##_tuple_4 T##vec3::__xzyz() { return __##T##_tuple_4( &x, &z, &y, &z ); } \
    /* Swizzler Getter Function(`xzyi`) */ \
    __##T##_tuple_4 T##vec3::__xzyi() { return __##T##_tuple_4( &x, &z, &y, NULL ); } \
    /* Swizzler Getter Function(`xzzx`) */ \
    __##T##_tuple_4 T##vec3::__xzzx() { return __##T##_tuple_4( &x, &z, &z, &x ); } \
    /* Swizzler Getter Function(`xzzy`) */ \
    __##T##_tuple_4 T##vec3::__xzzy() { return __##T##_tuple_4( &x, &z, &z, &y ); } \
    /* Swizzler Getter Function(`xzzz`) */ \
    __##T##_tuple_4 T##vec3::__xzzz() { return __##T##_tuple_4( &x, &z, &z, &z ); } \
    /* Swizzler Getter Function(`xzzi`) */ \
    __##T##_tuple_4 T##vec3::__xzzi() { return __##T##_tuple_4( &x, &z, &z, NULL ); } \
    /* Swizzler Getter Function(`xzix`) */ \
    __##T##_tuple_4 T##vec3::__xzix() { return __##T##_tuple_4( &x, &z, NULL, &x ); } \
    /* Swizzler Getter Function(`xziy`) */ \
    __##T##_tuple_4 T##vec3::__xziy() { return __##T##_tuple_4( &x, &z, NULL, &y ); } \
    /* Swizzler Getter Function(`xziz`) */ \
    __##T##_tuple_4 T##vec3::__xziz() { return __##T##_tuple_4( &x, &z, NULL, &z ); } \
    /* Swizzler Getter Function(`xzii`) */ \
    __##T##_tuple_4 T##vec3::__xzii() { return __##T##_tuple_4( &x, &z, NULL, NULL ); } \
    /* Swizzler Getter Function(`xixx`) */ \
    __##T##_tuple_4 T##vec3::__xixx() { return __##T##_tuple_4( &x, NULL, &x, &x ); } \
    /* Swizzler Getter Function(`xixy`) */ \
    __##T##_tuple_4 T##vec3::__xixy() { return __##T##_tuple_4( &x, NULL, &x, &y ); } \
    /* Swizzler Getter Function(`xixz`) */ \
    __##T##_tuple_4 T##vec3::__xixz() { return __##T##_tuple_4( &x, NULL, &x, &z ); } \
    /* Swizzler Getter Function(`xixi`) */ \
    __##T##_tuple_4 T##vec3::__xixi() { return __##T##_tuple_4( &x, NULL, &x, NULL ); } \
    /* Swizzler Getter Function(`xiyx`) */ \
    __##T##_tuple_4 T##vec3::__xiyx() { return __##T##_tuple_4( &x, NULL, &y, &x ); } \
    /* Swizzler Getter Function(`xiyy`) */ \
    __##T##_tuple_4 T##vec3::__xiyy() { return __##T##_tuple_4( &x, NULL, &y, &y ); } \
    /* Swizzler Getter Function(`xiyz`) */ \
    __##T##_tuple_4 T##vec3::__xiyz() { return __##T##_tuple_4( &x, NULL, &y, &z ); } \
    /* Swizzler Getter Function(`xiyi`) */ \
    __##T##_tuple_4 T##vec3::__xiyi() { return __##T##_tuple_4( &x, NULL, &y, NULL ); } \
    /* Swizzler Getter Function(`xizx`) */ \
    __##T##_tuple_4 T##vec3::__xizx() { return __##T##_tuple_4( &x, NULL, &z, &x ); } \
    /* Swizzler Getter Function(`xizy`) */ \
    __##T##_tuple_4 T##vec3::__xizy() { return __##T##_tuple_4( &x, NULL, &z, &y ); } \
    /* Swizzler Getter Function(`xizz`) */ \
    __##T##_tuple_4 T##vec3::__xizz() { return __##T##_tuple_4( &x, NULL, &z, &z ); } \
    /* Swizzler Getter Function(`xizi`) */ \
    __##T##_tuple_4 T##vec3::__xizi() { return __##T##_tuple_4( &x, NULL, &z, NULL ); } \
    /* Swizzler Getter Function(`xiix`) */ \
    __##T##_tuple_4 T##vec3::__xiix() { return __##T##_tuple_4( &x, NULL, NULL, &x ); } \
    /* Swizzler Getter Function(`xiiy`) */ \
    __##T##_tuple_4 T##vec3::__xiiy() { return __##T##_tuple_4( &x, NULL, NULL, &y ); } \
    /* Swizzler Getter Function(`xiiz`) */ \
    __##T##_tuple_4 T##vec3::__xiiz() { return __##T##_tuple_4( &x, NULL, NULL, &z ); } \
    /* Swizzler Getter Function(`xiii`) */ \
    __##T##_tuple_4 T##vec3::__xiii() { return __##T##_tuple_4( &x, NULL, NULL, NULL ); } \
    /* Swizzler Getter Function(`yxxx`) */ \
    __##T##_tuple_4 T##vec3::__yxxx() { return __##T##_tuple_4( &y, &x, &x, &x ); } \
    /* Swizzler Getter Function(`yxxy`) */ \
    __##T##_tuple_4 T##vec3::__yxxy() { return __##T##_tuple_4( &y, &x, &x, &y ); } \
    /* Swizzler Getter Function(`yxxz`) */ \
    __##T##_tuple_4 T##vec3::__yxxz() { return __##T##_tuple_4( &y, &x, &x, &z ); } \
    /* Swizzler Getter Function(`yxxi`) */ \
    __##T##_tuple_4 T##vec3::__yxxi() { return __##T##_tuple_4( &y, &x, &x, NULL ); } \
    /* Swizzler Getter Function(`yxyx`) */ \
    __##T##_tuple_4 T##vec3::__yxyx() { return __##T##_tuple_4( &y, &x, &y, &x ); } \
    /* Swizzler Getter Function(`yxyy`) */ \
    __##T##_tuple_4 T##vec3::__yxyy() { return __##T##_tuple_4( &y, &x, &y, &y ); } \
    /* Swizzler Getter Function(`yxyz`) */ \
    __##T##_tuple_4 T##vec3::__yxyz() { return __##T##_tuple_4( &y, &x, &y, &z ); } \
    /* Swizzler Getter Function(`yxyi`) */ \
    __##T##_tuple_4 T##vec3::__yxyi() { return __##T##_tuple_4( &y, &x, &y, NULL ); } \
    /* Swizzler Getter Function(`yxzx`) */ \
    __##T##_tuple_4 T##vec3::__yxzx() { return __##T##_tuple_4( &y, &x, &z, &x ); } \
    /* Swizzler Getter Function(`yxzy`) */ \
    __##T##_tuple_4 T##vec3::__yxzy() { return __##T##_tuple_4( &y, &x, &z, &y ); } \
    /* Swizzler Getter Function(`yxzz`) */ \
    __##T##_tuple_4 T##vec3::__yxzz() { return __##T##_tuple_4( &y, &x, &z, &z ); } \
    /* Swizzler Getter Function(`yxzi`) */ \
    __##T##_tuple_4 T##vec3::__yxzi() { return __##T##_tuple_4( &y, &x, &z, NULL ); } \
    /* Swizzler Getter Function(`yxix`) */ \
    __##T##_tuple_4 T##vec3::__yxix() { return __##T##_tuple_4( &y, &x, NULL, &x ); } \
    /* Swizzler Getter Function(`yxiy`) */ \
    __##T##_tuple_4 T##vec3::__yxiy() { return __##T##_tuple_4( &y, &x, NULL, &y ); } \
    /* Swizzler Getter Function(`yxiz`) */ \
    __##T##_tuple_4 T##vec3::__yxiz() { return __##T##_tuple_4( &y, &x, NULL, &z ); } \
    /* Swizzler Getter Function(`yxii`) */ \
    __##T##_tuple_4 T##vec3::__yxii() { return __##T##_tuple_4( &y, &x, NULL, NULL ); } \
    /* Swizzler Getter Function(`yyxx`) */ \
    __##T##_tuple_4 T##vec3::__yyxx() { return __##T##_tuple_4( &y, &y, &x, &x ); } \
    /* Swizzler Getter Function(`yyxy`) */ \
    __##T##_tuple_4 T##vec3::__yyxy() { return __##T##_tuple_4( &y, &y, &x, &y ); } \
    /* Swizzler Getter Function(`yyxz`) */ \
    __##T##_tuple_4 T##vec3::__yyxz() { return __##T##_tuple_4( &y, &y, &x, &z ); } \
    /* Swizzler Getter Function(`yyxi`) */ \
    __##T##_tuple_4 T##vec3::__yyxi() { return __##T##_tuple_4( &y, &y, &x, NULL ); } \
    /* Swizzler Getter Function(`yyyx`) */ \
    __##T##_tuple_4 T##vec3::__yyyx() { return __##T##_tuple_4( &y, &y, &y, &x ); } \
    /* Swizzler Getter Function(`yyyy`) */ \
    __##T##_tuple_4 T##vec3::__yyyy() { return __##T##_tuple_4( &y, &y, &y, &y ); } \
    /* Swizzler Getter Function(`yyyz`) */ \
    __##T##_tuple_4 T##vec3::__yyyz() { return __##T##_tuple_4( &y, &y, &y, &z ); } \
    /* Swizzler Getter Function(`yyyi`) */ \
    __##T##_tuple_4 T##vec3::__yyyi() { return __##T##_tuple_4( &y, &y, &y, NULL ); } \
    /* Swizzler Getter Function(`yyzx`) */ \
    __##T##_tuple_4 T##vec3::__yyzx() { return __##T##_tuple_4( &y, &y, &z, &x ); } \
    /* Swizzler Getter Function(`yyzy`) */ \
    __##T##_tuple_4 T##vec3::__yyzy() { return __##T##_tuple_4( &y, &y, &z, &y ); } \
    /* Swizzler Getter Function(`yyzz`) */ \
    __##T##_tuple_4 T##vec3::__yyzz() { return __##T##_tuple_4( &y, &y, &z, &z ); } \
    /* Swizzler Getter Function(`yyzi`) */ \
    __##T##_tuple_4 T##vec3::__yyzi() { return __##T##_tuple_4( &y, &y, &z, NULL ); } \
    /* Swizzler Getter Function(`yyix`) */ \
    __##T##_tuple_4 T##vec3::__yyix() { return __##T##_tuple_4( &y, &y, NULL, &x ); } \
    /* Swizzler Getter Function(`yyiy`) */ \
    __##T##_tuple_4 T##vec3::__yyiy() { return __##T##_tuple_4( &y, &y, NULL, &y ); } \
    /* Swizzler Getter Function(`yyiz`) */ \
    __##T##_tuple_4 T##vec3::__yyiz() { return __##T##_tuple_4( &y, &y, NULL, &z ); } \
    /* Swizzler Getter Function(`yyii`) */ \
    __##T##_tuple_4 T##vec3::__yyii() { return __##T##_tuple_4( &y, &y, NULL, NULL ); } \
    /* Swizzler Getter Function(`yzxx`) */ \
    __##T##_tuple_4 T##vec3::__yzxx() { return __##T##_tuple_4( &y, &z, &x, &x ); } \
    /* Swizzler Getter Function(`yzxy`) */ \
    __##T##_tuple_4 T##vec3::__yzxy() { return __##T##_tuple_4( &y, &z, &x, &y ); } \
    /* Swizzler Getter Function(`yzxz`) */ \
    __##T##_tuple_4 T##vec3::__yzxz() { return __##T##_tuple_4( &y, &z, &x, &z ); } \
    /* Swizzler Getter Function(`yzxi`) */ \
    __##T##_tuple_4 T##vec3::__yzxi() { return __##T##_tuple_4( &y, &z, &x, NULL ); } \
    /* Swizzler Getter Function(`yzyx`) */ \
    __##T##_tuple_4 T##vec3::__yzyx() { return __##T##_tuple_4( &y, &z, &y, &x ); } \
    /* Swizzler Getter Function(`yzyy`) */ \
    __##T##_tuple_4 T##vec3::__yzyy() { return __##T##_tuple_4( &y, &z, &y, &y ); } \
    /* Swizzler Getter Function(`yzyz`) */ \
    __##T##_tuple_4 T##vec3::__yzyz() { return __##T##_tuple_4( &y, &z, &y, &z ); } \
    /* Swizzler Getter Function(`yzyi`) */ \
    __##T##_tuple_4 T##vec3::__yzyi() { return __##T##_tuple_4( &y, &z, &y, NULL ); } \
    /* Swizzler Getter Function(`yzzx`) */ \
    __##T##_tuple_4 T##vec3::__yzzx() { return __##T##_tuple_4( &y, &z, &z, &x ); } \
    /* Swizzler Getter Function(`yzzy`) */ \
    __##T##_tuple_4 T##vec3::__yzzy() { return __##T##_tuple_4( &y, &z, &z, &y ); } \
    /* Swizzler Getter Function(`yzzz`) */ \
    __##T##_tuple_4 T##vec3::__yzzz() { return __##T##_tuple_4( &y, &z, &z, &z ); } \
    /* Swizzler Getter Function(`yzzi`) */ \
    __##T##_tuple_4 T##vec3::__yzzi() { return __##T##_tuple_4( &y, &z, &z, NULL ); } \
    /* Swizzler Getter Function(`yzix`) */ \
    __##T##_tuple_4 T##vec3::__yzix() { return __##T##_tuple_4( &y, &z, NULL, &x ); } \
    /* Swizzler Getter Function(`yziy`) */ \
    __##T##_tuple_4 T##vec3::__yziy() { return __##T##_tuple_4( &y, &z, NULL, &y ); } \
    /* Swizzler Getter Function(`yziz`) */ \
    __##T##_tuple_4 T##vec3::__yziz() { return __##T##_tuple_4( &y, &z, NULL, &z ); } \
    /* Swizzler Getter Function(`yzii`) */ \
    __##T##_tuple_4 T##vec3::__yzii() { return __##T##_tuple_4( &y, &z, NULL, NULL ); } \
    /* Swizzler Getter Function(`yixx`) */ \
    __##T##_tuple_4 T##vec3::__yixx() { return __##T##_tuple_4( &y, NULL, &x, &x ); } \
    /* Swizzler Getter Function(`yixy`) */ \
    __##T##_tuple_4 T##vec3::__yixy() { return __##T##_tuple_4( &y, NULL, &x, &y ); } \
    /* Swizzler Getter Function(`yixz`) */ \
    __##T##_tuple_4 T##vec3::__yixz() { return __##T##_tuple_4( &y, NULL, &x, &z ); } \
    /* Swizzler Getter Function(`yixi`) */ \
    __##T##_tuple_4 T##vec3::__yixi() { return __##T##_tuple_4( &y, NULL, &x, NULL ); } \
    /* Swizzler Getter Function(`yiyx`) */ \
    __##T##_tuple_4 T##vec3::__yiyx() { return __##T##_tuple_4( &y, NULL, &y, &x ); } \
    /* Swizzler Getter Function(`yiyy`) */ \
    __##T##_tuple_4 T##vec3::__yiyy() { return __##T##_tuple_4( &y, NULL, &y, &y ); } \
    /* Swizzler Getter Function(`yiyz`) */ \
    __##T##_tuple_4 T##vec3::__yiyz() { return __##T##_tuple_4( &y, NULL, &y, &z ); } \
    /* Swizzler Getter Function(`yiyi`) */ \
    __##T##_tuple_4 T##vec3::__yiyi() { return __##T##_tuple_4( &y, NULL, &y, NULL ); } \
    /* Swizzler Getter Function(`yizx`) */ \
    __##T##_tuple_4 T##vec3::__yizx() { return __##T##_tuple_4( &y, NULL, &z, &x ); } \
    /* Swizzler Getter Function(`yizy`) */ \
    __##T##_tuple_4 T##vec3::__yizy() { return __##T##_tuple_4( &y, NULL, &z, &y ); } \
    /* Swizzler Getter Function(`yizz`) */ \
    __##T##_tuple_4 T##vec3::__yizz() { return __##T##_tuple_4( &y, NULL, &z, &z ); } \
    /* Swizzler Getter Function(`yizi`) */ \
    __##T##_tuple_4 T##vec3::__yizi() { return __##T##_tuple_4( &y, NULL, &z, NULL ); } \
    /* Swizzler Getter Function(`yiix`) */ \
    __##T##_tuple_4 T##vec3::__yiix() { return __##T##_tuple_4( &y, NULL, NULL, &x ); } \
    /* Swizzler Getter Function(`yiiy`) */ \
    __##T##_tuple_4 T##vec3::__yiiy() { return __##T##_tuple_4( &y, NULL, NULL, &y ); } \
    /* Swizzler Getter Function(`yiiz`) */ \
    __##T##_tuple_4 T##vec3::__yiiz() { return __##T##_tuple_4( &y, NULL, NULL, &z ); } \
    /* Swizzler Getter Function(`yiii`) */ \
    __##T##_tuple_4 T##vec3::__yiii() { return __##T##_tuple_4( &y, NULL, NULL, NULL ); } \
    /* Swizzler Getter Function(`zxxx`) */ \
    __##T##_tuple_4 T##vec3::__zxxx() { return __##T##_tuple_4( &z, &x, &x, &x ); } \
    /* Swizzler Getter Function(`zxxy`) */ \
    __##T##_tuple_4 T##vec3::__zxxy() { return __##T##_tuple_4( &z, &x, &x, &y ); } \
    /* Swizzler Getter Function(`zxxz`) */ \
    __##T##_tuple_4 T##vec3::__zxxz() { return __##T##_tuple_4( &z, &x, &x, &z ); } \
    /* Swizzler Getter Function(`zxxi`) */ \
    __##T##_tuple_4 T##vec3::__zxxi() { return __##T##_tuple_4( &z, &x, &x, NULL ); } \
    /* Swizzler Getter Function(`zxyx`) */ \
    __##T##_tuple_4 T##vec3::__zxyx() { return __##T##_tuple_4( &z, &x, &y, &x ); } \
    /* Swizzler Getter Function(`zxyy`) */ \
    __##T##_tuple_4 T##vec3::__zxyy() { return __##T##_tuple_4( &z, &x, &y, &y ); } \
    /* Swizzler Getter Function(`zxyz`) */ \
    __##T##_tuple_4 T##vec3::__zxyz() { return __##T##_tuple_4( &z, &x, &y, &z ); } \
    /* Swizzler Getter Function(`zxyi`) */ \
    __##T##_tuple_4 T##vec3::__zxyi() { return __##T##_tuple_4( &z, &x, &y, NULL ); } \
    /* Swizzler Getter Function(`zxzx`) */ \
    __##T##_tuple_4 T##vec3::__zxzx() { return __##T##_tuple_4( &z, &x, &z, &x ); } \
    /* Swizzler Getter Function(`zxzy`) */ \
    __##T##_tuple_4 T##vec3::__zxzy() { return __##T##_tuple_4( &z, &x, &z, &y ); } \
    /* Swizzler Getter Function(`zxzz`) */ \
    __##T##_tuple_4 T##vec3::__zxzz() { return __##T##_tuple_4( &z, &x, &z, &z ); } \
    /* Swizzler Getter Function(`zxzi`) */ \
    __##T##_tuple_4 T##vec3::__zxzi() { return __##T##_tuple_4( &z, &x, &z, NULL ); } \
    /* Swizzler Getter Function(`zxix`) */ \
    __##T##_tuple_4 T##vec3::__zxix() { return __##T##_tuple_4( &z, &x, NULL, &x ); } \
    /* Swizzler Getter Function(`zxiy`) */ \
    __##T##_tuple_4 T##vec3::__zxiy() { return __##T##_tuple_4( &z, &x, NULL, &y ); } \
    /* Swizzler Getter Function(`zxiz`) */ \
    __##T##_tuple_4 T##vec3::__zxiz() { return __##T##_tuple_4( &z, &x, NULL, &z ); } \
    /* Swizzler Getter Function(`zxii`) */ \
    __##T##_tuple_4 T##vec3::__zxii() { return __##T##_tuple_4( &z, &x, NULL, NULL ); } \
    /* Swizzler Getter Function(`zyxx`) */ \
    __##T##_tuple_4 T##vec3::__zyxx() { return __##T##_tuple_4( &z, &y, &x, &x ); } \
    /* Swizzler Getter Function(`zyxy`) */ \
    __##T##_tuple_4 T##vec3::__zyxy() { return __##T##_tuple_4( &z, &y, &x, &y ); } \
    /* Swizzler Getter Function(`zyxz`) */ \
    __##T##_tuple_4 T##vec3::__zyxz() { return __##T##_tuple_4( &z, &y, &x, &z ); } \
    /* Swizzler Getter Function(`zyxi`) */ \
    __##T##_tuple_4 T##vec3::__zyxi() { return __##T##_tuple_4( &z, &y, &x, NULL ); } \
    /* Swizzler Getter Function(`zyyx`) */ \
    __##T##_tuple_4 T##vec3::__zyyx() { return __##T##_tuple_4( &z, &y, &y, &x ); } \
    /* Swizzler Getter Function(`zyyy`) */ \
    __##T##_tuple_4 T##vec3::__zyyy() { return __##T##_tuple_4( &z, &y, &y, &y ); } \
    /* Swizzler Getter Function(`zyyz`) */ \
    __##T##_tuple_4 T##vec3::__zyyz() { return __##T##_tuple_4( &z, &y, &y, &z ); } \
    /* Swizzler Getter Function(`zyyi`) */ \
    __##T##_tuple_4 T##vec3::__zyyi() { return __##T##_tuple_4( &z, &y, &y, NULL ); } \
    /* Swizzler Getter Function(`zyzx`) */ \
    __##T##_tuple_4 T##vec3::__zyzx() { return __##T##_tuple_4( &z, &y, &z, &x ); } \
    /* Swizzler Getter Function(`zyzy`) */ \
    __##T##_tuple_4 T##vec3::__zyzy() { return __##T##_tuple_4( &z, &y, &z, &y ); } \
    /* Swizzler Getter Function(`zyzz`) */ \
    __##T##_tuple_4 T##vec3::__zyzz() { return __##T##_tuple_4( &z, &y, &z, &z ); } \
    /* Swizzler Getter Function(`zyzi`) */ \
    __##T##_tuple_4 T##vec3::__zyzi() { return __##T##_tuple_4( &z, &y, &z, NULL ); } \
    /* Swizzler Getter Function(`zyix`) */ \
    __##T##_tuple_4 T##vec3::__zyix() { return __##T##_tuple_4( &z, &y, NULL, &x ); } \
    /* Swizzler Getter Function(`zyiy`) */ \
    __##T##_tuple_4 T##vec3::__zyiy() { return __##T##_tuple_4( &z, &y, NULL, &y ); } \
    /* Swizzler Getter Function(`zyiz`) */ \
    __##T##_tuple_4 T##vec3::__zyiz() { return __##T##_tuple_4( &z, &y, NULL, &z ); } \
    /* Swizzler Getter Function(`zyii`) */ \
    __##T##_tuple_4 T##vec3::__zyii() { return __##T##_tuple_4( &z, &y, NULL, NULL ); } \
    /* Swizzler Getter Function(`zzxx`) */ \
    __##T##_tuple_4 T##vec3::__zzxx() { return __##T##_tuple_4( &z, &z, &x, &x ); } \
    /* Swizzler Getter Function(`zzxy`) */ \
    __##T##_tuple_4 T##vec3::__zzxy() { return __##T##_tuple_4( &z, &z, &x, &y ); } \
    /* Swizzler Getter Function(`zzxz`) */ \
    __##T##_tuple_4 T##vec3::__zzxz() { return __##T##_tuple_4( &z, &z, &x, &z ); } \
    /* Swizzler Getter Function(`zzxi`) */ \
    __##T##_tuple_4 T##vec3::__zzxi() { return __##T##_tuple_4( &z, &z, &x, NULL ); } \
    /* Swizzler Getter Function(`zzyx`) */ \
    __##T##_tuple_4 T##vec3::__zzyx() { return __##T##_tuple_4( &z, &z, &y, &x ); } \
    /* Swizzler Getter Function(`zzyy`) */ \
    __##T##_tuple_4 T##vec3::__zzyy() { return __##T##_tuple_4( &z, &z, &y, &y ); } \
    /* Swizzler Getter Function(`zzyz`) */ \
    __##T##_tuple_4 T##vec3::__zzyz() { return __##T##_tuple_4( &z, &z, &y, &z ); } \
    /* Swizzler Getter Function(`zzyi`) */ \
    __##T##_tuple_4 T##vec3::__zzyi() { return __##T##_tuple_4( &z, &z, &y, NULL ); } \
    /* Swizzler Getter Function(`zzzx`) */ \
    __##T##_tuple_4 T##vec3::__zzzx() { return __##T##_tuple_4( &z, &z, &z, &x ); } \
    /* Swizzler Getter Function(`zzzy`) */ \
    __##T##_tuple_4 T##vec3::__zzzy() { return __##T##_tuple_4( &z, &z, &z, &y ); } \
    /* Swizzler Getter Function(`zzzz`) */ \
    __##T##_tuple_4 T##vec3::__zzzz() { return __##T##_tuple_4( &z, &z, &z, &z ); } \
    /* Swizzler Getter Function(`zzzi`) */ \
    __##T##_tuple_4 T##vec3::__zzzi() { return __##T##_tuple_4( &z, &z, &z, NULL ); } \
    /* Swizzler Getter Function(`zzix`) */ \
    __##T##_tuple_4 T##vec3::__zzix() { return __##T##_tuple_4( &z, &z, NULL, &x ); } \
    /* Swizzler Getter Function(`zziy`) */ \
    __##T##_tuple_4 T##vec3::__zziy() { return __##T##_tuple_4( &z, &z, NULL, &y ); } \
    /* Swizzler Getter Function(`zziz`) */ \
    __##T##_tuple_4 T##vec3::__zziz() { return __##T##_tuple_4( &z, &z, NULL, &z ); } \
    /* Swizzler Getter Function(`zzii`) */ \
    __##T##_tuple_4 T##vec3::__zzii() { return __##T##_tuple_4( &z, &z, NULL, NULL ); } \
    /* Swizzler Getter Function(`zixx`) */ \
    __##T##_tuple_4 T##vec3::__zixx() { return __##T##_tuple_4( &z, NULL, &x, &x ); } \
    /* Swizzler Getter Function(`zixy`) */ \
    __##T##_tuple_4 T##vec3::__zixy() { return __##T##_tuple_4( &z, NULL, &x, &y ); } \
    /* Swizzler Getter Function(`zixz`) */ \
    __##T##_tuple_4 T##vec3::__zixz() { return __##T##_tuple_4( &z, NULL, &x, &z ); } \
    /* Swizzler Getter Function(`zixi`) */ \
    __##T##_tuple_4 T##vec3::__zixi() { return __##T##_tuple_4( &z, NULL, &x, NULL ); } \
    /* Swizzler Getter Function(`ziyx`) */ \
    __##T##_tuple_4 T##vec3::__ziyx() { return __##T##_tuple_4( &z, NULL, &y, &x ); } \
    /* Swizzler Getter Function(`ziyy`) */ \
    __##T##_tuple_4 T##vec3::__ziyy() { return __##T##_tuple_4( &z, NULL, &y, &y ); } \
    /* Swizzler Getter Function(`ziyz`) */ \
    __##T##_tuple_4 T##vec3::__ziyz() { return __##T##_tuple_4( &z, NULL, &y, &z ); } \
    /* Swizzler Getter Function(`ziyi`) */ \
    __##T##_tuple_4 T##vec3::__ziyi() { return __##T##_tuple_4( &z, NULL, &y, NULL ); } \
    /* Swizzler Getter Function(`zizx`) */ \
    __##T##_tuple_4 T##vec3::__zizx() { return __##T##_tuple_4( &z, NULL, &z, &x ); } \
    /* Swizzler Getter Function(`zizy`) */ \
    __##T##_tuple_4 T##vec3::__zizy() { return __##T##_tuple_4( &z, NULL, &z, &y ); } \
    /* Swizzler Getter Function(`zizz`) */ \
    __##T##_tuple_4 T##vec3::__zizz() { return __##T##_tuple_4( &z, NULL, &z, &z ); } \
    /* Swizzler Getter Function(`zizi`) */ \
    __##T##_tuple_4 T##vec3::__zizi() { return __##T##_tuple_4( &z, NULL, &z, NULL ); } \
    /* Swizzler Getter Function(`ziix`) */ \
    __##T##_tuple_4 T##vec3::__ziix() { return __##T##_tuple_4( &z, NULL, NULL, &x ); } \
    /* Swizzler Getter Function(`ziiy`) */ \
    __##T##_tuple_4 T##vec3::__ziiy() { return __##T##_tuple_4( &z, NULL, NULL, &y ); } \
    /* Swizzler Getter Function(`ziiz`) */ \
    __##T##_tuple_4 T##vec3::__ziiz() { return __##T##_tuple_4( &z, NULL, NULL, &z ); } \
    /* Swizzler Getter Function(`ziii`) */ \
    __##T##_tuple_4 T##vec3::__ziii() { return __##T##_tuple_4( &z, NULL, NULL, NULL ); } \
    /* Swizzler Getter Function(`ixxx`) */ \
    __##T##_tuple_4 T##vec3::__ixxx() { return __##T##_tuple_4( NULL, &x, &x, &x ); } \
    /* Swizzler Getter Function(`ixxy`) */ \
    __##T##_tuple_4 T##vec3::__ixxy() { return __##T##_tuple_4( NULL, &x, &x, &y ); } \
    /* Swizzler Getter Function(`ixxz`) */ \
    __##T##_tuple_4 T##vec3::__ixxz() { return __##T##_tuple_4( NULL, &x, &x, &z ); } \
    /* Swizzler Getter Function(`ixxi`) */ \
    __##T##_tuple_4 T##vec3::__ixxi() { return __##T##_tuple_4( NULL, &x, &x, NULL ); } \
    /* Swizzler Getter Function(`ixyx`) */ \
    __##T##_tuple_4 T##vec3::__ixyx() { return __##T##_tuple_4( NULL, &x, &y, &x ); } \
    /* Swizzler Getter Function(`ixyy`) */ \
    __##T##_tuple_4 T##vec3::__ixyy() { return __##T##_tuple_4( NULL, &x, &y, &y ); } \
    /* Swizzler Getter Function(`ixyz`) */ \
    __##T##_tuple_4 T##vec3::__ixyz() { return __##T##_tuple_4( NULL, &x, &y, &z ); } \
    /* Swizzler Getter Function(`ixyi`) */ \
    __##T##_tuple_4 T##vec3::__ixyi() { return __##T##_tuple_4( NULL, &x, &y, NULL ); } \
    /* Swizzler Getter Function(`ixzx`) */ \
    __##T##_tuple_4 T##vec3::__ixzx() { return __##T##_tuple_4( NULL, &x, &z, &x ); } \
    /* Swizzler Getter Function(`ixzy`) */ \
    __##T##_tuple_4 T##vec3::__ixzy() { return __##T##_tuple_4( NULL, &x, &z, &y ); } \
    /* Swizzler Getter Function(`ixzz`) */ \
    __##T##_tuple_4 T##vec3::__ixzz() { return __##T##_tuple_4( NULL, &x, &z, &z ); } \
    /* Swizzler Getter Function(`ixzi`) */ \
    __##T##_tuple_4 T##vec3::__ixzi() { return __##T##_tuple_4( NULL, &x, &z, NULL ); } \
    /* Swizzler Getter Function(`ixix`) */ \
    __##T##_tuple_4 T##vec3::__ixix() { return __##T##_tuple_4( NULL, &x, NULL, &x ); } \
    /* Swizzler Getter Function(`ixiy`) */ \
    __##T##_tuple_4 T##vec3::__ixiy() { return __##T##_tuple_4( NULL, &x, NULL, &y ); } \
    /* Swizzler Getter Function(`ixiz`) */ \
    __##T##_tuple_4 T##vec3::__ixiz() { return __##T##_tuple_4( NULL, &x, NULL, &z ); } \
    /* Swizzler Getter Function(`ixii`) */ \
    __##T##_tuple_4 T##vec3::__ixii() { return __##T##_tuple_4( NULL, &x, NULL, NULL ); } \
    /* Swizzler Getter Function(`iyxx`) */ \
    __##T##_tuple_4 T##vec3::__iyxx() { return __##T##_tuple_4( NULL, &y, &x, &x ); } \
    /* Swizzler Getter Function(`iyxy`) */ \
    __##T##_tuple_4 T##vec3::__iyxy() { return __##T##_tuple_4( NULL, &y, &x, &y ); } \
    /* Swizzler Getter Function(`iyxz`) */ \
    __##T##_tuple_4 T##vec3::__iyxz() { return __##T##_tuple_4( NULL, &y, &x, &z ); } \
    /* Swizzler Getter Function(`iyxi`) */ \
    __##T##_tuple_4 T##vec3::__iyxi() { return __##T##_tuple_4( NULL, &y, &x, NULL ); } \
    /* Swizzler Getter Function(`iyyx`) */ \
    __##T##_tuple_4 T##vec3::__iyyx() { return __##T##_tuple_4( NULL, &y, &y, &x ); } \
    /* Swizzler Getter Function(`iyyy`) */ \
    __##T##_tuple_4 T##vec3::__iyyy() { return __##T##_tuple_4( NULL, &y, &y, &y ); } \
    /* Swizzler Getter Function(`iyyz`) */ \
    __##T##_tuple_4 T##vec3::__iyyz() { return __##T##_tuple_4( NULL, &y, &y, &z ); } \
    /* Swizzler Getter Function(`iyyi`) */ \
    __##T##_tuple_4 T##vec3::__iyyi() { return __##T##_tuple_4( NULL, &y, &y, NULL ); } \
    /* Swizzler Getter Function(`iyzx`) */ \
    __##T##_tuple_4 T##vec3::__iyzx() { return __##T##_tuple_4( NULL, &y, &z, &x ); } \
    /* Swizzler Getter Function(`iyzy`) */ \
    __##T##_tuple_4 T##vec3::__iyzy() { return __##T##_tuple_4( NULL, &y, &z, &y ); } \
    /* Swizzler Getter Function(`iyzz`) */ \
    __##T##_tuple_4 T##vec3::__iyzz() { return __##T##_tuple_4( NULL, &y, &z, &z ); } \
    /* Swizzler Getter Function(`iyzi`) */ \
    __##T##_tuple_4 T##vec3::__iyzi() { return __##T##_tuple_4( NULL, &y, &z, NULL ); } \
    /* Swizzler Getter Function(`iyix`) */ \
    __##T##_tuple_4 T##vec3::__iyix() { return __##T##_tuple_4( NULL, &y, NULL, &x ); } \
    /* Swizzler Getter Function(`iyiy`) */ \
    __##T##_tuple_4 T##vec3::__iyiy() { return __##T##_tuple_4( NULL, &y, NULL, &y ); } \
    /* Swizzler Getter Function(`iyiz`) */ \
    __##T##_tuple_4 T##vec3::__iyiz() { return __##T##_tuple_4( NULL, &y, NULL, &z ); } \
    /* Swizzler Getter Function(`iyii`) */ \
    __##T##_tuple_4 T##vec3::__iyii() { return __##T##_tuple_4( NULL, &y, NULL, NULL ); } \
    /* Swizzler Getter Function(`izxx`) */ \
    __##T##_tuple_4 T##vec3::__izxx() { return __##T##_tuple_4( NULL, &z, &x, &x ); } \
    /* Swizzler Getter Function(`izxy`) */ \
    __##T##_tuple_4 T##vec3::__izxy() { return __##T##_tuple_4( NULL, &z, &x, &y ); } \
    /* Swizzler Getter Function(`izxz`) */ \
    __##T##_tuple_4 T##vec3::__izxz() { return __##T##_tuple_4( NULL, &z, &x, &z ); } \
    /* Swizzler Getter Function(`izxi`) */ \
    __##T##_tuple_4 T##vec3::__izxi() { return __##T##_tuple_4( NULL, &z, &x, NULL ); } \
    /* Swizzler Getter Function(`izyx`) */ \
    __##T##_tuple_4 T##vec3::__izyx() { return __##T##_tuple_4( NULL, &z, &y, &x ); } \
    /* Swizzler Getter Function(`izyy`) */ \
    __##T##_tuple_4 T##vec3::__izyy() { return __##T##_tuple_4( NULL, &z, &y, &y ); } \
    /* Swizzler Getter Function(`izyz`) */ \
    __##T##_tuple_4 T##vec3::__izyz() { return __##T##_tuple_4( NULL, &z, &y, &z ); } \
    /* Swizzler Getter Function(`izyi`) */ \
    __##T##_tuple_4 T##vec3::__izyi() { return __##T##_tuple_4( NULL, &z, &y, NULL ); } \
    /* Swizzler Getter Function(`izzx`) */ \
    __##T##_tuple_4 T##vec3::__izzx() { return __##T##_tuple_4( NULL, &z, &z, &x ); } \
    /* Swizzler Getter Function(`izzy`) */ \
    __##T##_tuple_4 T##vec3::__izzy() { return __##T##_tuple_4( NULL, &z, &z, &y ); } \
    /* Swizzler Getter Function(`izzz`) */ \
    __##T##_tuple_4 T##vec3::__izzz() { return __##T##_tuple_4( NULL, &z, &z, &z ); } \
    /* Swizzler Getter Function(`izzi`) */ \
    __##T##_tuple_4 T##vec3::__izzi() { return __##T##_tuple_4( NULL, &z, &z, NULL ); } \
    /* Swizzler Getter Function(`izix`) */ \
    __##T##_tuple_4 T##vec3::__izix() { return __##T##_tuple_4( NULL, &z, NULL, &x ); } \
    /* Swizzler Getter Function(`iziy`) */ \
    __##T##_tuple_4 T##vec3::__iziy() { return __##T##_tuple_4( NULL, &z, NULL, &y ); } \
    /* Swizzler Getter Function(`iziz`) */ \
    __##T##_tuple_4 T##vec3::__iziz() { return __##T##_tuple_4( NULL, &z, NULL, &z ); } \
    /* Swizzler Getter Function(`izii`) */ \
    __##T##_tuple_4 T##vec3::__izii() { return __##T##_tuple_4( NULL, &z, NULL, NULL ); } \
    /* Swizzler Getter Function(`iixx`) */ \
    __##T##_tuple_4 T##vec3::__iixx() { return __##T##_tuple_4( NULL, NULL, &x, &x ); } \
    /* Swizzler Getter Function(`iixy`) */ \
    __##T##_tuple_4 T##vec3::__iixy() { return __##T##_tuple_4( NULL, NULL, &x, &y ); } \
    /* Swizzler Getter Function(`iixz`) */ \
    __##T##_tuple_4 T##vec3::__iixz() { return __##T##_tuple_4( NULL, NULL, &x, &z ); } \
    /* Swizzler Getter Function(`iixi`) */ \
    __##T##_tuple_4 T##vec3::__iixi() { return __##T##_tuple_4( NULL, NULL, &x, NULL ); } \
    /* Swizzler Getter Function(`iiyx`) */ \
    __##T##_tuple_4 T##vec3::__iiyx() { return __##T##_tuple_4( NULL, NULL, &y, &x ); } \
    /* Swizzler Getter Function(`iiyy`) */ \
    __##T##_tuple_4 T##vec3::__iiyy() { return __##T##_tuple_4( NULL, NULL, &y, &y ); } \
    /* Swizzler Getter Function(`iiyz`) */ \
    __##T##_tuple_4 T##vec3::__iiyz() { return __##T##_tuple_4( NULL, NULL, &y, &z ); } \
    /* Swizzler Getter Function(`iiyi`) */ \
    __##T##_tuple_4 T##vec3::__iiyi() { return __##T##_tuple_4( NULL, NULL, &y, NULL ); } \
    /* Swizzler Getter Function(`iizx`) */ \
    __##T##_tuple_4 T##vec3::__iizx() { return __##T##_tuple_4( NULL, NULL, &z, &x ); } \
    /* Swizzler Getter Function(`iizy`) */ \
    __##T##_tuple_4 T##vec3::__iizy() { return __##T##_tuple_4( NULL, NULL, &z, &y ); } \
    /* Swizzler Getter Function(`iizz`) */ \
    __##T##_tuple_4 T##vec3::__iizz() { return __##T##_tuple_4( NULL, NULL, &z, &z ); } \
    /* Swizzler Getter Function(`iizi`) */ \
    __##T##_tuple_4 T##vec3::__iizi() { return __##T##_tuple_4( NULL, NULL, &z, NULL ); } \
    /* Swizzler Getter Function(`iiix`) */ \
    __##T##_tuple_4 T##vec3::__iiix() { return __##T##_tuple_4( NULL, NULL, NULL, &x ); } \
    /* Swizzler Getter Function(`iiiy`) */ \
    __##T##_tuple_4 T##vec3::__iiiy() { return __##T##_tuple_4( NULL, NULL, NULL, &y ); } \
    /* Swizzler Getter Function(`iiiz`) */ \
    __##T##_tuple_4 T##vec3::__iiiz() { return __##T##_tuple_4( NULL, NULL, NULL, &z ); } \
    /* Swizzler Getter Function(`iiii`) */ \
    __##T##_tuple_4 T##vec3::__iiii() { return __##T##_tuple_4( NULL, NULL, NULL, NULL ); } \



#define __VEC4_SWIZZLE( T ) \
    /* Swizzler Getter Function(`xx`) */ \
    __##T##_tuple_2 T##vec4::__xx() { return __##T##_tuple_2( &x, &x ); } \
    /* Swizzler Getter Function(`xy`) */ \
    __##T##_tuple_2 T##vec4::__xy() { return __##T##_tuple_2( &x, &y ); } \
    /* Swizzler Getter Function(`xz`) */ \
    __##T##_tuple_2 T##vec4::__xz() { return __##T##_tuple_2( &x, &z ); } \
    /* Swizzler Getter Function(`xw`) */ \
    __##T##_tuple_2 T##vec4::__xw() { return __##T##_tuple_2( &x, &w ); } \
    /* Swizzler Getter Function(`xi`) */ \
    __##T##_tuple_2 T##vec4::__xi() { return __##T##_tuple_2( &x, NULL ); } \
    /* Swizzler Getter Function(`yx`) */ \
    __##T##_tuple_2 T##vec4::__yx() { return __##T##_tuple_2( &y, &x ); } \
    /* Swizzler Getter Function(`yy`) */ \
    __##T##_tuple_2 T##vec4::__yy() { return __##T##_tuple_2( &y, &y ); } \
    /* Swizzler Getter Function(`yz`) */ \
    __##T##_tuple_2 T##vec4::__yz() { return __##T##_tuple_2( &y, &z ); } \
    /* Swizzler Getter Function(`yw`) */ \
    __##T##_tuple_2 T##vec4::__yw() { return __##T##_tuple_2( &y, &w ); } \
    /* Swizzler Getter Function(`yi`) */ \
    __##T##_tuple_2 T##vec4::__yi() { return __##T##_tuple_2( &y, NULL ); } \
    /* Swizzler Getter Function(`zx`) */ \
    __##T##_tuple_2 T##vec4::__zx() { return __##T##_tuple_2( &z, &x ); } \
    /* Swizzler Getter Function(`zy`) */ \
    __##T##_tuple_2 T##vec4::__zy() { return __##T##_tuple_2( &z, &y ); } \
    /* Swizzler Getter Function(`zz`) */ \
    __##T##_tuple_2 T##vec4::__zz() { return __##T##_tuple_2( &z, &z ); } \
    /* Swizzler Getter Function(`zw`) */ \
    __##T##_tuple_2 T##vec4::__zw() { return __##T##_tuple_2( &z, &w ); } \
    /* Swizzler Getter Function(`zi`) */ \
    __##T##_tuple_2 T##vec4::__zi() { return __##T##_tuple_2( &z, NULL ); } \
    /* Swizzler Getter Function(`wx`) */ \
    __##T##_tuple_2 T##vec4::__wx() { return __##T##_tuple_2( &w, &x ); } \
    /* Swizzler Getter Function(`wy`) */ \
    __##T##_tuple_2 T##vec4::__wy() { return __##T##_tuple_2( &w, &y ); } \
    /* Swizzler Getter Function(`wz`) */ \
    __##T##_tuple_2 T##vec4::__wz() { return __##T##_tuple_2( &w, &z ); } \
    /* Swizzler Getter Function(`ww`) */ \
    __##T##_tuple_2 T##vec4::__ww() { return __##T##_tuple_2( &w, &w ); } \
    /* Swizzler Getter Function(`wi`) */ \
    __##T##_tuple_2 T##vec4::__wi() { return __##T##_tuple_2( &w, NULL ); } \
    /* Swizzler Getter Function(`ix`) */ \
    __##T##_tuple_2 T##vec4::__ix() { return __##T##_tuple_2( NULL, &x ); } \
    /* Swizzler Getter Function(`iy`) */ \
    __##T##_tuple_2 T##vec4::__iy() { return __##T##_tuple_2( NULL, &y ); } \
    /* Swizzler Getter Function(`iz`) */ \
    __##T##_tuple_2 T##vec4::__iz() { return __##T##_tuple_2( NULL, &z ); } \
    /* Swizzler Getter Function(`iw`) */ \
    __##T##_tuple_2 T##vec4::__iw() { return __##T##_tuple_2( NULL, &w ); } \
    /* Swizzler Getter Function(`ii`) */ \
    __##T##_tuple_2 T##vec4::__ii() { return __##T##_tuple_2( NULL, NULL ); } \
    /* Swizzler Getter Function(`xxx`) */ \
    __##T##_tuple_3 T##vec4::__xxx() { return __##T##_tuple_3( &x, &x, &x ); } \
    /* Swizzler Getter Function(`xxy`) */ \
    __##T##_tuple_3 T##vec4::__xxy() { return __##T##_tuple_3( &x, &x, &y ); } \
    /* Swizzler Getter Function(`xxz`) */ \
    __##T##_tuple_3 T##vec4::__xxz() { return __##T##_tuple_3( &x, &x, &z ); } \
    /* Swizzler Getter Function(`xxw`) */ \
    __##T##_tuple_3 T##vec4::__xxw() { return __##T##_tuple_3( &x, &x, &w ); } \
    /* Swizzler Getter Function(`xxi`) */ \
    __##T##_tuple_3 T##vec4::__xxi() { return __##T##_tuple_3( &x, &x, NULL ); } \
    /* Swizzler Getter Function(`xyx`) */ \
    __##T##_tuple_3 T##vec4::__xyx() { return __##T##_tuple_3( &x, &y, &x ); } \
    /* Swizzler Getter Function(`xyy`) */ \
    __##T##_tuple_3 T##vec4::__xyy() { return __##T##_tuple_3( &x, &y, &y ); } \
    /* Swizzler Getter Function(`xyz`) */ \
    __##T##_tuple_3 T##vec4::__xyz() { return __##T##_tuple_3( &x, &y, &z ); } \
    /* Swizzler Getter Function(`xyw`) */ \
    __##T##_tuple_3 T##vec4::__xyw() { return __##T##_tuple_3( &x, &y, &w ); } \
    /* Swizzler Getter Function(`xyi`) */ \
    __##T##_tuple_3 T##vec4::__xyi() { return __##T##_tuple_3( &x, &y, NULL ); } \
    /* Swizzler Getter Function(`xzx`) */ \
    __##T##_tuple_3 T##vec4::__xzx() { return __##T##_tuple_3( &x, &z, &x ); } \
    /* Swizzler Getter Function(`xzy`) */ \
    __##T##_tuple_3 T##vec4::__xzy() { return __##T##_tuple_3( &x, &z, &y ); } \
    /* Swizzler Getter Function(`xzz`) */ \
    __##T##_tuple_3 T##vec4::__xzz() { return __##T##_tuple_3( &x, &z, &z ); } \
    /* Swizzler Getter Function(`xzw`) */ \
    __##T##_tuple_3 T##vec4::__xzw() { return __##T##_tuple_3( &x, &z, &w ); } \
    /* Swizzler Getter Function(`xzi`) */ \
    __##T##_tuple_3 T##vec4::__xzi() { return __##T##_tuple_3( &x, &z, NULL ); } \
    /* Swizzler Getter Function(`xwx`) */ \
    __##T##_tuple_3 T##vec4::__xwx() { return __##T##_tuple_3( &x, &w, &x ); } \
    /* Swizzler Getter Function(`xwy`) */ \
    __##T##_tuple_3 T##vec4::__xwy() { return __##T##_tuple_3( &x, &w, &y ); } \
    /* Swizzler Getter Function(`xwz`) */ \
    __##T##_tuple_3 T##vec4::__xwz() { return __##T##_tuple_3( &x, &w, &z ); } \
    /* Swizzler Getter Function(`xww`) */ \
    __##T##_tuple_3 T##vec4::__xww() { return __##T##_tuple_3( &x, &w, &w ); } \
    /* Swizzler Getter Function(`xwi`) */ \
    __##T##_tuple_3 T##vec4::__xwi() { return __##T##_tuple_3( &x, &w, NULL ); } \
    /* Swizzler Getter Function(`xix`) */ \
    __##T##_tuple_3 T##vec4::__xix() { return __##T##_tuple_3( &x, NULL, &x ); } \
    /* Swizzler Getter Function(`xiy`) */ \
    __##T##_tuple_3 T##vec4::__xiy() { return __##T##_tuple_3( &x, NULL, &y ); } \
    /* Swizzler Getter Function(`xiz`) */ \
    __##T##_tuple_3 T##vec4::__xiz() { return __##T##_tuple_3( &x, NULL, &z ); } \
    /* Swizzler Getter Function(`xiw`) */ \
    __##T##_tuple_3 T##vec4::__xiw() { return __##T##_tuple_3( &x, NULL, &w ); } \
    /* Swizzler Getter Function(`xii`) */ \
    __##T##_tuple_3 T##vec4::__xii() { return __##T##_tuple_3( &x, NULL, NULL ); } \
    /* Swizzler Getter Function(`yxx`) */ \
    __##T##_tuple_3 T##vec4::__yxx() { return __##T##_tuple_3( &y, &x, &x ); } \
    /* Swizzler Getter Function(`yxy`) */ \
    __##T##_tuple_3 T##vec4::__yxy() { return __##T##_tuple_3( &y, &x, &y ); } \
    /* Swizzler Getter Function(`yxz`) */ \
    __##T##_tuple_3 T##vec4::__yxz() { return __##T##_tuple_3( &y, &x, &z ); } \
    /* Swizzler Getter Function(`yxw`) */ \
    __##T##_tuple_3 T##vec4::__yxw() { return __##T##_tuple_3( &y, &x, &w ); } \
    /* Swizzler Getter Function(`yxi`) */ \
    __##T##_tuple_3 T##vec4::__yxi() { return __##T##_tuple_3( &y, &x, NULL ); } \
    /* Swizzler Getter Function(`yyx`) */ \
    __##T##_tuple_3 T##vec4::__yyx() { return __##T##_tuple_3( &y, &y, &x ); } \
    /* Swizzler Getter Function(`yyy`) */ \
    __##T##_tuple_3 T##vec4::__yyy() { return __##T##_tuple_3( &y, &y, &y ); } \
    /* Swizzler Getter Function(`yyz`) */ \
    __##T##_tuple_3 T##vec4::__yyz() { return __##T##_tuple_3( &y, &y, &z ); } \
    /* Swizzler Getter Function(`yyw`) */ \
    __##T##_tuple_3 T##vec4::__yyw() { return __##T##_tuple_3( &y, &y, &w ); } \
    /* Swizzler Getter Function(`yyi`) */ \
    __##T##_tuple_3 T##vec4::__yyi() { return __##T##_tuple_3( &y, &y, NULL ); } \
    /* Swizzler Getter Function(`yzx`) */ \
    __##T##_tuple_3 T##vec4::__yzx() { return __##T##_tuple_3( &y, &z, &x ); } \
    /* Swizzler Getter Function(`yzy`) */ \
    __##T##_tuple_3 T##vec4::__yzy() { return __##T##_tuple_3( &y, &z, &y ); } \
    /* Swizzler Getter Function(`yzz`) */ \
    __##T##_tuple_3 T##vec4::__yzz() { return __##T##_tuple_3( &y, &z, &z ); } \
    /* Swizzler Getter Function(`yzw`) */ \
    __##T##_tuple_3 T##vec4::__yzw() { return __##T##_tuple_3( &y, &z, &w ); } \
    /* Swizzler Getter Function(`yzi`) */ \
    __##T##_tuple_3 T##vec4::__yzi() { return __##T##_tuple_3( &y, &z, NULL ); } \
    /* Swizzler Getter Function(`ywx`) */ \
    __##T##_tuple_3 T##vec4::__ywx() { return __##T##_tuple_3( &y, &w, &x ); } \
    /* Swizzler Getter Function(`ywy`) */ \
    __##T##_tuple_3 T##vec4::__ywy() { return __##T##_tuple_3( &y, &w, &y ); } \
    /* Swizzler Getter Function(`ywz`) */ \
    __##T##_tuple_3 T##vec4::__ywz() { return __##T##_tuple_3( &y, &w, &z ); } \
    /* Swizzler Getter Function(`yww`) */ \
    __##T##_tuple_3 T##vec4::__yww() { return __##T##_tuple_3( &y, &w, &w ); } \
    /* Swizzler Getter Function(`ywi`) */ \
    __##T##_tuple_3 T##vec4::__ywi() { return __##T##_tuple_3( &y, &w, NULL ); } \
    /* Swizzler Getter Function(`yix`) */ \
    __##T##_tuple_3 T##vec4::__yix() { return __##T##_tuple_3( &y, NULL, &x ); } \
    /* Swizzler Getter Function(`yiy`) */ \
    __##T##_tuple_3 T##vec4::__yiy() { return __##T##_tuple_3( &y, NULL, &y ); } \
    /* Swizzler Getter Function(`yiz`) */ \
    __##T##_tuple_3 T##vec4::__yiz() { return __##T##_tuple_3( &y, NULL, &z ); } \
    /* Swizzler Getter Function(`yiw`) */ \
    __##T##_tuple_3 T##vec4::__yiw() { return __##T##_tuple_3( &y, NULL, &w ); } \
    /* Swizzler Getter Function(`yii`) */ \
    __##T##_tuple_3 T##vec4::__yii() { return __##T##_tuple_3( &y, NULL, NULL ); } \
    /* Swizzler Getter Function(`zxx`) */ \
    __##T##_tuple_3 T##vec4::__zxx() { return __##T##_tuple_3( &z, &x, &x ); } \
    /* Swizzler Getter Function(`zxy`) */ \
    __##T##_tuple_3 T##vec4::__zxy() { return __##T##_tuple_3( &z, &x, &y ); } \
    /* Swizzler Getter Function(`zxz`) */ \
    __##T##_tuple_3 T##vec4::__zxz() { return __##T##_tuple_3( &z, &x, &z ); } \
    /* Swizzler Getter Function(`zxw`) */ \
    __##T##_tuple_3 T##vec4::__zxw() { return __##T##_tuple_3( &z, &x, &w ); } \
    /* Swizzler Getter Function(`zxi`) */ \
    __##T##_tuple_3 T##vec4::__zxi() { return __##T##_tuple_3( &z, &x, NULL ); } \
    /* Swizzler Getter Function(`zyx`) */ \
    __##T##_tuple_3 T##vec4::__zyx() { return __##T##_tuple_3( &z, &y, &x ); } \
    /* Swizzler Getter Function(`zyy`) */ \
    __##T##_tuple_3 T##vec4::__zyy() { return __##T##_tuple_3( &z, &y, &y ); } \
    /* Swizzler Getter Function(`zyz`) */ \
    __##T##_tuple_3 T##vec4::__zyz() { return __##T##_tuple_3( &z, &y, &z ); } \
    /* Swizzler Getter Function(`zyw`) */ \
    __##T##_tuple_3 T##vec4::__zyw() { return __##T##_tuple_3( &z, &y, &w ); } \
    /* Swizzler Getter Function(`zyi`) */ \
    __##T##_tuple_3 T##vec4::__zyi() { return __##T##_tuple_3( &z, &y, NULL ); } \
    /* Swizzler Getter Function(`zzx`) */ \
    __##T##_tuple_3 T##vec4::__zzx() { return __##T##_tuple_3( &z, &z, &x ); } \
    /* Swizzler Getter Function(`zzy`) */ \
    __##T##_tuple_3 T##vec4::__zzy() { return __##T##_tuple_3( &z, &z, &y ); } \
    /* Swizzler Getter Function(`zzz`) */ \
    __##T##_tuple_3 T##vec4::__zzz() { return __##T##_tuple_3( &z, &z, &z ); } \
    /* Swizzler Getter Function(`zzw`) */ \
    __##T##_tuple_3 T##vec4::__zzw() { return __##T##_tuple_3( &z, &z, &w ); } \
    /* Swizzler Getter Function(`zzi`) */ \
    __##T##_tuple_3 T##vec4::__zzi() { return __##T##_tuple_3( &z, &z, NULL ); } \
    /* Swizzler Getter Function(`zwx`) */ \
    __##T##_tuple_3 T##vec4::__zwx() { return __##T##_tuple_3( &z, &w, &x ); } \
    /* Swizzler Getter Function(`zwy`) */ \
    __##T##_tuple_3 T##vec4::__zwy() { return __##T##_tuple_3( &z, &w, &y ); } \
    /* Swizzler Getter Function(`zwz`) */ \
    __##T##_tuple_3 T##vec4::__zwz() { return __##T##_tuple_3( &z, &w, &z ); } \
    /* Swizzler Getter Function(`zww`) */ \
    __##T##_tuple_3 T##vec4::__zww() { return __##T##_tuple_3( &z, &w, &w ); } \
    /* Swizzler Getter Function(`zwi`) */ \
    __##T##_tuple_3 T##vec4::__zwi() { return __##T##_tuple_3( &z, &w, NULL ); } \
    /* Swizzler Getter Function(`zix`) */ \
    __##T##_tuple_3 T##vec4::__zix() { return __##T##_tuple_3( &z, NULL, &x ); } \
    /* Swizzler Getter Function(`ziy`) */ \
    __##T##_tuple_3 T##vec4::__ziy() { return __##T##_tuple_3( &z, NULL, &y ); } \
    /* Swizzler Getter Function(`ziz`) */ \
    __##T##_tuple_3 T##vec4::__ziz() { return __##T##_tuple_3( &z, NULL, &z ); } \
    /* Swizzler Getter Function(`ziw`) */ \
    __##T##_tuple_3 T##vec4::__ziw() { return __##T##_tuple_3( &z, NULL, &w ); } \
    /* Swizzler Getter Function(`zii`) */ \
    __##T##_tuple_3 T##vec4::__zii() { return __##T##_tuple_3( &z, NULL, NULL ); } \
    /* Swizzler Getter Function(`wxx`) */ \
    __##T##_tuple_3 T##vec4::__wxx() { return __##T##_tuple_3( &w, &x, &x ); } \
    /* Swizzler Getter Function(`wxy`) */ \
    __##T##_tuple_3 T##vec4::__wxy() { return __##T##_tuple_3( &w, &x, &y ); } \
    /* Swizzler Getter Function(`wxz`) */ \
    __##T##_tuple_3 T##vec4::__wxz() { return __##T##_tuple_3( &w, &x, &z ); } \
    /* Swizzler Getter Function(`wxw`) */ \
    __##T##_tuple_3 T##vec4::__wxw() { return __##T##_tuple_3( &w, &x, &w ); } \
    /* Swizzler Getter Function(`wxi`) */ \
    __##T##_tuple_3 T##vec4::__wxi() { return __##T##_tuple_3( &w, &x, NULL ); } \
    /* Swizzler Getter Function(`wyx`) */ \
    __##T##_tuple_3 T##vec4::__wyx() { return __##T##_tuple_3( &w, &y, &x ); } \
    /* Swizzler Getter Function(`wyy`) */ \
    __##T##_tuple_3 T##vec4::__wyy() { return __##T##_tuple_3( &w, &y, &y ); } \
    /* Swizzler Getter Function(`wyz`) */ \
    __##T##_tuple_3 T##vec4::__wyz() { return __##T##_tuple_3( &w, &y, &z ); } \
    /* Swizzler Getter Function(`wyw`) */ \
    __##T##_tuple_3 T##vec4::__wyw() { return __##T##_tuple_3( &w, &y, &w ); } \
    /* Swizzler Getter Function(`wyi`) */ \
    __##T##_tuple_3 T##vec4::__wyi() { return __##T##_tuple_3( &w, &y, NULL ); } \
    /* Swizzler Getter Function(`wzx`) */ \
    __##T##_tuple_3 T##vec4::__wzx() { return __##T##_tuple_3( &w, &z, &x ); } \
    /* Swizzler Getter Function(`wzy`) */ \
    __##T##_tuple_3 T##vec4::__wzy() { return __##T##_tuple_3( &w, &z, &y ); } \
    /* Swizzler Getter Function(`wzz`) */ \
    __##T##_tuple_3 T##vec4::__wzz() { return __##T##_tuple_3( &w, &z, &z ); } \
    /* Swizzler Getter Function(`wzw`) */ \
    __##T##_tuple_3 T##vec4::__wzw() { return __##T##_tuple_3( &w, &z, &w ); } \
    /* Swizzler Getter Function(`wzi`) */ \
    __##T##_tuple_3 T##vec4::__wzi() { return __##T##_tuple_3( &w, &z, NULL ); } \
    /* Swizzler Getter Function(`wwx`) */ \
    __##T##_tuple_3 T##vec4::__wwx() { return __##T##_tuple_3( &w, &w, &x ); } \
    /* Swizzler Getter Function(`wwy`) */ \
    __##T##_tuple_3 T##vec4::__wwy() { return __##T##_tuple_3( &w, &w, &y ); } \
    /* Swizzler Getter Function(`wwz`) */ \
    __##T##_tuple_3 T##vec4::__wwz() { return __##T##_tuple_3( &w, &w, &z ); } \
    /* Swizzler Getter Function(`www`) */ \
    __##T##_tuple_3 T##vec4::__www() { return __##T##_tuple_3( &w, &w, &w ); } \
    /* Swizzler Getter Function(`wwi`) */ \
    __##T##_tuple_3 T##vec4::__wwi() { return __##T##_tuple_3( &w, &w, NULL ); } \
    /* Swizzler Getter Function(`wix`) */ \
    __##T##_tuple_3 T##vec4::__wix() { return __##T##_tuple_3( &w, NULL, &x ); } \
    /* Swizzler Getter Function(`wiy`) */ \
    __##T##_tuple_3 T##vec4::__wiy() { return __##T##_tuple_3( &w, NULL, &y ); } \
    /* Swizzler Getter Function(`wiz`) */ \
    __##T##_tuple_3 T##vec4::__wiz() { return __##T##_tuple_3( &w, NULL, &z ); } \
    /* Swizzler Getter Function(`wiw`) */ \
    __##T##_tuple_3 T##vec4::__wiw() { return __##T##_tuple_3( &w, NULL, &w ); } \
    /* Swizzler Getter Function(`wii`) */ \
    __##T##_tuple_3 T##vec4::__wii() { return __##T##_tuple_3( &w, NULL, NULL ); } \
    /* Swizzler Getter Function(`ixx`) */ \
    __##T##_tuple_3 T##vec4::__ixx() { return __##T##_tuple_3( NULL, &x, &x ); } \
    /* Swizzler Getter Function(`ixy`) */ \
    __##T##_tuple_3 T##vec4::__ixy() { return __##T##_tuple_3( NULL, &x, &y ); } \
    /* Swizzler Getter Function(`ixz`) */ \
    __##T##_tuple_3 T##vec4::__ixz() { return __##T##_tuple_3( NULL, &x, &z ); } \
    /* Swizzler Getter Function(`ixw`) */ \
    __##T##_tuple_3 T##vec4::__ixw() { return __##T##_tuple_3( NULL, &x, &w ); } \
    /* Swizzler Getter Function(`ixi`) */ \
    __##T##_tuple_3 T##vec4::__ixi() { return __##T##_tuple_3( NULL, &x, NULL ); } \
    /* Swizzler Getter Function(`iyx`) */ \
    __##T##_tuple_3 T##vec4::__iyx() { return __##T##_tuple_3( NULL, &y, &x ); } \
    /* Swizzler Getter Function(`iyy`) */ \
    __##T##_tuple_3 T##vec4::__iyy() { return __##T##_tuple_3( NULL, &y, &y ); } \
    /* Swizzler Getter Function(`iyz`) */ \
    __##T##_tuple_3 T##vec4::__iyz() { return __##T##_tuple_3( NULL, &y, &z ); } \
    /* Swizzler Getter Function(`iyw`) */ \
    __##T##_tuple_3 T##vec4::__iyw() { return __##T##_tuple_3( NULL, &y, &w ); } \
    /* Swizzler Getter Function(`iyi`) */ \
    __##T##_tuple_3 T##vec4::__iyi() { return __##T##_tuple_3( NULL, &y, NULL ); } \
    /* Swizzler Getter Function(`izx`) */ \
    __##T##_tuple_3 T##vec4::__izx() { return __##T##_tuple_3( NULL, &z, &x ); } \
    /* Swizzler Getter Function(`izy`) */ \
    __##T##_tuple_3 T##vec4::__izy() { return __##T##_tuple_3( NULL, &z, &y ); } \
    /* Swizzler Getter Function(`izz`) */ \
    __##T##_tuple_3 T##vec4::__izz() { return __##T##_tuple_3( NULL, &z, &z ); } \
    /* Swizzler Getter Function(`izw`) */ \
    __##T##_tuple_3 T##vec4::__izw() { return __##T##_tuple_3( NULL, &z, &w ); } \
    /* Swizzler Getter Function(`izi`) */ \
    __##T##_tuple_3 T##vec4::__izi() { return __##T##_tuple_3( NULL, &z, NULL ); } \
    /* Swizzler Getter Function(`iwx`) */ \
    __##T##_tuple_3 T##vec4::__iwx() { return __##T##_tuple_3( NULL, &w, &x ); } \
    /* Swizzler Getter Function(`iwy`) */ \
    __##T##_tuple_3 T##vec4::__iwy() { return __##T##_tuple_3( NULL, &w, &y ); } \
    /* Swizzler Getter Function(`iwz`) */ \
    __##T##_tuple_3 T##vec4::__iwz() { return __##T##_tuple_3( NULL, &w, &z ); } \
    /* Swizzler Getter Function(`iww`) */ \
    __##T##_tuple_3 T##vec4::__iww() { return __##T##_tuple_3( NULL, &w, &w ); } \
    /* Swizzler Getter Function(`iwi`) */ \
    __##T##_tuple_3 T##vec4::__iwi() { return __##T##_tuple_3( NULL, &w, NULL ); } \
    /* Swizzler Getter Function(`iix`) */ \
    __##T##_tuple_3 T##vec4::__iix() { return __##T##_tuple_3( NULL, NULL, &x ); } \
    /* Swizzler Getter Function(`iiy`) */ \
    __##T##_tuple_3 T##vec4::__iiy() { return __##T##_tuple_3( NULL, NULL, &y ); } \
    /* Swizzler Getter Function(`iiz`) */ \
    __##T##_tuple_3 T##vec4::__iiz() { return __##T##_tuple_3( NULL, NULL, &z ); } \
    /* Swizzler Getter Function(`iiw`) */ \
    __##T##_tuple_3 T##vec4::__iiw() { return __##T##_tuple_3( NULL, NULL, &w ); } \
    /* Swizzler Getter Function(`iii`) */ \
    __##T##_tuple_3 T##vec4::__iii() { return __##T##_tuple_3( NULL, NULL, NULL ); } \
    /* Swizzler Getter Function(`xxxx`) */ \
    __##T##_tuple_4 T##vec4::__xxxx() { return __##T##_tuple_4( &x, &x, &x, &x ); } \
    /* Swizzler Getter Function(`xxxy`) */ \
    __##T##_tuple_4 T##vec4::__xxxy() { return __##T##_tuple_4( &x, &x, &x, &y ); } \
    /* Swizzler Getter Function(`xxxz`) */ \
    __##T##_tuple_4 T##vec4::__xxxz() { return __##T##_tuple_4( &x, &x, &x, &z ); } \
    /* Swizzler Getter Function(`xxxw`) */ \
    __##T##_tuple_4 T##vec4::__xxxw() { return __##T##_tuple_4( &x, &x, &x, &w ); } \
    /* Swizzler Getter Function(`xxxi`) */ \
    __##T##_tuple_4 T##vec4::__xxxi() { return __##T##_tuple_4( &x, &x, &x, NULL ); } \
    /* Swizzler Getter Function(`xxyx`) */ \
    __##T##_tuple_4 T##vec4::__xxyx() { return __##T##_tuple_4( &x, &x, &y, &x ); } \
    /* Swizzler Getter Function(`xxyy`) */ \
    __##T##_tuple_4 T##vec4::__xxyy() { return __##T##_tuple_4( &x, &x, &y, &y ); } \
    /* Swizzler Getter Function(`xxyz`) */ \
    __##T##_tuple_4 T##vec4::__xxyz() { return __##T##_tuple_4( &x, &x, &y, &z ); } \
    /* Swizzler Getter Function(`xxyw`) */ \
    __##T##_tuple_4 T##vec4::__xxyw() { return __##T##_tuple_4( &x, &x, &y, &w ); } \
    /* Swizzler Getter Function(`xxyi`) */ \
    __##T##_tuple_4 T##vec4::__xxyi() { return __##T##_tuple_4( &x, &x, &y, NULL ); } \
    /* Swizzler Getter Function(`xxzx`) */ \
    __##T##_tuple_4 T##vec4::__xxzx() { return __##T##_tuple_4( &x, &x, &z, &x ); } \
    /* Swizzler Getter Function(`xxzy`) */ \
    __##T##_tuple_4 T##vec4::__xxzy() { return __##T##_tuple_4( &x, &x, &z, &y ); } \
    /* Swizzler Getter Function(`xxzz`) */ \
    __##T##_tuple_4 T##vec4::__xxzz() { return __##T##_tuple_4( &x, &x, &z, &z ); } \
    /* Swizzler Getter Function(`xxzw`) */ \
    __##T##_tuple_4 T##vec4::__xxzw() { return __##T##_tuple_4( &x, &x, &z, &w ); } \
    /* Swizzler Getter Function(`xxzi`) */ \
    __##T##_tuple_4 T##vec4::__xxzi() { return __##T##_tuple_4( &x, &x, &z, NULL ); } \
    /* Swizzler Getter Function(`xxwx`) */ \
    __##T##_tuple_4 T##vec4::__xxwx() { return __##T##_tuple_4( &x, &x, &w, &x ); } \
    /* Swizzler Getter Function(`xxwy`) */ \
    __##T##_tuple_4 T##vec4::__xxwy() { return __##T##_tuple_4( &x, &x, &w, &y ); } \
    /* Swizzler Getter Function(`xxwz`) */ \
    __##T##_tuple_4 T##vec4::__xxwz() { return __##T##_tuple_4( &x, &x, &w, &z ); } \
    /* Swizzler Getter Function(`xxww`) */ \
    __##T##_tuple_4 T##vec4::__xxww() { return __##T##_tuple_4( &x, &x, &w, &w ); } \
    /* Swizzler Getter Function(`xxwi`) */ \
    __##T##_tuple_4 T##vec4::__xxwi() { return __##T##_tuple_4( &x, &x, &w, NULL ); } \
    /* Swizzler Getter Function(`xxix`) */ \
    __##T##_tuple_4 T##vec4::__xxix() { return __##T##_tuple_4( &x, &x, NULL, &x ); } \
    /* Swizzler Getter Function(`xxiy`) */ \
    __##T##_tuple_4 T##vec4::__xxiy() { return __##T##_tuple_4( &x, &x, NULL, &y ); } \
    /* Swizzler Getter Function(`xxiz`) */ \
    __##T##_tuple_4 T##vec4::__xxiz() { return __##T##_tuple_4( &x, &x, NULL, &z ); } \
    /* Swizzler Getter Function(`xxiw`) */ \
    __##T##_tuple_4 T##vec4::__xxiw() { return __##T##_tuple_4( &x, &x, NULL, &w ); } \
    /* Swizzler Getter Function(`xxii`) */ \
    __##T##_tuple_4 T##vec4::__xxii() { return __##T##_tuple_4( &x, &x, NULL, NULL ); } \
    /* Swizzler Getter Function(`xyxx`) */ \
    __##T##_tuple_4 T##vec4::__xyxx() { return __##T##_tuple_4( &x, &y, &x, &x ); } \
    /* Swizzler Getter Function(`xyxy`) */ \
    __##T##_tuple_4 T##vec4::__xyxy() { return __##T##_tuple_4( &x, &y, &x, &y ); } \
    /* Swizzler Getter Function(`xyxz`) */ \
    __##T##_tuple_4 T##vec4::__xyxz() { return __##T##_tuple_4( &x, &y, &x, &z ); } \
    /* Swizzler Getter Function(`xyxw`) */ \
    __##T##_tuple_4 T##vec4::__xyxw() { return __##T##_tuple_4( &x, &y, &x, &w ); } \
    /* Swizzler Getter Function(`xyxi`) */ \
    __##T##_tuple_4 T##vec4::__xyxi() { return __##T##_tuple_4( &x, &y, &x, NULL ); } \
    /* Swizzler Getter Function(`xyyx`) */ \
    __##T##_tuple_4 T##vec4::__xyyx() { return __##T##_tuple_4( &x, &y, &y, &x ); } \
    /* Swizzler Getter Function(`xyyy`) */ \
    __##T##_tuple_4 T##vec4::__xyyy() { return __##T##_tuple_4( &x, &y, &y, &y ); } \
    /* Swizzler Getter Function(`xyyz`) */ \
    __##T##_tuple_4 T##vec4::__xyyz() { return __##T##_tuple_4( &x, &y, &y, &z ); } \
    /* Swizzler Getter Function(`xyyw`) */ \
    __##T##_tuple_4 T##vec4::__xyyw() { return __##T##_tuple_4( &x, &y, &y, &w ); } \
    /* Swizzler Getter Function(`xyyi`) */ \
    __##T##_tuple_4 T##vec4::__xyyi() { return __##T##_tuple_4( &x, &y, &y, NULL ); } \
    /* Swizzler Getter Function(`xyzx`) */ \
    __##T##_tuple_4 T##vec4::__xyzx() { return __##T##_tuple_4( &x, &y, &z, &x ); } \
    /* Swizzler Getter Function(`xyzy`) */ \
    __##T##_tuple_4 T##vec4::__xyzy() { return __##T##_tuple_4( &x, &y, &z, &y ); } \
    /* Swizzler Getter Function(`xyzz`) */ \
    __##T##_tuple_4 T##vec4::__xyzz() { return __##T##_tuple_4( &x, &y, &z, &z ); } \
    /* Swizzler Getter Function(`xyzw`) */ \
    __##T##_tuple_4 T##vec4::__xyzw() { return __##T##_tuple_4( &x, &y, &z, &w ); } \
    /* Swizzler Getter Function(`xyzi`) */ \
    __##T##_tuple_4 T##vec4::__xyzi() { return __##T##_tuple_4( &x, &y, &z, NULL ); } \
    /* Swizzler Getter Function(`xywx`) */ \
    __##T##_tuple_4 T##vec4::__xywx() { return __##T##_tuple_4( &x, &y, &w, &x ); } \
    /* Swizzler Getter Function(`xywy`) */ \
    __##T##_tuple_4 T##vec4::__xywy() { return __##T##_tuple_4( &x, &y, &w, &y ); } \
    /* Swizzler Getter Function(`xywz`) */ \
    __##T##_tuple_4 T##vec4::__xywz() { return __##T##_tuple_4( &x, &y, &w, &z ); } \
    /* Swizzler Getter Function(`xyww`) */ \
    __##T##_tuple_4 T##vec4::__xyww() { return __##T##_tuple_4( &x, &y, &w, &w ); } \
    /* Swizzler Getter Function(`xywi`) */ \
    __##T##_tuple_4 T##vec4::__xywi() { return __##T##_tuple_4( &x, &y, &w, NULL ); } \
    /* Swizzler Getter Function(`xyix`) */ \
    __##T##_tuple_4 T##vec4::__xyix() { return __##T##_tuple_4( &x, &y, NULL, &x ); } \
    /* Swizzler Getter Function(`xyiy`) */ \
    __##T##_tuple_4 T##vec4::__xyiy() { return __##T##_tuple_4( &x, &y, NULL, &y ); } \
    /* Swizzler Getter Function(`xyiz`) */ \
    __##T##_tuple_4 T##vec4::__xyiz() { return __##T##_tuple_4( &x, &y, NULL, &z ); } \
    /* Swizzler Getter Function(`xyiw`) */ \
    __##T##_tuple_4 T##vec4::__xyiw() { return __##T##_tuple_4( &x, &y, NULL, &w ); } \
    /* Swizzler Getter Function(`xyii`) */ \
    __##T##_tuple_4 T##vec4::__xyii() { return __##T##_tuple_4( &x, &y, NULL, NULL ); } \
    /* Swizzler Getter Function(`xzxx`) */ \
    __##T##_tuple_4 T##vec4::__xzxx() { return __##T##_tuple_4( &x, &z, &x, &x ); } \
    /* Swizzler Getter Function(`xzxy`) */ \
    __##T##_tuple_4 T##vec4::__xzxy() { return __##T##_tuple_4( &x, &z, &x, &y ); } \
    /* Swizzler Getter Function(`xzxz`) */ \
    __##T##_tuple_4 T##vec4::__xzxz() { return __##T##_tuple_4( &x, &z, &x, &z ); } \
    /* Swizzler Getter Function(`xzxw`) */ \
    __##T##_tuple_4 T##vec4::__xzxw() { return __##T##_tuple_4( &x, &z, &x, &w ); } \
    /* Swizzler Getter Function(`xzxi`) */ \
    __##T##_tuple_4 T##vec4::__xzxi() { return __##T##_tuple_4( &x, &z, &x, NULL ); } \
    /* Swizzler Getter Function(`xzyx`) */ \
    __##T##_tuple_4 T##vec4::__xzyx() { return __##T##_tuple_4( &x, &z, &y, &x ); } \
    /* Swizzler Getter Function(`xzyy`) */ \
    __##T##_tuple_4 T##vec4::__xzyy() { return __##T##_tuple_4( &x, &z, &y, &y ); } \
    /* Swizzler Getter Function(`xzyz`) */ \
    __##T##_tuple_4 T##vec4::__xzyz() { return __##T##_tuple_4( &x, &z, &y, &z ); } \
    /* Swizzler Getter Function(`xzyw`) */ \
    __##T##_tuple_4 T##vec4::__xzyw() { return __##T##_tuple_4( &x, &z, &y, &w ); } \
    /* Swizzler Getter Function(`xzyi`) */ \
    __##T##_tuple_4 T##vec4::__xzyi() { return __##T##_tuple_4( &x, &z, &y, NULL ); } \
    /* Swizzler Getter Function(`xzzx`) */ \
    __##T##_tuple_4 T##vec4::__xzzx() { return __##T##_tuple_4( &x, &z, &z, &x ); } \
    /* Swizzler Getter Function(`xzzy`) */ \
    __##T##_tuple_4 T##vec4::__xzzy() { return __##T##_tuple_4( &x, &z, &z, &y ); } \
    /* Swizzler Getter Function(`xzzz`) */ \
    __##T##_tuple_4 T##vec4::__xzzz() { return __##T##_tuple_4( &x, &z, &z, &z ); } \
    /* Swizzler Getter Function(`xzzw`) */ \
    __##T##_tuple_4 T##vec4::__xzzw() { return __##T##_tuple_4( &x, &z, &z, &w ); } \
    /* Swizzler Getter Function(`xzzi`) */ \
    __##T##_tuple_4 T##vec4::__xzzi() { return __##T##_tuple_4( &x, &z, &z, NULL ); } \
    /* Swizzler Getter Function(`xzwx`) */ \
    __##T##_tuple_4 T##vec4::__xzwx() { return __##T##_tuple_4( &x, &z, &w, &x ); } \
    /* Swizzler Getter Function(`xzwy`) */ \
    __##T##_tuple_4 T##vec4::__xzwy() { return __##T##_tuple_4( &x, &z, &w, &y ); } \
    /* Swizzler Getter Function(`xzwz`) */ \
    __##T##_tuple_4 T##vec4::__xzwz() { return __##T##_tuple_4( &x, &z, &w, &z ); } \
    /* Swizzler Getter Function(`xzww`) */ \
    __##T##_tuple_4 T##vec4::__xzww() { return __##T##_tuple_4( &x, &z, &w, &w ); } \
    /* Swizzler Getter Function(`xzwi`) */ \
    __##T##_tuple_4 T##vec4::__xzwi() { return __##T##_tuple_4( &x, &z, &w, NULL ); } \
    /* Swizzler Getter Function(`xzix`) */ \
    __##T##_tuple_4 T##vec4::__xzix() { return __##T##_tuple_4( &x, &z, NULL, &x ); } \
    /* Swizzler Getter Function(`xziy`) */ \
    __##T##_tuple_4 T##vec4::__xziy() { return __##T##_tuple_4( &x, &z, NULL, &y ); } \
    /* Swizzler Getter Function(`xziz`) */ \
    __##T##_tuple_4 T##vec4::__xziz() { return __##T##_tuple_4( &x, &z, NULL, &z ); } \
    /* Swizzler Getter Function(`xziw`) */ \
    __##T##_tuple_4 T##vec4::__xziw() { return __##T##_tuple_4( &x, &z, NULL, &w ); } \
    /* Swizzler Getter Function(`xzii`) */ \
    __##T##_tuple_4 T##vec4::__xzii() { return __##T##_tuple_4( &x, &z, NULL, NULL ); } \
    /* Swizzler Getter Function(`xwxx`) */ \
    __##T##_tuple_4 T##vec4::__xwxx() { return __##T##_tuple_4( &x, &w, &x, &x ); } \
    /* Swizzler Getter Function(`xwxy`) */ \
    __##T##_tuple_4 T##vec4::__xwxy() { return __##T##_tuple_4( &x, &w, &x, &y ); } \
    /* Swizzler Getter Function(`xwxz`) */ \
    __##T##_tuple_4 T##vec4::__xwxz() { return __##T##_tuple_4( &x, &w, &x, &z ); } \
    /* Swizzler Getter Function(`xwxw`) */ \
    __##T##_tuple_4 T##vec4::__xwxw() { return __##T##_tuple_4( &x, &w, &x, &w ); } \
    /* Swizzler Getter Function(`xwxi`) */ \
    __##T##_tuple_4 T##vec4::__xwxi() { return __##T##_tuple_4( &x, &w, &x, NULL ); } \
    /* Swizzler Getter Function(`xwyx`) */ \
    __##T##_tuple_4 T##vec4::__xwyx() { return __##T##_tuple_4( &x, &w, &y, &x ); } \
    /* Swizzler Getter Function(`xwyy`) */ \
    __##T##_tuple_4 T##vec4::__xwyy() { return __##T##_tuple_4( &x, &w, &y, &y ); } \
    /* Swizzler Getter Function(`xwyz`) */ \
    __##T##_tuple_4 T##vec4::__xwyz() { return __##T##_tuple_4( &x, &w, &y, &z ); } \
    /* Swizzler Getter Function(`xwyw`) */ \
    __##T##_tuple_4 T##vec4::__xwyw() { return __##T##_tuple_4( &x, &w, &y, &w ); } \
    /* Swizzler Getter Function(`xwyi`) */ \
    __##T##_tuple_4 T##vec4::__xwyi() { return __##T##_tuple_4( &x, &w, &y, NULL ); } \
    /* Swizzler Getter Function(`xwzx`) */ \
    __##T##_tuple_4 T##vec4::__xwzx() { return __##T##_tuple_4( &x, &w, &z, &x ); } \
    /* Swizzler Getter Function(`xwzy`) */ \
    __##T##_tuple_4 T##vec4::__xwzy() { return __##T##_tuple_4( &x, &w, &z, &y ); } \
    /* Swizzler Getter Function(`xwzz`) */ \
    __##T##_tuple_4 T##vec4::__xwzz() { return __##T##_tuple_4( &x, &w, &z, &z ); } \
    /* Swizzler Getter Function(`xwzw`) */ \
    __##T##_tuple_4 T##vec4::__xwzw() { return __##T##_tuple_4( &x, &w, &z, &w ); } \
    /* Swizzler Getter Function(`xwzi`) */ \
    __##T##_tuple_4 T##vec4::__xwzi() { return __##T##_tuple_4( &x, &w, &z, NULL ); } \
    /* Swizzler Getter Function(`xwwx`) */ \
    __##T##_tuple_4 T##vec4::__xwwx() { return __##T##_tuple_4( &x, &w, &w, &x ); } \
    /* Swizzler Getter Function(`xwwy`) */ \
    __##T##_tuple_4 T##vec4::__xwwy() { return __##T##_tuple_4( &x, &w, &w, &y ); } \
    /* Swizzler Getter Function(`xwwz`) */ \
    __##T##_tuple_4 T##vec4::__xwwz() { return __##T##_tuple_4( &x, &w, &w, &z ); } \
    /* Swizzler Getter Function(`xwww`) */ \
    __##T##_tuple_4 T##vec4::__xwww() { return __##T##_tuple_4( &x, &w, &w, &w ); } \
    /* Swizzler Getter Function(`xwwi`) */ \
    __##T##_tuple_4 T##vec4::__xwwi() { return __##T##_tuple_4( &x, &w, &w, NULL ); } \
    /* Swizzler Getter Function(`xwix`) */ \
    __##T##_tuple_4 T##vec4::__xwix() { return __##T##_tuple_4( &x, &w, NULL, &x ); } \
    /* Swizzler Getter Function(`xwiy`) */ \
    __##T##_tuple_4 T##vec4::__xwiy() { return __##T##_tuple_4( &x, &w, NULL, &y ); } \
    /* Swizzler Getter Function(`xwiz`) */ \
    __##T##_tuple_4 T##vec4::__xwiz() { return __##T##_tuple_4( &x, &w, NULL, &z ); } \
    /* Swizzler Getter Function(`xwiw`) */ \
    __##T##_tuple_4 T##vec4::__xwiw() { return __##T##_tuple_4( &x, &w, NULL, &w ); } \
    /* Swizzler Getter Function(`xwii`) */ \
    __##T##_tuple_4 T##vec4::__xwii() { return __##T##_tuple_4( &x, &w, NULL, NULL ); } \
    /* Swizzler Getter Function(`xixx`) */ \
    __##T##_tuple_4 T##vec4::__xixx() { return __##T##_tuple_4( &x, NULL, &x, &x ); } \
    /* Swizzler Getter Function(`xixy`) */ \
    __##T##_tuple_4 T##vec4::__xixy() { return __##T##_tuple_4( &x, NULL, &x, &y ); } \
    /* Swizzler Getter Function(`xixz`) */ \
    __##T##_tuple_4 T##vec4::__xixz() { return __##T##_tuple_4( &x, NULL, &x, &z ); } \
    /* Swizzler Getter Function(`xixw`) */ \
    __##T##_tuple_4 T##vec4::__xixw() { return __##T##_tuple_4( &x, NULL, &x, &w ); } \
    /* Swizzler Getter Function(`xixi`) */ \
    __##T##_tuple_4 T##vec4::__xixi() { return __##T##_tuple_4( &x, NULL, &x, NULL ); } \
    /* Swizzler Getter Function(`xiyx`) */ \
    __##T##_tuple_4 T##vec4::__xiyx() { return __##T##_tuple_4( &x, NULL, &y, &x ); } \
    /* Swizzler Getter Function(`xiyy`) */ \
    __##T##_tuple_4 T##vec4::__xiyy() { return __##T##_tuple_4( &x, NULL, &y, &y ); } \
    /* Swizzler Getter Function(`xiyz`) */ \
    __##T##_tuple_4 T##vec4::__xiyz() { return __##T##_tuple_4( &x, NULL, &y, &z ); } \
    /* Swizzler Getter Function(`xiyw`) */ \
    __##T##_tuple_4 T##vec4::__xiyw() { return __##T##_tuple_4( &x, NULL, &y, &w ); } \
    /* Swizzler Getter Function(`xiyi`) */ \
    __##T##_tuple_4 T##vec4::__xiyi() { return __##T##_tuple_4( &x, NULL, &y, NULL ); } \
    /* Swizzler Getter Function(`xizx`) */ \
    __##T##_tuple_4 T##vec4::__xizx() { return __##T##_tuple_4( &x, NULL, &z, &x ); } \
    /* Swizzler Getter Function(`xizy`) */ \
    __##T##_tuple_4 T##vec4::__xizy() { return __##T##_tuple_4( &x, NULL, &z, &y ); } \
    /* Swizzler Getter Function(`xizz`) */ \
    __##T##_tuple_4 T##vec4::__xizz() { return __##T##_tuple_4( &x, NULL, &z, &z ); } \
    /* Swizzler Getter Function(`xizw`) */ \
    __##T##_tuple_4 T##vec4::__xizw() { return __##T##_tuple_4( &x, NULL, &z, &w ); } \
    /* Swizzler Getter Function(`xizi`) */ \
    __##T##_tuple_4 T##vec4::__xizi() { return __##T##_tuple_4( &x, NULL, &z, NULL ); } \
    /* Swizzler Getter Function(`xiwx`) */ \
    __##T##_tuple_4 T##vec4::__xiwx() { return __##T##_tuple_4( &x, NULL, &w, &x ); } \
    /* Swizzler Getter Function(`xiwy`) */ \
    __##T##_tuple_4 T##vec4::__xiwy() { return __##T##_tuple_4( &x, NULL, &w, &y ); } \
    /* Swizzler Getter Function(`xiwz`) */ \
    __##T##_tuple_4 T##vec4::__xiwz() { return __##T##_tuple_4( &x, NULL, &w, &z ); } \
    /* Swizzler Getter Function(`xiww`) */ \
    __##T##_tuple_4 T##vec4::__xiww() { return __##T##_tuple_4( &x, NULL, &w, &w ); } \
    /* Swizzler Getter Function(`xiwi`) */ \
    __##T##_tuple_4 T##vec4::__xiwi() { return __##T##_tuple_4( &x, NULL, &w, NULL ); } \
    /* Swizzler Getter Function(`xiix`) */ \
    __##T##_tuple_4 T##vec4::__xiix() { return __##T##_tuple_4( &x, NULL, NULL, &x ); } \
    /* Swizzler Getter Function(`xiiy`) */ \
    __##T##_tuple_4 T##vec4::__xiiy() { return __##T##_tuple_4( &x, NULL, NULL, &y ); } \
    /* Swizzler Getter Function(`xiiz`) */ \
    __##T##_tuple_4 T##vec4::__xiiz() { return __##T##_tuple_4( &x, NULL, NULL, &z ); } \
    /* Swizzler Getter Function(`xiiw`) */ \
    __##T##_tuple_4 T##vec4::__xiiw() { return __##T##_tuple_4( &x, NULL, NULL, &w ); } \
    /* Swizzler Getter Function(`xiii`) */ \
    __##T##_tuple_4 T##vec4::__xiii() { return __##T##_tuple_4( &x, NULL, NULL, NULL ); } \
    /* Swizzler Getter Function(`yxxx`) */ \
    __##T##_tuple_4 T##vec4::__yxxx() { return __##T##_tuple_4( &y, &x, &x, &x ); } \
    /* Swizzler Getter Function(`yxxy`) */ \
    __##T##_tuple_4 T##vec4::__yxxy() { return __##T##_tuple_4( &y, &x, &x, &y ); } \
    /* Swizzler Getter Function(`yxxz`) */ \
    __##T##_tuple_4 T##vec4::__yxxz() { return __##T##_tuple_4( &y, &x, &x, &z ); } \
    /* Swizzler Getter Function(`yxxw`) */ \
    __##T##_tuple_4 T##vec4::__yxxw() { return __##T##_tuple_4( &y, &x, &x, &w ); } \
    /* Swizzler Getter Function(`yxxi`) */ \
    __##T##_tuple_4 T##vec4::__yxxi() { return __##T##_tuple_4( &y, &x, &x, NULL ); } \
    /* Swizzler Getter Function(`yxyx`) */ \
    __##T##_tuple_4 T##vec4::__yxyx() { return __##T##_tuple_4( &y, &x, &y, &x ); } \
    /* Swizzler Getter Function(`yxyy`) */ \
    __##T##_tuple_4 T##vec4::__yxyy() { return __##T##_tuple_4( &y, &x, &y, &y ); } \
    /* Swizzler Getter Function(`yxyz`) */ \
    __##T##_tuple_4 T##vec4::__yxyz() { return __##T##_tuple_4( &y, &x, &y, &z ); } \
    /* Swizzler Getter Function(`yxyw`) */ \
    __##T##_tuple_4 T##vec4::__yxyw() { return __##T##_tuple_4( &y, &x, &y, &w ); } \
    /* Swizzler Getter Function(`yxyi`) */ \
    __##T##_tuple_4 T##vec4::__yxyi() { return __##T##_tuple_4( &y, &x, &y, NULL ); } \
    /* Swizzler Getter Function(`yxzx`) */ \
    __##T##_tuple_4 T##vec4::__yxzx() { return __##T##_tuple_4( &y, &x, &z, &x ); } \
    /* Swizzler Getter Function(`yxzy`) */ \
    __##T##_tuple_4 T##vec4::__yxzy() { return __##T##_tuple_4( &y, &x, &z, &y ); } \
    /* Swizzler Getter Function(`yxzz`) */ \
    __##T##_tuple_4 T##vec4::__yxzz() { return __##T##_tuple_4( &y, &x, &z, &z ); } \
    /* Swizzler Getter Function(`yxzw`) */ \
    __##T##_tuple_4 T##vec4::__yxzw() { return __##T##_tuple_4( &y, &x, &z, &w ); } \
    /* Swizzler Getter Function(`yxzi`) */ \
    __##T##_tuple_4 T##vec4::__yxzi() { return __##T##_tuple_4( &y, &x, &z, NULL ); } \
    /* Swizzler Getter Function(`yxwx`) */ \
    __##T##_tuple_4 T##vec4::__yxwx() { return __##T##_tuple_4( &y, &x, &w, &x ); } \
    /* Swizzler Getter Function(`yxwy`) */ \
    __##T##_tuple_4 T##vec4::__yxwy() { return __##T##_tuple_4( &y, &x, &w, &y ); } \
    /* Swizzler Getter Function(`yxwz`) */ \
    __##T##_tuple_4 T##vec4::__yxwz() { return __##T##_tuple_4( &y, &x, &w, &z ); } \
    /* Swizzler Getter Function(`yxww`) */ \
    __##T##_tuple_4 T##vec4::__yxww() { return __##T##_tuple_4( &y, &x, &w, &w ); } \
    /* Swizzler Getter Function(`yxwi`) */ \
    __##T##_tuple_4 T##vec4::__yxwi() { return __##T##_tuple_4( &y, &x, &w, NULL ); } \
    /* Swizzler Getter Function(`yxix`) */ \
    __##T##_tuple_4 T##vec4::__yxix() { return __##T##_tuple_4( &y, &x, NULL, &x ); } \
    /* Swizzler Getter Function(`yxiy`) */ \
    __##T##_tuple_4 T##vec4::__yxiy() { return __##T##_tuple_4( &y, &x, NULL, &y ); } \
    /* Swizzler Getter Function(`yxiz`) */ \
    __##T##_tuple_4 T##vec4::__yxiz() { return __##T##_tuple_4( &y, &x, NULL, &z ); } \
    /* Swizzler Getter Function(`yxiw`) */ \
    __##T##_tuple_4 T##vec4::__yxiw() { return __##T##_tuple_4( &y, &x, NULL, &w ); } \
    /* Swizzler Getter Function(`yxii`) */ \
    __##T##_tuple_4 T##vec4::__yxii() { return __##T##_tuple_4( &y, &x, NULL, NULL ); } \
    /* Swizzler Getter Function(`yyxx`) */ \
    __##T##_tuple_4 T##vec4::__yyxx() { return __##T##_tuple_4( &y, &y, &x, &x ); } \
    /* Swizzler Getter Function(`yyxy`) */ \
    __##T##_tuple_4 T##vec4::__yyxy() { return __##T##_tuple_4( &y, &y, &x, &y ); } \
    /* Swizzler Getter Function(`yyxz`) */ \
    __##T##_tuple_4 T##vec4::__yyxz() { return __##T##_tuple_4( &y, &y, &x, &z ); } \
    /* Swizzler Getter Function(`yyxw`) */ \
    __##T##_tuple_4 T##vec4::__yyxw() { return __##T##_tuple_4( &y, &y, &x, &w ); } \
    /* Swizzler Getter Function(`yyxi`) */ \
    __##T##_tuple_4 T##vec4::__yyxi() { return __##T##_tuple_4( &y, &y, &x, NULL ); } \
    /* Swizzler Getter Function(`yyyx`) */ \
    __##T##_tuple_4 T##vec4::__yyyx() { return __##T##_tuple_4( &y, &y, &y, &x ); } \
    /* Swizzler Getter Function(`yyyy`) */ \
    __##T##_tuple_4 T##vec4::__yyyy() { return __##T##_tuple_4( &y, &y, &y, &y ); } \
    /* Swizzler Getter Function(`yyyz`) */ \
    __##T##_tuple_4 T##vec4::__yyyz() { return __##T##_tuple_4( &y, &y, &y, &z ); } \
    /* Swizzler Getter Function(`yyyw`) */ \
    __##T##_tuple_4 T##vec4::__yyyw() { return __##T##_tuple_4( &y, &y, &y, &w ); } \
    /* Swizzler Getter Function(`yyyi`) */ \
    __##T##_tuple_4 T##vec4::__yyyi() { return __##T##_tuple_4( &y, &y, &y, NULL ); } \
    /* Swizzler Getter Function(`yyzx`) */ \
    __##T##_tuple_4 T##vec4::__yyzx() { return __##T##_tuple_4( &y, &y, &z, &x ); } \
    /* Swizzler Getter Function(`yyzy`) */ \
    __##T##_tuple_4 T##vec4::__yyzy() { return __##T##_tuple_4( &y, &y, &z, &y ); } \
    /* Swizzler Getter Function(`yyzz`) */ \
    __##T##_tuple_4 T##vec4::__yyzz() { return __##T##_tuple_4( &y, &y, &z, &z ); } \
    /* Swizzler Getter Function(`yyzw`) */ \
    __##T##_tuple_4 T##vec4::__yyzw() { return __##T##_tuple_4( &y, &y, &z, &w ); } \
    /* Swizzler Getter Function(`yyzi`) */ \
    __##T##_tuple_4 T##vec4::__yyzi() { return __##T##_tuple_4( &y, &y, &z, NULL ); } \
    /* Swizzler Getter Function(`yywx`) */ \
    __##T##_tuple_4 T##vec4::__yywx() { return __##T##_tuple_4( &y, &y, &w, &x ); } \
    /* Swizzler Getter Function(`yywy`) */ \
    __##T##_tuple_4 T##vec4::__yywy() { return __##T##_tuple_4( &y, &y, &w, &y ); } \
    /* Swizzler Getter Function(`yywz`) */ \
    __##T##_tuple_4 T##vec4::__yywz() { return __##T##_tuple_4( &y, &y, &w, &z ); } \
    /* Swizzler Getter Function(`yyww`) */ \
    __##T##_tuple_4 T##vec4::__yyww() { return __##T##_tuple_4( &y, &y, &w, &w ); } \
    /* Swizzler Getter Function(`yywi`) */ \
    __##T##_tuple_4 T##vec4::__yywi() { return __##T##_tuple_4( &y, &y, &w, NULL ); } \
    /* Swizzler Getter Function(`yyix`) */ \
    __##T##_tuple_4 T##vec4::__yyix() { return __##T##_tuple_4( &y, &y, NULL, &x ); } \
    /* Swizzler Getter Function(`yyiy`) */ \
    __##T##_tuple_4 T##vec4::__yyiy() { return __##T##_tuple_4( &y, &y, NULL, &y ); } \
    /* Swizzler Getter Function(`yyiz`) */ \
    __##T##_tuple_4 T##vec4::__yyiz() { return __##T##_tuple_4( &y, &y, NULL, &z ); } \
    /* Swizzler Getter Function(`yyiw`) */ \
    __##T##_tuple_4 T##vec4::__yyiw() { return __##T##_tuple_4( &y, &y, NULL, &w ); } \
    /* Swizzler Getter Function(`yyii`) */ \
    __##T##_tuple_4 T##vec4::__yyii() { return __##T##_tuple_4( &y, &y, NULL, NULL ); } \
    /* Swizzler Getter Function(`yzxx`) */ \
    __##T##_tuple_4 T##vec4::__yzxx() { return __##T##_tuple_4( &y, &z, &x, &x ); } \
    /* Swizzler Getter Function(`yzxy`) */ \
    __##T##_tuple_4 T##vec4::__yzxy() { return __##T##_tuple_4( &y, &z, &x, &y ); } \
    /* Swizzler Getter Function(`yzxz`) */ \
    __##T##_tuple_4 T##vec4::__yzxz() { return __##T##_tuple_4( &y, &z, &x, &z ); } \
    /* Swizzler Getter Function(`yzxw`) */ \
    __##T##_tuple_4 T##vec4::__yzxw() { return __##T##_tuple_4( &y, &z, &x, &w ); } \
    /* Swizzler Getter Function(`yzxi`) */ \
    __##T##_tuple_4 T##vec4::__yzxi() { return __##T##_tuple_4( &y, &z, &x, NULL ); } \
    /* Swizzler Getter Function(`yzyx`) */ \
    __##T##_tuple_4 T##vec4::__yzyx() { return __##T##_tuple_4( &y, &z, &y, &x ); } \
    /* Swizzler Getter Function(`yzyy`) */ \
    __##T##_tuple_4 T##vec4::__yzyy() { return __##T##_tuple_4( &y, &z, &y, &y ); } \
    /* Swizzler Getter Function(`yzyz`) */ \
    __##T##_tuple_4 T##vec4::__yzyz() { return __##T##_tuple_4( &y, &z, &y, &z ); } \
    /* Swizzler Getter Function(`yzyw`) */ \
    __##T##_tuple_4 T##vec4::__yzyw() { return __##T##_tuple_4( &y, &z, &y, &w ); } \
    /* Swizzler Getter Function(`yzyi`) */ \
    __##T##_tuple_4 T##vec4::__yzyi() { return __##T##_tuple_4( &y, &z, &y, NULL ); } \
    /* Swizzler Getter Function(`yzzx`) */ \
    __##T##_tuple_4 T##vec4::__yzzx() { return __##T##_tuple_4( &y, &z, &z, &x ); } \
    /* Swizzler Getter Function(`yzzy`) */ \
    __##T##_tuple_4 T##vec4::__yzzy() { return __##T##_tuple_4( &y, &z, &z, &y ); } \
    /* Swizzler Getter Function(`yzzz`) */ \
    __##T##_tuple_4 T##vec4::__yzzz() { return __##T##_tuple_4( &y, &z, &z, &z ); } \
    /* Swizzler Getter Function(`yzzw`) */ \
    __##T##_tuple_4 T##vec4::__yzzw() { return __##T##_tuple_4( &y, &z, &z, &w ); } \
    /* Swizzler Getter Function(`yzzi`) */ \
    __##T##_tuple_4 T##vec4::__yzzi() { return __##T##_tuple_4( &y, &z, &z, NULL ); } \
    /* Swizzler Getter Function(`yzwx`) */ \
    __##T##_tuple_4 T##vec4::__yzwx() { return __##T##_tuple_4( &y, &z, &w, &x ); } \
    /* Swizzler Getter Function(`yzwy`) */ \
    __##T##_tuple_4 T##vec4::__yzwy() { return __##T##_tuple_4( &y, &z, &w, &y ); } \
    /* Swizzler Getter Function(`yzwz`) */ \
    __##T##_tuple_4 T##vec4::__yzwz() { return __##T##_tuple_4( &y, &z, &w, &z ); } \
    /* Swizzler Getter Function(`yzww`) */ \
    __##T##_tuple_4 T##vec4::__yzww() { return __##T##_tuple_4( &y, &z, &w, &w ); } \
    /* Swizzler Getter Function(`yzwi`) */ \
    __##T##_tuple_4 T##vec4::__yzwi() { return __##T##_tuple_4( &y, &z, &w, NULL ); } \
    /* Swizzler Getter Function(`yzix`) */ \
    __##T##_tuple_4 T##vec4::__yzix() { return __##T##_tuple_4( &y, &z, NULL, &x ); } \
    /* Swizzler Getter Function(`yziy`) */ \
    __##T##_tuple_4 T##vec4::__yziy() { return __##T##_tuple_4( &y, &z, NULL, &y ); } \
    /* Swizzler Getter Function(`yziz`) */ \
    __##T##_tuple_4 T##vec4::__yziz() { return __##T##_tuple_4( &y, &z, NULL, &z ); } \
    /* Swizzler Getter Function(`yziw`) */ \
    __##T##_tuple_4 T##vec4::__yziw() { return __##T##_tuple_4( &y, &z, NULL, &w ); } \
    /* Swizzler Getter Function(`yzii`) */ \
    __##T##_tuple_4 T##vec4::__yzii() { return __##T##_tuple_4( &y, &z, NULL, NULL ); } \
    /* Swizzler Getter Function(`ywxx`) */ \
    __##T##_tuple_4 T##vec4::__ywxx() { return __##T##_tuple_4( &y, &w, &x, &x ); } \
    /* Swizzler Getter Function(`ywxy`) */ \
    __##T##_tuple_4 T##vec4::__ywxy() { return __##T##_tuple_4( &y, &w, &x, &y ); } \
    /* Swizzler Getter Function(`ywxz`) */ \
    __##T##_tuple_4 T##vec4::__ywxz() { return __##T##_tuple_4( &y, &w, &x, &z ); } \
    /* Swizzler Getter Function(`ywxw`) */ \
    __##T##_tuple_4 T##vec4::__ywxw() { return __##T##_tuple_4( &y, &w, &x, &w ); } \
    /* Swizzler Getter Function(`ywxi`) */ \
    __##T##_tuple_4 T##vec4::__ywxi() { return __##T##_tuple_4( &y, &w, &x, NULL ); } \
    /* Swizzler Getter Function(`ywyx`) */ \
    __##T##_tuple_4 T##vec4::__ywyx() { return __##T##_tuple_4( &y, &w, &y, &x ); } \
    /* Swizzler Getter Function(`ywyy`) */ \
    __##T##_tuple_4 T##vec4::__ywyy() { return __##T##_tuple_4( &y, &w, &y, &y ); } \
    /* Swizzler Getter Function(`ywyz`) */ \
    __##T##_tuple_4 T##vec4::__ywyz() { return __##T##_tuple_4( &y, &w, &y, &z ); } \
    /* Swizzler Getter Function(`ywyw`) */ \
    __##T##_tuple_4 T##vec4::__ywyw() { return __##T##_tuple_4( &y, &w, &y, &w ); } \
    /* Swizzler Getter Function(`ywyi`) */ \
    __##T##_tuple_4 T##vec4::__ywyi() { return __##T##_tuple_4( &y, &w, &y, NULL ); } \
    /* Swizzler Getter Function(`ywzx`) */ \
    __##T##_tuple_4 T##vec4::__ywzx() { return __##T##_tuple_4( &y, &w, &z, &x ); } \
    /* Swizzler Getter Function(`ywzy`) */ \
    __##T##_tuple_4 T##vec4::__ywzy() { return __##T##_tuple_4( &y, &w, &z, &y ); } \
    /* Swizzler Getter Function(`ywzz`) */ \
    __##T##_tuple_4 T##vec4::__ywzz() { return __##T##_tuple_4( &y, &w, &z, &z ); } \
    /* Swizzler Getter Function(`ywzw`) */ \
    __##T##_tuple_4 T##vec4::__ywzw() { return __##T##_tuple_4( &y, &w, &z, &w ); } \
    /* Swizzler Getter Function(`ywzi`) */ \
    __##T##_tuple_4 T##vec4::__ywzi() { return __##T##_tuple_4( &y, &w, &z, NULL ); } \
    /* Swizzler Getter Function(`ywwx`) */ \
    __##T##_tuple_4 T##vec4::__ywwx() { return __##T##_tuple_4( &y, &w, &w, &x ); } \
    /* Swizzler Getter Function(`ywwy`) */ \
    __##T##_tuple_4 T##vec4::__ywwy() { return __##T##_tuple_4( &y, &w, &w, &y ); } \
    /* Swizzler Getter Function(`ywwz`) */ \
    __##T##_tuple_4 T##vec4::__ywwz() { return __##T##_tuple_4( &y, &w, &w, &z ); } \
    /* Swizzler Getter Function(`ywww`) */ \
    __##T##_tuple_4 T##vec4::__ywww() { return __##T##_tuple_4( &y, &w, &w, &w ); } \
    /* Swizzler Getter Function(`ywwi`) */ \
    __##T##_tuple_4 T##vec4::__ywwi() { return __##T##_tuple_4( &y, &w, &w, NULL ); } \
    /* Swizzler Getter Function(`ywix`) */ \
    __##T##_tuple_4 T##vec4::__ywix() { return __##T##_tuple_4( &y, &w, NULL, &x ); } \
    /* Swizzler Getter Function(`ywiy`) */ \
    __##T##_tuple_4 T##vec4::__ywiy() { return __##T##_tuple_4( &y, &w, NULL, &y ); } \
    /* Swizzler Getter Function(`ywiz`) */ \
    __##T##_tuple_4 T##vec4::__ywiz() { return __##T##_tuple_4( &y, &w, NULL, &z ); } \
    /* Swizzler Getter Function(`ywiw`) */ \
    __##T##_tuple_4 T##vec4::__ywiw() { return __##T##_tuple_4( &y, &w, NULL, &w ); } \
    /* Swizzler Getter Function(`ywii`) */ \
    __##T##_tuple_4 T##vec4::__ywii() { return __##T##_tuple_4( &y, &w, NULL, NULL ); } \
    /* Swizzler Getter Function(`yixx`) */ \
    __##T##_tuple_4 T##vec4::__yixx() { return __##T##_tuple_4( &y, NULL, &x, &x ); } \
    /* Swizzler Getter Function(`yixy`) */ \
    __##T##_tuple_4 T##vec4::__yixy() { return __##T##_tuple_4( &y, NULL, &x, &y ); } \
    /* Swizzler Getter Function(`yixz`) */ \
    __##T##_tuple_4 T##vec4::__yixz() { return __##T##_tuple_4( &y, NULL, &x, &z ); } \
    /* Swizzler Getter Function(`yixw`) */ \
    __##T##_tuple_4 T##vec4::__yixw() { return __##T##_tuple_4( &y, NULL, &x, &w ); } \
    /* Swizzler Getter Function(`yixi`) */ \
    __##T##_tuple_4 T##vec4::__yixi() { return __##T##_tuple_4( &y, NULL, &x, NULL ); } \
    /* Swizzler Getter Function(`yiyx`) */ \
    __##T##_tuple_4 T##vec4::__yiyx() { return __##T##_tuple_4( &y, NULL, &y, &x ); } \
    /* Swizzler Getter Function(`yiyy`) */ \
    __##T##_tuple_4 T##vec4::__yiyy() { return __##T##_tuple_4( &y, NULL, &y, &y ); } \
    /* Swizzler Getter Function(`yiyz`) */ \
    __##T##_tuple_4 T##vec4::__yiyz() { return __##T##_tuple_4( &y, NULL, &y, &z ); } \
    /* Swizzler Getter Function(`yiyw`) */ \
    __##T##_tuple_4 T##vec4::__yiyw() { return __##T##_tuple_4( &y, NULL, &y, &w ); } \
    /* Swizzler Getter Function(`yiyi`) */ \
    __##T##_tuple_4 T##vec4::__yiyi() { return __##T##_tuple_4( &y, NULL, &y, NULL ); } \
    /* Swizzler Getter Function(`yizx`) */ \
    __##T##_tuple_4 T##vec4::__yizx() { return __##T##_tuple_4( &y, NULL, &z, &x ); } \
    /* Swizzler Getter Function(`yizy`) */ \
    __##T##_tuple_4 T##vec4::__yizy() { return __##T##_tuple_4( &y, NULL, &z, &y ); } \
    /* Swizzler Getter Function(`yizz`) */ \
    __##T##_tuple_4 T##vec4::__yizz() { return __##T##_tuple_4( &y, NULL, &z, &z ); } \
    /* Swizzler Getter Function(`yizw`) */ \
    __##T##_tuple_4 T##vec4::__yizw() { return __##T##_tuple_4( &y, NULL, &z, &w ); } \
    /* Swizzler Getter Function(`yizi`) */ \
    __##T##_tuple_4 T##vec4::__yizi() { return __##T##_tuple_4( &y, NULL, &z, NULL ); } \
    /* Swizzler Getter Function(`yiwx`) */ \
    __##T##_tuple_4 T##vec4::__yiwx() { return __##T##_tuple_4( &y, NULL, &w, &x ); } \
    /* Swizzler Getter Function(`yiwy`) */ \
    __##T##_tuple_4 T##vec4::__yiwy() { return __##T##_tuple_4( &y, NULL, &w, &y ); } \
    /* Swizzler Getter Function(`yiwz`) */ \
    __##T##_tuple_4 T##vec4::__yiwz() { return __##T##_tuple_4( &y, NULL, &w, &z ); } \
    /* Swizzler Getter Function(`yiww`) */ \
    __##T##_tuple_4 T##vec4::__yiww() { return __##T##_tuple_4( &y, NULL, &w, &w ); } \
    /* Swizzler Getter Function(`yiwi`) */ \
    __##T##_tuple_4 T##vec4::__yiwi() { return __##T##_tuple_4( &y, NULL, &w, NULL ); } \
    /* Swizzler Getter Function(`yiix`) */ \
    __##T##_tuple_4 T##vec4::__yiix() { return __##T##_tuple_4( &y, NULL, NULL, &x ); } \
    /* Swizzler Getter Function(`yiiy`) */ \
    __##T##_tuple_4 T##vec4::__yiiy() { return __##T##_tuple_4( &y, NULL, NULL, &y ); } \
    /* Swizzler Getter Function(`yiiz`) */ \
    __##T##_tuple_4 T##vec4::__yiiz() { return __##T##_tuple_4( &y, NULL, NULL, &z ); } \
    /* Swizzler Getter Function(`yiiw`) */ \
    __##T##_tuple_4 T##vec4::__yiiw() { return __##T##_tuple_4( &y, NULL, NULL, &w ); } \
    /* Swizzler Getter Function(`yiii`) */ \
    __##T##_tuple_4 T##vec4::__yiii() { return __##T##_tuple_4( &y, NULL, NULL, NULL ); } \
    /* Swizzler Getter Function(`zxxx`) */ \
    __##T##_tuple_4 T##vec4::__zxxx() { return __##T##_tuple_4( &z, &x, &x, &x ); } \
    /* Swizzler Getter Function(`zxxy`) */ \
    __##T##_tuple_4 T##vec4::__zxxy() { return __##T##_tuple_4( &z, &x, &x, &y ); } \
    /* Swizzler Getter Function(`zxxz`) */ \
    __##T##_tuple_4 T##vec4::__zxxz() { return __##T##_tuple_4( &z, &x, &x, &z ); } \
    /* Swizzler Getter Function(`zxxw`) */ \
    __##T##_tuple_4 T##vec4::__zxxw() { return __##T##_tuple_4( &z, &x, &x, &w ); } \
    /* Swizzler Getter Function(`zxxi`) */ \
    __##T##_tuple_4 T##vec4::__zxxi() { return __##T##_tuple_4( &z, &x, &x, NULL ); } \
    /* Swizzler Getter Function(`zxyx`) */ \
    __##T##_tuple_4 T##vec4::__zxyx() { return __##T##_tuple_4( &z, &x, &y, &x ); } \
    /* Swizzler Getter Function(`zxyy`) */ \
    __##T##_tuple_4 T##vec4::__zxyy() { return __##T##_tuple_4( &z, &x, &y, &y ); } \
    /* Swizzler Getter Function(`zxyz`) */ \
    __##T##_tuple_4 T##vec4::__zxyz() { return __##T##_tuple_4( &z, &x, &y, &z ); } \
    /* Swizzler Getter Function(`zxyw`) */ \
    __##T##_tuple_4 T##vec4::__zxyw() { return __##T##_tuple_4( &z, &x, &y, &w ); } \
    /* Swizzler Getter Function(`zxyi`) */ \
    __##T##_tuple_4 T##vec4::__zxyi() { return __##T##_tuple_4( &z, &x, &y, NULL ); } \
    /* Swizzler Getter Function(`zxzx`) */ \
    __##T##_tuple_4 T##vec4::__zxzx() { return __##T##_tuple_4( &z, &x, &z, &x ); } \
    /* Swizzler Getter Function(`zxzy`) */ \
    __##T##_tuple_4 T##vec4::__zxzy() { return __##T##_tuple_4( &z, &x, &z, &y ); } \
    /* Swizzler Getter Function(`zxzz`) */ \
    __##T##_tuple_4 T##vec4::__zxzz() { return __##T##_tuple_4( &z, &x, &z, &z ); } \
    /* Swizzler Getter Function(`zxzw`) */ \
    __##T##_tuple_4 T##vec4::__zxzw() { return __##T##_tuple_4( &z, &x, &z, &w ); } \
    /* Swizzler Getter Function(`zxzi`) */ \
    __##T##_tuple_4 T##vec4::__zxzi() { return __##T##_tuple_4( &z, &x, &z, NULL ); } \
    /* Swizzler Getter Function(`zxwx`) */ \
    __##T##_tuple_4 T##vec4::__zxwx() { return __##T##_tuple_4( &z, &x, &w, &x ); } \
    /* Swizzler Getter Function(`zxwy`) */ \
    __##T##_tuple_4 T##vec4::__zxwy() { return __##T##_tuple_4( &z, &x, &w, &y ); } \
    /* Swizzler Getter Function(`zxwz`) */ \
    __##T##_tuple_4 T##vec4::__zxwz() { return __##T##_tuple_4( &z, &x, &w, &z ); } \
    /* Swizzler Getter Function(`zxww`) */ \
    __##T##_tuple_4 T##vec4::__zxww() { return __##T##_tuple_4( &z, &x, &w, &w ); } \
    /* Swizzler Getter Function(`zxwi`) */ \
    __##T##_tuple_4 T##vec4::__zxwi() { return __##T##_tuple_4( &z, &x, &w, NULL ); } \
    /* Swizzler Getter Function(`zxix`) */ \
    __##T##_tuple_4 T##vec4::__zxix() { return __##T##_tuple_4( &z, &x, NULL, &x ); } \
    /* Swizzler Getter Function(`zxiy`) */ \
    __##T##_tuple_4 T##vec4::__zxiy() { return __##T##_tuple_4( &z, &x, NULL, &y ); } \
    /* Swizzler Getter Function(`zxiz`) */ \
    __##T##_tuple_4 T##vec4::__zxiz() { return __##T##_tuple_4( &z, &x, NULL, &z ); } \
    /* Swizzler Getter Function(`zxiw`) */ \
    __##T##_tuple_4 T##vec4::__zxiw() { return __##T##_tuple_4( &z, &x, NULL, &w ); } \
    /* Swizzler Getter Function(`zxii`) */ \
    __##T##_tuple_4 T##vec4::__zxii() { return __##T##_tuple_4( &z, &x, NULL, NULL ); } \
    /* Swizzler Getter Function(`zyxx`) */ \
    __##T##_tuple_4 T##vec4::__zyxx() { return __##T##_tuple_4( &z, &y, &x, &x ); } \
    /* Swizzler Getter Function(`zyxy`) */ \
    __##T##_tuple_4 T##vec4::__zyxy() { return __##T##_tuple_4( &z, &y, &x, &y ); } \
    /* Swizzler Getter Function(`zyxz`) */ \
    __##T##_tuple_4 T##vec4::__zyxz() { return __##T##_tuple_4( &z, &y, &x, &z ); } \
    /* Swizzler Getter Function(`zyxw`) */ \
    __##T##_tuple_4 T##vec4::__zyxw() { return __##T##_tuple_4( &z, &y, &x, &w ); } \
    /* Swizzler Getter Function(`zyxi`) */ \
    __##T##_tuple_4 T##vec4::__zyxi() { return __##T##_tuple_4( &z, &y, &x, NULL ); } \
    /* Swizzler Getter Function(`zyyx`) */ \
    __##T##_tuple_4 T##vec4::__zyyx() { return __##T##_tuple_4( &z, &y, &y, &x ); } \
    /* Swizzler Getter Function(`zyyy`) */ \
    __##T##_tuple_4 T##vec4::__zyyy() { return __##T##_tuple_4( &z, &y, &y, &y ); } \
    /* Swizzler Getter Function(`zyyz`) */ \
    __##T##_tuple_4 T##vec4::__zyyz() { return __##T##_tuple_4( &z, &y, &y, &z ); } \
    /* Swizzler Getter Function(`zyyw`) */ \
    __##T##_tuple_4 T##vec4::__zyyw() { return __##T##_tuple_4( &z, &y, &y, &w ); } \
    /* Swizzler Getter Function(`zyyi`) */ \
    __##T##_tuple_4 T##vec4::__zyyi() { return __##T##_tuple_4( &z, &y, &y, NULL ); } \
    /* Swizzler Getter Function(`zyzx`) */ \
    __##T##_tuple_4 T##vec4::__zyzx() { return __##T##_tuple_4( &z, &y, &z, &x ); } \
    /* Swizzler Getter Function(`zyzy`) */ \
    __##T##_tuple_4 T##vec4::__zyzy() { return __##T##_tuple_4( &z, &y, &z, &y ); } \
    /* Swizzler Getter Function(`zyzz`) */ \
    __##T##_tuple_4 T##vec4::__zyzz() { return __##T##_tuple_4( &z, &y, &z, &z ); } \
    /* Swizzler Getter Function(`zyzw`) */ \
    __##T##_tuple_4 T##vec4::__zyzw() { return __##T##_tuple_4( &z, &y, &z, &w ); } \
    /* Swizzler Getter Function(`zyzi`) */ \
    __##T##_tuple_4 T##vec4::__zyzi() { return __##T##_tuple_4( &z, &y, &z, NULL ); } \
    /* Swizzler Getter Function(`zywx`) */ \
    __##T##_tuple_4 T##vec4::__zywx() { return __##T##_tuple_4( &z, &y, &w, &x ); } \
    /* Swizzler Getter Function(`zywy`) */ \
    __##T##_tuple_4 T##vec4::__zywy() { return __##T##_tuple_4( &z, &y, &w, &y ); } \
    /* Swizzler Getter Function(`zywz`) */ \
    __##T##_tuple_4 T##vec4::__zywz() { return __##T##_tuple_4( &z, &y, &w, &z ); } \
    /* Swizzler Getter Function(`zyww`) */ \
    __##T##_tuple_4 T##vec4::__zyww() { return __##T##_tuple_4( &z, &y, &w, &w ); } \
    /* Swizzler Getter Function(`zywi`) */ \
    __##T##_tuple_4 T##vec4::__zywi() { return __##T##_tuple_4( &z, &y, &w, NULL ); } \
    /* Swizzler Getter Function(`zyix`) */ \
    __##T##_tuple_4 T##vec4::__zyix() { return __##T##_tuple_4( &z, &y, NULL, &x ); } \
    /* Swizzler Getter Function(`zyiy`) */ \
    __##T##_tuple_4 T##vec4::__zyiy() { return __##T##_tuple_4( &z, &y, NULL, &y ); } \
    /* Swizzler Getter Function(`zyiz`) */ \
    __##T##_tuple_4 T##vec4::__zyiz() { return __##T##_tuple_4( &z, &y, NULL, &z ); } \
    /* Swizzler Getter Function(`zyiw`) */ \
    __##T##_tuple_4 T##vec4::__zyiw() { return __##T##_tuple_4( &z, &y, NULL, &w ); } \
    /* Swizzler Getter Function(`zyii`) */ \
    __##T##_tuple_4 T##vec4::__zyii() { return __##T##_tuple_4( &z, &y, NULL, NULL ); } \
    /* Swizzler Getter Function(`zzxx`) */ \
    __##T##_tuple_4 T##vec4::__zzxx() { return __##T##_tuple_4( &z, &z, &x, &x ); } \
    /* Swizzler Getter Function(`zzxy`) */ \
    __##T##_tuple_4 T##vec4::__zzxy() { return __##T##_tuple_4( &z, &z, &x, &y ); } \
    /* Swizzler Getter Function(`zzxz`) */ \
    __##T##_tuple_4 T##vec4::__zzxz() { return __##T##_tuple_4( &z, &z, &x, &z ); } \
    /* Swizzler Getter Function(`zzxw`) */ \
    __##T##_tuple_4 T##vec4::__zzxw() { return __##T##_tuple_4( &z, &z, &x, &w ); } \
    /* Swizzler Getter Function(`zzxi`) */ \
    __##T##_tuple_4 T##vec4::__zzxi() { return __##T##_tuple_4( &z, &z, &x, NULL ); } \
    /* Swizzler Getter Function(`zzyx`) */ \
    __##T##_tuple_4 T##vec4::__zzyx() { return __##T##_tuple_4( &z, &z, &y, &x ); } \
    /* Swizzler Getter Function(`zzyy`) */ \
    __##T##_tuple_4 T##vec4::__zzyy() { return __##T##_tuple_4( &z, &z, &y, &y ); } \
    /* Swizzler Getter Function(`zzyz`) */ \
    __##T##_tuple_4 T##vec4::__zzyz() { return __##T##_tuple_4( &z, &z, &y, &z ); } \
    /* Swizzler Getter Function(`zzyw`) */ \
    __##T##_tuple_4 T##vec4::__zzyw() { return __##T##_tuple_4( &z, &z, &y, &w ); } \
    /* Swizzler Getter Function(`zzyi`) */ \
    __##T##_tuple_4 T##vec4::__zzyi() { return __##T##_tuple_4( &z, &z, &y, NULL ); } \
    /* Swizzler Getter Function(`zzzx`) */ \
    __##T##_tuple_4 T##vec4::__zzzx() { return __##T##_tuple_4( &z, &z, &z, &x ); } \
    /* Swizzler Getter Function(`zzzy`) */ \
    __##T##_tuple_4 T##vec4::__zzzy() { return __##T##_tuple_4( &z, &z, &z, &y ); } \
    /* Swizzler Getter Function(`zzzz`) */ \
    __##T##_tuple_4 T##vec4::__zzzz() { return __##T##_tuple_4( &z, &z, &z, &z ); } \
    /* Swizzler Getter Function(`zzzw`) */ \
    __##T##_tuple_4 T##vec4::__zzzw() { return __##T##_tuple_4( &z, &z, &z, &w ); } \
    /* Swizzler Getter Function(`zzzi`) */ \
    __##T##_tuple_4 T##vec4::__zzzi() { return __##T##_tuple_4( &z, &z, &z, NULL ); } \
    /* Swizzler Getter Function(`zzwx`) */ \
    __##T##_tuple_4 T##vec4::__zzwx() { return __##T##_tuple_4( &z, &z, &w, &x ); } \
    /* Swizzler Getter Function(`zzwy`) */ \
    __##T##_tuple_4 T##vec4::__zzwy() { return __##T##_tuple_4( &z, &z, &w, &y ); } \
    /* Swizzler Getter Function(`zzwz`) */ \
    __##T##_tuple_4 T##vec4::__zzwz() { return __##T##_tuple_4( &z, &z, &w, &z ); } \
    /* Swizzler Getter Function(`zzww`) */ \
    __##T##_tuple_4 T##vec4::__zzww() { return __##T##_tuple_4( &z, &z, &w, &w ); } \
    /* Swizzler Getter Function(`zzwi`) */ \
    __##T##_tuple_4 T##vec4::__zzwi() { return __##T##_tuple_4( &z, &z, &w, NULL ); } \
    /* Swizzler Getter Function(`zzix`) */ \
    __##T##_tuple_4 T##vec4::__zzix() { return __##T##_tuple_4( &z, &z, NULL, &x ); } \
    /* Swizzler Getter Function(`zziy`) */ \
    __##T##_tuple_4 T##vec4::__zziy() { return __##T##_tuple_4( &z, &z, NULL, &y ); } \
    /* Swizzler Getter Function(`zziz`) */ \
    __##T##_tuple_4 T##vec4::__zziz() { return __##T##_tuple_4( &z, &z, NULL, &z ); } \
    /* Swizzler Getter Function(`zziw`) */ \
    __##T##_tuple_4 T##vec4::__zziw() { return __##T##_tuple_4( &z, &z, NULL, &w ); } \
    /* Swizzler Getter Function(`zzii`) */ \
    __##T##_tuple_4 T##vec4::__zzii() { return __##T##_tuple_4( &z, &z, NULL, NULL ); } \
    /* Swizzler Getter Function(`zwxx`) */ \
    __##T##_tuple_4 T##vec4::__zwxx() { return __##T##_tuple_4( &z, &w, &x, &x ); } \
    /* Swizzler Getter Function(`zwxy`) */ \
    __##T##_tuple_4 T##vec4::__zwxy() { return __##T##_tuple_4( &z, &w, &x, &y ); } \
    /* Swizzler Getter Function(`zwxz`) */ \
    __##T##_tuple_4 T##vec4::__zwxz() { return __##T##_tuple_4( &z, &w, &x, &z ); } \
    /* Swizzler Getter Function(`zwxw`) */ \
    __##T##_tuple_4 T##vec4::__zwxw() { return __##T##_tuple_4( &z, &w, &x, &w ); } \
    /* Swizzler Getter Function(`zwxi`) */ \
    __##T##_tuple_4 T##vec4::__zwxi() { return __##T##_tuple_4( &z, &w, &x, NULL ); } \
    /* Swizzler Getter Function(`zwyx`) */ \
    __##T##_tuple_4 T##vec4::__zwyx() { return __##T##_tuple_4( &z, &w, &y, &x ); } \
    /* Swizzler Getter Function(`zwyy`) */ \
    __##T##_tuple_4 T##vec4::__zwyy() { return __##T##_tuple_4( &z, &w, &y, &y ); } \
    /* Swizzler Getter Function(`zwyz`) */ \
    __##T##_tuple_4 T##vec4::__zwyz() { return __##T##_tuple_4( &z, &w, &y, &z ); } \
    /* Swizzler Getter Function(`zwyw`) */ \
    __##T##_tuple_4 T##vec4::__zwyw() { return __##T##_tuple_4( &z, &w, &y, &w ); } \
    /* Swizzler Getter Function(`zwyi`) */ \
    __##T##_tuple_4 T##vec4::__zwyi() { return __##T##_tuple_4( &z, &w, &y, NULL ); } \
    /* Swizzler Getter Function(`zwzx`) */ \
    __##T##_tuple_4 T##vec4::__zwzx() { return __##T##_tuple_4( &z, &w, &z, &x ); } \
    /* Swizzler Getter Function(`zwzy`) */ \
    __##T##_tuple_4 T##vec4::__zwzy() { return __##T##_tuple_4( &z, &w, &z, &y ); } \
    /* Swizzler Getter Function(`zwzz`) */ \
    __##T##_tuple_4 T##vec4::__zwzz() { return __##T##_tuple_4( &z, &w, &z, &z ); } \
    /* Swizzler Getter Function(`zwzw`) */ \
    __##T##_tuple_4 T##vec4::__zwzw() { return __##T##_tuple_4( &z, &w, &z, &w ); } \
    /* Swizzler Getter Function(`zwzi`) */ \
    __##T##_tuple_4 T##vec4::__zwzi() { return __##T##_tuple_4( &z, &w, &z, NULL ); } \
    /* Swizzler Getter Function(`zwwx`) */ \
    __##T##_tuple_4 T##vec4::__zwwx() { return __##T##_tuple_4( &z, &w, &w, &x ); } \
    /* Swizzler Getter Function(`zwwy`) */ \
    __##T##_tuple_4 T##vec4::__zwwy() { return __##T##_tuple_4( &z, &w, &w, &y ); } \
    /* Swizzler Getter Function(`zwwz`) */ \
    __##T##_tuple_4 T##vec4::__zwwz() { return __##T##_tuple_4( &z, &w, &w, &z ); } \
    /* Swizzler Getter Function(`zwww`) */ \
    __##T##_tuple_4 T##vec4::__zwww() { return __##T##_tuple_4( &z, &w, &w, &w ); } \
    /* Swizzler Getter Function(`zwwi`) */ \
    __##T##_tuple_4 T##vec4::__zwwi() { return __##T##_tuple_4( &z, &w, &w, NULL ); } \
    /* Swizzler Getter Function(`zwix`) */ \
    __##T##_tuple_4 T##vec4::__zwix() { return __##T##_tuple_4( &z, &w, NULL, &x ); } \
    /* Swizzler Getter Function(`zwiy`) */ \
    __##T##_tuple_4 T##vec4::__zwiy() { return __##T##_tuple_4( &z, &w, NULL, &y ); } \
    /* Swizzler Getter Function(`zwiz`) */ \
    __##T##_tuple_4 T##vec4::__zwiz() { return __##T##_tuple_4( &z, &w, NULL, &z ); } \
    /* Swizzler Getter Function(`zwiw`) */ \
    __##T##_tuple_4 T##vec4::__zwiw() { return __##T##_tuple_4( &z, &w, NULL, &w ); } \
    /* Swizzler Getter Function(`zwii`) */ \
    __##T##_tuple_4 T##vec4::__zwii() { return __##T##_tuple_4( &z, &w, NULL, NULL ); } \
    /* Swizzler Getter Function(`zixx`) */ \
    __##T##_tuple_4 T##vec4::__zixx() { return __##T##_tuple_4( &z, NULL, &x, &x ); } \
    /* Swizzler Getter Function(`zixy`) */ \
    __##T##_tuple_4 T##vec4::__zixy() { return __##T##_tuple_4( &z, NULL, &x, &y ); } \
    /* Swizzler Getter Function(`zixz`) */ \
    __##T##_tuple_4 T##vec4::__zixz() { return __##T##_tuple_4( &z, NULL, &x, &z ); } \
    /* Swizzler Getter Function(`zixw`) */ \
    __##T##_tuple_4 T##vec4::__zixw() { return __##T##_tuple_4( &z, NULL, &x, &w ); } \
    /* Swizzler Getter Function(`zixi`) */ \
    __##T##_tuple_4 T##vec4::__zixi() { return __##T##_tuple_4( &z, NULL, &x, NULL ); } \
    /* Swizzler Getter Function(`ziyx`) */ \
    __##T##_tuple_4 T##vec4::__ziyx() { return __##T##_tuple_4( &z, NULL, &y, &x ); } \
    /* Swizzler Getter Function(`ziyy`) */ \
    __##T##_tuple_4 T##vec4::__ziyy() { return __##T##_tuple_4( &z, NULL, &y, &y ); } \
    /* Swizzler Getter Function(`ziyz`) */ \
    __##T##_tuple_4 T##vec4::__ziyz() { return __##T##_tuple_4( &z, NULL, &y, &z ); } \
    /* Swizzler Getter Function(`ziyw`) */ \
    __##T##_tuple_4 T##vec4::__ziyw() { return __##T##_tuple_4( &z, NULL, &y, &w ); } \
    /* Swizzler Getter Function(`ziyi`) */ \
    __##T##_tuple_4 T##vec4::__ziyi() { return __##T##_tuple_4( &z, NULL, &y, NULL ); } \
    /* Swizzler Getter Function(`zizx`) */ \
    __##T##_tuple_4 T##vec4::__zizx() { return __##T##_tuple_4( &z, NULL, &z, &x ); } \
    /* Swizzler Getter Function(`zizy`) */ \
    __##T##_tuple_4 T##vec4::__zizy() { return __##T##_tuple_4( &z, NULL, &z, &y ); } \
    /* Swizzler Getter Function(`zizz`) */ \
    __##T##_tuple_4 T##vec4::__zizz() { return __##T##_tuple_4( &z, NULL, &z, &z ); } \
    /* Swizzler Getter Function(`zizw`) */ \
    __##T##_tuple_4 T##vec4::__zizw() { return __##T##_tuple_4( &z, NULL, &z, &w ); } \
    /* Swizzler Getter Function(`zizi`) */ \
    __##T##_tuple_4 T##vec4::__zizi() { return __##T##_tuple_4( &z, NULL, &z, NULL ); } \
    /* Swizzler Getter Function(`ziwx`) */ \
    __##T##_tuple_4 T##vec4::__ziwx() { return __##T##_tuple_4( &z, NULL, &w, &x ); } \
    /* Swizzler Getter Function(`ziwy`) */ \
    __##T##_tuple_4 T##vec4::__ziwy() { return __##T##_tuple_4( &z, NULL, &w, &y ); } \
    /* Swizzler Getter Function(`ziwz`) */ \
    __##T##_tuple_4 T##vec4::__ziwz() { return __##T##_tuple_4( &z, NULL, &w, &z ); } \
    /* Swizzler Getter Function(`ziww`) */ \
    __##T##_tuple_4 T##vec4::__ziww() { return __##T##_tuple_4( &z, NULL, &w, &w ); } \
    /* Swizzler Getter Function(`ziwi`) */ \
    __##T##_tuple_4 T##vec4::__ziwi() { return __##T##_tuple_4( &z, NULL, &w, NULL ); } \
    /* Swizzler Getter Function(`ziix`) */ \
    __##T##_tuple_4 T##vec4::__ziix() { return __##T##_tuple_4( &z, NULL, NULL, &x ); } \
    /* Swizzler Getter Function(`ziiy`) */ \
    __##T##_tuple_4 T##vec4::__ziiy() { return __##T##_tuple_4( &z, NULL, NULL, &y ); } \
    /* Swizzler Getter Function(`ziiz`) */ \
    __##T##_tuple_4 T##vec4::__ziiz() { return __##T##_tuple_4( &z, NULL, NULL, &z ); } \
    /* Swizzler Getter Function(`ziiw`) */ \
    __##T##_tuple_4 T##vec4::__ziiw() { return __##T##_tuple_4( &z, NULL, NULL, &w ); } \
    /* Swizzler Getter Function(`ziii`) */ \
    __##T##_tuple_4 T##vec4::__ziii() { return __##T##_tuple_4( &z, NULL, NULL, NULL ); } \
    /* Swizzler Getter Function(`wxxx`) */ \
    __##T##_tuple_4 T##vec4::__wxxx() { return __##T##_tuple_4( &w, &x, &x, &x ); } \
    /* Swizzler Getter Function(`wxxy`) */ \
    __##T##_tuple_4 T##vec4::__wxxy() { return __##T##_tuple_4( &w, &x, &x, &y ); } \
    /* Swizzler Getter Function(`wxxz`) */ \
    __##T##_tuple_4 T##vec4::__wxxz() { return __##T##_tuple_4( &w, &x, &x, &z ); } \
    /* Swizzler Getter Function(`wxxw`) */ \
    __##T##_tuple_4 T##vec4::__wxxw() { return __##T##_tuple_4( &w, &x, &x, &w ); } \
    /* Swizzler Getter Function(`wxxi`) */ \
    __##T##_tuple_4 T##vec4::__wxxi() { return __##T##_tuple_4( &w, &x, &x, NULL ); } \
    /* Swizzler Getter Function(`wxyx`) */ \
    __##T##_tuple_4 T##vec4::__wxyx() { return __##T##_tuple_4( &w, &x, &y, &x ); } \
    /* Swizzler Getter Function(`wxyy`) */ \
    __##T##_tuple_4 T##vec4::__wxyy() { return __##T##_tuple_4( &w, &x, &y, &y ); } \
    /* Swizzler Getter Function(`wxyz`) */ \
    __##T##_tuple_4 T##vec4::__wxyz() { return __##T##_tuple_4( &w, &x, &y, &z ); } \
    /* Swizzler Getter Function(`wxyw`) */ \
    __##T##_tuple_4 T##vec4::__wxyw() { return __##T##_tuple_4( &w, &x, &y, &w ); } \
    /* Swizzler Getter Function(`wxyi`) */ \
    __##T##_tuple_4 T##vec4::__wxyi() { return __##T##_tuple_4( &w, &x, &y, NULL ); } \
    /* Swizzler Getter Function(`wxzx`) */ \
    __##T##_tuple_4 T##vec4::__wxzx() { return __##T##_tuple_4( &w, &x, &z, &x ); } \
    /* Swizzler Getter Function(`wxzy`) */ \
    __##T##_tuple_4 T##vec4::__wxzy() { return __##T##_tuple_4( &w, &x, &z, &y ); } \
    /* Swizzler Getter Function(`wxzz`) */ \
    __##T##_tuple_4 T##vec4::__wxzz() { return __##T##_tuple_4( &w, &x, &z, &z ); } \
    /* Swizzler Getter Function(`wxzw`) */ \
    __##T##_tuple_4 T##vec4::__wxzw() { return __##T##_tuple_4( &w, &x, &z, &w ); } \
    /* Swizzler Getter Function(`wxzi`) */ \
    __##T##_tuple_4 T##vec4::__wxzi() { return __##T##_tuple_4( &w, &x, &z, NULL ); } \
    /* Swizzler Getter Function(`wxwx`) */ \
    __##T##_tuple_4 T##vec4::__wxwx() { return __##T##_tuple_4( &w, &x, &w, &x ); } \
    /* Swizzler Getter Function(`wxwy`) */ \
    __##T##_tuple_4 T##vec4::__wxwy() { return __##T##_tuple_4( &w, &x, &w, &y ); } \
    /* Swizzler Getter Function(`wxwz`) */ \
    __##T##_tuple_4 T##vec4::__wxwz() { return __##T##_tuple_4( &w, &x, &w, &z ); } \
    /* Swizzler Getter Function(`wxww`) */ \
    __##T##_tuple_4 T##vec4::__wxww() { return __##T##_tuple_4( &w, &x, &w, &w ); } \
    /* Swizzler Getter Function(`wxwi`) */ \
    __##T##_tuple_4 T##vec4::__wxwi() { return __##T##_tuple_4( &w, &x, &w, NULL ); } \
    /* Swizzler Getter Function(`wxix`) */ \
    __##T##_tuple_4 T##vec4::__wxix() { return __##T##_tuple_4( &w, &x, NULL, &x ); } \
    /* Swizzler Getter Function(`wxiy`) */ \
    __##T##_tuple_4 T##vec4::__wxiy() { return __##T##_tuple_4( &w, &x, NULL, &y ); } \
    /* Swizzler Getter Function(`wxiz`) */ \
    __##T##_tuple_4 T##vec4::__wxiz() { return __##T##_tuple_4( &w, &x, NULL, &z ); } \
    /* Swizzler Getter Function(`wxiw`) */ \
    __##T##_tuple_4 T##vec4::__wxiw() { return __##T##_tuple_4( &w, &x, NULL, &w ); } \
    /* Swizzler Getter Function(`wxii`) */ \
    __##T##_tuple_4 T##vec4::__wxii() { return __##T##_tuple_4( &w, &x, NULL, NULL ); } \
    /* Swizzler Getter Function(`wyxx`) */ \
    __##T##_tuple_4 T##vec4::__wyxx() { return __##T##_tuple_4( &w, &y, &x, &x ); } \
    /* Swizzler Getter Function(`wyxy`) */ \
    __##T##_tuple_4 T##vec4::__wyxy() { return __##T##_tuple_4( &w, &y, &x, &y ); } \
    /* Swizzler Getter Function(`wyxz`) */ \
    __##T##_tuple_4 T##vec4::__wyxz() { return __##T##_tuple_4( &w, &y, &x, &z ); } \
    /* Swizzler Getter Function(`wyxw`) */ \
    __##T##_tuple_4 T##vec4::__wyxw() { return __##T##_tuple_4( &w, &y, &x, &w ); } \
    /* Swizzler Getter Function(`wyxi`) */ \
    __##T##_tuple_4 T##vec4::__wyxi() { return __##T##_tuple_4( &w, &y, &x, NULL ); } \
    /* Swizzler Getter Function(`wyyx`) */ \
    __##T##_tuple_4 T##vec4::__wyyx() { return __##T##_tuple_4( &w, &y, &y, &x ); } \
    /* Swizzler Getter Function(`wyyy`) */ \
    __##T##_tuple_4 T##vec4::__wyyy() { return __##T##_tuple_4( &w, &y, &y, &y ); } \
    /* Swizzler Getter Function(`wyyz`) */ \
    __##T##_tuple_4 T##vec4::__wyyz() { return __##T##_tuple_4( &w, &y, &y, &z ); } \
    /* Swizzler Getter Function(`wyyw`) */ \
    __##T##_tuple_4 T##vec4::__wyyw() { return __##T##_tuple_4( &w, &y, &y, &w ); } \
    /* Swizzler Getter Function(`wyyi`) */ \
    __##T##_tuple_4 T##vec4::__wyyi() { return __##T##_tuple_4( &w, &y, &y, NULL ); } \
    /* Swizzler Getter Function(`wyzx`) */ \
    __##T##_tuple_4 T##vec4::__wyzx() { return __##T##_tuple_4( &w, &y, &z, &x ); } \
    /* Swizzler Getter Function(`wyzy`) */ \
    __##T##_tuple_4 T##vec4::__wyzy() { return __##T##_tuple_4( &w, &y, &z, &y ); } \
    /* Swizzler Getter Function(`wyzz`) */ \
    __##T##_tuple_4 T##vec4::__wyzz() { return __##T##_tuple_4( &w, &y, &z, &z ); } \
    /* Swizzler Getter Function(`wyzw`) */ \
    __##T##_tuple_4 T##vec4::__wyzw() { return __##T##_tuple_4( &w, &y, &z, &w ); } \
    /* Swizzler Getter Function(`wyzi`) */ \
    __##T##_tuple_4 T##vec4::__wyzi() { return __##T##_tuple_4( &w, &y, &z, NULL ); } \
    /* Swizzler Getter Function(`wywx`) */ \
    __##T##_tuple_4 T##vec4::__wywx() { return __##T##_tuple_4( &w, &y, &w, &x ); } \
    /* Swizzler Getter Function(`wywy`) */ \
    __##T##_tuple_4 T##vec4::__wywy() { return __##T##_tuple_4( &w, &y, &w, &y ); } \
    /* Swizzler Getter Function(`wywz`) */ \
    __##T##_tuple_4 T##vec4::__wywz() { return __##T##_tuple_4( &w, &y, &w, &z ); } \
    /* Swizzler Getter Function(`wyww`) */ \
    __##T##_tuple_4 T##vec4::__wyww() { return __##T##_tuple_4( &w, &y, &w, &w ); } \
    /* Swizzler Getter Function(`wywi`) */ \
    __##T##_tuple_4 T##vec4::__wywi() { return __##T##_tuple_4( &w, &y, &w, NULL ); } \
    /* Swizzler Getter Function(`wyix`) */ \
    __##T##_tuple_4 T##vec4::__wyix() { return __##T##_tuple_4( &w, &y, NULL, &x ); } \
    /* Swizzler Getter Function(`wyiy`) */ \
    __##T##_tuple_4 T##vec4::__wyiy() { return __##T##_tuple_4( &w, &y, NULL, &y ); } \
    /* Swizzler Getter Function(`wyiz`) */ \
    __##T##_tuple_4 T##vec4::__wyiz() { return __##T##_tuple_4( &w, &y, NULL, &z ); } \
    /* Swizzler Getter Function(`wyiw`) */ \
    __##T##_tuple_4 T##vec4::__wyiw() { return __##T##_tuple_4( &w, &y, NULL, &w ); } \
    /* Swizzler Getter Function(`wyii`) */ \
    __##T##_tuple_4 T##vec4::__wyii() { return __##T##_tuple_4( &w, &y, NULL, NULL ); } \
    /* Swizzler Getter Function(`wzxx`) */ \
    __##T##_tuple_4 T##vec4::__wzxx() { return __##T##_tuple_4( &w, &z, &x, &x ); } \
    /* Swizzler Getter Function(`wzxy`) */ \
    __##T##_tuple_4 T##vec4::__wzxy() { return __##T##_tuple_4( &w, &z, &x, &y ); } \
    /* Swizzler Getter Function(`wzxz`) */ \
    __##T##_tuple_4 T##vec4::__wzxz() { return __##T##_tuple_4( &w, &z, &x, &z ); } \
    /* Swizzler Getter Function(`wzxw`) */ \
    __##T##_tuple_4 T##vec4::__wzxw() { return __##T##_tuple_4( &w, &z, &x, &w ); } \
    /* Swizzler Getter Function(`wzxi`) */ \
    __##T##_tuple_4 T##vec4::__wzxi() { return __##T##_tuple_4( &w, &z, &x, NULL ); } \
    /* Swizzler Getter Function(`wzyx`) */ \
    __##T##_tuple_4 T##vec4::__wzyx() { return __##T##_tuple_4( &w, &z, &y, &x ); } \
    /* Swizzler Getter Function(`wzyy`) */ \
    __##T##_tuple_4 T##vec4::__wzyy() { return __##T##_tuple_4( &w, &z, &y, &y ); } \
    /* Swizzler Getter Function(`wzyz`) */ \
    __##T##_tuple_4 T##vec4::__wzyz() { return __##T##_tuple_4( &w, &z, &y, &z ); } \
    /* Swizzler Getter Function(`wzyw`) */ \
    __##T##_tuple_4 T##vec4::__wzyw() { return __##T##_tuple_4( &w, &z, &y, &w ); } \
    /* Swizzler Getter Function(`wzyi`) */ \
    __##T##_tuple_4 T##vec4::__wzyi() { return __##T##_tuple_4( &w, &z, &y, NULL ); } \
    /* Swizzler Getter Function(`wzzx`) */ \
    __##T##_tuple_4 T##vec4::__wzzx() { return __##T##_tuple_4( &w, &z, &z, &x ); } \
    /* Swizzler Getter Function(`wzzy`) */ \
    __##T##_tuple_4 T##vec4::__wzzy() { return __##T##_tuple_4( &w, &z, &z, &y ); } \
    /* Swizzler Getter Function(`wzzz`) */ \
    __##T##_tuple_4 T##vec4::__wzzz() { return __##T##_tuple_4( &w, &z, &z, &z ); } \
    /* Swizzler Getter Function(`wzzw`) */ \
    __##T##_tuple_4 T##vec4::__wzzw() { return __##T##_tuple_4( &w, &z, &z, &w ); } \
    /* Swizzler Getter Function(`wzzi`) */ \
    __##T##_tuple_4 T##vec4::__wzzi() { return __##T##_tuple_4( &w, &z, &z, NULL ); } \
    /* Swizzler Getter Function(`wzwx`) */ \
    __##T##_tuple_4 T##vec4::__wzwx() { return __##T##_tuple_4( &w, &z, &w, &x ); } \
    /* Swizzler Getter Function(`wzwy`) */ \
    __##T##_tuple_4 T##vec4::__wzwy() { return __##T##_tuple_4( &w, &z, &w, &y ); } \
    /* Swizzler Getter Function(`wzwz`) */ \
    __##T##_tuple_4 T##vec4::__wzwz() { return __##T##_tuple_4( &w, &z, &w, &z ); } \
    /* Swizzler Getter Function(`wzww`) */ \
    __##T##_tuple_4 T##vec4::__wzww() { return __##T##_tuple_4( &w, &z, &w, &w ); } \
    /* Swizzler Getter Function(`wzwi`) */ \
    __##T##_tuple_4 T##vec4::__wzwi() { return __##T##_tuple_4( &w, &z, &w, NULL ); } \
    /* Swizzler Getter Function(`wzix`) */ \
    __##T##_tuple_4 T##vec4::__wzix() { return __##T##_tuple_4( &w, &z, NULL, &x ); } \
    /* Swizzler Getter Function(`wziy`) */ \
    __##T##_tuple_4 T##vec4::__wziy() { return __##T##_tuple_4( &w, &z, NULL, &y ); } \
    /* Swizzler Getter Function(`wziz`) */ \
    __##T##_tuple_4 T##vec4::__wziz() { return __##T##_tuple_4( &w, &z, NULL, &z ); } \
    /* Swizzler Getter Function(`wziw`) */ \
    __##T##_tuple_4 T##vec4::__wziw() { return __##T##_tuple_4( &w, &z, NULL, &w ); } \
    /* Swizzler Getter Function(`wzii`) */ \
    __##T##_tuple_4 T##vec4::__wzii() { return __##T##_tuple_4( &w, &z, NULL, NULL ); } \
    /* Swizzler Getter Function(`wwxx`) */ \
    __##T##_tuple_4 T##vec4::__wwxx() { return __##T##_tuple_4( &w, &w, &x, &x ); } \
    /* Swizzler Getter Function(`wwxy`) */ \
    __##T##_tuple_4 T##vec4::__wwxy() { return __##T##_tuple_4( &w, &w, &x, &y ); } \
    /* Swizzler Getter Function(`wwxz`) */ \
    __##T##_tuple_4 T##vec4::__wwxz() { return __##T##_tuple_4( &w, &w, &x, &z ); } \
    /* Swizzler Getter Function(`wwxw`) */ \
    __##T##_tuple_4 T##vec4::__wwxw() { return __##T##_tuple_4( &w, &w, &x, &w ); } \
    /* Swizzler Getter Function(`wwxi`) */ \
    __##T##_tuple_4 T##vec4::__wwxi() { return __##T##_tuple_4( &w, &w, &x, NULL ); } \
    /* Swizzler Getter Function(`wwyx`) */ \
    __##T##_tuple_4 T##vec4::__wwyx() { return __##T##_tuple_4( &w, &w, &y, &x ); } \
    /* Swizzler Getter Function(`wwyy`) */ \
    __##T##_tuple_4 T##vec4::__wwyy() { return __##T##_tuple_4( &w, &w, &y, &y ); } \
    /* Swizzler Getter Function(`wwyz`) */ \
    __##T##_tuple_4 T##vec4::__wwyz() { return __##T##_tuple_4( &w, &w, &y, &z ); } \
    /* Swizzler Getter Function(`wwyw`) */ \
    __##T##_tuple_4 T##vec4::__wwyw() { return __##T##_tuple_4( &w, &w, &y, &w ); } \
    /* Swizzler Getter Function(`wwyi`) */ \
    __##T##_tuple_4 T##vec4::__wwyi() { return __##T##_tuple_4( &w, &w, &y, NULL ); } \
    /* Swizzler Getter Function(`wwzx`) */ \
    __##T##_tuple_4 T##vec4::__wwzx() { return __##T##_tuple_4( &w, &w, &z, &x ); } \
    /* Swizzler Getter Function(`wwzy`) */ \
    __##T##_tuple_4 T##vec4::__wwzy() { return __##T##_tuple_4( &w, &w, &z, &y ); } \
    /* Swizzler Getter Function(`wwzz`) */ \
    __##T##_tuple_4 T##vec4::__wwzz() { return __##T##_tuple_4( &w, &w, &z, &z ); } \
    /* Swizzler Getter Function(`wwzw`) */ \
    __##T##_tuple_4 T##vec4::__wwzw() { return __##T##_tuple_4( &w, &w, &z, &w ); } \
    /* Swizzler Getter Function(`wwzi`) */ \
    __##T##_tuple_4 T##vec4::__wwzi() { return __##T##_tuple_4( &w, &w, &z, NULL ); } \
    /* Swizzler Getter Function(`wwwx`) */ \
    __##T##_tuple_4 T##vec4::__wwwx() { return __##T##_tuple_4( &w, &w, &w, &x ); } \
    /* Swizzler Getter Function(`wwwy`) */ \
    __##T##_tuple_4 T##vec4::__wwwy() { return __##T##_tuple_4( &w, &w, &w, &y ); } \
    /* Swizzler Getter Function(`wwwz`) */ \
    __##T##_tuple_4 T##vec4::__wwwz() { return __##T##_tuple_4( &w, &w, &w, &z ); } \
    /* Swizzler Getter Function(`wwww`) */ \
    __##T##_tuple_4 T##vec4::__wwww() { return __##T##_tuple_4( &w, &w, &w, &w ); } \
    /* Swizzler Getter Function(`wwwi`) */ \
    __##T##_tuple_4 T##vec4::__wwwi() { return __##T##_tuple_4( &w, &w, &w, NULL ); } \
    /* Swizzler Getter Function(`wwix`) */ \
    __##T##_tuple_4 T##vec4::__wwix() { return __##T##_tuple_4( &w, &w, NULL, &x ); } \
    /* Swizzler Getter Function(`wwiy`) */ \
    __##T##_tuple_4 T##vec4::__wwiy() { return __##T##_tuple_4( &w, &w, NULL, &y ); } \
    /* Swizzler Getter Function(`wwiz`) */ \
    __##T##_tuple_4 T##vec4::__wwiz() { return __##T##_tuple_4( &w, &w, NULL, &z ); } \
    /* Swizzler Getter Function(`wwiw`) */ \
    __##T##_tuple_4 T##vec4::__wwiw() { return __##T##_tuple_4( &w, &w, NULL, &w ); } \
    /* Swizzler Getter Function(`wwii`) */ \
    __##T##_tuple_4 T##vec4::__wwii() { return __##T##_tuple_4( &w, &w, NULL, NULL ); } \
    /* Swizzler Getter Function(`wixx`) */ \
    __##T##_tuple_4 T##vec4::__wixx() { return __##T##_tuple_4( &w, NULL, &x, &x ); } \
    /* Swizzler Getter Function(`wixy`) */ \
    __##T##_tuple_4 T##vec4::__wixy() { return __##T##_tuple_4( &w, NULL, &x, &y ); } \
    /* Swizzler Getter Function(`wixz`) */ \
    __##T##_tuple_4 T##vec4::__wixz() { return __##T##_tuple_4( &w, NULL, &x, &z ); } \
    /* Swizzler Getter Function(`wixw`) */ \
    __##T##_tuple_4 T##vec4::__wixw() { return __##T##_tuple_4( &w, NULL, &x, &w ); } \
    /* Swizzler Getter Function(`wixi`) */ \
    __##T##_tuple_4 T##vec4::__wixi() { return __##T##_tuple_4( &w, NULL, &x, NULL ); } \
    /* Swizzler Getter Function(`wiyx`) */ \
    __##T##_tuple_4 T##vec4::__wiyx() { return __##T##_tuple_4( &w, NULL, &y, &x ); } \
    /* Swizzler Getter Function(`wiyy`) */ \
    __##T##_tuple_4 T##vec4::__wiyy() { return __##T##_tuple_4( &w, NULL, &y, &y ); } \
    /* Swizzler Getter Function(`wiyz`) */ \
    __##T##_tuple_4 T##vec4::__wiyz() { return __##T##_tuple_4( &w, NULL, &y, &z ); } \
    /* Swizzler Getter Function(`wiyw`) */ \
    __##T##_tuple_4 T##vec4::__wiyw() { return __##T##_tuple_4( &w, NULL, &y, &w ); } \
    /* Swizzler Getter Function(`wiyi`) */ \
    __##T##_tuple_4 T##vec4::__wiyi() { return __##T##_tuple_4( &w, NULL, &y, NULL ); } \
    /* Swizzler Getter Function(`wizx`) */ \
    __##T##_tuple_4 T##vec4::__wizx() { return __##T##_tuple_4( &w, NULL, &z, &x ); } \
    /* Swizzler Getter Function(`wizy`) */ \
    __##T##_tuple_4 T##vec4::__wizy() { return __##T##_tuple_4( &w, NULL, &z, &y ); } \
    /* Swizzler Getter Function(`wizz`) */ \
    __##T##_tuple_4 T##vec4::__wizz() { return __##T##_tuple_4( &w, NULL, &z, &z ); } \
    /* Swizzler Getter Function(`wizw`) */ \
    __##T##_tuple_4 T##vec4::__wizw() { return __##T##_tuple_4( &w, NULL, &z, &w ); } \
    /* Swizzler Getter Function(`wizi`) */ \
    __##T##_tuple_4 T##vec4::__wizi() { return __##T##_tuple_4( &w, NULL, &z, NULL ); } \
    /* Swizzler Getter Function(`wiwx`) */ \
    __##T##_tuple_4 T##vec4::__wiwx() { return __##T##_tuple_4( &w, NULL, &w, &x ); } \
    /* Swizzler Getter Function(`wiwy`) */ \
    __##T##_tuple_4 T##vec4::__wiwy() { return __##T##_tuple_4( &w, NULL, &w, &y ); } \
    /* Swizzler Getter Function(`wiwz`) */ \
    __##T##_tuple_4 T##vec4::__wiwz() { return __##T##_tuple_4( &w, NULL, &w, &z ); } \
    /* Swizzler Getter Function(`wiww`) */ \
    __##T##_tuple_4 T##vec4::__wiww() { return __##T##_tuple_4( &w, NULL, &w, &w ); } \
    /* Swizzler Getter Function(`wiwi`) */ \
    __##T##_tuple_4 T##vec4::__wiwi() { return __##T##_tuple_4( &w, NULL, &w, NULL ); } \
    /* Swizzler Getter Function(`wiix`) */ \
    __##T##_tuple_4 T##vec4::__wiix() { return __##T##_tuple_4( &w, NULL, NULL, &x ); } \
    /* Swizzler Getter Function(`wiiy`) */ \
    __##T##_tuple_4 T##vec4::__wiiy() { return __##T##_tuple_4( &w, NULL, NULL, &y ); } \
    /* Swizzler Getter Function(`wiiz`) */ \
    __##T##_tuple_4 T##vec4::__wiiz() { return __##T##_tuple_4( &w, NULL, NULL, &z ); } \
    /* Swizzler Getter Function(`wiiw`) */ \
    __##T##_tuple_4 T##vec4::__wiiw() { return __##T##_tuple_4( &w, NULL, NULL, &w ); } \
    /* Swizzler Getter Function(`wiii`) */ \
    __##T##_tuple_4 T##vec4::__wiii() { return __##T##_tuple_4( &w, NULL, NULL, NULL ); } \
    /* Swizzler Getter Function(`ixxx`) */ \
    __##T##_tuple_4 T##vec4::__ixxx() { return __##T##_tuple_4( NULL, &x, &x, &x ); } \
    /* Swizzler Getter Function(`ixxy`) */ \
    __##T##_tuple_4 T##vec4::__ixxy() { return __##T##_tuple_4( NULL, &x, &x, &y ); } \
    /* Swizzler Getter Function(`ixxz`) */ \
    __##T##_tuple_4 T##vec4::__ixxz() { return __##T##_tuple_4( NULL, &x, &x, &z ); } \
    /* Swizzler Getter Function(`ixxw`) */ \
    __##T##_tuple_4 T##vec4::__ixxw() { return __##T##_tuple_4( NULL, &x, &x, &w ); } \
    /* Swizzler Getter Function(`ixxi`) */ \
    __##T##_tuple_4 T##vec4::__ixxi() { return __##T##_tuple_4( NULL, &x, &x, NULL ); } \
    /* Swizzler Getter Function(`ixyx`) */ \
    __##T##_tuple_4 T##vec4::__ixyx() { return __##T##_tuple_4( NULL, &x, &y, &x ); } \
    /* Swizzler Getter Function(`ixyy`) */ \
    __##T##_tuple_4 T##vec4::__ixyy() { return __##T##_tuple_4( NULL, &x, &y, &y ); } \
    /* Swizzler Getter Function(`ixyz`) */ \
    __##T##_tuple_4 T##vec4::__ixyz() { return __##T##_tuple_4( NULL, &x, &y, &z ); } \
    /* Swizzler Getter Function(`ixyw`) */ \
    __##T##_tuple_4 T##vec4::__ixyw() { return __##T##_tuple_4( NULL, &x, &y, &w ); } \
    /* Swizzler Getter Function(`ixyi`) */ \
    __##T##_tuple_4 T##vec4::__ixyi() { return __##T##_tuple_4( NULL, &x, &y, NULL ); } \
    /* Swizzler Getter Function(`ixzx`) */ \
    __##T##_tuple_4 T##vec4::__ixzx() { return __##T##_tuple_4( NULL, &x, &z, &x ); } \
    /* Swizzler Getter Function(`ixzy`) */ \
    __##T##_tuple_4 T##vec4::__ixzy() { return __##T##_tuple_4( NULL, &x, &z, &y ); } \
    /* Swizzler Getter Function(`ixzz`) */ \
    __##T##_tuple_4 T##vec4::__ixzz() { return __##T##_tuple_4( NULL, &x, &z, &z ); } \
    /* Swizzler Getter Function(`ixzw`) */ \
    __##T##_tuple_4 T##vec4::__ixzw() { return __##T##_tuple_4( NULL, &x, &z, &w ); } \
    /* Swizzler Getter Function(`ixzi`) */ \
    __##T##_tuple_4 T##vec4::__ixzi() { return __##T##_tuple_4( NULL, &x, &z, NULL ); } \
    /* Swizzler Getter Function(`ixwx`) */ \
    __##T##_tuple_4 T##vec4::__ixwx() { return __##T##_tuple_4( NULL, &x, &w, &x ); } \
    /* Swizzler Getter Function(`ixwy`) */ \
    __##T##_tuple_4 T##vec4::__ixwy() { return __##T##_tuple_4( NULL, &x, &w, &y ); } \
    /* Swizzler Getter Function(`ixwz`) */ \
    __##T##_tuple_4 T##vec4::__ixwz() { return __##T##_tuple_4( NULL, &x, &w, &z ); } \
    /* Swizzler Getter Function(`ixww`) */ \
    __##T##_tuple_4 T##vec4::__ixww() { return __##T##_tuple_4( NULL, &x, &w, &w ); } \
    /* Swizzler Getter Function(`ixwi`) */ \
    __##T##_tuple_4 T##vec4::__ixwi() { return __##T##_tuple_4( NULL, &x, &w, NULL ); } \
    /* Swizzler Getter Function(`ixix`) */ \
    __##T##_tuple_4 T##vec4::__ixix() { return __##T##_tuple_4( NULL, &x, NULL, &x ); } \
    /* Swizzler Getter Function(`ixiy`) */ \
    __##T##_tuple_4 T##vec4::__ixiy() { return __##T##_tuple_4( NULL, &x, NULL, &y ); } \
    /* Swizzler Getter Function(`ixiz`) */ \
    __##T##_tuple_4 T##vec4::__ixiz() { return __##T##_tuple_4( NULL, &x, NULL, &z ); } \
    /* Swizzler Getter Function(`ixiw`) */ \
    __##T##_tuple_4 T##vec4::__ixiw() { return __##T##_tuple_4( NULL, &x, NULL, &w ); } \
    /* Swizzler Getter Function(`ixii`) */ \
    __##T##_tuple_4 T##vec4::__ixii() { return __##T##_tuple_4( NULL, &x, NULL, NULL ); } \
    /* Swizzler Getter Function(`iyxx`) */ \
    __##T##_tuple_4 T##vec4::__iyxx() { return __##T##_tuple_4( NULL, &y, &x, &x ); } \
    /* Swizzler Getter Function(`iyxy`) */ \
    __##T##_tuple_4 T##vec4::__iyxy() { return __##T##_tuple_4( NULL, &y, &x, &y ); } \
    /* Swizzler Getter Function(`iyxz`) */ \
    __##T##_tuple_4 T##vec4::__iyxz() { return __##T##_tuple_4( NULL, &y, &x, &z ); } \
    /* Swizzler Getter Function(`iyxw`) */ \
    __##T##_tuple_4 T##vec4::__iyxw() { return __##T##_tuple_4( NULL, &y, &x, &w ); } \
    /* Swizzler Getter Function(`iyxi`) */ \
    __##T##_tuple_4 T##vec4::__iyxi() { return __##T##_tuple_4( NULL, &y, &x, NULL ); } \
    /* Swizzler Getter Function(`iyyx`) */ \
    __##T##_tuple_4 T##vec4::__iyyx() { return __##T##_tuple_4( NULL, &y, &y, &x ); } \
    /* Swizzler Getter Function(`iyyy`) */ \
    __##T##_tuple_4 T##vec4::__iyyy() { return __##T##_tuple_4( NULL, &y, &y, &y ); } \
    /* Swizzler Getter Function(`iyyz`) */ \
    __##T##_tuple_4 T##vec4::__iyyz() { return __##T##_tuple_4( NULL, &y, &y, &z ); } \
    /* Swizzler Getter Function(`iyyw`) */ \
    __##T##_tuple_4 T##vec4::__iyyw() { return __##T##_tuple_4( NULL, &y, &y, &w ); } \
    /* Swizzler Getter Function(`iyyi`) */ \
    __##T##_tuple_4 T##vec4::__iyyi() { return __##T##_tuple_4( NULL, &y, &y, NULL ); } \
    /* Swizzler Getter Function(`iyzx`) */ \
    __##T##_tuple_4 T##vec4::__iyzx() { return __##T##_tuple_4( NULL, &y, &z, &x ); } \
    /* Swizzler Getter Function(`iyzy`) */ \
    __##T##_tuple_4 T##vec4::__iyzy() { return __##T##_tuple_4( NULL, &y, &z, &y ); } \
    /* Swizzler Getter Function(`iyzz`) */ \
    __##T##_tuple_4 T##vec4::__iyzz() { return __##T##_tuple_4( NULL, &y, &z, &z ); } \
    /* Swizzler Getter Function(`iyzw`) */ \
    __##T##_tuple_4 T##vec4::__iyzw() { return __##T##_tuple_4( NULL, &y, &z, &w ); } \
    /* Swizzler Getter Function(`iyzi`) */ \
    __##T##_tuple_4 T##vec4::__iyzi() { return __##T##_tuple_4( NULL, &y, &z, NULL ); } \
    /* Swizzler Getter Function(`iywx`) */ \
    __##T##_tuple_4 T##vec4::__iywx() { return __##T##_tuple_4( NULL, &y, &w, &x ); } \
    /* Swizzler Getter Function(`iywy`) */ \
    __##T##_tuple_4 T##vec4::__iywy() { return __##T##_tuple_4( NULL, &y, &w, &y ); } \
    /* Swizzler Getter Function(`iywz`) */ \
    __##T##_tuple_4 T##vec4::__iywz() { return __##T##_tuple_4( NULL, &y, &w, &z ); } \
    /* Swizzler Getter Function(`iyww`) */ \
    __##T##_tuple_4 T##vec4::__iyww() { return __##T##_tuple_4( NULL, &y, &w, &w ); } \
    /* Swizzler Getter Function(`iywi`) */ \
    __##T##_tuple_4 T##vec4::__iywi() { return __##T##_tuple_4( NULL, &y, &w, NULL ); } \
    /* Swizzler Getter Function(`iyix`) */ \
    __##T##_tuple_4 T##vec4::__iyix() { return __##T##_tuple_4( NULL, &y, NULL, &x ); } \
    /* Swizzler Getter Function(`iyiy`) */ \
    __##T##_tuple_4 T##vec4::__iyiy() { return __##T##_tuple_4( NULL, &y, NULL, &y ); } \
    /* Swizzler Getter Function(`iyiz`) */ \
    __##T##_tuple_4 T##vec4::__iyiz() { return __##T##_tuple_4( NULL, &y, NULL, &z ); } \
    /* Swizzler Getter Function(`iyiw`) */ \
    __##T##_tuple_4 T##vec4::__iyiw() { return __##T##_tuple_4( NULL, &y, NULL, &w ); } \
    /* Swizzler Getter Function(`iyii`) */ \
    __##T##_tuple_4 T##vec4::__iyii() { return __##T##_tuple_4( NULL, &y, NULL, NULL ); } \
    /* Swizzler Getter Function(`izxx`) */ \
    __##T##_tuple_4 T##vec4::__izxx() { return __##T##_tuple_4( NULL, &z, &x, &x ); } \
    /* Swizzler Getter Function(`izxy`) */ \
    __##T##_tuple_4 T##vec4::__izxy() { return __##T##_tuple_4( NULL, &z, &x, &y ); } \
    /* Swizzler Getter Function(`izxz`) */ \
    __##T##_tuple_4 T##vec4::__izxz() { return __##T##_tuple_4( NULL, &z, &x, &z ); } \
    /* Swizzler Getter Function(`izxw`) */ \
    __##T##_tuple_4 T##vec4::__izxw() { return __##T##_tuple_4( NULL, &z, &x, &w ); } \
    /* Swizzler Getter Function(`izxi`) */ \
    __##T##_tuple_4 T##vec4::__izxi() { return __##T##_tuple_4( NULL, &z, &x, NULL ); } \
    /* Swizzler Getter Function(`izyx`) */ \
    __##T##_tuple_4 T##vec4::__izyx() { return __##T##_tuple_4( NULL, &z, &y, &x ); } \
    /* Swizzler Getter Function(`izyy`) */ \
    __##T##_tuple_4 T##vec4::__izyy() { return __##T##_tuple_4( NULL, &z, &y, &y ); } \
    /* Swizzler Getter Function(`izyz`) */ \
    __##T##_tuple_4 T##vec4::__izyz() { return __##T##_tuple_4( NULL, &z, &y, &z ); } \
    /* Swizzler Getter Function(`izyw`) */ \
    __##T##_tuple_4 T##vec4::__izyw() { return __##T##_tuple_4( NULL, &z, &y, &w ); } \
    /* Swizzler Getter Function(`izyi`) */ \
    __##T##_tuple_4 T##vec4::__izyi() { return __##T##_tuple_4( NULL, &z, &y, NULL ); } \
    /* Swizzler Getter Function(`izzx`) */ \
    __##T##_tuple_4 T##vec4::__izzx() { return __##T##_tuple_4( NULL, &z, &z, &x ); } \
    /* Swizzler Getter Function(`izzy`) */ \
    __##T##_tuple_4 T##vec4::__izzy() { return __##T##_tuple_4( NULL, &z, &z, &y ); } \
    /* Swizzler Getter Function(`izzz`) */ \
    __##T##_tuple_4 T##vec4::__izzz() { return __##T##_tuple_4( NULL, &z, &z, &z ); } \
    /* Swizzler Getter Function(`izzw`) */ \
    __##T##_tuple_4 T##vec4::__izzw() { return __##T##_tuple_4( NULL, &z, &z, &w ); } \
    /* Swizzler Getter Function(`izzi`) */ \
    __##T##_tuple_4 T##vec4::__izzi() { return __##T##_tuple_4( NULL, &z, &z, NULL ); } \
    /* Swizzler Getter Function(`izwx`) */ \
    __##T##_tuple_4 T##vec4::__izwx() { return __##T##_tuple_4( NULL, &z, &w, &x ); } \
    /* Swizzler Getter Function(`izwy`) */ \
    __##T##_tuple_4 T##vec4::__izwy() { return __##T##_tuple_4( NULL, &z, &w, &y ); } \
    /* Swizzler Getter Function(`izwz`) */ \
    __##T##_tuple_4 T##vec4::__izwz() { return __##T##_tuple_4( NULL, &z, &w, &z ); } \
    /* Swizzler Getter Function(`izww`) */ \
    __##T##_tuple_4 T##vec4::__izww() { return __##T##_tuple_4( NULL, &z, &w, &w ); } \
    /* Swizzler Getter Function(`izwi`) */ \
    __##T##_tuple_4 T##vec4::__izwi() { return __##T##_tuple_4( NULL, &z, &w, NULL ); } \
    /* Swizzler Getter Function(`izix`) */ \
    __##T##_tuple_4 T##vec4::__izix() { return __##T##_tuple_4( NULL, &z, NULL, &x ); } \
    /* Swizzler Getter Function(`iziy`) */ \
    __##T##_tuple_4 T##vec4::__iziy() { return __##T##_tuple_4( NULL, &z, NULL, &y ); } \
    /* Swizzler Getter Function(`iziz`) */ \
    __##T##_tuple_4 T##vec4::__iziz() { return __##T##_tuple_4( NULL, &z, NULL, &z ); } \
    /* Swizzler Getter Function(`iziw`) */ \
    __##T##_tuple_4 T##vec4::__iziw() { return __##T##_tuple_4( NULL, &z, NULL, &w ); } \
    /* Swizzler Getter Function(`izii`) */ \
    __##T##_tuple_4 T##vec4::__izii() { return __##T##_tuple_4( NULL, &z, NULL, NULL ); } \
    /* Swizzler Getter Function(`iwxx`) */ \
    __##T##_tuple_4 T##vec4::__iwxx() { return __##T##_tuple_4( NULL, &w, &x, &x ); } \
    /* Swizzler Getter Function(`iwxy`) */ \
    __##T##_tuple_4 T##vec4::__iwxy() { return __##T##_tuple_4( NULL, &w, &x, &y ); } \
    /* Swizzler Getter Function(`iwxz`) */ \
    __##T##_tuple_4 T##vec4::__iwxz() { return __##T##_tuple_4( NULL, &w, &x, &z ); } \
    /* Swizzler Getter Function(`iwxw`) */ \
    __##T##_tuple_4 T##vec4::__iwxw() { return __##T##_tuple_4( NULL, &w, &x, &w ); } \
    /* Swizzler Getter Function(`iwxi`) */ \
    __##T##_tuple_4 T##vec4::__iwxi() { return __##T##_tuple_4( NULL, &w, &x, NULL ); } \
    /* Swizzler Getter Function(`iwyx`) */ \
    __##T##_tuple_4 T##vec4::__iwyx() { return __##T##_tuple_4( NULL, &w, &y, &x ); } \
    /* Swizzler Getter Function(`iwyy`) */ \
    __##T##_tuple_4 T##vec4::__iwyy() { return __##T##_tuple_4( NULL, &w, &y, &y ); } \
    /* Swizzler Getter Function(`iwyz`) */ \
    __##T##_tuple_4 T##vec4::__iwyz() { return __##T##_tuple_4( NULL, &w, &y, &z ); } \
    /* Swizzler Getter Function(`iwyw`) */ \
    __##T##_tuple_4 T##vec4::__iwyw() { return __##T##_tuple_4( NULL, &w, &y, &w ); } \
    /* Swizzler Getter Function(`iwyi`) */ \
    __##T##_tuple_4 T##vec4::__iwyi() { return __##T##_tuple_4( NULL, &w, &y, NULL ); } \
    /* Swizzler Getter Function(`iwzx`) */ \
    __##T##_tuple_4 T##vec4::__iwzx() { return __##T##_tuple_4( NULL, &w, &z, &x ); } \
    /* Swizzler Getter Function(`iwzy`) */ \
    __##T##_tuple_4 T##vec4::__iwzy() { return __##T##_tuple_4( NULL, &w, &z, &y ); } \
    /* Swizzler Getter Function(`iwzz`) */ \
    __##T##_tuple_4 T##vec4::__iwzz() { return __##T##_tuple_4( NULL, &w, &z, &z ); } \
    /* Swizzler Getter Function(`iwzw`) */ \
    __##T##_tuple_4 T##vec4::__iwzw() { return __##T##_tuple_4( NULL, &w, &z, &w ); } \
    /* Swizzler Getter Function(`iwzi`) */ \
    __##T##_tuple_4 T##vec4::__iwzi() { return __##T##_tuple_4( NULL, &w, &z, NULL ); } \
    /* Swizzler Getter Function(`iwwx`) */ \
    __##T##_tuple_4 T##vec4::__iwwx() { return __##T##_tuple_4( NULL, &w, &w, &x ); } \
    /* Swizzler Getter Function(`iwwy`) */ \
    __##T##_tuple_4 T##vec4::__iwwy() { return __##T##_tuple_4( NULL, &w, &w, &y ); } \
    /* Swizzler Getter Function(`iwwz`) */ \
    __##T##_tuple_4 T##vec4::__iwwz() { return __##T##_tuple_4( NULL, &w, &w, &z ); } \
    /* Swizzler Getter Function(`iwww`) */ \
    __##T##_tuple_4 T##vec4::__iwww() { return __##T##_tuple_4( NULL, &w, &w, &w ); } \
    /* Swizzler Getter Function(`iwwi`) */ \
    __##T##_tuple_4 T##vec4::__iwwi() { return __##T##_tuple_4( NULL, &w, &w, NULL ); } \
    /* Swizzler Getter Function(`iwix`) */ \
    __##T##_tuple_4 T##vec4::__iwix() { return __##T##_tuple_4( NULL, &w, NULL, &x ); } \
    /* Swizzler Getter Function(`iwiy`) */ \
    __##T##_tuple_4 T##vec4::__iwiy() { return __##T##_tuple_4( NULL, &w, NULL, &y ); } \
    /* Swizzler Getter Function(`iwiz`) */ \
    __##T##_tuple_4 T##vec4::__iwiz() { return __##T##_tuple_4( NULL, &w, NULL, &z ); } \
    /* Swizzler Getter Function(`iwiw`) */ \
    __##T##_tuple_4 T##vec4::__iwiw() { return __##T##_tuple_4( NULL, &w, NULL, &w ); } \
    /* Swizzler Getter Function(`iwii`) */ \
    __##T##_tuple_4 T##vec4::__iwii() { return __##T##_tuple_4( NULL, &w, NULL, NULL ); } \
    /* Swizzler Getter Function(`iixx`) */ \
    __##T##_tuple_4 T##vec4::__iixx() { return __##T##_tuple_4( NULL, NULL, &x, &x ); } \
    /* Swizzler Getter Function(`iixy`) */ \
    __##T##_tuple_4 T##vec4::__iixy() { return __##T##_tuple_4( NULL, NULL, &x, &y ); } \
    /* Swizzler Getter Function(`iixz`) */ \
    __##T##_tuple_4 T##vec4::__iixz() { return __##T##_tuple_4( NULL, NULL, &x, &z ); } \
    /* Swizzler Getter Function(`iixw`) */ \
    __##T##_tuple_4 T##vec4::__iixw() { return __##T##_tuple_4( NULL, NULL, &x, &w ); } \
    /* Swizzler Getter Function(`iixi`) */ \
    __##T##_tuple_4 T##vec4::__iixi() { return __##T##_tuple_4( NULL, NULL, &x, NULL ); } \
    /* Swizzler Getter Function(`iiyx`) */ \
    __##T##_tuple_4 T##vec4::__iiyx() { return __##T##_tuple_4( NULL, NULL, &y, &x ); } \
    /* Swizzler Getter Function(`iiyy`) */ \
    __##T##_tuple_4 T##vec4::__iiyy() { return __##T##_tuple_4( NULL, NULL, &y, &y ); } \
    /* Swizzler Getter Function(`iiyz`) */ \
    __##T##_tuple_4 T##vec4::__iiyz() { return __##T##_tuple_4( NULL, NULL, &y, &z ); } \
    /* Swizzler Getter Function(`iiyw`) */ \
    __##T##_tuple_4 T##vec4::__iiyw() { return __##T##_tuple_4( NULL, NULL, &y, &w ); } \
    /* Swizzler Getter Function(`iiyi`) */ \
    __##T##_tuple_4 T##vec4::__iiyi() { return __##T##_tuple_4( NULL, NULL, &y, NULL ); } \
    /* Swizzler Getter Function(`iizx`) */ \
    __##T##_tuple_4 T##vec4::__iizx() { return __##T##_tuple_4( NULL, NULL, &z, &x ); } \
    /* Swizzler Getter Function(`iizy`) */ \
    __##T##_tuple_4 T##vec4::__iizy() { return __##T##_tuple_4( NULL, NULL, &z, &y ); } \
    /* Swizzler Getter Function(`iizz`) */ \
    __##T##_tuple_4 T##vec4::__iizz() { return __##T##_tuple_4( NULL, NULL, &z, &z ); } \
    /* Swizzler Getter Function(`iizw`) */ \
    __##T##_tuple_4 T##vec4::__iizw() { return __##T##_tuple_4( NULL, NULL, &z, &w ); } \
    /* Swizzler Getter Function(`iizi`) */ \
    __##T##_tuple_4 T##vec4::__iizi() { return __##T##_tuple_4( NULL, NULL, &z, NULL ); } \
    /* Swizzler Getter Function(`iiwx`) */ \
    __##T##_tuple_4 T##vec4::__iiwx() { return __##T##_tuple_4( NULL, NULL, &w, &x ); } \
    /* Swizzler Getter Function(`iiwy`) */ \
    __##T##_tuple_4 T##vec4::__iiwy() { return __##T##_tuple_4( NULL, NULL, &w, &y ); } \
    /* Swizzler Getter Function(`iiwz`) */ \
    __##T##_tuple_4 T##vec4::__iiwz() { return __##T##_tuple_4( NULL, NULL, &w, &z ); } \
    /* Swizzler Getter Function(`iiww`) */ \
    __##T##_tuple_4 T##vec4::__iiww() { return __##T##_tuple_4( NULL, NULL, &w, &w ); } \
    /* Swizzler Getter Function(`iiwi`) */ \
    __##T##_tuple_4 T##vec4::__iiwi() { return __##T##_tuple_4( NULL, NULL, &w, NULL ); } \
    /* Swizzler Getter Function(`iiix`) */ \
    __##T##_tuple_4 T##vec4::__iiix() { return __##T##_tuple_4( NULL, NULL, NULL, &x ); } \
    /* Swizzler Getter Function(`iiiy`) */ \
    __##T##_tuple_4 T##vec4::__iiiy() { return __##T##_tuple_4( NULL, NULL, NULL, &y ); } \
    /* Swizzler Getter Function(`iiiz`) */ \
    __##T##_tuple_4 T##vec4::__iiiz() { return __##T##_tuple_4( NULL, NULL, NULL, &z ); } \
    /* Swizzler Getter Function(`iiiw`) */ \
    __##T##_tuple_4 T##vec4::__iiiw() { return __##T##_tuple_4( NULL, NULL, NULL, &w ); } \
    /* Swizzler Getter Function(`iiii`) */ \
    __##T##_tuple_4 T##vec4::__iiii() { return __##T##_tuple_4( NULL, NULL, NULL, NULL ); } \


#endif
