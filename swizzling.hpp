#ifndef __SPACE_Y_MATHLIB_SWIZZLING__
#define __SPACE_Y_MATHLIB_SWIZZLING__

#define __VEC2_SWIZZLE( T ) \
    /* Swizzler Getter Function(`xx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( x, x )` */ \
    T##vec2 T##vec2::__xx() { return T##vec2( x, x ); } \
    /* Swizzler Getter Function(`xy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( x, y )` */ \
    T##vec2 T##vec2::__xy() { return T##vec2( x, y ); } \
    /* Swizzler Getter Function(`xi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( x, 0 )` */ \
    T##vec2 T##vec2::__xi() { return T##vec2( x, 0 ); } \
    /* Swizzler Getter Function(`yx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( y, x )` */ \
    T##vec2 T##vec2::__yx() { return T##vec2( y, x ); } \
    /* Swizzler Getter Function(`yy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( y, y )` */ \
    T##vec2 T##vec2::__yy() { return T##vec2( y, y ); } \
    /* Swizzler Getter Function(`yi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( y, 0 )` */ \
    T##vec2 T##vec2::__yi() { return T##vec2( y, 0 ); } \
    /* Swizzler Getter Function(`ix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( 0, x )` */ \
    T##vec2 T##vec2::__ix() { return T##vec2( 0, x ); } \
    /* Swizzler Getter Function(`iy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( 0, y )` */ \
    T##vec2 T##vec2::__iy() { return T##vec2( 0, y ); } \
    /* Swizzler Getter Function(`ii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( 0, 0 )` */ \
    T##vec2 T##vec2::__ii() { return T##vec2( 0, 0 ); } \
    /* Swizzler Getter Function(`xxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, x, x )` */ \
    T##vec3 T##vec2::__xxx() { return T##vec3( x, x, x ); } \
    /* Swizzler Getter Function(`xxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, x, y )` */ \
    T##vec3 T##vec2::__xxy() { return T##vec3( x, x, y ); } \
    /* Swizzler Getter Function(`xxi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, x, 0 )` */ \
    T##vec3 T##vec2::__xxi() { return T##vec3( x, x, 0 ); } \
    /* Swizzler Getter Function(`xyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, y, x )` */ \
    T##vec3 T##vec2::__xyx() { return T##vec3( x, y, x ); } \
    /* Swizzler Getter Function(`xyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, y, y )` */ \
    T##vec3 T##vec2::__xyy() { return T##vec3( x, y, y ); } \
    /* Swizzler Getter Function(`xyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, y, 0 )` */ \
    T##vec3 T##vec2::__xyi() { return T##vec3( x, y, 0 ); } \
    /* Swizzler Getter Function(`xix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, 0, x )` */ \
    T##vec3 T##vec2::__xix() { return T##vec3( x, 0, x ); } \
    /* Swizzler Getter Function(`xiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, 0, y )` */ \
    T##vec3 T##vec2::__xiy() { return T##vec3( x, 0, y ); } \
    /* Swizzler Getter Function(`xii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, 0, 0 )` */ \
    T##vec3 T##vec2::__xii() { return T##vec3( x, 0, 0 ); } \
    /* Swizzler Getter Function(`yxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, x, x )` */ \
    T##vec3 T##vec2::__yxx() { return T##vec3( y, x, x ); } \
    /* Swizzler Getter Function(`yxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, x, y )` */ \
    T##vec3 T##vec2::__yxy() { return T##vec3( y, x, y ); } \
    /* Swizzler Getter Function(`yxi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, x, 0 )` */ \
    T##vec3 T##vec2::__yxi() { return T##vec3( y, x, 0 ); } \
    /* Swizzler Getter Function(`yyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, y, x )` */ \
    T##vec3 T##vec2::__yyx() { return T##vec3( y, y, x ); } \
    /* Swizzler Getter Function(`yyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, y, y )` */ \
    T##vec3 T##vec2::__yyy() { return T##vec3( y, y, y ); } \
    /* Swizzler Getter Function(`yyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, y, 0 )` */ \
    T##vec3 T##vec2::__yyi() { return T##vec3( y, y, 0 ); } \
    /* Swizzler Getter Function(`yix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, 0, x )` */ \
    T##vec3 T##vec2::__yix() { return T##vec3( y, 0, x ); } \
    /* Swizzler Getter Function(`yiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, 0, y )` */ \
    T##vec3 T##vec2::__yiy() { return T##vec3( y, 0, y ); } \
    /* Swizzler Getter Function(`yii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, 0, 0 )` */ \
    T##vec3 T##vec2::__yii() { return T##vec3( y, 0, 0 ); } \
    /* Swizzler Getter Function(`ixx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, x, x )` */ \
    T##vec3 T##vec2::__ixx() { return T##vec3( 0, x, x ); } \
    /* Swizzler Getter Function(`ixy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, x, y )` */ \
    T##vec3 T##vec2::__ixy() { return T##vec3( 0, x, y ); } \
    /* Swizzler Getter Function(`ixi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, x, 0 )` */ \
    T##vec3 T##vec2::__ixi() { return T##vec3( 0, x, 0 ); } \
    /* Swizzler Getter Function(`iyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, y, x )` */ \
    T##vec3 T##vec2::__iyx() { return T##vec3( 0, y, x ); } \
    /* Swizzler Getter Function(`iyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, y, y )` */ \
    T##vec3 T##vec2::__iyy() { return T##vec3( 0, y, y ); } \
    /* Swizzler Getter Function(`iyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, y, 0 )` */ \
    T##vec3 T##vec2::__iyi() { return T##vec3( 0, y, 0 ); } \
    /* Swizzler Getter Function(`iix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, 0, x )` */ \
    T##vec3 T##vec2::__iix() { return T##vec3( 0, 0, x ); } \
    /* Swizzler Getter Function(`iiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, 0, y )` */ \
    T##vec3 T##vec2::__iiy() { return T##vec3( 0, 0, y ); } \
    /* Swizzler Getter Function(`iii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, 0, 0 )` */ \
    T##vec3 T##vec2::__iii() { return T##vec3( 0, 0, 0 ); } \
    /* Swizzler Getter Function(`xxxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, x, x )` */ \
    T##vec4 T##vec2::__xxxx() { return T##vec4( x, x, x, x ); } \
    /* Swizzler Getter Function(`xxxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, x, y )` */ \
    T##vec4 T##vec2::__xxxy() { return T##vec4( x, x, x, y ); } \
    /* Swizzler Getter Function(`xxxi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, x, 0 )` */ \
    T##vec4 T##vec2::__xxxi() { return T##vec4( x, x, x, 0 ); } \
    /* Swizzler Getter Function(`xxyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, y, x )` */ \
    T##vec4 T##vec2::__xxyx() { return T##vec4( x, x, y, x ); } \
    /* Swizzler Getter Function(`xxyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, y, y )` */ \
    T##vec4 T##vec2::__xxyy() { return T##vec4( x, x, y, y ); } \
    /* Swizzler Getter Function(`xxyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, y, 0 )` */ \
    T##vec4 T##vec2::__xxyi() { return T##vec4( x, x, y, 0 ); } \
    /* Swizzler Getter Function(`xxix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, 0, x )` */ \
    T##vec4 T##vec2::__xxix() { return T##vec4( x, x, 0, x ); } \
    /* Swizzler Getter Function(`xxiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, 0, y )` */ \
    T##vec4 T##vec2::__xxiy() { return T##vec4( x, x, 0, y ); } \
    /* Swizzler Getter Function(`xxii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, 0, 0 )` */ \
    T##vec4 T##vec2::__xxii() { return T##vec4( x, x, 0, 0 ); } \
    /* Swizzler Getter Function(`xyxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, x, x )` */ \
    T##vec4 T##vec2::__xyxx() { return T##vec4( x, y, x, x ); } \
    /* Swizzler Getter Function(`xyxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, x, y )` */ \
    T##vec4 T##vec2::__xyxy() { return T##vec4( x, y, x, y ); } \
    /* Swizzler Getter Function(`xyxi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, x, 0 )` */ \
    T##vec4 T##vec2::__xyxi() { return T##vec4( x, y, x, 0 ); } \
    /* Swizzler Getter Function(`xyyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, y, x )` */ \
    T##vec4 T##vec2::__xyyx() { return T##vec4( x, y, y, x ); } \
    /* Swizzler Getter Function(`xyyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, y, y )` */ \
    T##vec4 T##vec2::__xyyy() { return T##vec4( x, y, y, y ); } \
    /* Swizzler Getter Function(`xyyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, y, 0 )` */ \
    T##vec4 T##vec2::__xyyi() { return T##vec4( x, y, y, 0 ); } \
    /* Swizzler Getter Function(`xyix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, 0, x )` */ \
    T##vec4 T##vec2::__xyix() { return T##vec4( x, y, 0, x ); } \
    /* Swizzler Getter Function(`xyiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, 0, y )` */ \
    T##vec4 T##vec2::__xyiy() { return T##vec4( x, y, 0, y ); } \
    /* Swizzler Getter Function(`xyii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, 0, 0 )` */ \
    T##vec4 T##vec2::__xyii() { return T##vec4( x, y, 0, 0 ); } \
    /* Swizzler Getter Function(`xixx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, x, x )` */ \
    T##vec4 T##vec2::__xixx() { return T##vec4( x, 0, x, x ); } \
    /* Swizzler Getter Function(`xixy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, x, y )` */ \
    T##vec4 T##vec2::__xixy() { return T##vec4( x, 0, x, y ); } \
    /* Swizzler Getter Function(`xixi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, x, 0 )` */ \
    T##vec4 T##vec2::__xixi() { return T##vec4( x, 0, x, 0 ); } \
    /* Swizzler Getter Function(`xiyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, y, x )` */ \
    T##vec4 T##vec2::__xiyx() { return T##vec4( x, 0, y, x ); } \
    /* Swizzler Getter Function(`xiyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, y, y )` */ \
    T##vec4 T##vec2::__xiyy() { return T##vec4( x, 0, y, y ); } \
    /* Swizzler Getter Function(`xiyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, y, 0 )` */ \
    T##vec4 T##vec2::__xiyi() { return T##vec4( x, 0, y, 0 ); } \
    /* Swizzler Getter Function(`xiix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, 0, x )` */ \
    T##vec4 T##vec2::__xiix() { return T##vec4( x, 0, 0, x ); } \
    /* Swizzler Getter Function(`xiiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, 0, y )` */ \
    T##vec4 T##vec2::__xiiy() { return T##vec4( x, 0, 0, y ); } \
    /* Swizzler Getter Function(`xiii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, 0, 0 )` */ \
    T##vec4 T##vec2::__xiii() { return T##vec4( x, 0, 0, 0 ); } \
    /* Swizzler Getter Function(`yxxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, x, x )` */ \
    T##vec4 T##vec2::__yxxx() { return T##vec4( y, x, x, x ); } \
    /* Swizzler Getter Function(`yxxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, x, y )` */ \
    T##vec4 T##vec2::__yxxy() { return T##vec4( y, x, x, y ); } \
    /* Swizzler Getter Function(`yxxi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, x, 0 )` */ \
    T##vec4 T##vec2::__yxxi() { return T##vec4( y, x, x, 0 ); } \
    /* Swizzler Getter Function(`yxyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, y, x )` */ \
    T##vec4 T##vec2::__yxyx() { return T##vec4( y, x, y, x ); } \
    /* Swizzler Getter Function(`yxyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, y, y )` */ \
    T##vec4 T##vec2::__yxyy() { return T##vec4( y, x, y, y ); } \
    /* Swizzler Getter Function(`yxyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, y, 0 )` */ \
    T##vec4 T##vec2::__yxyi() { return T##vec4( y, x, y, 0 ); } \
    /* Swizzler Getter Function(`yxix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, 0, x )` */ \
    T##vec4 T##vec2::__yxix() { return T##vec4( y, x, 0, x ); } \
    /* Swizzler Getter Function(`yxiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, 0, y )` */ \
    T##vec4 T##vec2::__yxiy() { return T##vec4( y, x, 0, y ); } \
    /* Swizzler Getter Function(`yxii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, 0, 0 )` */ \
    T##vec4 T##vec2::__yxii() { return T##vec4( y, x, 0, 0 ); } \
    /* Swizzler Getter Function(`yyxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, x, x )` */ \
    T##vec4 T##vec2::__yyxx() { return T##vec4( y, y, x, x ); } \
    /* Swizzler Getter Function(`yyxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, x, y )` */ \
    T##vec4 T##vec2::__yyxy() { return T##vec4( y, y, x, y ); } \
    /* Swizzler Getter Function(`yyxi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, x, 0 )` */ \
    T##vec4 T##vec2::__yyxi() { return T##vec4( y, y, x, 0 ); } \
    /* Swizzler Getter Function(`yyyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, y, x )` */ \
    T##vec4 T##vec2::__yyyx() { return T##vec4( y, y, y, x ); } \
    /* Swizzler Getter Function(`yyyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, y, y )` */ \
    T##vec4 T##vec2::__yyyy() { return T##vec4( y, y, y, y ); } \
    /* Swizzler Getter Function(`yyyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, y, 0 )` */ \
    T##vec4 T##vec2::__yyyi() { return T##vec4( y, y, y, 0 ); } \
    /* Swizzler Getter Function(`yyix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, 0, x )` */ \
    T##vec4 T##vec2::__yyix() { return T##vec4( y, y, 0, x ); } \
    /* Swizzler Getter Function(`yyiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, 0, y )` */ \
    T##vec4 T##vec2::__yyiy() { return T##vec4( y, y, 0, y ); } \
    /* Swizzler Getter Function(`yyii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, 0, 0 )` */ \
    T##vec4 T##vec2::__yyii() { return T##vec4( y, y, 0, 0 ); } \
    /* Swizzler Getter Function(`yixx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, x, x )` */ \
    T##vec4 T##vec2::__yixx() { return T##vec4( y, 0, x, x ); } \
    /* Swizzler Getter Function(`yixy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, x, y )` */ \
    T##vec4 T##vec2::__yixy() { return T##vec4( y, 0, x, y ); } \
    /* Swizzler Getter Function(`yixi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, x, 0 )` */ \
    T##vec4 T##vec2::__yixi() { return T##vec4( y, 0, x, 0 ); } \
    /* Swizzler Getter Function(`yiyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, y, x )` */ \
    T##vec4 T##vec2::__yiyx() { return T##vec4( y, 0, y, x ); } \
    /* Swizzler Getter Function(`yiyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, y, y )` */ \
    T##vec4 T##vec2::__yiyy() { return T##vec4( y, 0, y, y ); } \
    /* Swizzler Getter Function(`yiyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, y, 0 )` */ \
    T##vec4 T##vec2::__yiyi() { return T##vec4( y, 0, y, 0 ); } \
    /* Swizzler Getter Function(`yiix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, 0, x )` */ \
    T##vec4 T##vec2::__yiix() { return T##vec4( y, 0, 0, x ); } \
    /* Swizzler Getter Function(`yiiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, 0, y )` */ \
    T##vec4 T##vec2::__yiiy() { return T##vec4( y, 0, 0, y ); } \
    /* Swizzler Getter Function(`yiii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, 0, 0 )` */ \
    T##vec4 T##vec2::__yiii() { return T##vec4( y, 0, 0, 0 ); } \
    /* Swizzler Getter Function(`ixxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, x, x )` */ \
    T##vec4 T##vec2::__ixxx() { return T##vec4( 0, x, x, x ); } \
    /* Swizzler Getter Function(`ixxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, x, y )` */ \
    T##vec4 T##vec2::__ixxy() { return T##vec4( 0, x, x, y ); } \
    /* Swizzler Getter Function(`ixxi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, x, 0 )` */ \
    T##vec4 T##vec2::__ixxi() { return T##vec4( 0, x, x, 0 ); } \
    /* Swizzler Getter Function(`ixyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, y, x )` */ \
    T##vec4 T##vec2::__ixyx() { return T##vec4( 0, x, y, x ); } \
    /* Swizzler Getter Function(`ixyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, y, y )` */ \
    T##vec4 T##vec2::__ixyy() { return T##vec4( 0, x, y, y ); } \
    /* Swizzler Getter Function(`ixyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, y, 0 )` */ \
    T##vec4 T##vec2::__ixyi() { return T##vec4( 0, x, y, 0 ); } \
    /* Swizzler Getter Function(`ixix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, 0, x )` */ \
    T##vec4 T##vec2::__ixix() { return T##vec4( 0, x, 0, x ); } \
    /* Swizzler Getter Function(`ixiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, 0, y )` */ \
    T##vec4 T##vec2::__ixiy() { return T##vec4( 0, x, 0, y ); } \
    /* Swizzler Getter Function(`ixii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, 0, 0 )` */ \
    T##vec4 T##vec2::__ixii() { return T##vec4( 0, x, 0, 0 ); } \
    /* Swizzler Getter Function(`iyxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, x, x )` */ \
    T##vec4 T##vec2::__iyxx() { return T##vec4( 0, y, x, x ); } \
    /* Swizzler Getter Function(`iyxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, x, y )` */ \
    T##vec4 T##vec2::__iyxy() { return T##vec4( 0, y, x, y ); } \
    /* Swizzler Getter Function(`iyxi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, x, 0 )` */ \
    T##vec4 T##vec2::__iyxi() { return T##vec4( 0, y, x, 0 ); } \
    /* Swizzler Getter Function(`iyyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, y, x )` */ \
    T##vec4 T##vec2::__iyyx() { return T##vec4( 0, y, y, x ); } \
    /* Swizzler Getter Function(`iyyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, y, y )` */ \
    T##vec4 T##vec2::__iyyy() { return T##vec4( 0, y, y, y ); } \
    /* Swizzler Getter Function(`iyyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, y, 0 )` */ \
    T##vec4 T##vec2::__iyyi() { return T##vec4( 0, y, y, 0 ); } \
    /* Swizzler Getter Function(`iyix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, 0, x )` */ \
    T##vec4 T##vec2::__iyix() { return T##vec4( 0, y, 0, x ); } \
    /* Swizzler Getter Function(`iyiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, 0, y )` */ \
    T##vec4 T##vec2::__iyiy() { return T##vec4( 0, y, 0, y ); } \
    /* Swizzler Getter Function(`iyii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, 0, 0 )` */ \
    T##vec4 T##vec2::__iyii() { return T##vec4( 0, y, 0, 0 ); } \
    /* Swizzler Getter Function(`iixx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, x, x )` */ \
    T##vec4 T##vec2::__iixx() { return T##vec4( 0, 0, x, x ); } \
    /* Swizzler Getter Function(`iixy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, x, y )` */ \
    T##vec4 T##vec2::__iixy() { return T##vec4( 0, 0, x, y ); } \
    /* Swizzler Getter Function(`iixi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, x, 0 )` */ \
    T##vec4 T##vec2::__iixi() { return T##vec4( 0, 0, x, 0 ); } \
    /* Swizzler Getter Function(`iiyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, y, x )` */ \
    T##vec4 T##vec2::__iiyx() { return T##vec4( 0, 0, y, x ); } \
    /* Swizzler Getter Function(`iiyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, y, y )` */ \
    T##vec4 T##vec2::__iiyy() { return T##vec4( 0, 0, y, y ); } \
    /* Swizzler Getter Function(`iiyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, y, 0 )` */ \
    T##vec4 T##vec2::__iiyi() { return T##vec4( 0, 0, y, 0 ); } \
    /* Swizzler Getter Function(`iiix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, 0, x )` */ \
    T##vec4 T##vec2::__iiix() { return T##vec4( 0, 0, 0, x ); } \
    /* Swizzler Getter Function(`iiiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, 0, y )` */ \
    T##vec4 T##vec2::__iiiy() { return T##vec4( 0, 0, 0, y ); } \
    /* Swizzler Getter Function(`iiii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, 0, 0 )` */ \
    T##vec4 T##vec2::__iiii() { return T##vec4( 0, 0, 0, 0 ); } \



#define __VEC3_SWIZZLE( T ) \
    /* Swizzler Getter Function(`xx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( x, x )` */ \
    T##vec2 T##vec3::__xx() { return T##vec2( x, x ); } \
    /* Swizzler Getter Function(`xy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( x, y )` */ \
    T##vec2 T##vec3::__xy() { return T##vec2( x, y ); } \
    /* Swizzler Getter Function(`xz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( x, z )` */ \
    T##vec2 T##vec3::__xz() { return T##vec2( x, z ); } \
    /* Swizzler Getter Function(`xi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( x, 0 )` */ \
    T##vec2 T##vec3::__xi() { return T##vec2( x, 0 ); } \
    /* Swizzler Getter Function(`yx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( y, x )` */ \
    T##vec2 T##vec3::__yx() { return T##vec2( y, x ); } \
    /* Swizzler Getter Function(`yy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( y, y )` */ \
    T##vec2 T##vec3::__yy() { return T##vec2( y, y ); } \
    /* Swizzler Getter Function(`yz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( y, z )` */ \
    T##vec2 T##vec3::__yz() { return T##vec2( y, z ); } \
    /* Swizzler Getter Function(`yi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( y, 0 )` */ \
    T##vec2 T##vec3::__yi() { return T##vec2( y, 0 ); } \
    /* Swizzler Getter Function(`zx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( z, x )` */ \
    T##vec2 T##vec3::__zx() { return T##vec2( z, x ); } \
    /* Swizzler Getter Function(`zy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( z, y )` */ \
    T##vec2 T##vec3::__zy() { return T##vec2( z, y ); } \
    /* Swizzler Getter Function(`zz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( z, z )` */ \
    T##vec2 T##vec3::__zz() { return T##vec2( z, z ); } \
    /* Swizzler Getter Function(`zi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( z, 0 )` */ \
    T##vec2 T##vec3::__zi() { return T##vec2( z, 0 ); } \
    /* Swizzler Getter Function(`ix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( 0, x )` */ \
    T##vec2 T##vec3::__ix() { return T##vec2( 0, x ); } \
    /* Swizzler Getter Function(`iy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( 0, y )` */ \
    T##vec2 T##vec3::__iy() { return T##vec2( 0, y ); } \
    /* Swizzler Getter Function(`iz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( 0, z )` */ \
    T##vec2 T##vec3::__iz() { return T##vec2( 0, z ); } \
    /* Swizzler Getter Function(`ii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( 0, 0 )` */ \
    T##vec2 T##vec3::__ii() { return T##vec2( 0, 0 ); } \
    /* Swizzler Getter Function(`xxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, x, x )` */ \
    T##vec3 T##vec3::__xxx() { return T##vec3( x, x, x ); } \
    /* Swizzler Getter Function(`xxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, x, y )` */ \
    T##vec3 T##vec3::__xxy() { return T##vec3( x, x, y ); } \
    /* Swizzler Getter Function(`xxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, x, z )` */ \
    T##vec3 T##vec3::__xxz() { return T##vec3( x, x, z ); } \
    /* Swizzler Getter Function(`xxi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, x, 0 )` */ \
    T##vec3 T##vec3::__xxi() { return T##vec3( x, x, 0 ); } \
    /* Swizzler Getter Function(`xyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, y, x )` */ \
    T##vec3 T##vec3::__xyx() { return T##vec3( x, y, x ); } \
    /* Swizzler Getter Function(`xyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, y, y )` */ \
    T##vec3 T##vec3::__xyy() { return T##vec3( x, y, y ); } \
    /* Swizzler Getter Function(`xyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, y, z )` */ \
    T##vec3 T##vec3::__xyz() { return T##vec3( x, y, z ); } \
    /* Swizzler Getter Function(`xyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, y, 0 )` */ \
    T##vec3 T##vec3::__xyi() { return T##vec3( x, y, 0 ); } \
    /* Swizzler Getter Function(`xzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, z, x )` */ \
    T##vec3 T##vec3::__xzx() { return T##vec3( x, z, x ); } \
    /* Swizzler Getter Function(`xzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, z, y )` */ \
    T##vec3 T##vec3::__xzy() { return T##vec3( x, z, y ); } \
    /* Swizzler Getter Function(`xzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, z, z )` */ \
    T##vec3 T##vec3::__xzz() { return T##vec3( x, z, z ); } \
    /* Swizzler Getter Function(`xzi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, z, 0 )` */ \
    T##vec3 T##vec3::__xzi() { return T##vec3( x, z, 0 ); } \
    /* Swizzler Getter Function(`xix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, 0, x )` */ \
    T##vec3 T##vec3::__xix() { return T##vec3( x, 0, x ); } \
    /* Swizzler Getter Function(`xiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, 0, y )` */ \
    T##vec3 T##vec3::__xiy() { return T##vec3( x, 0, y ); } \
    /* Swizzler Getter Function(`xiz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, 0, z )` */ \
    T##vec3 T##vec3::__xiz() { return T##vec3( x, 0, z ); } \
    /* Swizzler Getter Function(`xii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, 0, 0 )` */ \
    T##vec3 T##vec3::__xii() { return T##vec3( x, 0, 0 ); } \
    /* Swizzler Getter Function(`yxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, x, x )` */ \
    T##vec3 T##vec3::__yxx() { return T##vec3( y, x, x ); } \
    /* Swizzler Getter Function(`yxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, x, y )` */ \
    T##vec3 T##vec3::__yxy() { return T##vec3( y, x, y ); } \
    /* Swizzler Getter Function(`yxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, x, z )` */ \
    T##vec3 T##vec3::__yxz() { return T##vec3( y, x, z ); } \
    /* Swizzler Getter Function(`yxi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, x, 0 )` */ \
    T##vec3 T##vec3::__yxi() { return T##vec3( y, x, 0 ); } \
    /* Swizzler Getter Function(`yyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, y, x )` */ \
    T##vec3 T##vec3::__yyx() { return T##vec3( y, y, x ); } \
    /* Swizzler Getter Function(`yyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, y, y )` */ \
    T##vec3 T##vec3::__yyy() { return T##vec3( y, y, y ); } \
    /* Swizzler Getter Function(`yyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, y, z )` */ \
    T##vec3 T##vec3::__yyz() { return T##vec3( y, y, z ); } \
    /* Swizzler Getter Function(`yyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, y, 0 )` */ \
    T##vec3 T##vec3::__yyi() { return T##vec3( y, y, 0 ); } \
    /* Swizzler Getter Function(`yzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, z, x )` */ \
    T##vec3 T##vec3::__yzx() { return T##vec3( y, z, x ); } \
    /* Swizzler Getter Function(`yzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, z, y )` */ \
    T##vec3 T##vec3::__yzy() { return T##vec3( y, z, y ); } \
    /* Swizzler Getter Function(`yzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, z, z )` */ \
    T##vec3 T##vec3::__yzz() { return T##vec3( y, z, z ); } \
    /* Swizzler Getter Function(`yzi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, z, 0 )` */ \
    T##vec3 T##vec3::__yzi() { return T##vec3( y, z, 0 ); } \
    /* Swizzler Getter Function(`yix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, 0, x )` */ \
    T##vec3 T##vec3::__yix() { return T##vec3( y, 0, x ); } \
    /* Swizzler Getter Function(`yiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, 0, y )` */ \
    T##vec3 T##vec3::__yiy() { return T##vec3( y, 0, y ); } \
    /* Swizzler Getter Function(`yiz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, 0, z )` */ \
    T##vec3 T##vec3::__yiz() { return T##vec3( y, 0, z ); } \
    /* Swizzler Getter Function(`yii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, 0, 0 )` */ \
    T##vec3 T##vec3::__yii() { return T##vec3( y, 0, 0 ); } \
    /* Swizzler Getter Function(`zxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( z, x, x )` */ \
    T##vec3 T##vec3::__zxx() { return T##vec3( z, x, x ); } \
    /* Swizzler Getter Function(`zxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( z, x, y )` */ \
    T##vec3 T##vec3::__zxy() { return T##vec3( z, x, y ); } \
    /* Swizzler Getter Function(`zxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( z, x, z )` */ \
    T##vec3 T##vec3::__zxz() { return T##vec3( z, x, z ); } \
    /* Swizzler Getter Function(`zxi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( z, x, 0 )` */ \
    T##vec3 T##vec3::__zxi() { return T##vec3( z, x, 0 ); } \
    /* Swizzler Getter Function(`zyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( z, y, x )` */ \
    T##vec3 T##vec3::__zyx() { return T##vec3( z, y, x ); } \
    /* Swizzler Getter Function(`zyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( z, y, y )` */ \
    T##vec3 T##vec3::__zyy() { return T##vec3( z, y, y ); } \
    /* Swizzler Getter Function(`zyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( z, y, z )` */ \
    T##vec3 T##vec3::__zyz() { return T##vec3( z, y, z ); } \
    /* Swizzler Getter Function(`zyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( z, y, 0 )` */ \
    T##vec3 T##vec3::__zyi() { return T##vec3( z, y, 0 ); } \
    /* Swizzler Getter Function(`zzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( z, z, x )` */ \
    T##vec3 T##vec3::__zzx() { return T##vec3( z, z, x ); } \
    /* Swizzler Getter Function(`zzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( z, z, y )` */ \
    T##vec3 T##vec3::__zzy() { return T##vec3( z, z, y ); } \
    /* Swizzler Getter Function(`zzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( z, z, z )` */ \
    T##vec3 T##vec3::__zzz() { return T##vec3( z, z, z ); } \
    /* Swizzler Getter Function(`zzi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( z, z, 0 )` */ \
    T##vec3 T##vec3::__zzi() { return T##vec3( z, z, 0 ); } \
    /* Swizzler Getter Function(`zix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( z, 0, x )` */ \
    T##vec3 T##vec3::__zix() { return T##vec3( z, 0, x ); } \
    /* Swizzler Getter Function(`ziy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( z, 0, y )` */ \
    T##vec3 T##vec3::__ziy() { return T##vec3( z, 0, y ); } \
    /* Swizzler Getter Function(`ziz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( z, 0, z )` */ \
    T##vec3 T##vec3::__ziz() { return T##vec3( z, 0, z ); } \
    /* Swizzler Getter Function(`zii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( z, 0, 0 )` */ \
    T##vec3 T##vec3::__zii() { return T##vec3( z, 0, 0 ); } \
    /* Swizzler Getter Function(`ixx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, x, x )` */ \
    T##vec3 T##vec3::__ixx() { return T##vec3( 0, x, x ); } \
    /* Swizzler Getter Function(`ixy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, x, y )` */ \
    T##vec3 T##vec3::__ixy() { return T##vec3( 0, x, y ); } \
    /* Swizzler Getter Function(`ixz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, x, z )` */ \
    T##vec3 T##vec3::__ixz() { return T##vec3( 0, x, z ); } \
    /* Swizzler Getter Function(`ixi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, x, 0 )` */ \
    T##vec3 T##vec3::__ixi() { return T##vec3( 0, x, 0 ); } \
    /* Swizzler Getter Function(`iyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, y, x )` */ \
    T##vec3 T##vec3::__iyx() { return T##vec3( 0, y, x ); } \
    /* Swizzler Getter Function(`iyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, y, y )` */ \
    T##vec3 T##vec3::__iyy() { return T##vec3( 0, y, y ); } \
    /* Swizzler Getter Function(`iyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, y, z )` */ \
    T##vec3 T##vec3::__iyz() { return T##vec3( 0, y, z ); } \
    /* Swizzler Getter Function(`iyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, y, 0 )` */ \
    T##vec3 T##vec3::__iyi() { return T##vec3( 0, y, 0 ); } \
    /* Swizzler Getter Function(`izx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, z, x )` */ \
    T##vec3 T##vec3::__izx() { return T##vec3( 0, z, x ); } \
    /* Swizzler Getter Function(`izy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, z, y )` */ \
    T##vec3 T##vec3::__izy() { return T##vec3( 0, z, y ); } \
    /* Swizzler Getter Function(`izz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, z, z )` */ \
    T##vec3 T##vec3::__izz() { return T##vec3( 0, z, z ); } \
    /* Swizzler Getter Function(`izi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, z, 0 )` */ \
    T##vec3 T##vec3::__izi() { return T##vec3( 0, z, 0 ); } \
    /* Swizzler Getter Function(`iix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, 0, x )` */ \
    T##vec3 T##vec3::__iix() { return T##vec3( 0, 0, x ); } \
    /* Swizzler Getter Function(`iiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, 0, y )` */ \
    T##vec3 T##vec3::__iiy() { return T##vec3( 0, 0, y ); } \
    /* Swizzler Getter Function(`iiz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, 0, z )` */ \
    T##vec3 T##vec3::__iiz() { return T##vec3( 0, 0, z ); } \
    /* Swizzler Getter Function(`iii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, 0, 0 )` */ \
    T##vec3 T##vec3::__iii() { return T##vec3( 0, 0, 0 ); } \
    /* Swizzler Getter Function(`xxxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, x, x )` */ \
    T##vec4 T##vec3::__xxxx() { return T##vec4( x, x, x, x ); } \
    /* Swizzler Getter Function(`xxxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, x, y )` */ \
    T##vec4 T##vec3::__xxxy() { return T##vec4( x, x, x, y ); } \
    /* Swizzler Getter Function(`xxxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, x, z )` */ \
    T##vec4 T##vec3::__xxxz() { return T##vec4( x, x, x, z ); } \
    /* Swizzler Getter Function(`xxxi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, x, 0 )` */ \
    T##vec4 T##vec3::__xxxi() { return T##vec4( x, x, x, 0 ); } \
    /* Swizzler Getter Function(`xxyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, y, x )` */ \
    T##vec4 T##vec3::__xxyx() { return T##vec4( x, x, y, x ); } \
    /* Swizzler Getter Function(`xxyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, y, y )` */ \
    T##vec4 T##vec3::__xxyy() { return T##vec4( x, x, y, y ); } \
    /* Swizzler Getter Function(`xxyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, y, z )` */ \
    T##vec4 T##vec3::__xxyz() { return T##vec4( x, x, y, z ); } \
    /* Swizzler Getter Function(`xxyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, y, 0 )` */ \
    T##vec4 T##vec3::__xxyi() { return T##vec4( x, x, y, 0 ); } \
    /* Swizzler Getter Function(`xxzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, z, x )` */ \
    T##vec4 T##vec3::__xxzx() { return T##vec4( x, x, z, x ); } \
    /* Swizzler Getter Function(`xxzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, z, y )` */ \
    T##vec4 T##vec3::__xxzy() { return T##vec4( x, x, z, y ); } \
    /* Swizzler Getter Function(`xxzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, z, z )` */ \
    T##vec4 T##vec3::__xxzz() { return T##vec4( x, x, z, z ); } \
    /* Swizzler Getter Function(`xxzi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, z, 0 )` */ \
    T##vec4 T##vec3::__xxzi() { return T##vec4( x, x, z, 0 ); } \
    /* Swizzler Getter Function(`xxix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, 0, x )` */ \
    T##vec4 T##vec3::__xxix() { return T##vec4( x, x, 0, x ); } \
    /* Swizzler Getter Function(`xxiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, 0, y )` */ \
    T##vec4 T##vec3::__xxiy() { return T##vec4( x, x, 0, y ); } \
    /* Swizzler Getter Function(`xxiz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, 0, z )` */ \
    T##vec4 T##vec3::__xxiz() { return T##vec4( x, x, 0, z ); } \
    /* Swizzler Getter Function(`xxii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, 0, 0 )` */ \
    T##vec4 T##vec3::__xxii() { return T##vec4( x, x, 0, 0 ); } \
    /* Swizzler Getter Function(`xyxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, x, x )` */ \
    T##vec4 T##vec3::__xyxx() { return T##vec4( x, y, x, x ); } \
    /* Swizzler Getter Function(`xyxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, x, y )` */ \
    T##vec4 T##vec3::__xyxy() { return T##vec4( x, y, x, y ); } \
    /* Swizzler Getter Function(`xyxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, x, z )` */ \
    T##vec4 T##vec3::__xyxz() { return T##vec4( x, y, x, z ); } \
    /* Swizzler Getter Function(`xyxi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, x, 0 )` */ \
    T##vec4 T##vec3::__xyxi() { return T##vec4( x, y, x, 0 ); } \
    /* Swizzler Getter Function(`xyyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, y, x )` */ \
    T##vec4 T##vec3::__xyyx() { return T##vec4( x, y, y, x ); } \
    /* Swizzler Getter Function(`xyyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, y, y )` */ \
    T##vec4 T##vec3::__xyyy() { return T##vec4( x, y, y, y ); } \
    /* Swizzler Getter Function(`xyyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, y, z )` */ \
    T##vec4 T##vec3::__xyyz() { return T##vec4( x, y, y, z ); } \
    /* Swizzler Getter Function(`xyyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, y, 0 )` */ \
    T##vec4 T##vec3::__xyyi() { return T##vec4( x, y, y, 0 ); } \
    /* Swizzler Getter Function(`xyzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, z, x )` */ \
    T##vec4 T##vec3::__xyzx() { return T##vec4( x, y, z, x ); } \
    /* Swizzler Getter Function(`xyzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, z, y )` */ \
    T##vec4 T##vec3::__xyzy() { return T##vec4( x, y, z, y ); } \
    /* Swizzler Getter Function(`xyzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, z, z )` */ \
    T##vec4 T##vec3::__xyzz() { return T##vec4( x, y, z, z ); } \
    /* Swizzler Getter Function(`xyzi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, z, 0 )` */ \
    T##vec4 T##vec3::__xyzi() { return T##vec4( x, y, z, 0 ); } \
    /* Swizzler Getter Function(`xyix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, 0, x )` */ \
    T##vec4 T##vec3::__xyix() { return T##vec4( x, y, 0, x ); } \
    /* Swizzler Getter Function(`xyiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, 0, y )` */ \
    T##vec4 T##vec3::__xyiy() { return T##vec4( x, y, 0, y ); } \
    /* Swizzler Getter Function(`xyiz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, 0, z )` */ \
    T##vec4 T##vec3::__xyiz() { return T##vec4( x, y, 0, z ); } \
    /* Swizzler Getter Function(`xyii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, 0, 0 )` */ \
    T##vec4 T##vec3::__xyii() { return T##vec4( x, y, 0, 0 ); } \
    /* Swizzler Getter Function(`xzxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, z, x, x )` */ \
    T##vec4 T##vec3::__xzxx() { return T##vec4( x, z, x, x ); } \
    /* Swizzler Getter Function(`xzxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, z, x, y )` */ \
    T##vec4 T##vec3::__xzxy() { return T##vec4( x, z, x, y ); } \
    /* Swizzler Getter Function(`xzxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, z, x, z )` */ \
    T##vec4 T##vec3::__xzxz() { return T##vec4( x, z, x, z ); } \
    /* Swizzler Getter Function(`xzxi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, z, x, 0 )` */ \
    T##vec4 T##vec3::__xzxi() { return T##vec4( x, z, x, 0 ); } \
    /* Swizzler Getter Function(`xzyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, z, y, x )` */ \
    T##vec4 T##vec3::__xzyx() { return T##vec4( x, z, y, x ); } \
    /* Swizzler Getter Function(`xzyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, z, y, y )` */ \
    T##vec4 T##vec3::__xzyy() { return T##vec4( x, z, y, y ); } \
    /* Swizzler Getter Function(`xzyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, z, y, z )` */ \
    T##vec4 T##vec3::__xzyz() { return T##vec4( x, z, y, z ); } \
    /* Swizzler Getter Function(`xzyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, z, y, 0 )` */ \
    T##vec4 T##vec3::__xzyi() { return T##vec4( x, z, y, 0 ); } \
    /* Swizzler Getter Function(`xzzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, z, z, x )` */ \
    T##vec4 T##vec3::__xzzx() { return T##vec4( x, z, z, x ); } \
    /* Swizzler Getter Function(`xzzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, z, z, y )` */ \
    T##vec4 T##vec3::__xzzy() { return T##vec4( x, z, z, y ); } \
    /* Swizzler Getter Function(`xzzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, z, z, z )` */ \
    T##vec4 T##vec3::__xzzz() { return T##vec4( x, z, z, z ); } \
    /* Swizzler Getter Function(`xzzi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, z, z, 0 )` */ \
    T##vec4 T##vec3::__xzzi() { return T##vec4( x, z, z, 0 ); } \
    /* Swizzler Getter Function(`xzix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, z, 0, x )` */ \
    T##vec4 T##vec3::__xzix() { return T##vec4( x, z, 0, x ); } \
    /* Swizzler Getter Function(`xziy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, z, 0, y )` */ \
    T##vec4 T##vec3::__xziy() { return T##vec4( x, z, 0, y ); } \
    /* Swizzler Getter Function(`xziz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, z, 0, z )` */ \
    T##vec4 T##vec3::__xziz() { return T##vec4( x, z, 0, z ); } \
    /* Swizzler Getter Function(`xzii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, z, 0, 0 )` */ \
    T##vec4 T##vec3::__xzii() { return T##vec4( x, z, 0, 0 ); } \
    /* Swizzler Getter Function(`xixx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, x, x )` */ \
    T##vec4 T##vec3::__xixx() { return T##vec4( x, 0, x, x ); } \
    /* Swizzler Getter Function(`xixy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, x, y )` */ \
    T##vec4 T##vec3::__xixy() { return T##vec4( x, 0, x, y ); } \
    /* Swizzler Getter Function(`xixz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, x, z )` */ \
    T##vec4 T##vec3::__xixz() { return T##vec4( x, 0, x, z ); } \
    /* Swizzler Getter Function(`xixi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, x, 0 )` */ \
    T##vec4 T##vec3::__xixi() { return T##vec4( x, 0, x, 0 ); } \
    /* Swizzler Getter Function(`xiyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, y, x )` */ \
    T##vec4 T##vec3::__xiyx() { return T##vec4( x, 0, y, x ); } \
    /* Swizzler Getter Function(`xiyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, y, y )` */ \
    T##vec4 T##vec3::__xiyy() { return T##vec4( x, 0, y, y ); } \
    /* Swizzler Getter Function(`xiyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, y, z )` */ \
    T##vec4 T##vec3::__xiyz() { return T##vec4( x, 0, y, z ); } \
    /* Swizzler Getter Function(`xiyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, y, 0 )` */ \
    T##vec4 T##vec3::__xiyi() { return T##vec4( x, 0, y, 0 ); } \
    /* Swizzler Getter Function(`xizx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, z, x )` */ \
    T##vec4 T##vec3::__xizx() { return T##vec4( x, 0, z, x ); } \
    /* Swizzler Getter Function(`xizy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, z, y )` */ \
    T##vec4 T##vec3::__xizy() { return T##vec4( x, 0, z, y ); } \
    /* Swizzler Getter Function(`xizz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, z, z )` */ \
    T##vec4 T##vec3::__xizz() { return T##vec4( x, 0, z, z ); } \
    /* Swizzler Getter Function(`xizi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, z, 0 )` */ \
    T##vec4 T##vec3::__xizi() { return T##vec4( x, 0, z, 0 ); } \
    /* Swizzler Getter Function(`xiix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, 0, x )` */ \
    T##vec4 T##vec3::__xiix() { return T##vec4( x, 0, 0, x ); } \
    /* Swizzler Getter Function(`xiiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, 0, y )` */ \
    T##vec4 T##vec3::__xiiy() { return T##vec4( x, 0, 0, y ); } \
    /* Swizzler Getter Function(`xiiz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, 0, z )` */ \
    T##vec4 T##vec3::__xiiz() { return T##vec4( x, 0, 0, z ); } \
    /* Swizzler Getter Function(`xiii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, 0, 0 )` */ \
    T##vec4 T##vec3::__xiii() { return T##vec4( x, 0, 0, 0 ); } \
    /* Swizzler Getter Function(`yxxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, x, x )` */ \
    T##vec4 T##vec3::__yxxx() { return T##vec4( y, x, x, x ); } \
    /* Swizzler Getter Function(`yxxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, x, y )` */ \
    T##vec4 T##vec3::__yxxy() { return T##vec4( y, x, x, y ); } \
    /* Swizzler Getter Function(`yxxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, x, z )` */ \
    T##vec4 T##vec3::__yxxz() { return T##vec4( y, x, x, z ); } \
    /* Swizzler Getter Function(`yxxi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, x, 0 )` */ \
    T##vec4 T##vec3::__yxxi() { return T##vec4( y, x, x, 0 ); } \
    /* Swizzler Getter Function(`yxyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, y, x )` */ \
    T##vec4 T##vec3::__yxyx() { return T##vec4( y, x, y, x ); } \
    /* Swizzler Getter Function(`yxyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, y, y )` */ \
    T##vec4 T##vec3::__yxyy() { return T##vec4( y, x, y, y ); } \
    /* Swizzler Getter Function(`yxyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, y, z )` */ \
    T##vec4 T##vec3::__yxyz() { return T##vec4( y, x, y, z ); } \
    /* Swizzler Getter Function(`yxyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, y, 0 )` */ \
    T##vec4 T##vec3::__yxyi() { return T##vec4( y, x, y, 0 ); } \
    /* Swizzler Getter Function(`yxzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, z, x )` */ \
    T##vec4 T##vec3::__yxzx() { return T##vec4( y, x, z, x ); } \
    /* Swizzler Getter Function(`yxzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, z, y )` */ \
    T##vec4 T##vec3::__yxzy() { return T##vec4( y, x, z, y ); } \
    /* Swizzler Getter Function(`yxzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, z, z )` */ \
    T##vec4 T##vec3::__yxzz() { return T##vec4( y, x, z, z ); } \
    /* Swizzler Getter Function(`yxzi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, z, 0 )` */ \
    T##vec4 T##vec3::__yxzi() { return T##vec4( y, x, z, 0 ); } \
    /* Swizzler Getter Function(`yxix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, 0, x )` */ \
    T##vec4 T##vec3::__yxix() { return T##vec4( y, x, 0, x ); } \
    /* Swizzler Getter Function(`yxiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, 0, y )` */ \
    T##vec4 T##vec3::__yxiy() { return T##vec4( y, x, 0, y ); } \
    /* Swizzler Getter Function(`yxiz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, 0, z )` */ \
    T##vec4 T##vec3::__yxiz() { return T##vec4( y, x, 0, z ); } \
    /* Swizzler Getter Function(`yxii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, 0, 0 )` */ \
    T##vec4 T##vec3::__yxii() { return T##vec4( y, x, 0, 0 ); } \
    /* Swizzler Getter Function(`yyxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, x, x )` */ \
    T##vec4 T##vec3::__yyxx() { return T##vec4( y, y, x, x ); } \
    /* Swizzler Getter Function(`yyxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, x, y )` */ \
    T##vec4 T##vec3::__yyxy() { return T##vec4( y, y, x, y ); } \
    /* Swizzler Getter Function(`yyxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, x, z )` */ \
    T##vec4 T##vec3::__yyxz() { return T##vec4( y, y, x, z ); } \
    /* Swizzler Getter Function(`yyxi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, x, 0 )` */ \
    T##vec4 T##vec3::__yyxi() { return T##vec4( y, y, x, 0 ); } \
    /* Swizzler Getter Function(`yyyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, y, x )` */ \
    T##vec4 T##vec3::__yyyx() { return T##vec4( y, y, y, x ); } \
    /* Swizzler Getter Function(`yyyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, y, y )` */ \
    T##vec4 T##vec3::__yyyy() { return T##vec4( y, y, y, y ); } \
    /* Swizzler Getter Function(`yyyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, y, z )` */ \
    T##vec4 T##vec3::__yyyz() { return T##vec4( y, y, y, z ); } \
    /* Swizzler Getter Function(`yyyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, y, 0 )` */ \
    T##vec4 T##vec3::__yyyi() { return T##vec4( y, y, y, 0 ); } \
    /* Swizzler Getter Function(`yyzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, z, x )` */ \
    T##vec4 T##vec3::__yyzx() { return T##vec4( y, y, z, x ); } \
    /* Swizzler Getter Function(`yyzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, z, y )` */ \
    T##vec4 T##vec3::__yyzy() { return T##vec4( y, y, z, y ); } \
    /* Swizzler Getter Function(`yyzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, z, z )` */ \
    T##vec4 T##vec3::__yyzz() { return T##vec4( y, y, z, z ); } \
    /* Swizzler Getter Function(`yyzi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, z, 0 )` */ \
    T##vec4 T##vec3::__yyzi() { return T##vec4( y, y, z, 0 ); } \
    /* Swizzler Getter Function(`yyix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, 0, x )` */ \
    T##vec4 T##vec3::__yyix() { return T##vec4( y, y, 0, x ); } \
    /* Swizzler Getter Function(`yyiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, 0, y )` */ \
    T##vec4 T##vec3::__yyiy() { return T##vec4( y, y, 0, y ); } \
    /* Swizzler Getter Function(`yyiz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, 0, z )` */ \
    T##vec4 T##vec3::__yyiz() { return T##vec4( y, y, 0, z ); } \
    /* Swizzler Getter Function(`yyii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, 0, 0 )` */ \
    T##vec4 T##vec3::__yyii() { return T##vec4( y, y, 0, 0 ); } \
    /* Swizzler Getter Function(`yzxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, z, x, x )` */ \
    T##vec4 T##vec3::__yzxx() { return T##vec4( y, z, x, x ); } \
    /* Swizzler Getter Function(`yzxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, z, x, y )` */ \
    T##vec4 T##vec3::__yzxy() { return T##vec4( y, z, x, y ); } \
    /* Swizzler Getter Function(`yzxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, z, x, z )` */ \
    T##vec4 T##vec3::__yzxz() { return T##vec4( y, z, x, z ); } \
    /* Swizzler Getter Function(`yzxi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, z, x, 0 )` */ \
    T##vec4 T##vec3::__yzxi() { return T##vec4( y, z, x, 0 ); } \
    /* Swizzler Getter Function(`yzyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, z, y, x )` */ \
    T##vec4 T##vec3::__yzyx() { return T##vec4( y, z, y, x ); } \
    /* Swizzler Getter Function(`yzyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, z, y, y )` */ \
    T##vec4 T##vec3::__yzyy() { return T##vec4( y, z, y, y ); } \
    /* Swizzler Getter Function(`yzyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, z, y, z )` */ \
    T##vec4 T##vec3::__yzyz() { return T##vec4( y, z, y, z ); } \
    /* Swizzler Getter Function(`yzyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, z, y, 0 )` */ \
    T##vec4 T##vec3::__yzyi() { return T##vec4( y, z, y, 0 ); } \
    /* Swizzler Getter Function(`yzzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, z, z, x )` */ \
    T##vec4 T##vec3::__yzzx() { return T##vec4( y, z, z, x ); } \
    /* Swizzler Getter Function(`yzzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, z, z, y )` */ \
    T##vec4 T##vec3::__yzzy() { return T##vec4( y, z, z, y ); } \
    /* Swizzler Getter Function(`yzzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, z, z, z )` */ \
    T##vec4 T##vec3::__yzzz() { return T##vec4( y, z, z, z ); } \
    /* Swizzler Getter Function(`yzzi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, z, z, 0 )` */ \
    T##vec4 T##vec3::__yzzi() { return T##vec4( y, z, z, 0 ); } \
    /* Swizzler Getter Function(`yzix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, z, 0, x )` */ \
    T##vec4 T##vec3::__yzix() { return T##vec4( y, z, 0, x ); } \
    /* Swizzler Getter Function(`yziy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, z, 0, y )` */ \
    T##vec4 T##vec3::__yziy() { return T##vec4( y, z, 0, y ); } \
    /* Swizzler Getter Function(`yziz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, z, 0, z )` */ \
    T##vec4 T##vec3::__yziz() { return T##vec4( y, z, 0, z ); } \
    /* Swizzler Getter Function(`yzii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, z, 0, 0 )` */ \
    T##vec4 T##vec3::__yzii() { return T##vec4( y, z, 0, 0 ); } \
    /* Swizzler Getter Function(`yixx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, x, x )` */ \
    T##vec4 T##vec3::__yixx() { return T##vec4( y, 0, x, x ); } \
    /* Swizzler Getter Function(`yixy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, x, y )` */ \
    T##vec4 T##vec3::__yixy() { return T##vec4( y, 0, x, y ); } \
    /* Swizzler Getter Function(`yixz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, x, z )` */ \
    T##vec4 T##vec3::__yixz() { return T##vec4( y, 0, x, z ); } \
    /* Swizzler Getter Function(`yixi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, x, 0 )` */ \
    T##vec4 T##vec3::__yixi() { return T##vec4( y, 0, x, 0 ); } \
    /* Swizzler Getter Function(`yiyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, y, x )` */ \
    T##vec4 T##vec3::__yiyx() { return T##vec4( y, 0, y, x ); } \
    /* Swizzler Getter Function(`yiyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, y, y )` */ \
    T##vec4 T##vec3::__yiyy() { return T##vec4( y, 0, y, y ); } \
    /* Swizzler Getter Function(`yiyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, y, z )` */ \
    T##vec4 T##vec3::__yiyz() { return T##vec4( y, 0, y, z ); } \
    /* Swizzler Getter Function(`yiyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, y, 0 )` */ \
    T##vec4 T##vec3::__yiyi() { return T##vec4( y, 0, y, 0 ); } \
    /* Swizzler Getter Function(`yizx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, z, x )` */ \
    T##vec4 T##vec3::__yizx() { return T##vec4( y, 0, z, x ); } \
    /* Swizzler Getter Function(`yizy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, z, y )` */ \
    T##vec4 T##vec3::__yizy() { return T##vec4( y, 0, z, y ); } \
    /* Swizzler Getter Function(`yizz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, z, z )` */ \
    T##vec4 T##vec3::__yizz() { return T##vec4( y, 0, z, z ); } \
    /* Swizzler Getter Function(`yizi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, z, 0 )` */ \
    T##vec4 T##vec3::__yizi() { return T##vec4( y, 0, z, 0 ); } \
    /* Swizzler Getter Function(`yiix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, 0, x )` */ \
    T##vec4 T##vec3::__yiix() { return T##vec4( y, 0, 0, x ); } \
    /* Swizzler Getter Function(`yiiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, 0, y )` */ \
    T##vec4 T##vec3::__yiiy() { return T##vec4( y, 0, 0, y ); } \
    /* Swizzler Getter Function(`yiiz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, 0, z )` */ \
    T##vec4 T##vec3::__yiiz() { return T##vec4( y, 0, 0, z ); } \
    /* Swizzler Getter Function(`yiii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, 0, 0 )` */ \
    T##vec4 T##vec3::__yiii() { return T##vec4( y, 0, 0, 0 ); } \
    /* Swizzler Getter Function(`zxxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, x, x, x )` */ \
    T##vec4 T##vec3::__zxxx() { return T##vec4( z, x, x, x ); } \
    /* Swizzler Getter Function(`zxxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, x, x, y )` */ \
    T##vec4 T##vec3::__zxxy() { return T##vec4( z, x, x, y ); } \
    /* Swizzler Getter Function(`zxxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, x, x, z )` */ \
    T##vec4 T##vec3::__zxxz() { return T##vec4( z, x, x, z ); } \
    /* Swizzler Getter Function(`zxxi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, x, x, 0 )` */ \
    T##vec4 T##vec3::__zxxi() { return T##vec4( z, x, x, 0 ); } \
    /* Swizzler Getter Function(`zxyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, x, y, x )` */ \
    T##vec4 T##vec3::__zxyx() { return T##vec4( z, x, y, x ); } \
    /* Swizzler Getter Function(`zxyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, x, y, y )` */ \
    T##vec4 T##vec3::__zxyy() { return T##vec4( z, x, y, y ); } \
    /* Swizzler Getter Function(`zxyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, x, y, z )` */ \
    T##vec4 T##vec3::__zxyz() { return T##vec4( z, x, y, z ); } \
    /* Swizzler Getter Function(`zxyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, x, y, 0 )` */ \
    T##vec4 T##vec3::__zxyi() { return T##vec4( z, x, y, 0 ); } \
    /* Swizzler Getter Function(`zxzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, x, z, x )` */ \
    T##vec4 T##vec3::__zxzx() { return T##vec4( z, x, z, x ); } \
    /* Swizzler Getter Function(`zxzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, x, z, y )` */ \
    T##vec4 T##vec3::__zxzy() { return T##vec4( z, x, z, y ); } \
    /* Swizzler Getter Function(`zxzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, x, z, z )` */ \
    T##vec4 T##vec3::__zxzz() { return T##vec4( z, x, z, z ); } \
    /* Swizzler Getter Function(`zxzi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, x, z, 0 )` */ \
    T##vec4 T##vec3::__zxzi() { return T##vec4( z, x, z, 0 ); } \
    /* Swizzler Getter Function(`zxix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, x, 0, x )` */ \
    T##vec4 T##vec3::__zxix() { return T##vec4( z, x, 0, x ); } \
    /* Swizzler Getter Function(`zxiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, x, 0, y )` */ \
    T##vec4 T##vec3::__zxiy() { return T##vec4( z, x, 0, y ); } \
    /* Swizzler Getter Function(`zxiz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, x, 0, z )` */ \
    T##vec4 T##vec3::__zxiz() { return T##vec4( z, x, 0, z ); } \
    /* Swizzler Getter Function(`zxii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, x, 0, 0 )` */ \
    T##vec4 T##vec3::__zxii() { return T##vec4( z, x, 0, 0 ); } \
    /* Swizzler Getter Function(`zyxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, y, x, x )` */ \
    T##vec4 T##vec3::__zyxx() { return T##vec4( z, y, x, x ); } \
    /* Swizzler Getter Function(`zyxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, y, x, y )` */ \
    T##vec4 T##vec3::__zyxy() { return T##vec4( z, y, x, y ); } \
    /* Swizzler Getter Function(`zyxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, y, x, z )` */ \
    T##vec4 T##vec3::__zyxz() { return T##vec4( z, y, x, z ); } \
    /* Swizzler Getter Function(`zyxi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, y, x, 0 )` */ \
    T##vec4 T##vec3::__zyxi() { return T##vec4( z, y, x, 0 ); } \
    /* Swizzler Getter Function(`zyyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, y, y, x )` */ \
    T##vec4 T##vec3::__zyyx() { return T##vec4( z, y, y, x ); } \
    /* Swizzler Getter Function(`zyyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, y, y, y )` */ \
    T##vec4 T##vec3::__zyyy() { return T##vec4( z, y, y, y ); } \
    /* Swizzler Getter Function(`zyyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, y, y, z )` */ \
    T##vec4 T##vec3::__zyyz() { return T##vec4( z, y, y, z ); } \
    /* Swizzler Getter Function(`zyyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, y, y, 0 )` */ \
    T##vec4 T##vec3::__zyyi() { return T##vec4( z, y, y, 0 ); } \
    /* Swizzler Getter Function(`zyzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, y, z, x )` */ \
    T##vec4 T##vec3::__zyzx() { return T##vec4( z, y, z, x ); } \
    /* Swizzler Getter Function(`zyzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, y, z, y )` */ \
    T##vec4 T##vec3::__zyzy() { return T##vec4( z, y, z, y ); } \
    /* Swizzler Getter Function(`zyzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, y, z, z )` */ \
    T##vec4 T##vec3::__zyzz() { return T##vec4( z, y, z, z ); } \
    /* Swizzler Getter Function(`zyzi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, y, z, 0 )` */ \
    T##vec4 T##vec3::__zyzi() { return T##vec4( z, y, z, 0 ); } \
    /* Swizzler Getter Function(`zyix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, y, 0, x )` */ \
    T##vec4 T##vec3::__zyix() { return T##vec4( z, y, 0, x ); } \
    /* Swizzler Getter Function(`zyiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, y, 0, y )` */ \
    T##vec4 T##vec3::__zyiy() { return T##vec4( z, y, 0, y ); } \
    /* Swizzler Getter Function(`zyiz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, y, 0, z )` */ \
    T##vec4 T##vec3::__zyiz() { return T##vec4( z, y, 0, z ); } \
    /* Swizzler Getter Function(`zyii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, y, 0, 0 )` */ \
    T##vec4 T##vec3::__zyii() { return T##vec4( z, y, 0, 0 ); } \
    /* Swizzler Getter Function(`zzxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, z, x, x )` */ \
    T##vec4 T##vec3::__zzxx() { return T##vec4( z, z, x, x ); } \
    /* Swizzler Getter Function(`zzxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, z, x, y )` */ \
    T##vec4 T##vec3::__zzxy() { return T##vec4( z, z, x, y ); } \
    /* Swizzler Getter Function(`zzxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, z, x, z )` */ \
    T##vec4 T##vec3::__zzxz() { return T##vec4( z, z, x, z ); } \
    /* Swizzler Getter Function(`zzxi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, z, x, 0 )` */ \
    T##vec4 T##vec3::__zzxi() { return T##vec4( z, z, x, 0 ); } \
    /* Swizzler Getter Function(`zzyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, z, y, x )` */ \
    T##vec4 T##vec3::__zzyx() { return T##vec4( z, z, y, x ); } \
    /* Swizzler Getter Function(`zzyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, z, y, y )` */ \
    T##vec4 T##vec3::__zzyy() { return T##vec4( z, z, y, y ); } \
    /* Swizzler Getter Function(`zzyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, z, y, z )` */ \
    T##vec4 T##vec3::__zzyz() { return T##vec4( z, z, y, z ); } \
    /* Swizzler Getter Function(`zzyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, z, y, 0 )` */ \
    T##vec4 T##vec3::__zzyi() { return T##vec4( z, z, y, 0 ); } \
    /* Swizzler Getter Function(`zzzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, z, z, x )` */ \
    T##vec4 T##vec3::__zzzx() { return T##vec4( z, z, z, x ); } \
    /* Swizzler Getter Function(`zzzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, z, z, y )` */ \
    T##vec4 T##vec3::__zzzy() { return T##vec4( z, z, z, y ); } \
    /* Swizzler Getter Function(`zzzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, z, z, z )` */ \
    T##vec4 T##vec3::__zzzz() { return T##vec4( z, z, z, z ); } \
    /* Swizzler Getter Function(`zzzi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, z, z, 0 )` */ \
    T##vec4 T##vec3::__zzzi() { return T##vec4( z, z, z, 0 ); } \
    /* Swizzler Getter Function(`zzix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, z, 0, x )` */ \
    T##vec4 T##vec3::__zzix() { return T##vec4( z, z, 0, x ); } \
    /* Swizzler Getter Function(`zziy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, z, 0, y )` */ \
    T##vec4 T##vec3::__zziy() { return T##vec4( z, z, 0, y ); } \
    /* Swizzler Getter Function(`zziz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, z, 0, z )` */ \
    T##vec4 T##vec3::__zziz() { return T##vec4( z, z, 0, z ); } \
    /* Swizzler Getter Function(`zzii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, z, 0, 0 )` */ \
    T##vec4 T##vec3::__zzii() { return T##vec4( z, z, 0, 0 ); } \
    /* Swizzler Getter Function(`zixx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, 0, x, x )` */ \
    T##vec4 T##vec3::__zixx() { return T##vec4( z, 0, x, x ); } \
    /* Swizzler Getter Function(`zixy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, 0, x, y )` */ \
    T##vec4 T##vec3::__zixy() { return T##vec4( z, 0, x, y ); } \
    /* Swizzler Getter Function(`zixz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, 0, x, z )` */ \
    T##vec4 T##vec3::__zixz() { return T##vec4( z, 0, x, z ); } \
    /* Swizzler Getter Function(`zixi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, 0, x, 0 )` */ \
    T##vec4 T##vec3::__zixi() { return T##vec4( z, 0, x, 0 ); } \
    /* Swizzler Getter Function(`ziyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, 0, y, x )` */ \
    T##vec4 T##vec3::__ziyx() { return T##vec4( z, 0, y, x ); } \
    /* Swizzler Getter Function(`ziyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, 0, y, y )` */ \
    T##vec4 T##vec3::__ziyy() { return T##vec4( z, 0, y, y ); } \
    /* Swizzler Getter Function(`ziyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, 0, y, z )` */ \
    T##vec4 T##vec3::__ziyz() { return T##vec4( z, 0, y, z ); } \
    /* Swizzler Getter Function(`ziyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, 0, y, 0 )` */ \
    T##vec4 T##vec3::__ziyi() { return T##vec4( z, 0, y, 0 ); } \
    /* Swizzler Getter Function(`zizx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, 0, z, x )` */ \
    T##vec4 T##vec3::__zizx() { return T##vec4( z, 0, z, x ); } \
    /* Swizzler Getter Function(`zizy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, 0, z, y )` */ \
    T##vec4 T##vec3::__zizy() { return T##vec4( z, 0, z, y ); } \
    /* Swizzler Getter Function(`zizz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, 0, z, z )` */ \
    T##vec4 T##vec3::__zizz() { return T##vec4( z, 0, z, z ); } \
    /* Swizzler Getter Function(`zizi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, 0, z, 0 )` */ \
    T##vec4 T##vec3::__zizi() { return T##vec4( z, 0, z, 0 ); } \
    /* Swizzler Getter Function(`ziix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, 0, 0, x )` */ \
    T##vec4 T##vec3::__ziix() { return T##vec4( z, 0, 0, x ); } \
    /* Swizzler Getter Function(`ziiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, 0, 0, y )` */ \
    T##vec4 T##vec3::__ziiy() { return T##vec4( z, 0, 0, y ); } \
    /* Swizzler Getter Function(`ziiz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, 0, 0, z )` */ \
    T##vec4 T##vec3::__ziiz() { return T##vec4( z, 0, 0, z ); } \
    /* Swizzler Getter Function(`ziii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, 0, 0, 0 )` */ \
    T##vec4 T##vec3::__ziii() { return T##vec4( z, 0, 0, 0 ); } \
    /* Swizzler Getter Function(`ixxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, x, x )` */ \
    T##vec4 T##vec3::__ixxx() { return T##vec4( 0, x, x, x ); } \
    /* Swizzler Getter Function(`ixxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, x, y )` */ \
    T##vec4 T##vec3::__ixxy() { return T##vec4( 0, x, x, y ); } \
    /* Swizzler Getter Function(`ixxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, x, z )` */ \
    T##vec4 T##vec3::__ixxz() { return T##vec4( 0, x, x, z ); } \
    /* Swizzler Getter Function(`ixxi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, x, 0 )` */ \
    T##vec4 T##vec3::__ixxi() { return T##vec4( 0, x, x, 0 ); } \
    /* Swizzler Getter Function(`ixyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, y, x )` */ \
    T##vec4 T##vec3::__ixyx() { return T##vec4( 0, x, y, x ); } \
    /* Swizzler Getter Function(`ixyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, y, y )` */ \
    T##vec4 T##vec3::__ixyy() { return T##vec4( 0, x, y, y ); } \
    /* Swizzler Getter Function(`ixyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, y, z )` */ \
    T##vec4 T##vec3::__ixyz() { return T##vec4( 0, x, y, z ); } \
    /* Swizzler Getter Function(`ixyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, y, 0 )` */ \
    T##vec4 T##vec3::__ixyi() { return T##vec4( 0, x, y, 0 ); } \
    /* Swizzler Getter Function(`ixzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, z, x )` */ \
    T##vec4 T##vec3::__ixzx() { return T##vec4( 0, x, z, x ); } \
    /* Swizzler Getter Function(`ixzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, z, y )` */ \
    T##vec4 T##vec3::__ixzy() { return T##vec4( 0, x, z, y ); } \
    /* Swizzler Getter Function(`ixzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, z, z )` */ \
    T##vec4 T##vec3::__ixzz() { return T##vec4( 0, x, z, z ); } \
    /* Swizzler Getter Function(`ixzi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, z, 0 )` */ \
    T##vec4 T##vec3::__ixzi() { return T##vec4( 0, x, z, 0 ); } \
    /* Swizzler Getter Function(`ixix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, 0, x )` */ \
    T##vec4 T##vec3::__ixix() { return T##vec4( 0, x, 0, x ); } \
    /* Swizzler Getter Function(`ixiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, 0, y )` */ \
    T##vec4 T##vec3::__ixiy() { return T##vec4( 0, x, 0, y ); } \
    /* Swizzler Getter Function(`ixiz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, 0, z )` */ \
    T##vec4 T##vec3::__ixiz() { return T##vec4( 0, x, 0, z ); } \
    /* Swizzler Getter Function(`ixii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, 0, 0 )` */ \
    T##vec4 T##vec3::__ixii() { return T##vec4( 0, x, 0, 0 ); } \
    /* Swizzler Getter Function(`iyxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, x, x )` */ \
    T##vec4 T##vec3::__iyxx() { return T##vec4( 0, y, x, x ); } \
    /* Swizzler Getter Function(`iyxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, x, y )` */ \
    T##vec4 T##vec3::__iyxy() { return T##vec4( 0, y, x, y ); } \
    /* Swizzler Getter Function(`iyxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, x, z )` */ \
    T##vec4 T##vec3::__iyxz() { return T##vec4( 0, y, x, z ); } \
    /* Swizzler Getter Function(`iyxi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, x, 0 )` */ \
    T##vec4 T##vec3::__iyxi() { return T##vec4( 0, y, x, 0 ); } \
    /* Swizzler Getter Function(`iyyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, y, x )` */ \
    T##vec4 T##vec3::__iyyx() { return T##vec4( 0, y, y, x ); } \
    /* Swizzler Getter Function(`iyyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, y, y )` */ \
    T##vec4 T##vec3::__iyyy() { return T##vec4( 0, y, y, y ); } \
    /* Swizzler Getter Function(`iyyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, y, z )` */ \
    T##vec4 T##vec3::__iyyz() { return T##vec4( 0, y, y, z ); } \
    /* Swizzler Getter Function(`iyyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, y, 0 )` */ \
    T##vec4 T##vec3::__iyyi() { return T##vec4( 0, y, y, 0 ); } \
    /* Swizzler Getter Function(`iyzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, z, x )` */ \
    T##vec4 T##vec3::__iyzx() { return T##vec4( 0, y, z, x ); } \
    /* Swizzler Getter Function(`iyzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, z, y )` */ \
    T##vec4 T##vec3::__iyzy() { return T##vec4( 0, y, z, y ); } \
    /* Swizzler Getter Function(`iyzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, z, z )` */ \
    T##vec4 T##vec3::__iyzz() { return T##vec4( 0, y, z, z ); } \
    /* Swizzler Getter Function(`iyzi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, z, 0 )` */ \
    T##vec4 T##vec3::__iyzi() { return T##vec4( 0, y, z, 0 ); } \
    /* Swizzler Getter Function(`iyix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, 0, x )` */ \
    T##vec4 T##vec3::__iyix() { return T##vec4( 0, y, 0, x ); } \
    /* Swizzler Getter Function(`iyiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, 0, y )` */ \
    T##vec4 T##vec3::__iyiy() { return T##vec4( 0, y, 0, y ); } \
    /* Swizzler Getter Function(`iyiz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, 0, z )` */ \
    T##vec4 T##vec3::__iyiz() { return T##vec4( 0, y, 0, z ); } \
    /* Swizzler Getter Function(`iyii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, 0, 0 )` */ \
    T##vec4 T##vec3::__iyii() { return T##vec4( 0, y, 0, 0 ); } \
    /* Swizzler Getter Function(`izxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, z, x, x )` */ \
    T##vec4 T##vec3::__izxx() { return T##vec4( 0, z, x, x ); } \
    /* Swizzler Getter Function(`izxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, z, x, y )` */ \
    T##vec4 T##vec3::__izxy() { return T##vec4( 0, z, x, y ); } \
    /* Swizzler Getter Function(`izxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, z, x, z )` */ \
    T##vec4 T##vec3::__izxz() { return T##vec4( 0, z, x, z ); } \
    /* Swizzler Getter Function(`izxi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, z, x, 0 )` */ \
    T##vec4 T##vec3::__izxi() { return T##vec4( 0, z, x, 0 ); } \
    /* Swizzler Getter Function(`izyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, z, y, x )` */ \
    T##vec4 T##vec3::__izyx() { return T##vec4( 0, z, y, x ); } \
    /* Swizzler Getter Function(`izyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, z, y, y )` */ \
    T##vec4 T##vec3::__izyy() { return T##vec4( 0, z, y, y ); } \
    /* Swizzler Getter Function(`izyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, z, y, z )` */ \
    T##vec4 T##vec3::__izyz() { return T##vec4( 0, z, y, z ); } \
    /* Swizzler Getter Function(`izyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, z, y, 0 )` */ \
    T##vec4 T##vec3::__izyi() { return T##vec4( 0, z, y, 0 ); } \
    /* Swizzler Getter Function(`izzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, z, z, x )` */ \
    T##vec4 T##vec3::__izzx() { return T##vec4( 0, z, z, x ); } \
    /* Swizzler Getter Function(`izzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, z, z, y )` */ \
    T##vec4 T##vec3::__izzy() { return T##vec4( 0, z, z, y ); } \
    /* Swizzler Getter Function(`izzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, z, z, z )` */ \
    T##vec4 T##vec3::__izzz() { return T##vec4( 0, z, z, z ); } \
    /* Swizzler Getter Function(`izzi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, z, z, 0 )` */ \
    T##vec4 T##vec3::__izzi() { return T##vec4( 0, z, z, 0 ); } \
    /* Swizzler Getter Function(`izix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, z, 0, x )` */ \
    T##vec4 T##vec3::__izix() { return T##vec4( 0, z, 0, x ); } \
    /* Swizzler Getter Function(`iziy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, z, 0, y )` */ \
    T##vec4 T##vec3::__iziy() { return T##vec4( 0, z, 0, y ); } \
    /* Swizzler Getter Function(`iziz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, z, 0, z )` */ \
    T##vec4 T##vec3::__iziz() { return T##vec4( 0, z, 0, z ); } \
    /* Swizzler Getter Function(`izii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, z, 0, 0 )` */ \
    T##vec4 T##vec3::__izii() { return T##vec4( 0, z, 0, 0 ); } \
    /* Swizzler Getter Function(`iixx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, x, x )` */ \
    T##vec4 T##vec3::__iixx() { return T##vec4( 0, 0, x, x ); } \
    /* Swizzler Getter Function(`iixy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, x, y )` */ \
    T##vec4 T##vec3::__iixy() { return T##vec4( 0, 0, x, y ); } \
    /* Swizzler Getter Function(`iixz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, x, z )` */ \
    T##vec4 T##vec3::__iixz() { return T##vec4( 0, 0, x, z ); } \
    /* Swizzler Getter Function(`iixi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, x, 0 )` */ \
    T##vec4 T##vec3::__iixi() { return T##vec4( 0, 0, x, 0 ); } \
    /* Swizzler Getter Function(`iiyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, y, x )` */ \
    T##vec4 T##vec3::__iiyx() { return T##vec4( 0, 0, y, x ); } \
    /* Swizzler Getter Function(`iiyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, y, y )` */ \
    T##vec4 T##vec3::__iiyy() { return T##vec4( 0, 0, y, y ); } \
    /* Swizzler Getter Function(`iiyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, y, z )` */ \
    T##vec4 T##vec3::__iiyz() { return T##vec4( 0, 0, y, z ); } \
    /* Swizzler Getter Function(`iiyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, y, 0 )` */ \
    T##vec4 T##vec3::__iiyi() { return T##vec4( 0, 0, y, 0 ); } \
    /* Swizzler Getter Function(`iizx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, z, x )` */ \
    T##vec4 T##vec3::__iizx() { return T##vec4( 0, 0, z, x ); } \
    /* Swizzler Getter Function(`iizy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, z, y )` */ \
    T##vec4 T##vec3::__iizy() { return T##vec4( 0, 0, z, y ); } \
    /* Swizzler Getter Function(`iizz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, z, z )` */ \
    T##vec4 T##vec3::__iizz() { return T##vec4( 0, 0, z, z ); } \
    /* Swizzler Getter Function(`iizi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, z, 0 )` */ \
    T##vec4 T##vec3::__iizi() { return T##vec4( 0, 0, z, 0 ); } \
    /* Swizzler Getter Function(`iiix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, 0, x )` */ \
    T##vec4 T##vec3::__iiix() { return T##vec4( 0, 0, 0, x ); } \
    /* Swizzler Getter Function(`iiiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, 0, y )` */ \
    T##vec4 T##vec3::__iiiy() { return T##vec4( 0, 0, 0, y ); } \
    /* Swizzler Getter Function(`iiiz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, 0, z )` */ \
    T##vec4 T##vec3::__iiiz() { return T##vec4( 0, 0, 0, z ); } \
    /* Swizzler Getter Function(`iiii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, 0, 0 )` */ \
    T##vec4 T##vec3::__iiii() { return T##vec4( 0, 0, 0, 0 ); } \



#define __VEC4_SWIZZLE( T ) \
    /* Swizzler Getter Function(`xx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( x, x )` */ \
    T##vec2 T##vec4::__xx() { return T##vec2( x, x ); } \
    /* Swizzler Getter Function(`xy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( x, y )` */ \
    T##vec2 T##vec4::__xy() { return T##vec2( x, y ); } \
    /* Swizzler Getter Function(`xz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( x, z )` */ \
    T##vec2 T##vec4::__xz() { return T##vec2( x, z ); } \
    /* Swizzler Getter Function(`xw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( x, w )` */ \
    T##vec2 T##vec4::__xw() { return T##vec2( x, w ); } \
    /* Swizzler Getter Function(`xi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( x, 0 )` */ \
    T##vec2 T##vec4::__xi() { return T##vec2( x, 0 ); } \
    /* Swizzler Getter Function(`yx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( y, x )` */ \
    T##vec2 T##vec4::__yx() { return T##vec2( y, x ); } \
    /* Swizzler Getter Function(`yy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( y, y )` */ \
    T##vec2 T##vec4::__yy() { return T##vec2( y, y ); } \
    /* Swizzler Getter Function(`yz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( y, z )` */ \
    T##vec2 T##vec4::__yz() { return T##vec2( y, z ); } \
    /* Swizzler Getter Function(`yw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( y, w )` */ \
    T##vec2 T##vec4::__yw() { return T##vec2( y, w ); } \
    /* Swizzler Getter Function(`yi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( y, 0 )` */ \
    T##vec2 T##vec4::__yi() { return T##vec2( y, 0 ); } \
    /* Swizzler Getter Function(`zx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( z, x )` */ \
    T##vec2 T##vec4::__zx() { return T##vec2( z, x ); } \
    /* Swizzler Getter Function(`zy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( z, y )` */ \
    T##vec2 T##vec4::__zy() { return T##vec2( z, y ); } \
    /* Swizzler Getter Function(`zz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( z, z )` */ \
    T##vec2 T##vec4::__zz() { return T##vec2( z, z ); } \
    /* Swizzler Getter Function(`zw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( z, w )` */ \
    T##vec2 T##vec4::__zw() { return T##vec2( z, w ); } \
    /* Swizzler Getter Function(`zi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( z, 0 )` */ \
    T##vec2 T##vec4::__zi() { return T##vec2( z, 0 ); } \
    /* Swizzler Getter Function(`wx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( w, x )` */ \
    T##vec2 T##vec4::__wx() { return T##vec2( w, x ); } \
    /* Swizzler Getter Function(`wy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( w, y )` */ \
    T##vec2 T##vec4::__wy() { return T##vec2( w, y ); } \
    /* Swizzler Getter Function(`wz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( w, z )` */ \
    T##vec2 T##vec4::__wz() { return T##vec2( w, z ); } \
    /* Swizzler Getter Function(`ww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( w, w )` */ \
    T##vec2 T##vec4::__ww() { return T##vec2( w, w ); } \
    /* Swizzler Getter Function(`wi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( w, 0 )` */ \
    T##vec2 T##vec4::__wi() { return T##vec2( w, 0 ); } \
    /* Swizzler Getter Function(`ix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( 0, x )` */ \
    T##vec2 T##vec4::__ix() { return T##vec2( 0, x ); } \
    /* Swizzler Getter Function(`iy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( 0, y )` */ \
    T##vec2 T##vec4::__iy() { return T##vec2( 0, y ); } \
    /* Swizzler Getter Function(`iz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( 0, z )` */ \
    T##vec2 T##vec4::__iz() { return T##vec2( 0, z ); } \
    /* Swizzler Getter Function(`iw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( 0, w )` */ \
    T##vec2 T##vec4::__iw() { return T##vec2( 0, w ); } \
    /* Swizzler Getter Function(`ii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec2( 0, 0 )` */ \
    T##vec2 T##vec4::__ii() { return T##vec2( 0, 0 ); } \
    /* Swizzler Getter Function(`xxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, x, x )` */ \
    T##vec3 T##vec4::__xxx() { return T##vec3( x, x, x ); } \
    /* Swizzler Getter Function(`xxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, x, y )` */ \
    T##vec3 T##vec4::__xxy() { return T##vec3( x, x, y ); } \
    /* Swizzler Getter Function(`xxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, x, z )` */ \
    T##vec3 T##vec4::__xxz() { return T##vec3( x, x, z ); } \
    /* Swizzler Getter Function(`xxw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, x, w )` */ \
    T##vec3 T##vec4::__xxw() { return T##vec3( x, x, w ); } \
    /* Swizzler Getter Function(`xxi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, x, 0 )` */ \
    T##vec3 T##vec4::__xxi() { return T##vec3( x, x, 0 ); } \
    /* Swizzler Getter Function(`xyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, y, x )` */ \
    T##vec3 T##vec4::__xyx() { return T##vec3( x, y, x ); } \
    /* Swizzler Getter Function(`xyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, y, y )` */ \
    T##vec3 T##vec4::__xyy() { return T##vec3( x, y, y ); } \
    /* Swizzler Getter Function(`xyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, y, z )` */ \
    T##vec3 T##vec4::__xyz() { return T##vec3( x, y, z ); } \
    /* Swizzler Getter Function(`xyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, y, w )` */ \
    T##vec3 T##vec4::__xyw() { return T##vec3( x, y, w ); } \
    /* Swizzler Getter Function(`xyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, y, 0 )` */ \
    T##vec3 T##vec4::__xyi() { return T##vec3( x, y, 0 ); } \
    /* Swizzler Getter Function(`xzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, z, x )` */ \
    T##vec3 T##vec4::__xzx() { return T##vec3( x, z, x ); } \
    /* Swizzler Getter Function(`xzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, z, y )` */ \
    T##vec3 T##vec4::__xzy() { return T##vec3( x, z, y ); } \
    /* Swizzler Getter Function(`xzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, z, z )` */ \
    T##vec3 T##vec4::__xzz() { return T##vec3( x, z, z ); } \
    /* Swizzler Getter Function(`xzw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, z, w )` */ \
    T##vec3 T##vec4::__xzw() { return T##vec3( x, z, w ); } \
    /* Swizzler Getter Function(`xzi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, z, 0 )` */ \
    T##vec3 T##vec4::__xzi() { return T##vec3( x, z, 0 ); } \
    /* Swizzler Getter Function(`xwx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, w, x )` */ \
    T##vec3 T##vec4::__xwx() { return T##vec3( x, w, x ); } \
    /* Swizzler Getter Function(`xwy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, w, y )` */ \
    T##vec3 T##vec4::__xwy() { return T##vec3( x, w, y ); } \
    /* Swizzler Getter Function(`xwz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, w, z )` */ \
    T##vec3 T##vec4::__xwz() { return T##vec3( x, w, z ); } \
    /* Swizzler Getter Function(`xww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, w, w )` */ \
    T##vec3 T##vec4::__xww() { return T##vec3( x, w, w ); } \
    /* Swizzler Getter Function(`xwi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, w, 0 )` */ \
    T##vec3 T##vec4::__xwi() { return T##vec3( x, w, 0 ); } \
    /* Swizzler Getter Function(`xix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, 0, x )` */ \
    T##vec3 T##vec4::__xix() { return T##vec3( x, 0, x ); } \
    /* Swizzler Getter Function(`xiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, 0, y )` */ \
    T##vec3 T##vec4::__xiy() { return T##vec3( x, 0, y ); } \
    /* Swizzler Getter Function(`xiz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, 0, z )` */ \
    T##vec3 T##vec4::__xiz() { return T##vec3( x, 0, z ); } \
    /* Swizzler Getter Function(`xiw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, 0, w )` */ \
    T##vec3 T##vec4::__xiw() { return T##vec3( x, 0, w ); } \
    /* Swizzler Getter Function(`xii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( x, 0, 0 )` */ \
    T##vec3 T##vec4::__xii() { return T##vec3( x, 0, 0 ); } \
    /* Swizzler Getter Function(`yxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, x, x )` */ \
    T##vec3 T##vec4::__yxx() { return T##vec3( y, x, x ); } \
    /* Swizzler Getter Function(`yxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, x, y )` */ \
    T##vec3 T##vec4::__yxy() { return T##vec3( y, x, y ); } \
    /* Swizzler Getter Function(`yxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, x, z )` */ \
    T##vec3 T##vec4::__yxz() { return T##vec3( y, x, z ); } \
    /* Swizzler Getter Function(`yxw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, x, w )` */ \
    T##vec3 T##vec4::__yxw() { return T##vec3( y, x, w ); } \
    /* Swizzler Getter Function(`yxi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, x, 0 )` */ \
    T##vec3 T##vec4::__yxi() { return T##vec3( y, x, 0 ); } \
    /* Swizzler Getter Function(`yyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, y, x )` */ \
    T##vec3 T##vec4::__yyx() { return T##vec3( y, y, x ); } \
    /* Swizzler Getter Function(`yyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, y, y )` */ \
    T##vec3 T##vec4::__yyy() { return T##vec3( y, y, y ); } \
    /* Swizzler Getter Function(`yyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, y, z )` */ \
    T##vec3 T##vec4::__yyz() { return T##vec3( y, y, z ); } \
    /* Swizzler Getter Function(`yyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, y, w )` */ \
    T##vec3 T##vec4::__yyw() { return T##vec3( y, y, w ); } \
    /* Swizzler Getter Function(`yyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, y, 0 )` */ \
    T##vec3 T##vec4::__yyi() { return T##vec3( y, y, 0 ); } \
    /* Swizzler Getter Function(`yzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, z, x )` */ \
    T##vec3 T##vec4::__yzx() { return T##vec3( y, z, x ); } \
    /* Swizzler Getter Function(`yzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, z, y )` */ \
    T##vec3 T##vec4::__yzy() { return T##vec3( y, z, y ); } \
    /* Swizzler Getter Function(`yzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, z, z )` */ \
    T##vec3 T##vec4::__yzz() { return T##vec3( y, z, z ); } \
    /* Swizzler Getter Function(`yzw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, z, w )` */ \
    T##vec3 T##vec4::__yzw() { return T##vec3( y, z, w ); } \
    /* Swizzler Getter Function(`yzi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, z, 0 )` */ \
    T##vec3 T##vec4::__yzi() { return T##vec3( y, z, 0 ); } \
    /* Swizzler Getter Function(`ywx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, w, x )` */ \
    T##vec3 T##vec4::__ywx() { return T##vec3( y, w, x ); } \
    /* Swizzler Getter Function(`ywy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, w, y )` */ \
    T##vec3 T##vec4::__ywy() { return T##vec3( y, w, y ); } \
    /* Swizzler Getter Function(`ywz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, w, z )` */ \
    T##vec3 T##vec4::__ywz() { return T##vec3( y, w, z ); } \
    /* Swizzler Getter Function(`yww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, w, w )` */ \
    T##vec3 T##vec4::__yww() { return T##vec3( y, w, w ); } \
    /* Swizzler Getter Function(`ywi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, w, 0 )` */ \
    T##vec3 T##vec4::__ywi() { return T##vec3( y, w, 0 ); } \
    /* Swizzler Getter Function(`yix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, 0, x )` */ \
    T##vec3 T##vec4::__yix() { return T##vec3( y, 0, x ); } \
    /* Swizzler Getter Function(`yiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, 0, y )` */ \
    T##vec3 T##vec4::__yiy() { return T##vec3( y, 0, y ); } \
    /* Swizzler Getter Function(`yiz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, 0, z )` */ \
    T##vec3 T##vec4::__yiz() { return T##vec3( y, 0, z ); } \
    /* Swizzler Getter Function(`yiw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, 0, w )` */ \
    T##vec3 T##vec4::__yiw() { return T##vec3( y, 0, w ); } \
    /* Swizzler Getter Function(`yii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( y, 0, 0 )` */ \
    T##vec3 T##vec4::__yii() { return T##vec3( y, 0, 0 ); } \
    /* Swizzler Getter Function(`zxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( z, x, x )` */ \
    T##vec3 T##vec4::__zxx() { return T##vec3( z, x, x ); } \
    /* Swizzler Getter Function(`zxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( z, x, y )` */ \
    T##vec3 T##vec4::__zxy() { return T##vec3( z, x, y ); } \
    /* Swizzler Getter Function(`zxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( z, x, z )` */ \
    T##vec3 T##vec4::__zxz() { return T##vec3( z, x, z ); } \
    /* Swizzler Getter Function(`zxw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( z, x, w )` */ \
    T##vec3 T##vec4::__zxw() { return T##vec3( z, x, w ); } \
    /* Swizzler Getter Function(`zxi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( z, x, 0 )` */ \
    T##vec3 T##vec4::__zxi() { return T##vec3( z, x, 0 ); } \
    /* Swizzler Getter Function(`zyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( z, y, x )` */ \
    T##vec3 T##vec4::__zyx() { return T##vec3( z, y, x ); } \
    /* Swizzler Getter Function(`zyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( z, y, y )` */ \
    T##vec3 T##vec4::__zyy() { return T##vec3( z, y, y ); } \
    /* Swizzler Getter Function(`zyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( z, y, z )` */ \
    T##vec3 T##vec4::__zyz() { return T##vec3( z, y, z ); } \
    /* Swizzler Getter Function(`zyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( z, y, w )` */ \
    T##vec3 T##vec4::__zyw() { return T##vec3( z, y, w ); } \
    /* Swizzler Getter Function(`zyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( z, y, 0 )` */ \
    T##vec3 T##vec4::__zyi() { return T##vec3( z, y, 0 ); } \
    /* Swizzler Getter Function(`zzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( z, z, x )` */ \
    T##vec3 T##vec4::__zzx() { return T##vec3( z, z, x ); } \
    /* Swizzler Getter Function(`zzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( z, z, y )` */ \
    T##vec3 T##vec4::__zzy() { return T##vec3( z, z, y ); } \
    /* Swizzler Getter Function(`zzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( z, z, z )` */ \
    T##vec3 T##vec4::__zzz() { return T##vec3( z, z, z ); } \
    /* Swizzler Getter Function(`zzw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( z, z, w )` */ \
    T##vec3 T##vec4::__zzw() { return T##vec3( z, z, w ); } \
    /* Swizzler Getter Function(`zzi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( z, z, 0 )` */ \
    T##vec3 T##vec4::__zzi() { return T##vec3( z, z, 0 ); } \
    /* Swizzler Getter Function(`zwx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( z, w, x )` */ \
    T##vec3 T##vec4::__zwx() { return T##vec3( z, w, x ); } \
    /* Swizzler Getter Function(`zwy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( z, w, y )` */ \
    T##vec3 T##vec4::__zwy() { return T##vec3( z, w, y ); } \
    /* Swizzler Getter Function(`zwz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( z, w, z )` */ \
    T##vec3 T##vec4::__zwz() { return T##vec3( z, w, z ); } \
    /* Swizzler Getter Function(`zww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( z, w, w )` */ \
    T##vec3 T##vec4::__zww() { return T##vec3( z, w, w ); } \
    /* Swizzler Getter Function(`zwi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( z, w, 0 )` */ \
    T##vec3 T##vec4::__zwi() { return T##vec3( z, w, 0 ); } \
    /* Swizzler Getter Function(`zix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( z, 0, x )` */ \
    T##vec3 T##vec4::__zix() { return T##vec3( z, 0, x ); } \
    /* Swizzler Getter Function(`ziy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( z, 0, y )` */ \
    T##vec3 T##vec4::__ziy() { return T##vec3( z, 0, y ); } \
    /* Swizzler Getter Function(`ziz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( z, 0, z )` */ \
    T##vec3 T##vec4::__ziz() { return T##vec3( z, 0, z ); } \
    /* Swizzler Getter Function(`ziw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( z, 0, w )` */ \
    T##vec3 T##vec4::__ziw() { return T##vec3( z, 0, w ); } \
    /* Swizzler Getter Function(`zii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( z, 0, 0 )` */ \
    T##vec3 T##vec4::__zii() { return T##vec3( z, 0, 0 ); } \
    /* Swizzler Getter Function(`wxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( w, x, x )` */ \
    T##vec3 T##vec4::__wxx() { return T##vec3( w, x, x ); } \
    /* Swizzler Getter Function(`wxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( w, x, y )` */ \
    T##vec3 T##vec4::__wxy() { return T##vec3( w, x, y ); } \
    /* Swizzler Getter Function(`wxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( w, x, z )` */ \
    T##vec3 T##vec4::__wxz() { return T##vec3( w, x, z ); } \
    /* Swizzler Getter Function(`wxw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( w, x, w )` */ \
    T##vec3 T##vec4::__wxw() { return T##vec3( w, x, w ); } \
    /* Swizzler Getter Function(`wxi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( w, x, 0 )` */ \
    T##vec3 T##vec4::__wxi() { return T##vec3( w, x, 0 ); } \
    /* Swizzler Getter Function(`wyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( w, y, x )` */ \
    T##vec3 T##vec4::__wyx() { return T##vec3( w, y, x ); } \
    /* Swizzler Getter Function(`wyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( w, y, y )` */ \
    T##vec3 T##vec4::__wyy() { return T##vec3( w, y, y ); } \
    /* Swizzler Getter Function(`wyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( w, y, z )` */ \
    T##vec3 T##vec4::__wyz() { return T##vec3( w, y, z ); } \
    /* Swizzler Getter Function(`wyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( w, y, w )` */ \
    T##vec3 T##vec4::__wyw() { return T##vec3( w, y, w ); } \
    /* Swizzler Getter Function(`wyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( w, y, 0 )` */ \
    T##vec3 T##vec4::__wyi() { return T##vec3( w, y, 0 ); } \
    /* Swizzler Getter Function(`wzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( w, z, x )` */ \
    T##vec3 T##vec4::__wzx() { return T##vec3( w, z, x ); } \
    /* Swizzler Getter Function(`wzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( w, z, y )` */ \
    T##vec3 T##vec4::__wzy() { return T##vec3( w, z, y ); } \
    /* Swizzler Getter Function(`wzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( w, z, z )` */ \
    T##vec3 T##vec4::__wzz() { return T##vec3( w, z, z ); } \
    /* Swizzler Getter Function(`wzw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( w, z, w )` */ \
    T##vec3 T##vec4::__wzw() { return T##vec3( w, z, w ); } \
    /* Swizzler Getter Function(`wzi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( w, z, 0 )` */ \
    T##vec3 T##vec4::__wzi() { return T##vec3( w, z, 0 ); } \
    /* Swizzler Getter Function(`wwx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( w, w, x )` */ \
    T##vec3 T##vec4::__wwx() { return T##vec3( w, w, x ); } \
    /* Swizzler Getter Function(`wwy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( w, w, y )` */ \
    T##vec3 T##vec4::__wwy() { return T##vec3( w, w, y ); } \
    /* Swizzler Getter Function(`wwz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( w, w, z )` */ \
    T##vec3 T##vec4::__wwz() { return T##vec3( w, w, z ); } \
    /* Swizzler Getter Function(`www`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( w, w, w )` */ \
    T##vec3 T##vec4::__www() { return T##vec3( w, w, w ); } \
    /* Swizzler Getter Function(`wwi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( w, w, 0 )` */ \
    T##vec3 T##vec4::__wwi() { return T##vec3( w, w, 0 ); } \
    /* Swizzler Getter Function(`wix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( w, 0, x )` */ \
    T##vec3 T##vec4::__wix() { return T##vec3( w, 0, x ); } \
    /* Swizzler Getter Function(`wiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( w, 0, y )` */ \
    T##vec3 T##vec4::__wiy() { return T##vec3( w, 0, y ); } \
    /* Swizzler Getter Function(`wiz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( w, 0, z )` */ \
    T##vec3 T##vec4::__wiz() { return T##vec3( w, 0, z ); } \
    /* Swizzler Getter Function(`wiw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( w, 0, w )` */ \
    T##vec3 T##vec4::__wiw() { return T##vec3( w, 0, w ); } \
    /* Swizzler Getter Function(`wii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( w, 0, 0 )` */ \
    T##vec3 T##vec4::__wii() { return T##vec3( w, 0, 0 ); } \
    /* Swizzler Getter Function(`ixx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, x, x )` */ \
    T##vec3 T##vec4::__ixx() { return T##vec3( 0, x, x ); } \
    /* Swizzler Getter Function(`ixy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, x, y )` */ \
    T##vec3 T##vec4::__ixy() { return T##vec3( 0, x, y ); } \
    /* Swizzler Getter Function(`ixz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, x, z )` */ \
    T##vec3 T##vec4::__ixz() { return T##vec3( 0, x, z ); } \
    /* Swizzler Getter Function(`ixw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, x, w )` */ \
    T##vec3 T##vec4::__ixw() { return T##vec3( 0, x, w ); } \
    /* Swizzler Getter Function(`ixi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, x, 0 )` */ \
    T##vec3 T##vec4::__ixi() { return T##vec3( 0, x, 0 ); } \
    /* Swizzler Getter Function(`iyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, y, x )` */ \
    T##vec3 T##vec4::__iyx() { return T##vec3( 0, y, x ); } \
    /* Swizzler Getter Function(`iyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, y, y )` */ \
    T##vec3 T##vec4::__iyy() { return T##vec3( 0, y, y ); } \
    /* Swizzler Getter Function(`iyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, y, z )` */ \
    T##vec3 T##vec4::__iyz() { return T##vec3( 0, y, z ); } \
    /* Swizzler Getter Function(`iyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, y, w )` */ \
    T##vec3 T##vec4::__iyw() { return T##vec3( 0, y, w ); } \
    /* Swizzler Getter Function(`iyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, y, 0 )` */ \
    T##vec3 T##vec4::__iyi() { return T##vec3( 0, y, 0 ); } \
    /* Swizzler Getter Function(`izx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, z, x )` */ \
    T##vec3 T##vec4::__izx() { return T##vec3( 0, z, x ); } \
    /* Swizzler Getter Function(`izy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, z, y )` */ \
    T##vec3 T##vec4::__izy() { return T##vec3( 0, z, y ); } \
    /* Swizzler Getter Function(`izz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, z, z )` */ \
    T##vec3 T##vec4::__izz() { return T##vec3( 0, z, z ); } \
    /* Swizzler Getter Function(`izw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, z, w )` */ \
    T##vec3 T##vec4::__izw() { return T##vec3( 0, z, w ); } \
    /* Swizzler Getter Function(`izi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, z, 0 )` */ \
    T##vec3 T##vec4::__izi() { return T##vec3( 0, z, 0 ); } \
    /* Swizzler Getter Function(`iwx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, w, x )` */ \
    T##vec3 T##vec4::__iwx() { return T##vec3( 0, w, x ); } \
    /* Swizzler Getter Function(`iwy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, w, y )` */ \
    T##vec3 T##vec4::__iwy() { return T##vec3( 0, w, y ); } \
    /* Swizzler Getter Function(`iwz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, w, z )` */ \
    T##vec3 T##vec4::__iwz() { return T##vec3( 0, w, z ); } \
    /* Swizzler Getter Function(`iww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, w, w )` */ \
    T##vec3 T##vec4::__iww() { return T##vec3( 0, w, w ); } \
    /* Swizzler Getter Function(`iwi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, w, 0 )` */ \
    T##vec3 T##vec4::__iwi() { return T##vec3( 0, w, 0 ); } \
    /* Swizzler Getter Function(`iix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, 0, x )` */ \
    T##vec3 T##vec4::__iix() { return T##vec3( 0, 0, x ); } \
    /* Swizzler Getter Function(`iiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, 0, y )` */ \
    T##vec3 T##vec4::__iiy() { return T##vec3( 0, 0, y ); } \
    /* Swizzler Getter Function(`iiz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, 0, z )` */ \
    T##vec3 T##vec4::__iiz() { return T##vec3( 0, 0, z ); } \
    /* Swizzler Getter Function(`iiw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, 0, w )` */ \
    T##vec3 T##vec4::__iiw() { return T##vec3( 0, 0, w ); } \
    /* Swizzler Getter Function(`iii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec3( 0, 0, 0 )` */ \
    T##vec3 T##vec4::__iii() { return T##vec3( 0, 0, 0 ); } \
    /* Swizzler Getter Function(`xxxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, x, x )` */ \
    T##vec4 T##vec4::__xxxx() { return T##vec4( x, x, x, x ); } \
    /* Swizzler Getter Function(`xxxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, x, y )` */ \
    T##vec4 T##vec4::__xxxy() { return T##vec4( x, x, x, y ); } \
    /* Swizzler Getter Function(`xxxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, x, z )` */ \
    T##vec4 T##vec4::__xxxz() { return T##vec4( x, x, x, z ); } \
    /* Swizzler Getter Function(`xxxw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, x, w )` */ \
    T##vec4 T##vec4::__xxxw() { return T##vec4( x, x, x, w ); } \
    /* Swizzler Getter Function(`xxxi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, x, 0 )` */ \
    T##vec4 T##vec4::__xxxi() { return T##vec4( x, x, x, 0 ); } \
    /* Swizzler Getter Function(`xxyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, y, x )` */ \
    T##vec4 T##vec4::__xxyx() { return T##vec4( x, x, y, x ); } \
    /* Swizzler Getter Function(`xxyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, y, y )` */ \
    T##vec4 T##vec4::__xxyy() { return T##vec4( x, x, y, y ); } \
    /* Swizzler Getter Function(`xxyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, y, z )` */ \
    T##vec4 T##vec4::__xxyz() { return T##vec4( x, x, y, z ); } \
    /* Swizzler Getter Function(`xxyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, y, w )` */ \
    T##vec4 T##vec4::__xxyw() { return T##vec4( x, x, y, w ); } \
    /* Swizzler Getter Function(`xxyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, y, 0 )` */ \
    T##vec4 T##vec4::__xxyi() { return T##vec4( x, x, y, 0 ); } \
    /* Swizzler Getter Function(`xxzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, z, x )` */ \
    T##vec4 T##vec4::__xxzx() { return T##vec4( x, x, z, x ); } \
    /* Swizzler Getter Function(`xxzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, z, y )` */ \
    T##vec4 T##vec4::__xxzy() { return T##vec4( x, x, z, y ); } \
    /* Swizzler Getter Function(`xxzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, z, z )` */ \
    T##vec4 T##vec4::__xxzz() { return T##vec4( x, x, z, z ); } \
    /* Swizzler Getter Function(`xxzw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, z, w )` */ \
    T##vec4 T##vec4::__xxzw() { return T##vec4( x, x, z, w ); } \
    /* Swizzler Getter Function(`xxzi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, z, 0 )` */ \
    T##vec4 T##vec4::__xxzi() { return T##vec4( x, x, z, 0 ); } \
    /* Swizzler Getter Function(`xxwx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, w, x )` */ \
    T##vec4 T##vec4::__xxwx() { return T##vec4( x, x, w, x ); } \
    /* Swizzler Getter Function(`xxwy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, w, y )` */ \
    T##vec4 T##vec4::__xxwy() { return T##vec4( x, x, w, y ); } \
    /* Swizzler Getter Function(`xxwz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, w, z )` */ \
    T##vec4 T##vec4::__xxwz() { return T##vec4( x, x, w, z ); } \
    /* Swizzler Getter Function(`xxww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, w, w )` */ \
    T##vec4 T##vec4::__xxww() { return T##vec4( x, x, w, w ); } \
    /* Swizzler Getter Function(`xxwi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, w, 0 )` */ \
    T##vec4 T##vec4::__xxwi() { return T##vec4( x, x, w, 0 ); } \
    /* Swizzler Getter Function(`xxix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, 0, x )` */ \
    T##vec4 T##vec4::__xxix() { return T##vec4( x, x, 0, x ); } \
    /* Swizzler Getter Function(`xxiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, 0, y )` */ \
    T##vec4 T##vec4::__xxiy() { return T##vec4( x, x, 0, y ); } \
    /* Swizzler Getter Function(`xxiz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, 0, z )` */ \
    T##vec4 T##vec4::__xxiz() { return T##vec4( x, x, 0, z ); } \
    /* Swizzler Getter Function(`xxiw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, 0, w )` */ \
    T##vec4 T##vec4::__xxiw() { return T##vec4( x, x, 0, w ); } \
    /* Swizzler Getter Function(`xxii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, x, 0, 0 )` */ \
    T##vec4 T##vec4::__xxii() { return T##vec4( x, x, 0, 0 ); } \
    /* Swizzler Getter Function(`xyxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, x, x )` */ \
    T##vec4 T##vec4::__xyxx() { return T##vec4( x, y, x, x ); } \
    /* Swizzler Getter Function(`xyxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, x, y )` */ \
    T##vec4 T##vec4::__xyxy() { return T##vec4( x, y, x, y ); } \
    /* Swizzler Getter Function(`xyxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, x, z )` */ \
    T##vec4 T##vec4::__xyxz() { return T##vec4( x, y, x, z ); } \
    /* Swizzler Getter Function(`xyxw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, x, w )` */ \
    T##vec4 T##vec4::__xyxw() { return T##vec4( x, y, x, w ); } \
    /* Swizzler Getter Function(`xyxi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, x, 0 )` */ \
    T##vec4 T##vec4::__xyxi() { return T##vec4( x, y, x, 0 ); } \
    /* Swizzler Getter Function(`xyyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, y, x )` */ \
    T##vec4 T##vec4::__xyyx() { return T##vec4( x, y, y, x ); } \
    /* Swizzler Getter Function(`xyyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, y, y )` */ \
    T##vec4 T##vec4::__xyyy() { return T##vec4( x, y, y, y ); } \
    /* Swizzler Getter Function(`xyyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, y, z )` */ \
    T##vec4 T##vec4::__xyyz() { return T##vec4( x, y, y, z ); } \
    /* Swizzler Getter Function(`xyyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, y, w )` */ \
    T##vec4 T##vec4::__xyyw() { return T##vec4( x, y, y, w ); } \
    /* Swizzler Getter Function(`xyyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, y, 0 )` */ \
    T##vec4 T##vec4::__xyyi() { return T##vec4( x, y, y, 0 ); } \
    /* Swizzler Getter Function(`xyzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, z, x )` */ \
    T##vec4 T##vec4::__xyzx() { return T##vec4( x, y, z, x ); } \
    /* Swizzler Getter Function(`xyzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, z, y )` */ \
    T##vec4 T##vec4::__xyzy() { return T##vec4( x, y, z, y ); } \
    /* Swizzler Getter Function(`xyzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, z, z )` */ \
    T##vec4 T##vec4::__xyzz() { return T##vec4( x, y, z, z ); } \
    /* Swizzler Getter Function(`xyzw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, z, w )` */ \
    T##vec4 T##vec4::__xyzw() { return T##vec4( x, y, z, w ); } \
    /* Swizzler Getter Function(`xyzi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, z, 0 )` */ \
    T##vec4 T##vec4::__xyzi() { return T##vec4( x, y, z, 0 ); } \
    /* Swizzler Getter Function(`xywx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, w, x )` */ \
    T##vec4 T##vec4::__xywx() { return T##vec4( x, y, w, x ); } \
    /* Swizzler Getter Function(`xywy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, w, y )` */ \
    T##vec4 T##vec4::__xywy() { return T##vec4( x, y, w, y ); } \
    /* Swizzler Getter Function(`xywz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, w, z )` */ \
    T##vec4 T##vec4::__xywz() { return T##vec4( x, y, w, z ); } \
    /* Swizzler Getter Function(`xyww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, w, w )` */ \
    T##vec4 T##vec4::__xyww() { return T##vec4( x, y, w, w ); } \
    /* Swizzler Getter Function(`xywi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, w, 0 )` */ \
    T##vec4 T##vec4::__xywi() { return T##vec4( x, y, w, 0 ); } \
    /* Swizzler Getter Function(`xyix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, 0, x )` */ \
    T##vec4 T##vec4::__xyix() { return T##vec4( x, y, 0, x ); } \
    /* Swizzler Getter Function(`xyiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, 0, y )` */ \
    T##vec4 T##vec4::__xyiy() { return T##vec4( x, y, 0, y ); } \
    /* Swizzler Getter Function(`xyiz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, 0, z )` */ \
    T##vec4 T##vec4::__xyiz() { return T##vec4( x, y, 0, z ); } \
    /* Swizzler Getter Function(`xyiw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, 0, w )` */ \
    T##vec4 T##vec4::__xyiw() { return T##vec4( x, y, 0, w ); } \
    /* Swizzler Getter Function(`xyii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, y, 0, 0 )` */ \
    T##vec4 T##vec4::__xyii() { return T##vec4( x, y, 0, 0 ); } \
    /* Swizzler Getter Function(`xzxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, z, x, x )` */ \
    T##vec4 T##vec4::__xzxx() { return T##vec4( x, z, x, x ); } \
    /* Swizzler Getter Function(`xzxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, z, x, y )` */ \
    T##vec4 T##vec4::__xzxy() { return T##vec4( x, z, x, y ); } \
    /* Swizzler Getter Function(`xzxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, z, x, z )` */ \
    T##vec4 T##vec4::__xzxz() { return T##vec4( x, z, x, z ); } \
    /* Swizzler Getter Function(`xzxw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, z, x, w )` */ \
    T##vec4 T##vec4::__xzxw() { return T##vec4( x, z, x, w ); } \
    /* Swizzler Getter Function(`xzxi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, z, x, 0 )` */ \
    T##vec4 T##vec4::__xzxi() { return T##vec4( x, z, x, 0 ); } \
    /* Swizzler Getter Function(`xzyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, z, y, x )` */ \
    T##vec4 T##vec4::__xzyx() { return T##vec4( x, z, y, x ); } \
    /* Swizzler Getter Function(`xzyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, z, y, y )` */ \
    T##vec4 T##vec4::__xzyy() { return T##vec4( x, z, y, y ); } \
    /* Swizzler Getter Function(`xzyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, z, y, z )` */ \
    T##vec4 T##vec4::__xzyz() { return T##vec4( x, z, y, z ); } \
    /* Swizzler Getter Function(`xzyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, z, y, w )` */ \
    T##vec4 T##vec4::__xzyw() { return T##vec4( x, z, y, w ); } \
    /* Swizzler Getter Function(`xzyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, z, y, 0 )` */ \
    T##vec4 T##vec4::__xzyi() { return T##vec4( x, z, y, 0 ); } \
    /* Swizzler Getter Function(`xzzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, z, z, x )` */ \
    T##vec4 T##vec4::__xzzx() { return T##vec4( x, z, z, x ); } \
    /* Swizzler Getter Function(`xzzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, z, z, y )` */ \
    T##vec4 T##vec4::__xzzy() { return T##vec4( x, z, z, y ); } \
    /* Swizzler Getter Function(`xzzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, z, z, z )` */ \
    T##vec4 T##vec4::__xzzz() { return T##vec4( x, z, z, z ); } \
    /* Swizzler Getter Function(`xzzw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, z, z, w )` */ \
    T##vec4 T##vec4::__xzzw() { return T##vec4( x, z, z, w ); } \
    /* Swizzler Getter Function(`xzzi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, z, z, 0 )` */ \
    T##vec4 T##vec4::__xzzi() { return T##vec4( x, z, z, 0 ); } \
    /* Swizzler Getter Function(`xzwx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, z, w, x )` */ \
    T##vec4 T##vec4::__xzwx() { return T##vec4( x, z, w, x ); } \
    /* Swizzler Getter Function(`xzwy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, z, w, y )` */ \
    T##vec4 T##vec4::__xzwy() { return T##vec4( x, z, w, y ); } \
    /* Swizzler Getter Function(`xzwz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, z, w, z )` */ \
    T##vec4 T##vec4::__xzwz() { return T##vec4( x, z, w, z ); } \
    /* Swizzler Getter Function(`xzww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, z, w, w )` */ \
    T##vec4 T##vec4::__xzww() { return T##vec4( x, z, w, w ); } \
    /* Swizzler Getter Function(`xzwi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, z, w, 0 )` */ \
    T##vec4 T##vec4::__xzwi() { return T##vec4( x, z, w, 0 ); } \
    /* Swizzler Getter Function(`xzix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, z, 0, x )` */ \
    T##vec4 T##vec4::__xzix() { return T##vec4( x, z, 0, x ); } \
    /* Swizzler Getter Function(`xziy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, z, 0, y )` */ \
    T##vec4 T##vec4::__xziy() { return T##vec4( x, z, 0, y ); } \
    /* Swizzler Getter Function(`xziz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, z, 0, z )` */ \
    T##vec4 T##vec4::__xziz() { return T##vec4( x, z, 0, z ); } \
    /* Swizzler Getter Function(`xziw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, z, 0, w )` */ \
    T##vec4 T##vec4::__xziw() { return T##vec4( x, z, 0, w ); } \
    /* Swizzler Getter Function(`xzii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, z, 0, 0 )` */ \
    T##vec4 T##vec4::__xzii() { return T##vec4( x, z, 0, 0 ); } \
    /* Swizzler Getter Function(`xwxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, w, x, x )` */ \
    T##vec4 T##vec4::__xwxx() { return T##vec4( x, w, x, x ); } \
    /* Swizzler Getter Function(`xwxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, w, x, y )` */ \
    T##vec4 T##vec4::__xwxy() { return T##vec4( x, w, x, y ); } \
    /* Swizzler Getter Function(`xwxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, w, x, z )` */ \
    T##vec4 T##vec4::__xwxz() { return T##vec4( x, w, x, z ); } \
    /* Swizzler Getter Function(`xwxw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, w, x, w )` */ \
    T##vec4 T##vec4::__xwxw() { return T##vec4( x, w, x, w ); } \
    /* Swizzler Getter Function(`xwxi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, w, x, 0 )` */ \
    T##vec4 T##vec4::__xwxi() { return T##vec4( x, w, x, 0 ); } \
    /* Swizzler Getter Function(`xwyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, w, y, x )` */ \
    T##vec4 T##vec4::__xwyx() { return T##vec4( x, w, y, x ); } \
    /* Swizzler Getter Function(`xwyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, w, y, y )` */ \
    T##vec4 T##vec4::__xwyy() { return T##vec4( x, w, y, y ); } \
    /* Swizzler Getter Function(`xwyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, w, y, z )` */ \
    T##vec4 T##vec4::__xwyz() { return T##vec4( x, w, y, z ); } \
    /* Swizzler Getter Function(`xwyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, w, y, w )` */ \
    T##vec4 T##vec4::__xwyw() { return T##vec4( x, w, y, w ); } \
    /* Swizzler Getter Function(`xwyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, w, y, 0 )` */ \
    T##vec4 T##vec4::__xwyi() { return T##vec4( x, w, y, 0 ); } \
    /* Swizzler Getter Function(`xwzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, w, z, x )` */ \
    T##vec4 T##vec4::__xwzx() { return T##vec4( x, w, z, x ); } \
    /* Swizzler Getter Function(`xwzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, w, z, y )` */ \
    T##vec4 T##vec4::__xwzy() { return T##vec4( x, w, z, y ); } \
    /* Swizzler Getter Function(`xwzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, w, z, z )` */ \
    T##vec4 T##vec4::__xwzz() { return T##vec4( x, w, z, z ); } \
    /* Swizzler Getter Function(`xwzw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, w, z, w )` */ \
    T##vec4 T##vec4::__xwzw() { return T##vec4( x, w, z, w ); } \
    /* Swizzler Getter Function(`xwzi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, w, z, 0 )` */ \
    T##vec4 T##vec4::__xwzi() { return T##vec4( x, w, z, 0 ); } \
    /* Swizzler Getter Function(`xwwx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, w, w, x )` */ \
    T##vec4 T##vec4::__xwwx() { return T##vec4( x, w, w, x ); } \
    /* Swizzler Getter Function(`xwwy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, w, w, y )` */ \
    T##vec4 T##vec4::__xwwy() { return T##vec4( x, w, w, y ); } \
    /* Swizzler Getter Function(`xwwz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, w, w, z )` */ \
    T##vec4 T##vec4::__xwwz() { return T##vec4( x, w, w, z ); } \
    /* Swizzler Getter Function(`xwww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, w, w, w )` */ \
    T##vec4 T##vec4::__xwww() { return T##vec4( x, w, w, w ); } \
    /* Swizzler Getter Function(`xwwi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, w, w, 0 )` */ \
    T##vec4 T##vec4::__xwwi() { return T##vec4( x, w, w, 0 ); } \
    /* Swizzler Getter Function(`xwix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, w, 0, x )` */ \
    T##vec4 T##vec4::__xwix() { return T##vec4( x, w, 0, x ); } \
    /* Swizzler Getter Function(`xwiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, w, 0, y )` */ \
    T##vec4 T##vec4::__xwiy() { return T##vec4( x, w, 0, y ); } \
    /* Swizzler Getter Function(`xwiz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, w, 0, z )` */ \
    T##vec4 T##vec4::__xwiz() { return T##vec4( x, w, 0, z ); } \
    /* Swizzler Getter Function(`xwiw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, w, 0, w )` */ \
    T##vec4 T##vec4::__xwiw() { return T##vec4( x, w, 0, w ); } \
    /* Swizzler Getter Function(`xwii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, w, 0, 0 )` */ \
    T##vec4 T##vec4::__xwii() { return T##vec4( x, w, 0, 0 ); } \
    /* Swizzler Getter Function(`xixx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, x, x )` */ \
    T##vec4 T##vec4::__xixx() { return T##vec4( x, 0, x, x ); } \
    /* Swizzler Getter Function(`xixy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, x, y )` */ \
    T##vec4 T##vec4::__xixy() { return T##vec4( x, 0, x, y ); } \
    /* Swizzler Getter Function(`xixz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, x, z )` */ \
    T##vec4 T##vec4::__xixz() { return T##vec4( x, 0, x, z ); } \
    /* Swizzler Getter Function(`xixw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, x, w )` */ \
    T##vec4 T##vec4::__xixw() { return T##vec4( x, 0, x, w ); } \
    /* Swizzler Getter Function(`xixi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, x, 0 )` */ \
    T##vec4 T##vec4::__xixi() { return T##vec4( x, 0, x, 0 ); } \
    /* Swizzler Getter Function(`xiyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, y, x )` */ \
    T##vec4 T##vec4::__xiyx() { return T##vec4( x, 0, y, x ); } \
    /* Swizzler Getter Function(`xiyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, y, y )` */ \
    T##vec4 T##vec4::__xiyy() { return T##vec4( x, 0, y, y ); } \
    /* Swizzler Getter Function(`xiyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, y, z )` */ \
    T##vec4 T##vec4::__xiyz() { return T##vec4( x, 0, y, z ); } \
    /* Swizzler Getter Function(`xiyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, y, w )` */ \
    T##vec4 T##vec4::__xiyw() { return T##vec4( x, 0, y, w ); } \
    /* Swizzler Getter Function(`xiyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, y, 0 )` */ \
    T##vec4 T##vec4::__xiyi() { return T##vec4( x, 0, y, 0 ); } \
    /* Swizzler Getter Function(`xizx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, z, x )` */ \
    T##vec4 T##vec4::__xizx() { return T##vec4( x, 0, z, x ); } \
    /* Swizzler Getter Function(`xizy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, z, y )` */ \
    T##vec4 T##vec4::__xizy() { return T##vec4( x, 0, z, y ); } \
    /* Swizzler Getter Function(`xizz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, z, z )` */ \
    T##vec4 T##vec4::__xizz() { return T##vec4( x, 0, z, z ); } \
    /* Swizzler Getter Function(`xizw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, z, w )` */ \
    T##vec4 T##vec4::__xizw() { return T##vec4( x, 0, z, w ); } \
    /* Swizzler Getter Function(`xizi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, z, 0 )` */ \
    T##vec4 T##vec4::__xizi() { return T##vec4( x, 0, z, 0 ); } \
    /* Swizzler Getter Function(`xiwx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, w, x )` */ \
    T##vec4 T##vec4::__xiwx() { return T##vec4( x, 0, w, x ); } \
    /* Swizzler Getter Function(`xiwy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, w, y )` */ \
    T##vec4 T##vec4::__xiwy() { return T##vec4( x, 0, w, y ); } \
    /* Swizzler Getter Function(`xiwz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, w, z )` */ \
    T##vec4 T##vec4::__xiwz() { return T##vec4( x, 0, w, z ); } \
    /* Swizzler Getter Function(`xiww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, w, w )` */ \
    T##vec4 T##vec4::__xiww() { return T##vec4( x, 0, w, w ); } \
    /* Swizzler Getter Function(`xiwi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, w, 0 )` */ \
    T##vec4 T##vec4::__xiwi() { return T##vec4( x, 0, w, 0 ); } \
    /* Swizzler Getter Function(`xiix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, 0, x )` */ \
    T##vec4 T##vec4::__xiix() { return T##vec4( x, 0, 0, x ); } \
    /* Swizzler Getter Function(`xiiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, 0, y )` */ \
    T##vec4 T##vec4::__xiiy() { return T##vec4( x, 0, 0, y ); } \
    /* Swizzler Getter Function(`xiiz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, 0, z )` */ \
    T##vec4 T##vec4::__xiiz() { return T##vec4( x, 0, 0, z ); } \
    /* Swizzler Getter Function(`xiiw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, 0, w )` */ \
    T##vec4 T##vec4::__xiiw() { return T##vec4( x, 0, 0, w ); } \
    /* Swizzler Getter Function(`xiii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( x, 0, 0, 0 )` */ \
    T##vec4 T##vec4::__xiii() { return T##vec4( x, 0, 0, 0 ); } \
    /* Swizzler Getter Function(`yxxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, x, x )` */ \
    T##vec4 T##vec4::__yxxx() { return T##vec4( y, x, x, x ); } \
    /* Swizzler Getter Function(`yxxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, x, y )` */ \
    T##vec4 T##vec4::__yxxy() { return T##vec4( y, x, x, y ); } \
    /* Swizzler Getter Function(`yxxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, x, z )` */ \
    T##vec4 T##vec4::__yxxz() { return T##vec4( y, x, x, z ); } \
    /* Swizzler Getter Function(`yxxw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, x, w )` */ \
    T##vec4 T##vec4::__yxxw() { return T##vec4( y, x, x, w ); } \
    /* Swizzler Getter Function(`yxxi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, x, 0 )` */ \
    T##vec4 T##vec4::__yxxi() { return T##vec4( y, x, x, 0 ); } \
    /* Swizzler Getter Function(`yxyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, y, x )` */ \
    T##vec4 T##vec4::__yxyx() { return T##vec4( y, x, y, x ); } \
    /* Swizzler Getter Function(`yxyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, y, y )` */ \
    T##vec4 T##vec4::__yxyy() { return T##vec4( y, x, y, y ); } \
    /* Swizzler Getter Function(`yxyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, y, z )` */ \
    T##vec4 T##vec4::__yxyz() { return T##vec4( y, x, y, z ); } \
    /* Swizzler Getter Function(`yxyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, y, w )` */ \
    T##vec4 T##vec4::__yxyw() { return T##vec4( y, x, y, w ); } \
    /* Swizzler Getter Function(`yxyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, y, 0 )` */ \
    T##vec4 T##vec4::__yxyi() { return T##vec4( y, x, y, 0 ); } \
    /* Swizzler Getter Function(`yxzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, z, x )` */ \
    T##vec4 T##vec4::__yxzx() { return T##vec4( y, x, z, x ); } \
    /* Swizzler Getter Function(`yxzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, z, y )` */ \
    T##vec4 T##vec4::__yxzy() { return T##vec4( y, x, z, y ); } \
    /* Swizzler Getter Function(`yxzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, z, z )` */ \
    T##vec4 T##vec4::__yxzz() { return T##vec4( y, x, z, z ); } \
    /* Swizzler Getter Function(`yxzw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, z, w )` */ \
    T##vec4 T##vec4::__yxzw() { return T##vec4( y, x, z, w ); } \
    /* Swizzler Getter Function(`yxzi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, z, 0 )` */ \
    T##vec4 T##vec4::__yxzi() { return T##vec4( y, x, z, 0 ); } \
    /* Swizzler Getter Function(`yxwx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, w, x )` */ \
    T##vec4 T##vec4::__yxwx() { return T##vec4( y, x, w, x ); } \
    /* Swizzler Getter Function(`yxwy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, w, y )` */ \
    T##vec4 T##vec4::__yxwy() { return T##vec4( y, x, w, y ); } \
    /* Swizzler Getter Function(`yxwz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, w, z )` */ \
    T##vec4 T##vec4::__yxwz() { return T##vec4( y, x, w, z ); } \
    /* Swizzler Getter Function(`yxww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, w, w )` */ \
    T##vec4 T##vec4::__yxww() { return T##vec4( y, x, w, w ); } \
    /* Swizzler Getter Function(`yxwi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, w, 0 )` */ \
    T##vec4 T##vec4::__yxwi() { return T##vec4( y, x, w, 0 ); } \
    /* Swizzler Getter Function(`yxix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, 0, x )` */ \
    T##vec4 T##vec4::__yxix() { return T##vec4( y, x, 0, x ); } \
    /* Swizzler Getter Function(`yxiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, 0, y )` */ \
    T##vec4 T##vec4::__yxiy() { return T##vec4( y, x, 0, y ); } \
    /* Swizzler Getter Function(`yxiz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, 0, z )` */ \
    T##vec4 T##vec4::__yxiz() { return T##vec4( y, x, 0, z ); } \
    /* Swizzler Getter Function(`yxiw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, 0, w )` */ \
    T##vec4 T##vec4::__yxiw() { return T##vec4( y, x, 0, w ); } \
    /* Swizzler Getter Function(`yxii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, x, 0, 0 )` */ \
    T##vec4 T##vec4::__yxii() { return T##vec4( y, x, 0, 0 ); } \
    /* Swizzler Getter Function(`yyxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, x, x )` */ \
    T##vec4 T##vec4::__yyxx() { return T##vec4( y, y, x, x ); } \
    /* Swizzler Getter Function(`yyxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, x, y )` */ \
    T##vec4 T##vec4::__yyxy() { return T##vec4( y, y, x, y ); } \
    /* Swizzler Getter Function(`yyxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, x, z )` */ \
    T##vec4 T##vec4::__yyxz() { return T##vec4( y, y, x, z ); } \
    /* Swizzler Getter Function(`yyxw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, x, w )` */ \
    T##vec4 T##vec4::__yyxw() { return T##vec4( y, y, x, w ); } \
    /* Swizzler Getter Function(`yyxi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, x, 0 )` */ \
    T##vec4 T##vec4::__yyxi() { return T##vec4( y, y, x, 0 ); } \
    /* Swizzler Getter Function(`yyyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, y, x )` */ \
    T##vec4 T##vec4::__yyyx() { return T##vec4( y, y, y, x ); } \
    /* Swizzler Getter Function(`yyyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, y, y )` */ \
    T##vec4 T##vec4::__yyyy() { return T##vec4( y, y, y, y ); } \
    /* Swizzler Getter Function(`yyyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, y, z )` */ \
    T##vec4 T##vec4::__yyyz() { return T##vec4( y, y, y, z ); } \
    /* Swizzler Getter Function(`yyyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, y, w )` */ \
    T##vec4 T##vec4::__yyyw() { return T##vec4( y, y, y, w ); } \
    /* Swizzler Getter Function(`yyyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, y, 0 )` */ \
    T##vec4 T##vec4::__yyyi() { return T##vec4( y, y, y, 0 ); } \
    /* Swizzler Getter Function(`yyzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, z, x )` */ \
    T##vec4 T##vec4::__yyzx() { return T##vec4( y, y, z, x ); } \
    /* Swizzler Getter Function(`yyzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, z, y )` */ \
    T##vec4 T##vec4::__yyzy() { return T##vec4( y, y, z, y ); } \
    /* Swizzler Getter Function(`yyzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, z, z )` */ \
    T##vec4 T##vec4::__yyzz() { return T##vec4( y, y, z, z ); } \
    /* Swizzler Getter Function(`yyzw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, z, w )` */ \
    T##vec4 T##vec4::__yyzw() { return T##vec4( y, y, z, w ); } \
    /* Swizzler Getter Function(`yyzi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, z, 0 )` */ \
    T##vec4 T##vec4::__yyzi() { return T##vec4( y, y, z, 0 ); } \
    /* Swizzler Getter Function(`yywx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, w, x )` */ \
    T##vec4 T##vec4::__yywx() { return T##vec4( y, y, w, x ); } \
    /* Swizzler Getter Function(`yywy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, w, y )` */ \
    T##vec4 T##vec4::__yywy() { return T##vec4( y, y, w, y ); } \
    /* Swizzler Getter Function(`yywz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, w, z )` */ \
    T##vec4 T##vec4::__yywz() { return T##vec4( y, y, w, z ); } \
    /* Swizzler Getter Function(`yyww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, w, w )` */ \
    T##vec4 T##vec4::__yyww() { return T##vec4( y, y, w, w ); } \
    /* Swizzler Getter Function(`yywi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, w, 0 )` */ \
    T##vec4 T##vec4::__yywi() { return T##vec4( y, y, w, 0 ); } \
    /* Swizzler Getter Function(`yyix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, 0, x )` */ \
    T##vec4 T##vec4::__yyix() { return T##vec4( y, y, 0, x ); } \
    /* Swizzler Getter Function(`yyiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, 0, y )` */ \
    T##vec4 T##vec4::__yyiy() { return T##vec4( y, y, 0, y ); } \
    /* Swizzler Getter Function(`yyiz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, 0, z )` */ \
    T##vec4 T##vec4::__yyiz() { return T##vec4( y, y, 0, z ); } \
    /* Swizzler Getter Function(`yyiw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, 0, w )` */ \
    T##vec4 T##vec4::__yyiw() { return T##vec4( y, y, 0, w ); } \
    /* Swizzler Getter Function(`yyii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, y, 0, 0 )` */ \
    T##vec4 T##vec4::__yyii() { return T##vec4( y, y, 0, 0 ); } \
    /* Swizzler Getter Function(`yzxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, z, x, x )` */ \
    T##vec4 T##vec4::__yzxx() { return T##vec4( y, z, x, x ); } \
    /* Swizzler Getter Function(`yzxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, z, x, y )` */ \
    T##vec4 T##vec4::__yzxy() { return T##vec4( y, z, x, y ); } \
    /* Swizzler Getter Function(`yzxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, z, x, z )` */ \
    T##vec4 T##vec4::__yzxz() { return T##vec4( y, z, x, z ); } \
    /* Swizzler Getter Function(`yzxw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, z, x, w )` */ \
    T##vec4 T##vec4::__yzxw() { return T##vec4( y, z, x, w ); } \
    /* Swizzler Getter Function(`yzxi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, z, x, 0 )` */ \
    T##vec4 T##vec4::__yzxi() { return T##vec4( y, z, x, 0 ); } \
    /* Swizzler Getter Function(`yzyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, z, y, x )` */ \
    T##vec4 T##vec4::__yzyx() { return T##vec4( y, z, y, x ); } \
    /* Swizzler Getter Function(`yzyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, z, y, y )` */ \
    T##vec4 T##vec4::__yzyy() { return T##vec4( y, z, y, y ); } \
    /* Swizzler Getter Function(`yzyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, z, y, z )` */ \
    T##vec4 T##vec4::__yzyz() { return T##vec4( y, z, y, z ); } \
    /* Swizzler Getter Function(`yzyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, z, y, w )` */ \
    T##vec4 T##vec4::__yzyw() { return T##vec4( y, z, y, w ); } \
    /* Swizzler Getter Function(`yzyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, z, y, 0 )` */ \
    T##vec4 T##vec4::__yzyi() { return T##vec4( y, z, y, 0 ); } \
    /* Swizzler Getter Function(`yzzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, z, z, x )` */ \
    T##vec4 T##vec4::__yzzx() { return T##vec4( y, z, z, x ); } \
    /* Swizzler Getter Function(`yzzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, z, z, y )` */ \
    T##vec4 T##vec4::__yzzy() { return T##vec4( y, z, z, y ); } \
    /* Swizzler Getter Function(`yzzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, z, z, z )` */ \
    T##vec4 T##vec4::__yzzz() { return T##vec4( y, z, z, z ); } \
    /* Swizzler Getter Function(`yzzw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, z, z, w )` */ \
    T##vec4 T##vec4::__yzzw() { return T##vec4( y, z, z, w ); } \
    /* Swizzler Getter Function(`yzzi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, z, z, 0 )` */ \
    T##vec4 T##vec4::__yzzi() { return T##vec4( y, z, z, 0 ); } \
    /* Swizzler Getter Function(`yzwx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, z, w, x )` */ \
    T##vec4 T##vec4::__yzwx() { return T##vec4( y, z, w, x ); } \
    /* Swizzler Getter Function(`yzwy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, z, w, y )` */ \
    T##vec4 T##vec4::__yzwy() { return T##vec4( y, z, w, y ); } \
    /* Swizzler Getter Function(`yzwz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, z, w, z )` */ \
    T##vec4 T##vec4::__yzwz() { return T##vec4( y, z, w, z ); } \
    /* Swizzler Getter Function(`yzww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, z, w, w )` */ \
    T##vec4 T##vec4::__yzww() { return T##vec4( y, z, w, w ); } \
    /* Swizzler Getter Function(`yzwi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, z, w, 0 )` */ \
    T##vec4 T##vec4::__yzwi() { return T##vec4( y, z, w, 0 ); } \
    /* Swizzler Getter Function(`yzix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, z, 0, x )` */ \
    T##vec4 T##vec4::__yzix() { return T##vec4( y, z, 0, x ); } \
    /* Swizzler Getter Function(`yziy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, z, 0, y )` */ \
    T##vec4 T##vec4::__yziy() { return T##vec4( y, z, 0, y ); } \
    /* Swizzler Getter Function(`yziz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, z, 0, z )` */ \
    T##vec4 T##vec4::__yziz() { return T##vec4( y, z, 0, z ); } \
    /* Swizzler Getter Function(`yziw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, z, 0, w )` */ \
    T##vec4 T##vec4::__yziw() { return T##vec4( y, z, 0, w ); } \
    /* Swizzler Getter Function(`yzii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, z, 0, 0 )` */ \
    T##vec4 T##vec4::__yzii() { return T##vec4( y, z, 0, 0 ); } \
    /* Swizzler Getter Function(`ywxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, w, x, x )` */ \
    T##vec4 T##vec4::__ywxx() { return T##vec4( y, w, x, x ); } \
    /* Swizzler Getter Function(`ywxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, w, x, y )` */ \
    T##vec4 T##vec4::__ywxy() { return T##vec4( y, w, x, y ); } \
    /* Swizzler Getter Function(`ywxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, w, x, z )` */ \
    T##vec4 T##vec4::__ywxz() { return T##vec4( y, w, x, z ); } \
    /* Swizzler Getter Function(`ywxw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, w, x, w )` */ \
    T##vec4 T##vec4::__ywxw() { return T##vec4( y, w, x, w ); } \
    /* Swizzler Getter Function(`ywxi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, w, x, 0 )` */ \
    T##vec4 T##vec4::__ywxi() { return T##vec4( y, w, x, 0 ); } \
    /* Swizzler Getter Function(`ywyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, w, y, x )` */ \
    T##vec4 T##vec4::__ywyx() { return T##vec4( y, w, y, x ); } \
    /* Swizzler Getter Function(`ywyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, w, y, y )` */ \
    T##vec4 T##vec4::__ywyy() { return T##vec4( y, w, y, y ); } \
    /* Swizzler Getter Function(`ywyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, w, y, z )` */ \
    T##vec4 T##vec4::__ywyz() { return T##vec4( y, w, y, z ); } \
    /* Swizzler Getter Function(`ywyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, w, y, w )` */ \
    T##vec4 T##vec4::__ywyw() { return T##vec4( y, w, y, w ); } \
    /* Swizzler Getter Function(`ywyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, w, y, 0 )` */ \
    T##vec4 T##vec4::__ywyi() { return T##vec4( y, w, y, 0 ); } \
    /* Swizzler Getter Function(`ywzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, w, z, x )` */ \
    T##vec4 T##vec4::__ywzx() { return T##vec4( y, w, z, x ); } \
    /* Swizzler Getter Function(`ywzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, w, z, y )` */ \
    T##vec4 T##vec4::__ywzy() { return T##vec4( y, w, z, y ); } \
    /* Swizzler Getter Function(`ywzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, w, z, z )` */ \
    T##vec4 T##vec4::__ywzz() { return T##vec4( y, w, z, z ); } \
    /* Swizzler Getter Function(`ywzw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, w, z, w )` */ \
    T##vec4 T##vec4::__ywzw() { return T##vec4( y, w, z, w ); } \
    /* Swizzler Getter Function(`ywzi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, w, z, 0 )` */ \
    T##vec4 T##vec4::__ywzi() { return T##vec4( y, w, z, 0 ); } \
    /* Swizzler Getter Function(`ywwx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, w, w, x )` */ \
    T##vec4 T##vec4::__ywwx() { return T##vec4( y, w, w, x ); } \
    /* Swizzler Getter Function(`ywwy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, w, w, y )` */ \
    T##vec4 T##vec4::__ywwy() { return T##vec4( y, w, w, y ); } \
    /* Swizzler Getter Function(`ywwz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, w, w, z )` */ \
    T##vec4 T##vec4::__ywwz() { return T##vec4( y, w, w, z ); } \
    /* Swizzler Getter Function(`ywww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, w, w, w )` */ \
    T##vec4 T##vec4::__ywww() { return T##vec4( y, w, w, w ); } \
    /* Swizzler Getter Function(`ywwi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, w, w, 0 )` */ \
    T##vec4 T##vec4::__ywwi() { return T##vec4( y, w, w, 0 ); } \
    /* Swizzler Getter Function(`ywix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, w, 0, x )` */ \
    T##vec4 T##vec4::__ywix() { return T##vec4( y, w, 0, x ); } \
    /* Swizzler Getter Function(`ywiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, w, 0, y )` */ \
    T##vec4 T##vec4::__ywiy() { return T##vec4( y, w, 0, y ); } \
    /* Swizzler Getter Function(`ywiz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, w, 0, z )` */ \
    T##vec4 T##vec4::__ywiz() { return T##vec4( y, w, 0, z ); } \
    /* Swizzler Getter Function(`ywiw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, w, 0, w )` */ \
    T##vec4 T##vec4::__ywiw() { return T##vec4( y, w, 0, w ); } \
    /* Swizzler Getter Function(`ywii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, w, 0, 0 )` */ \
    T##vec4 T##vec4::__ywii() { return T##vec4( y, w, 0, 0 ); } \
    /* Swizzler Getter Function(`yixx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, x, x )` */ \
    T##vec4 T##vec4::__yixx() { return T##vec4( y, 0, x, x ); } \
    /* Swizzler Getter Function(`yixy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, x, y )` */ \
    T##vec4 T##vec4::__yixy() { return T##vec4( y, 0, x, y ); } \
    /* Swizzler Getter Function(`yixz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, x, z )` */ \
    T##vec4 T##vec4::__yixz() { return T##vec4( y, 0, x, z ); } \
    /* Swizzler Getter Function(`yixw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, x, w )` */ \
    T##vec4 T##vec4::__yixw() { return T##vec4( y, 0, x, w ); } \
    /* Swizzler Getter Function(`yixi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, x, 0 )` */ \
    T##vec4 T##vec4::__yixi() { return T##vec4( y, 0, x, 0 ); } \
    /* Swizzler Getter Function(`yiyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, y, x )` */ \
    T##vec4 T##vec4::__yiyx() { return T##vec4( y, 0, y, x ); } \
    /* Swizzler Getter Function(`yiyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, y, y )` */ \
    T##vec4 T##vec4::__yiyy() { return T##vec4( y, 0, y, y ); } \
    /* Swizzler Getter Function(`yiyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, y, z )` */ \
    T##vec4 T##vec4::__yiyz() { return T##vec4( y, 0, y, z ); } \
    /* Swizzler Getter Function(`yiyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, y, w )` */ \
    T##vec4 T##vec4::__yiyw() { return T##vec4( y, 0, y, w ); } \
    /* Swizzler Getter Function(`yiyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, y, 0 )` */ \
    T##vec4 T##vec4::__yiyi() { return T##vec4( y, 0, y, 0 ); } \
    /* Swizzler Getter Function(`yizx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, z, x )` */ \
    T##vec4 T##vec4::__yizx() { return T##vec4( y, 0, z, x ); } \
    /* Swizzler Getter Function(`yizy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, z, y )` */ \
    T##vec4 T##vec4::__yizy() { return T##vec4( y, 0, z, y ); } \
    /* Swizzler Getter Function(`yizz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, z, z )` */ \
    T##vec4 T##vec4::__yizz() { return T##vec4( y, 0, z, z ); } \
    /* Swizzler Getter Function(`yizw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, z, w )` */ \
    T##vec4 T##vec4::__yizw() { return T##vec4( y, 0, z, w ); } \
    /* Swizzler Getter Function(`yizi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, z, 0 )` */ \
    T##vec4 T##vec4::__yizi() { return T##vec4( y, 0, z, 0 ); } \
    /* Swizzler Getter Function(`yiwx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, w, x )` */ \
    T##vec4 T##vec4::__yiwx() { return T##vec4( y, 0, w, x ); } \
    /* Swizzler Getter Function(`yiwy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, w, y )` */ \
    T##vec4 T##vec4::__yiwy() { return T##vec4( y, 0, w, y ); } \
    /* Swizzler Getter Function(`yiwz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, w, z )` */ \
    T##vec4 T##vec4::__yiwz() { return T##vec4( y, 0, w, z ); } \
    /* Swizzler Getter Function(`yiww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, w, w )` */ \
    T##vec4 T##vec4::__yiww() { return T##vec4( y, 0, w, w ); } \
    /* Swizzler Getter Function(`yiwi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, w, 0 )` */ \
    T##vec4 T##vec4::__yiwi() { return T##vec4( y, 0, w, 0 ); } \
    /* Swizzler Getter Function(`yiix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, 0, x )` */ \
    T##vec4 T##vec4::__yiix() { return T##vec4( y, 0, 0, x ); } \
    /* Swizzler Getter Function(`yiiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, 0, y )` */ \
    T##vec4 T##vec4::__yiiy() { return T##vec4( y, 0, 0, y ); } \
    /* Swizzler Getter Function(`yiiz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, 0, z )` */ \
    T##vec4 T##vec4::__yiiz() { return T##vec4( y, 0, 0, z ); } \
    /* Swizzler Getter Function(`yiiw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, 0, w )` */ \
    T##vec4 T##vec4::__yiiw() { return T##vec4( y, 0, 0, w ); } \
    /* Swizzler Getter Function(`yiii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( y, 0, 0, 0 )` */ \
    T##vec4 T##vec4::__yiii() { return T##vec4( y, 0, 0, 0 ); } \
    /* Swizzler Getter Function(`zxxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, x, x, x )` */ \
    T##vec4 T##vec4::__zxxx() { return T##vec4( z, x, x, x ); } \
    /* Swizzler Getter Function(`zxxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, x, x, y )` */ \
    T##vec4 T##vec4::__zxxy() { return T##vec4( z, x, x, y ); } \
    /* Swizzler Getter Function(`zxxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, x, x, z )` */ \
    T##vec4 T##vec4::__zxxz() { return T##vec4( z, x, x, z ); } \
    /* Swizzler Getter Function(`zxxw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, x, x, w )` */ \
    T##vec4 T##vec4::__zxxw() { return T##vec4( z, x, x, w ); } \
    /* Swizzler Getter Function(`zxxi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, x, x, 0 )` */ \
    T##vec4 T##vec4::__zxxi() { return T##vec4( z, x, x, 0 ); } \
    /* Swizzler Getter Function(`zxyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, x, y, x )` */ \
    T##vec4 T##vec4::__zxyx() { return T##vec4( z, x, y, x ); } \
    /* Swizzler Getter Function(`zxyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, x, y, y )` */ \
    T##vec4 T##vec4::__zxyy() { return T##vec4( z, x, y, y ); } \
    /* Swizzler Getter Function(`zxyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, x, y, z )` */ \
    T##vec4 T##vec4::__zxyz() { return T##vec4( z, x, y, z ); } \
    /* Swizzler Getter Function(`zxyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, x, y, w )` */ \
    T##vec4 T##vec4::__zxyw() { return T##vec4( z, x, y, w ); } \
    /* Swizzler Getter Function(`zxyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, x, y, 0 )` */ \
    T##vec4 T##vec4::__zxyi() { return T##vec4( z, x, y, 0 ); } \
    /* Swizzler Getter Function(`zxzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, x, z, x )` */ \
    T##vec4 T##vec4::__zxzx() { return T##vec4( z, x, z, x ); } \
    /* Swizzler Getter Function(`zxzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, x, z, y )` */ \
    T##vec4 T##vec4::__zxzy() { return T##vec4( z, x, z, y ); } \
    /* Swizzler Getter Function(`zxzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, x, z, z )` */ \
    T##vec4 T##vec4::__zxzz() { return T##vec4( z, x, z, z ); } \
    /* Swizzler Getter Function(`zxzw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, x, z, w )` */ \
    T##vec4 T##vec4::__zxzw() { return T##vec4( z, x, z, w ); } \
    /* Swizzler Getter Function(`zxzi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, x, z, 0 )` */ \
    T##vec4 T##vec4::__zxzi() { return T##vec4( z, x, z, 0 ); } \
    /* Swizzler Getter Function(`zxwx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, x, w, x )` */ \
    T##vec4 T##vec4::__zxwx() { return T##vec4( z, x, w, x ); } \
    /* Swizzler Getter Function(`zxwy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, x, w, y )` */ \
    T##vec4 T##vec4::__zxwy() { return T##vec4( z, x, w, y ); } \
    /* Swizzler Getter Function(`zxwz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, x, w, z )` */ \
    T##vec4 T##vec4::__zxwz() { return T##vec4( z, x, w, z ); } \
    /* Swizzler Getter Function(`zxww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, x, w, w )` */ \
    T##vec4 T##vec4::__zxww() { return T##vec4( z, x, w, w ); } \
    /* Swizzler Getter Function(`zxwi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, x, w, 0 )` */ \
    T##vec4 T##vec4::__zxwi() { return T##vec4( z, x, w, 0 ); } \
    /* Swizzler Getter Function(`zxix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, x, 0, x )` */ \
    T##vec4 T##vec4::__zxix() { return T##vec4( z, x, 0, x ); } \
    /* Swizzler Getter Function(`zxiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, x, 0, y )` */ \
    T##vec4 T##vec4::__zxiy() { return T##vec4( z, x, 0, y ); } \
    /* Swizzler Getter Function(`zxiz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, x, 0, z )` */ \
    T##vec4 T##vec4::__zxiz() { return T##vec4( z, x, 0, z ); } \
    /* Swizzler Getter Function(`zxiw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, x, 0, w )` */ \
    T##vec4 T##vec4::__zxiw() { return T##vec4( z, x, 0, w ); } \
    /* Swizzler Getter Function(`zxii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, x, 0, 0 )` */ \
    T##vec4 T##vec4::__zxii() { return T##vec4( z, x, 0, 0 ); } \
    /* Swizzler Getter Function(`zyxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, y, x, x )` */ \
    T##vec4 T##vec4::__zyxx() { return T##vec4( z, y, x, x ); } \
    /* Swizzler Getter Function(`zyxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, y, x, y )` */ \
    T##vec4 T##vec4::__zyxy() { return T##vec4( z, y, x, y ); } \
    /* Swizzler Getter Function(`zyxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, y, x, z )` */ \
    T##vec4 T##vec4::__zyxz() { return T##vec4( z, y, x, z ); } \
    /* Swizzler Getter Function(`zyxw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, y, x, w )` */ \
    T##vec4 T##vec4::__zyxw() { return T##vec4( z, y, x, w ); } \
    /* Swizzler Getter Function(`zyxi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, y, x, 0 )` */ \
    T##vec4 T##vec4::__zyxi() { return T##vec4( z, y, x, 0 ); } \
    /* Swizzler Getter Function(`zyyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, y, y, x )` */ \
    T##vec4 T##vec4::__zyyx() { return T##vec4( z, y, y, x ); } \
    /* Swizzler Getter Function(`zyyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, y, y, y )` */ \
    T##vec4 T##vec4::__zyyy() { return T##vec4( z, y, y, y ); } \
    /* Swizzler Getter Function(`zyyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, y, y, z )` */ \
    T##vec4 T##vec4::__zyyz() { return T##vec4( z, y, y, z ); } \
    /* Swizzler Getter Function(`zyyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, y, y, w )` */ \
    T##vec4 T##vec4::__zyyw() { return T##vec4( z, y, y, w ); } \
    /* Swizzler Getter Function(`zyyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, y, y, 0 )` */ \
    T##vec4 T##vec4::__zyyi() { return T##vec4( z, y, y, 0 ); } \
    /* Swizzler Getter Function(`zyzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, y, z, x )` */ \
    T##vec4 T##vec4::__zyzx() { return T##vec4( z, y, z, x ); } \
    /* Swizzler Getter Function(`zyzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, y, z, y )` */ \
    T##vec4 T##vec4::__zyzy() { return T##vec4( z, y, z, y ); } \
    /* Swizzler Getter Function(`zyzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, y, z, z )` */ \
    T##vec4 T##vec4::__zyzz() { return T##vec4( z, y, z, z ); } \
    /* Swizzler Getter Function(`zyzw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, y, z, w )` */ \
    T##vec4 T##vec4::__zyzw() { return T##vec4( z, y, z, w ); } \
    /* Swizzler Getter Function(`zyzi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, y, z, 0 )` */ \
    T##vec4 T##vec4::__zyzi() { return T##vec4( z, y, z, 0 ); } \
    /* Swizzler Getter Function(`zywx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, y, w, x )` */ \
    T##vec4 T##vec4::__zywx() { return T##vec4( z, y, w, x ); } \
    /* Swizzler Getter Function(`zywy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, y, w, y )` */ \
    T##vec4 T##vec4::__zywy() { return T##vec4( z, y, w, y ); } \
    /* Swizzler Getter Function(`zywz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, y, w, z )` */ \
    T##vec4 T##vec4::__zywz() { return T##vec4( z, y, w, z ); } \
    /* Swizzler Getter Function(`zyww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, y, w, w )` */ \
    T##vec4 T##vec4::__zyww() { return T##vec4( z, y, w, w ); } \
    /* Swizzler Getter Function(`zywi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, y, w, 0 )` */ \
    T##vec4 T##vec4::__zywi() { return T##vec4( z, y, w, 0 ); } \
    /* Swizzler Getter Function(`zyix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, y, 0, x )` */ \
    T##vec4 T##vec4::__zyix() { return T##vec4( z, y, 0, x ); } \
    /* Swizzler Getter Function(`zyiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, y, 0, y )` */ \
    T##vec4 T##vec4::__zyiy() { return T##vec4( z, y, 0, y ); } \
    /* Swizzler Getter Function(`zyiz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, y, 0, z )` */ \
    T##vec4 T##vec4::__zyiz() { return T##vec4( z, y, 0, z ); } \
    /* Swizzler Getter Function(`zyiw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, y, 0, w )` */ \
    T##vec4 T##vec4::__zyiw() { return T##vec4( z, y, 0, w ); } \
    /* Swizzler Getter Function(`zyii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, y, 0, 0 )` */ \
    T##vec4 T##vec4::__zyii() { return T##vec4( z, y, 0, 0 ); } \
    /* Swizzler Getter Function(`zzxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, z, x, x )` */ \
    T##vec4 T##vec4::__zzxx() { return T##vec4( z, z, x, x ); } \
    /* Swizzler Getter Function(`zzxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, z, x, y )` */ \
    T##vec4 T##vec4::__zzxy() { return T##vec4( z, z, x, y ); } \
    /* Swizzler Getter Function(`zzxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, z, x, z )` */ \
    T##vec4 T##vec4::__zzxz() { return T##vec4( z, z, x, z ); } \
    /* Swizzler Getter Function(`zzxw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, z, x, w )` */ \
    T##vec4 T##vec4::__zzxw() { return T##vec4( z, z, x, w ); } \
    /* Swizzler Getter Function(`zzxi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, z, x, 0 )` */ \
    T##vec4 T##vec4::__zzxi() { return T##vec4( z, z, x, 0 ); } \
    /* Swizzler Getter Function(`zzyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, z, y, x )` */ \
    T##vec4 T##vec4::__zzyx() { return T##vec4( z, z, y, x ); } \
    /* Swizzler Getter Function(`zzyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, z, y, y )` */ \
    T##vec4 T##vec4::__zzyy() { return T##vec4( z, z, y, y ); } \
    /* Swizzler Getter Function(`zzyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, z, y, z )` */ \
    T##vec4 T##vec4::__zzyz() { return T##vec4( z, z, y, z ); } \
    /* Swizzler Getter Function(`zzyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, z, y, w )` */ \
    T##vec4 T##vec4::__zzyw() { return T##vec4( z, z, y, w ); } \
    /* Swizzler Getter Function(`zzyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, z, y, 0 )` */ \
    T##vec4 T##vec4::__zzyi() { return T##vec4( z, z, y, 0 ); } \
    /* Swizzler Getter Function(`zzzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, z, z, x )` */ \
    T##vec4 T##vec4::__zzzx() { return T##vec4( z, z, z, x ); } \
    /* Swizzler Getter Function(`zzzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, z, z, y )` */ \
    T##vec4 T##vec4::__zzzy() { return T##vec4( z, z, z, y ); } \
    /* Swizzler Getter Function(`zzzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, z, z, z )` */ \
    T##vec4 T##vec4::__zzzz() { return T##vec4( z, z, z, z ); } \
    /* Swizzler Getter Function(`zzzw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, z, z, w )` */ \
    T##vec4 T##vec4::__zzzw() { return T##vec4( z, z, z, w ); } \
    /* Swizzler Getter Function(`zzzi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, z, z, 0 )` */ \
    T##vec4 T##vec4::__zzzi() { return T##vec4( z, z, z, 0 ); } \
    /* Swizzler Getter Function(`zzwx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, z, w, x )` */ \
    T##vec4 T##vec4::__zzwx() { return T##vec4( z, z, w, x ); } \
    /* Swizzler Getter Function(`zzwy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, z, w, y )` */ \
    T##vec4 T##vec4::__zzwy() { return T##vec4( z, z, w, y ); } \
    /* Swizzler Getter Function(`zzwz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, z, w, z )` */ \
    T##vec4 T##vec4::__zzwz() { return T##vec4( z, z, w, z ); } \
    /* Swizzler Getter Function(`zzww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, z, w, w )` */ \
    T##vec4 T##vec4::__zzww() { return T##vec4( z, z, w, w ); } \
    /* Swizzler Getter Function(`zzwi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, z, w, 0 )` */ \
    T##vec4 T##vec4::__zzwi() { return T##vec4( z, z, w, 0 ); } \
    /* Swizzler Getter Function(`zzix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, z, 0, x )` */ \
    T##vec4 T##vec4::__zzix() { return T##vec4( z, z, 0, x ); } \
    /* Swizzler Getter Function(`zziy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, z, 0, y )` */ \
    T##vec4 T##vec4::__zziy() { return T##vec4( z, z, 0, y ); } \
    /* Swizzler Getter Function(`zziz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, z, 0, z )` */ \
    T##vec4 T##vec4::__zziz() { return T##vec4( z, z, 0, z ); } \
    /* Swizzler Getter Function(`zziw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, z, 0, w )` */ \
    T##vec4 T##vec4::__zziw() { return T##vec4( z, z, 0, w ); } \
    /* Swizzler Getter Function(`zzii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, z, 0, 0 )` */ \
    T##vec4 T##vec4::__zzii() { return T##vec4( z, z, 0, 0 ); } \
    /* Swizzler Getter Function(`zwxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, w, x, x )` */ \
    T##vec4 T##vec4::__zwxx() { return T##vec4( z, w, x, x ); } \
    /* Swizzler Getter Function(`zwxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, w, x, y )` */ \
    T##vec4 T##vec4::__zwxy() { return T##vec4( z, w, x, y ); } \
    /* Swizzler Getter Function(`zwxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, w, x, z )` */ \
    T##vec4 T##vec4::__zwxz() { return T##vec4( z, w, x, z ); } \
    /* Swizzler Getter Function(`zwxw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, w, x, w )` */ \
    T##vec4 T##vec4::__zwxw() { return T##vec4( z, w, x, w ); } \
    /* Swizzler Getter Function(`zwxi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, w, x, 0 )` */ \
    T##vec4 T##vec4::__zwxi() { return T##vec4( z, w, x, 0 ); } \
    /* Swizzler Getter Function(`zwyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, w, y, x )` */ \
    T##vec4 T##vec4::__zwyx() { return T##vec4( z, w, y, x ); } \
    /* Swizzler Getter Function(`zwyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, w, y, y )` */ \
    T##vec4 T##vec4::__zwyy() { return T##vec4( z, w, y, y ); } \
    /* Swizzler Getter Function(`zwyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, w, y, z )` */ \
    T##vec4 T##vec4::__zwyz() { return T##vec4( z, w, y, z ); } \
    /* Swizzler Getter Function(`zwyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, w, y, w )` */ \
    T##vec4 T##vec4::__zwyw() { return T##vec4( z, w, y, w ); } \
    /* Swizzler Getter Function(`zwyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, w, y, 0 )` */ \
    T##vec4 T##vec4::__zwyi() { return T##vec4( z, w, y, 0 ); } \
    /* Swizzler Getter Function(`zwzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, w, z, x )` */ \
    T##vec4 T##vec4::__zwzx() { return T##vec4( z, w, z, x ); } \
    /* Swizzler Getter Function(`zwzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, w, z, y )` */ \
    T##vec4 T##vec4::__zwzy() { return T##vec4( z, w, z, y ); } \
    /* Swizzler Getter Function(`zwzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, w, z, z )` */ \
    T##vec4 T##vec4::__zwzz() { return T##vec4( z, w, z, z ); } \
    /* Swizzler Getter Function(`zwzw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, w, z, w )` */ \
    T##vec4 T##vec4::__zwzw() { return T##vec4( z, w, z, w ); } \
    /* Swizzler Getter Function(`zwzi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, w, z, 0 )` */ \
    T##vec4 T##vec4::__zwzi() { return T##vec4( z, w, z, 0 ); } \
    /* Swizzler Getter Function(`zwwx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, w, w, x )` */ \
    T##vec4 T##vec4::__zwwx() { return T##vec4( z, w, w, x ); } \
    /* Swizzler Getter Function(`zwwy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, w, w, y )` */ \
    T##vec4 T##vec4::__zwwy() { return T##vec4( z, w, w, y ); } \
    /* Swizzler Getter Function(`zwwz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, w, w, z )` */ \
    T##vec4 T##vec4::__zwwz() { return T##vec4( z, w, w, z ); } \
    /* Swizzler Getter Function(`zwww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, w, w, w )` */ \
    T##vec4 T##vec4::__zwww() { return T##vec4( z, w, w, w ); } \
    /* Swizzler Getter Function(`zwwi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, w, w, 0 )` */ \
    T##vec4 T##vec4::__zwwi() { return T##vec4( z, w, w, 0 ); } \
    /* Swizzler Getter Function(`zwix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, w, 0, x )` */ \
    T##vec4 T##vec4::__zwix() { return T##vec4( z, w, 0, x ); } \
    /* Swizzler Getter Function(`zwiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, w, 0, y )` */ \
    T##vec4 T##vec4::__zwiy() { return T##vec4( z, w, 0, y ); } \
    /* Swizzler Getter Function(`zwiz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, w, 0, z )` */ \
    T##vec4 T##vec4::__zwiz() { return T##vec4( z, w, 0, z ); } \
    /* Swizzler Getter Function(`zwiw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, w, 0, w )` */ \
    T##vec4 T##vec4::__zwiw() { return T##vec4( z, w, 0, w ); } \
    /* Swizzler Getter Function(`zwii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, w, 0, 0 )` */ \
    T##vec4 T##vec4::__zwii() { return T##vec4( z, w, 0, 0 ); } \
    /* Swizzler Getter Function(`zixx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, 0, x, x )` */ \
    T##vec4 T##vec4::__zixx() { return T##vec4( z, 0, x, x ); } \
    /* Swizzler Getter Function(`zixy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, 0, x, y )` */ \
    T##vec4 T##vec4::__zixy() { return T##vec4( z, 0, x, y ); } \
    /* Swizzler Getter Function(`zixz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, 0, x, z )` */ \
    T##vec4 T##vec4::__zixz() { return T##vec4( z, 0, x, z ); } \
    /* Swizzler Getter Function(`zixw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, 0, x, w )` */ \
    T##vec4 T##vec4::__zixw() { return T##vec4( z, 0, x, w ); } \
    /* Swizzler Getter Function(`zixi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, 0, x, 0 )` */ \
    T##vec4 T##vec4::__zixi() { return T##vec4( z, 0, x, 0 ); } \
    /* Swizzler Getter Function(`ziyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, 0, y, x )` */ \
    T##vec4 T##vec4::__ziyx() { return T##vec4( z, 0, y, x ); } \
    /* Swizzler Getter Function(`ziyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, 0, y, y )` */ \
    T##vec4 T##vec4::__ziyy() { return T##vec4( z, 0, y, y ); } \
    /* Swizzler Getter Function(`ziyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, 0, y, z )` */ \
    T##vec4 T##vec4::__ziyz() { return T##vec4( z, 0, y, z ); } \
    /* Swizzler Getter Function(`ziyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, 0, y, w )` */ \
    T##vec4 T##vec4::__ziyw() { return T##vec4( z, 0, y, w ); } \
    /* Swizzler Getter Function(`ziyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, 0, y, 0 )` */ \
    T##vec4 T##vec4::__ziyi() { return T##vec4( z, 0, y, 0 ); } \
    /* Swizzler Getter Function(`zizx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, 0, z, x )` */ \
    T##vec4 T##vec4::__zizx() { return T##vec4( z, 0, z, x ); } \
    /* Swizzler Getter Function(`zizy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, 0, z, y )` */ \
    T##vec4 T##vec4::__zizy() { return T##vec4( z, 0, z, y ); } \
    /* Swizzler Getter Function(`zizz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, 0, z, z )` */ \
    T##vec4 T##vec4::__zizz() { return T##vec4( z, 0, z, z ); } \
    /* Swizzler Getter Function(`zizw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, 0, z, w )` */ \
    T##vec4 T##vec4::__zizw() { return T##vec4( z, 0, z, w ); } \
    /* Swizzler Getter Function(`zizi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, 0, z, 0 )` */ \
    T##vec4 T##vec4::__zizi() { return T##vec4( z, 0, z, 0 ); } \
    /* Swizzler Getter Function(`ziwx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, 0, w, x )` */ \
    T##vec4 T##vec4::__ziwx() { return T##vec4( z, 0, w, x ); } \
    /* Swizzler Getter Function(`ziwy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, 0, w, y )` */ \
    T##vec4 T##vec4::__ziwy() { return T##vec4( z, 0, w, y ); } \
    /* Swizzler Getter Function(`ziwz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, 0, w, z )` */ \
    T##vec4 T##vec4::__ziwz() { return T##vec4( z, 0, w, z ); } \
    /* Swizzler Getter Function(`ziww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, 0, w, w )` */ \
    T##vec4 T##vec4::__ziww() { return T##vec4( z, 0, w, w ); } \
    /* Swizzler Getter Function(`ziwi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, 0, w, 0 )` */ \
    T##vec4 T##vec4::__ziwi() { return T##vec4( z, 0, w, 0 ); } \
    /* Swizzler Getter Function(`ziix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, 0, 0, x )` */ \
    T##vec4 T##vec4::__ziix() { return T##vec4( z, 0, 0, x ); } \
    /* Swizzler Getter Function(`ziiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, 0, 0, y )` */ \
    T##vec4 T##vec4::__ziiy() { return T##vec4( z, 0, 0, y ); } \
    /* Swizzler Getter Function(`ziiz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, 0, 0, z )` */ \
    T##vec4 T##vec4::__ziiz() { return T##vec4( z, 0, 0, z ); } \
    /* Swizzler Getter Function(`ziiw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, 0, 0, w )` */ \
    T##vec4 T##vec4::__ziiw() { return T##vec4( z, 0, 0, w ); } \
    /* Swizzler Getter Function(`ziii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( z, 0, 0, 0 )` */ \
    T##vec4 T##vec4::__ziii() { return T##vec4( z, 0, 0, 0 ); } \
    /* Swizzler Getter Function(`wxxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, x, x, x )` */ \
    T##vec4 T##vec4::__wxxx() { return T##vec4( w, x, x, x ); } \
    /* Swizzler Getter Function(`wxxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, x, x, y )` */ \
    T##vec4 T##vec4::__wxxy() { return T##vec4( w, x, x, y ); } \
    /* Swizzler Getter Function(`wxxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, x, x, z )` */ \
    T##vec4 T##vec4::__wxxz() { return T##vec4( w, x, x, z ); } \
    /* Swizzler Getter Function(`wxxw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, x, x, w )` */ \
    T##vec4 T##vec4::__wxxw() { return T##vec4( w, x, x, w ); } \
    /* Swizzler Getter Function(`wxxi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, x, x, 0 )` */ \
    T##vec4 T##vec4::__wxxi() { return T##vec4( w, x, x, 0 ); } \
    /* Swizzler Getter Function(`wxyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, x, y, x )` */ \
    T##vec4 T##vec4::__wxyx() { return T##vec4( w, x, y, x ); } \
    /* Swizzler Getter Function(`wxyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, x, y, y )` */ \
    T##vec4 T##vec4::__wxyy() { return T##vec4( w, x, y, y ); } \
    /* Swizzler Getter Function(`wxyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, x, y, z )` */ \
    T##vec4 T##vec4::__wxyz() { return T##vec4( w, x, y, z ); } \
    /* Swizzler Getter Function(`wxyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, x, y, w )` */ \
    T##vec4 T##vec4::__wxyw() { return T##vec4( w, x, y, w ); } \
    /* Swizzler Getter Function(`wxyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, x, y, 0 )` */ \
    T##vec4 T##vec4::__wxyi() { return T##vec4( w, x, y, 0 ); } \
    /* Swizzler Getter Function(`wxzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, x, z, x )` */ \
    T##vec4 T##vec4::__wxzx() { return T##vec4( w, x, z, x ); } \
    /* Swizzler Getter Function(`wxzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, x, z, y )` */ \
    T##vec4 T##vec4::__wxzy() { return T##vec4( w, x, z, y ); } \
    /* Swizzler Getter Function(`wxzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, x, z, z )` */ \
    T##vec4 T##vec4::__wxzz() { return T##vec4( w, x, z, z ); } \
    /* Swizzler Getter Function(`wxzw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, x, z, w )` */ \
    T##vec4 T##vec4::__wxzw() { return T##vec4( w, x, z, w ); } \
    /* Swizzler Getter Function(`wxzi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, x, z, 0 )` */ \
    T##vec4 T##vec4::__wxzi() { return T##vec4( w, x, z, 0 ); } \
    /* Swizzler Getter Function(`wxwx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, x, w, x )` */ \
    T##vec4 T##vec4::__wxwx() { return T##vec4( w, x, w, x ); } \
    /* Swizzler Getter Function(`wxwy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, x, w, y )` */ \
    T##vec4 T##vec4::__wxwy() { return T##vec4( w, x, w, y ); } \
    /* Swizzler Getter Function(`wxwz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, x, w, z )` */ \
    T##vec4 T##vec4::__wxwz() { return T##vec4( w, x, w, z ); } \
    /* Swizzler Getter Function(`wxww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, x, w, w )` */ \
    T##vec4 T##vec4::__wxww() { return T##vec4( w, x, w, w ); } \
    /* Swizzler Getter Function(`wxwi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, x, w, 0 )` */ \
    T##vec4 T##vec4::__wxwi() { return T##vec4( w, x, w, 0 ); } \
    /* Swizzler Getter Function(`wxix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, x, 0, x )` */ \
    T##vec4 T##vec4::__wxix() { return T##vec4( w, x, 0, x ); } \
    /* Swizzler Getter Function(`wxiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, x, 0, y )` */ \
    T##vec4 T##vec4::__wxiy() { return T##vec4( w, x, 0, y ); } \
    /* Swizzler Getter Function(`wxiz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, x, 0, z )` */ \
    T##vec4 T##vec4::__wxiz() { return T##vec4( w, x, 0, z ); } \
    /* Swizzler Getter Function(`wxiw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, x, 0, w )` */ \
    T##vec4 T##vec4::__wxiw() { return T##vec4( w, x, 0, w ); } \
    /* Swizzler Getter Function(`wxii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, x, 0, 0 )` */ \
    T##vec4 T##vec4::__wxii() { return T##vec4( w, x, 0, 0 ); } \
    /* Swizzler Getter Function(`wyxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, y, x, x )` */ \
    T##vec4 T##vec4::__wyxx() { return T##vec4( w, y, x, x ); } \
    /* Swizzler Getter Function(`wyxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, y, x, y )` */ \
    T##vec4 T##vec4::__wyxy() { return T##vec4( w, y, x, y ); } \
    /* Swizzler Getter Function(`wyxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, y, x, z )` */ \
    T##vec4 T##vec4::__wyxz() { return T##vec4( w, y, x, z ); } \
    /* Swizzler Getter Function(`wyxw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, y, x, w )` */ \
    T##vec4 T##vec4::__wyxw() { return T##vec4( w, y, x, w ); } \
    /* Swizzler Getter Function(`wyxi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, y, x, 0 )` */ \
    T##vec4 T##vec4::__wyxi() { return T##vec4( w, y, x, 0 ); } \
    /* Swizzler Getter Function(`wyyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, y, y, x )` */ \
    T##vec4 T##vec4::__wyyx() { return T##vec4( w, y, y, x ); } \
    /* Swizzler Getter Function(`wyyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, y, y, y )` */ \
    T##vec4 T##vec4::__wyyy() { return T##vec4( w, y, y, y ); } \
    /* Swizzler Getter Function(`wyyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, y, y, z )` */ \
    T##vec4 T##vec4::__wyyz() { return T##vec4( w, y, y, z ); } \
    /* Swizzler Getter Function(`wyyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, y, y, w )` */ \
    T##vec4 T##vec4::__wyyw() { return T##vec4( w, y, y, w ); } \
    /* Swizzler Getter Function(`wyyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, y, y, 0 )` */ \
    T##vec4 T##vec4::__wyyi() { return T##vec4( w, y, y, 0 ); } \
    /* Swizzler Getter Function(`wyzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, y, z, x )` */ \
    T##vec4 T##vec4::__wyzx() { return T##vec4( w, y, z, x ); } \
    /* Swizzler Getter Function(`wyzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, y, z, y )` */ \
    T##vec4 T##vec4::__wyzy() { return T##vec4( w, y, z, y ); } \
    /* Swizzler Getter Function(`wyzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, y, z, z )` */ \
    T##vec4 T##vec4::__wyzz() { return T##vec4( w, y, z, z ); } \
    /* Swizzler Getter Function(`wyzw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, y, z, w )` */ \
    T##vec4 T##vec4::__wyzw() { return T##vec4( w, y, z, w ); } \
    /* Swizzler Getter Function(`wyzi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, y, z, 0 )` */ \
    T##vec4 T##vec4::__wyzi() { return T##vec4( w, y, z, 0 ); } \
    /* Swizzler Getter Function(`wywx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, y, w, x )` */ \
    T##vec4 T##vec4::__wywx() { return T##vec4( w, y, w, x ); } \
    /* Swizzler Getter Function(`wywy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, y, w, y )` */ \
    T##vec4 T##vec4::__wywy() { return T##vec4( w, y, w, y ); } \
    /* Swizzler Getter Function(`wywz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, y, w, z )` */ \
    T##vec4 T##vec4::__wywz() { return T##vec4( w, y, w, z ); } \
    /* Swizzler Getter Function(`wyww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, y, w, w )` */ \
    T##vec4 T##vec4::__wyww() { return T##vec4( w, y, w, w ); } \
    /* Swizzler Getter Function(`wywi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, y, w, 0 )` */ \
    T##vec4 T##vec4::__wywi() { return T##vec4( w, y, w, 0 ); } \
    /* Swizzler Getter Function(`wyix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, y, 0, x )` */ \
    T##vec4 T##vec4::__wyix() { return T##vec4( w, y, 0, x ); } \
    /* Swizzler Getter Function(`wyiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, y, 0, y )` */ \
    T##vec4 T##vec4::__wyiy() { return T##vec4( w, y, 0, y ); } \
    /* Swizzler Getter Function(`wyiz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, y, 0, z )` */ \
    T##vec4 T##vec4::__wyiz() { return T##vec4( w, y, 0, z ); } \
    /* Swizzler Getter Function(`wyiw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, y, 0, w )` */ \
    T##vec4 T##vec4::__wyiw() { return T##vec4( w, y, 0, w ); } \
    /* Swizzler Getter Function(`wyii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, y, 0, 0 )` */ \
    T##vec4 T##vec4::__wyii() { return T##vec4( w, y, 0, 0 ); } \
    /* Swizzler Getter Function(`wzxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, z, x, x )` */ \
    T##vec4 T##vec4::__wzxx() { return T##vec4( w, z, x, x ); } \
    /* Swizzler Getter Function(`wzxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, z, x, y )` */ \
    T##vec4 T##vec4::__wzxy() { return T##vec4( w, z, x, y ); } \
    /* Swizzler Getter Function(`wzxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, z, x, z )` */ \
    T##vec4 T##vec4::__wzxz() { return T##vec4( w, z, x, z ); } \
    /* Swizzler Getter Function(`wzxw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, z, x, w )` */ \
    T##vec4 T##vec4::__wzxw() { return T##vec4( w, z, x, w ); } \
    /* Swizzler Getter Function(`wzxi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, z, x, 0 )` */ \
    T##vec4 T##vec4::__wzxi() { return T##vec4( w, z, x, 0 ); } \
    /* Swizzler Getter Function(`wzyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, z, y, x )` */ \
    T##vec4 T##vec4::__wzyx() { return T##vec4( w, z, y, x ); } \
    /* Swizzler Getter Function(`wzyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, z, y, y )` */ \
    T##vec4 T##vec4::__wzyy() { return T##vec4( w, z, y, y ); } \
    /* Swizzler Getter Function(`wzyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, z, y, z )` */ \
    T##vec4 T##vec4::__wzyz() { return T##vec4( w, z, y, z ); } \
    /* Swizzler Getter Function(`wzyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, z, y, w )` */ \
    T##vec4 T##vec4::__wzyw() { return T##vec4( w, z, y, w ); } \
    /* Swizzler Getter Function(`wzyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, z, y, 0 )` */ \
    T##vec4 T##vec4::__wzyi() { return T##vec4( w, z, y, 0 ); } \
    /* Swizzler Getter Function(`wzzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, z, z, x )` */ \
    T##vec4 T##vec4::__wzzx() { return T##vec4( w, z, z, x ); } \
    /* Swizzler Getter Function(`wzzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, z, z, y )` */ \
    T##vec4 T##vec4::__wzzy() { return T##vec4( w, z, z, y ); } \
    /* Swizzler Getter Function(`wzzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, z, z, z )` */ \
    T##vec4 T##vec4::__wzzz() { return T##vec4( w, z, z, z ); } \
    /* Swizzler Getter Function(`wzzw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, z, z, w )` */ \
    T##vec4 T##vec4::__wzzw() { return T##vec4( w, z, z, w ); } \
    /* Swizzler Getter Function(`wzzi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, z, z, 0 )` */ \
    T##vec4 T##vec4::__wzzi() { return T##vec4( w, z, z, 0 ); } \
    /* Swizzler Getter Function(`wzwx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, z, w, x )` */ \
    T##vec4 T##vec4::__wzwx() { return T##vec4( w, z, w, x ); } \
    /* Swizzler Getter Function(`wzwy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, z, w, y )` */ \
    T##vec4 T##vec4::__wzwy() { return T##vec4( w, z, w, y ); } \
    /* Swizzler Getter Function(`wzwz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, z, w, z )` */ \
    T##vec4 T##vec4::__wzwz() { return T##vec4( w, z, w, z ); } \
    /* Swizzler Getter Function(`wzww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, z, w, w )` */ \
    T##vec4 T##vec4::__wzww() { return T##vec4( w, z, w, w ); } \
    /* Swizzler Getter Function(`wzwi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, z, w, 0 )` */ \
    T##vec4 T##vec4::__wzwi() { return T##vec4( w, z, w, 0 ); } \
    /* Swizzler Getter Function(`wzix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, z, 0, x )` */ \
    T##vec4 T##vec4::__wzix() { return T##vec4( w, z, 0, x ); } \
    /* Swizzler Getter Function(`wziy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, z, 0, y )` */ \
    T##vec4 T##vec4::__wziy() { return T##vec4( w, z, 0, y ); } \
    /* Swizzler Getter Function(`wziz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, z, 0, z )` */ \
    T##vec4 T##vec4::__wziz() { return T##vec4( w, z, 0, z ); } \
    /* Swizzler Getter Function(`wziw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, z, 0, w )` */ \
    T##vec4 T##vec4::__wziw() { return T##vec4( w, z, 0, w ); } \
    /* Swizzler Getter Function(`wzii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, z, 0, 0 )` */ \
    T##vec4 T##vec4::__wzii() { return T##vec4( w, z, 0, 0 ); } \
    /* Swizzler Getter Function(`wwxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, w, x, x )` */ \
    T##vec4 T##vec4::__wwxx() { return T##vec4( w, w, x, x ); } \
    /* Swizzler Getter Function(`wwxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, w, x, y )` */ \
    T##vec4 T##vec4::__wwxy() { return T##vec4( w, w, x, y ); } \
    /* Swizzler Getter Function(`wwxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, w, x, z )` */ \
    T##vec4 T##vec4::__wwxz() { return T##vec4( w, w, x, z ); } \
    /* Swizzler Getter Function(`wwxw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, w, x, w )` */ \
    T##vec4 T##vec4::__wwxw() { return T##vec4( w, w, x, w ); } \
    /* Swizzler Getter Function(`wwxi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, w, x, 0 )` */ \
    T##vec4 T##vec4::__wwxi() { return T##vec4( w, w, x, 0 ); } \
    /* Swizzler Getter Function(`wwyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, w, y, x )` */ \
    T##vec4 T##vec4::__wwyx() { return T##vec4( w, w, y, x ); } \
    /* Swizzler Getter Function(`wwyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, w, y, y )` */ \
    T##vec4 T##vec4::__wwyy() { return T##vec4( w, w, y, y ); } \
    /* Swizzler Getter Function(`wwyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, w, y, z )` */ \
    T##vec4 T##vec4::__wwyz() { return T##vec4( w, w, y, z ); } \
    /* Swizzler Getter Function(`wwyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, w, y, w )` */ \
    T##vec4 T##vec4::__wwyw() { return T##vec4( w, w, y, w ); } \
    /* Swizzler Getter Function(`wwyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, w, y, 0 )` */ \
    T##vec4 T##vec4::__wwyi() { return T##vec4( w, w, y, 0 ); } \
    /* Swizzler Getter Function(`wwzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, w, z, x )` */ \
    T##vec4 T##vec4::__wwzx() { return T##vec4( w, w, z, x ); } \
    /* Swizzler Getter Function(`wwzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, w, z, y )` */ \
    T##vec4 T##vec4::__wwzy() { return T##vec4( w, w, z, y ); } \
    /* Swizzler Getter Function(`wwzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, w, z, z )` */ \
    T##vec4 T##vec4::__wwzz() { return T##vec4( w, w, z, z ); } \
    /* Swizzler Getter Function(`wwzw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, w, z, w )` */ \
    T##vec4 T##vec4::__wwzw() { return T##vec4( w, w, z, w ); } \
    /* Swizzler Getter Function(`wwzi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, w, z, 0 )` */ \
    T##vec4 T##vec4::__wwzi() { return T##vec4( w, w, z, 0 ); } \
    /* Swizzler Getter Function(`wwwx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, w, w, x )` */ \
    T##vec4 T##vec4::__wwwx() { return T##vec4( w, w, w, x ); } \
    /* Swizzler Getter Function(`wwwy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, w, w, y )` */ \
    T##vec4 T##vec4::__wwwy() { return T##vec4( w, w, w, y ); } \
    /* Swizzler Getter Function(`wwwz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, w, w, z )` */ \
    T##vec4 T##vec4::__wwwz() { return T##vec4( w, w, w, z ); } \
    /* Swizzler Getter Function(`wwww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, w, w, w )` */ \
    T##vec4 T##vec4::__wwww() { return T##vec4( w, w, w, w ); } \
    /* Swizzler Getter Function(`wwwi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, w, w, 0 )` */ \
    T##vec4 T##vec4::__wwwi() { return T##vec4( w, w, w, 0 ); } \
    /* Swizzler Getter Function(`wwix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, w, 0, x )` */ \
    T##vec4 T##vec4::__wwix() { return T##vec4( w, w, 0, x ); } \
    /* Swizzler Getter Function(`wwiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, w, 0, y )` */ \
    T##vec4 T##vec4::__wwiy() { return T##vec4( w, w, 0, y ); } \
    /* Swizzler Getter Function(`wwiz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, w, 0, z )` */ \
    T##vec4 T##vec4::__wwiz() { return T##vec4( w, w, 0, z ); } \
    /* Swizzler Getter Function(`wwiw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, w, 0, w )` */ \
    T##vec4 T##vec4::__wwiw() { return T##vec4( w, w, 0, w ); } \
    /* Swizzler Getter Function(`wwii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, w, 0, 0 )` */ \
    T##vec4 T##vec4::__wwii() { return T##vec4( w, w, 0, 0 ); } \
    /* Swizzler Getter Function(`wixx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, 0, x, x )` */ \
    T##vec4 T##vec4::__wixx() { return T##vec4( w, 0, x, x ); } \
    /* Swizzler Getter Function(`wixy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, 0, x, y )` */ \
    T##vec4 T##vec4::__wixy() { return T##vec4( w, 0, x, y ); } \
    /* Swizzler Getter Function(`wixz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, 0, x, z )` */ \
    T##vec4 T##vec4::__wixz() { return T##vec4( w, 0, x, z ); } \
    /* Swizzler Getter Function(`wixw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, 0, x, w )` */ \
    T##vec4 T##vec4::__wixw() { return T##vec4( w, 0, x, w ); } \
    /* Swizzler Getter Function(`wixi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, 0, x, 0 )` */ \
    T##vec4 T##vec4::__wixi() { return T##vec4( w, 0, x, 0 ); } \
    /* Swizzler Getter Function(`wiyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, 0, y, x )` */ \
    T##vec4 T##vec4::__wiyx() { return T##vec4( w, 0, y, x ); } \
    /* Swizzler Getter Function(`wiyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, 0, y, y )` */ \
    T##vec4 T##vec4::__wiyy() { return T##vec4( w, 0, y, y ); } \
    /* Swizzler Getter Function(`wiyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, 0, y, z )` */ \
    T##vec4 T##vec4::__wiyz() { return T##vec4( w, 0, y, z ); } \
    /* Swizzler Getter Function(`wiyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, 0, y, w )` */ \
    T##vec4 T##vec4::__wiyw() { return T##vec4( w, 0, y, w ); } \
    /* Swizzler Getter Function(`wiyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, 0, y, 0 )` */ \
    T##vec4 T##vec4::__wiyi() { return T##vec4( w, 0, y, 0 ); } \
    /* Swizzler Getter Function(`wizx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, 0, z, x )` */ \
    T##vec4 T##vec4::__wizx() { return T##vec4( w, 0, z, x ); } \
    /* Swizzler Getter Function(`wizy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, 0, z, y )` */ \
    T##vec4 T##vec4::__wizy() { return T##vec4( w, 0, z, y ); } \
    /* Swizzler Getter Function(`wizz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, 0, z, z )` */ \
    T##vec4 T##vec4::__wizz() { return T##vec4( w, 0, z, z ); } \
    /* Swizzler Getter Function(`wizw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, 0, z, w )` */ \
    T##vec4 T##vec4::__wizw() { return T##vec4( w, 0, z, w ); } \
    /* Swizzler Getter Function(`wizi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, 0, z, 0 )` */ \
    T##vec4 T##vec4::__wizi() { return T##vec4( w, 0, z, 0 ); } \
    /* Swizzler Getter Function(`wiwx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, 0, w, x )` */ \
    T##vec4 T##vec4::__wiwx() { return T##vec4( w, 0, w, x ); } \
    /* Swizzler Getter Function(`wiwy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, 0, w, y )` */ \
    T##vec4 T##vec4::__wiwy() { return T##vec4( w, 0, w, y ); } \
    /* Swizzler Getter Function(`wiwz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, 0, w, z )` */ \
    T##vec4 T##vec4::__wiwz() { return T##vec4( w, 0, w, z ); } \
    /* Swizzler Getter Function(`wiww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, 0, w, w )` */ \
    T##vec4 T##vec4::__wiww() { return T##vec4( w, 0, w, w ); } \
    /* Swizzler Getter Function(`wiwi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, 0, w, 0 )` */ \
    T##vec4 T##vec4::__wiwi() { return T##vec4( w, 0, w, 0 ); } \
    /* Swizzler Getter Function(`wiix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, 0, 0, x )` */ \
    T##vec4 T##vec4::__wiix() { return T##vec4( w, 0, 0, x ); } \
    /* Swizzler Getter Function(`wiiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, 0, 0, y )` */ \
    T##vec4 T##vec4::__wiiy() { return T##vec4( w, 0, 0, y ); } \
    /* Swizzler Getter Function(`wiiz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, 0, 0, z )` */ \
    T##vec4 T##vec4::__wiiz() { return T##vec4( w, 0, 0, z ); } \
    /* Swizzler Getter Function(`wiiw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, 0, 0, w )` */ \
    T##vec4 T##vec4::__wiiw() { return T##vec4( w, 0, 0, w ); } \
    /* Swizzler Getter Function(`wiii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( w, 0, 0, 0 )` */ \
    T##vec4 T##vec4::__wiii() { return T##vec4( w, 0, 0, 0 ); } \
    /* Swizzler Getter Function(`ixxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, x, x )` */ \
    T##vec4 T##vec4::__ixxx() { return T##vec4( 0, x, x, x ); } \
    /* Swizzler Getter Function(`ixxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, x, y )` */ \
    T##vec4 T##vec4::__ixxy() { return T##vec4( 0, x, x, y ); } \
    /* Swizzler Getter Function(`ixxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, x, z )` */ \
    T##vec4 T##vec4::__ixxz() { return T##vec4( 0, x, x, z ); } \
    /* Swizzler Getter Function(`ixxw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, x, w )` */ \
    T##vec4 T##vec4::__ixxw() { return T##vec4( 0, x, x, w ); } \
    /* Swizzler Getter Function(`ixxi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, x, 0 )` */ \
    T##vec4 T##vec4::__ixxi() { return T##vec4( 0, x, x, 0 ); } \
    /* Swizzler Getter Function(`ixyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, y, x )` */ \
    T##vec4 T##vec4::__ixyx() { return T##vec4( 0, x, y, x ); } \
    /* Swizzler Getter Function(`ixyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, y, y )` */ \
    T##vec4 T##vec4::__ixyy() { return T##vec4( 0, x, y, y ); } \
    /* Swizzler Getter Function(`ixyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, y, z )` */ \
    T##vec4 T##vec4::__ixyz() { return T##vec4( 0, x, y, z ); } \
    /* Swizzler Getter Function(`ixyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, y, w )` */ \
    T##vec4 T##vec4::__ixyw() { return T##vec4( 0, x, y, w ); } \
    /* Swizzler Getter Function(`ixyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, y, 0 )` */ \
    T##vec4 T##vec4::__ixyi() { return T##vec4( 0, x, y, 0 ); } \
    /* Swizzler Getter Function(`ixzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, z, x )` */ \
    T##vec4 T##vec4::__ixzx() { return T##vec4( 0, x, z, x ); } \
    /* Swizzler Getter Function(`ixzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, z, y )` */ \
    T##vec4 T##vec4::__ixzy() { return T##vec4( 0, x, z, y ); } \
    /* Swizzler Getter Function(`ixzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, z, z )` */ \
    T##vec4 T##vec4::__ixzz() { return T##vec4( 0, x, z, z ); } \
    /* Swizzler Getter Function(`ixzw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, z, w )` */ \
    T##vec4 T##vec4::__ixzw() { return T##vec4( 0, x, z, w ); } \
    /* Swizzler Getter Function(`ixzi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, z, 0 )` */ \
    T##vec4 T##vec4::__ixzi() { return T##vec4( 0, x, z, 0 ); } \
    /* Swizzler Getter Function(`ixwx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, w, x )` */ \
    T##vec4 T##vec4::__ixwx() { return T##vec4( 0, x, w, x ); } \
    /* Swizzler Getter Function(`ixwy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, w, y )` */ \
    T##vec4 T##vec4::__ixwy() { return T##vec4( 0, x, w, y ); } \
    /* Swizzler Getter Function(`ixwz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, w, z )` */ \
    T##vec4 T##vec4::__ixwz() { return T##vec4( 0, x, w, z ); } \
    /* Swizzler Getter Function(`ixww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, w, w )` */ \
    T##vec4 T##vec4::__ixww() { return T##vec4( 0, x, w, w ); } \
    /* Swizzler Getter Function(`ixwi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, w, 0 )` */ \
    T##vec4 T##vec4::__ixwi() { return T##vec4( 0, x, w, 0 ); } \
    /* Swizzler Getter Function(`ixix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, 0, x )` */ \
    T##vec4 T##vec4::__ixix() { return T##vec4( 0, x, 0, x ); } \
    /* Swizzler Getter Function(`ixiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, 0, y )` */ \
    T##vec4 T##vec4::__ixiy() { return T##vec4( 0, x, 0, y ); } \
    /* Swizzler Getter Function(`ixiz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, 0, z )` */ \
    T##vec4 T##vec4::__ixiz() { return T##vec4( 0, x, 0, z ); } \
    /* Swizzler Getter Function(`ixiw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, 0, w )` */ \
    T##vec4 T##vec4::__ixiw() { return T##vec4( 0, x, 0, w ); } \
    /* Swizzler Getter Function(`ixii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, x, 0, 0 )` */ \
    T##vec4 T##vec4::__ixii() { return T##vec4( 0, x, 0, 0 ); } \
    /* Swizzler Getter Function(`iyxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, x, x )` */ \
    T##vec4 T##vec4::__iyxx() { return T##vec4( 0, y, x, x ); } \
    /* Swizzler Getter Function(`iyxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, x, y )` */ \
    T##vec4 T##vec4::__iyxy() { return T##vec4( 0, y, x, y ); } \
    /* Swizzler Getter Function(`iyxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, x, z )` */ \
    T##vec4 T##vec4::__iyxz() { return T##vec4( 0, y, x, z ); } \
    /* Swizzler Getter Function(`iyxw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, x, w )` */ \
    T##vec4 T##vec4::__iyxw() { return T##vec4( 0, y, x, w ); } \
    /* Swizzler Getter Function(`iyxi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, x, 0 )` */ \
    T##vec4 T##vec4::__iyxi() { return T##vec4( 0, y, x, 0 ); } \
    /* Swizzler Getter Function(`iyyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, y, x )` */ \
    T##vec4 T##vec4::__iyyx() { return T##vec4( 0, y, y, x ); } \
    /* Swizzler Getter Function(`iyyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, y, y )` */ \
    T##vec4 T##vec4::__iyyy() { return T##vec4( 0, y, y, y ); } \
    /* Swizzler Getter Function(`iyyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, y, z )` */ \
    T##vec4 T##vec4::__iyyz() { return T##vec4( 0, y, y, z ); } \
    /* Swizzler Getter Function(`iyyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, y, w )` */ \
    T##vec4 T##vec4::__iyyw() { return T##vec4( 0, y, y, w ); } \
    /* Swizzler Getter Function(`iyyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, y, 0 )` */ \
    T##vec4 T##vec4::__iyyi() { return T##vec4( 0, y, y, 0 ); } \
    /* Swizzler Getter Function(`iyzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, z, x )` */ \
    T##vec4 T##vec4::__iyzx() { return T##vec4( 0, y, z, x ); } \
    /* Swizzler Getter Function(`iyzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, z, y )` */ \
    T##vec4 T##vec4::__iyzy() { return T##vec4( 0, y, z, y ); } \
    /* Swizzler Getter Function(`iyzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, z, z )` */ \
    T##vec4 T##vec4::__iyzz() { return T##vec4( 0, y, z, z ); } \
    /* Swizzler Getter Function(`iyzw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, z, w )` */ \
    T##vec4 T##vec4::__iyzw() { return T##vec4( 0, y, z, w ); } \
    /* Swizzler Getter Function(`iyzi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, z, 0 )` */ \
    T##vec4 T##vec4::__iyzi() { return T##vec4( 0, y, z, 0 ); } \
    /* Swizzler Getter Function(`iywx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, w, x )` */ \
    T##vec4 T##vec4::__iywx() { return T##vec4( 0, y, w, x ); } \
    /* Swizzler Getter Function(`iywy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, w, y )` */ \
    T##vec4 T##vec4::__iywy() { return T##vec4( 0, y, w, y ); } \
    /* Swizzler Getter Function(`iywz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, w, z )` */ \
    T##vec4 T##vec4::__iywz() { return T##vec4( 0, y, w, z ); } \
    /* Swizzler Getter Function(`iyww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, w, w )` */ \
    T##vec4 T##vec4::__iyww() { return T##vec4( 0, y, w, w ); } \
    /* Swizzler Getter Function(`iywi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, w, 0 )` */ \
    T##vec4 T##vec4::__iywi() { return T##vec4( 0, y, w, 0 ); } \
    /* Swizzler Getter Function(`iyix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, 0, x )` */ \
    T##vec4 T##vec4::__iyix() { return T##vec4( 0, y, 0, x ); } \
    /* Swizzler Getter Function(`iyiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, 0, y )` */ \
    T##vec4 T##vec4::__iyiy() { return T##vec4( 0, y, 0, y ); } \
    /* Swizzler Getter Function(`iyiz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, 0, z )` */ \
    T##vec4 T##vec4::__iyiz() { return T##vec4( 0, y, 0, z ); } \
    /* Swizzler Getter Function(`iyiw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, 0, w )` */ \
    T##vec4 T##vec4::__iyiw() { return T##vec4( 0, y, 0, w ); } \
    /* Swizzler Getter Function(`iyii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, y, 0, 0 )` */ \
    T##vec4 T##vec4::__iyii() { return T##vec4( 0, y, 0, 0 ); } \
    /* Swizzler Getter Function(`izxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, z, x, x )` */ \
    T##vec4 T##vec4::__izxx() { return T##vec4( 0, z, x, x ); } \
    /* Swizzler Getter Function(`izxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, z, x, y )` */ \
    T##vec4 T##vec4::__izxy() { return T##vec4( 0, z, x, y ); } \
    /* Swizzler Getter Function(`izxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, z, x, z )` */ \
    T##vec4 T##vec4::__izxz() { return T##vec4( 0, z, x, z ); } \
    /* Swizzler Getter Function(`izxw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, z, x, w )` */ \
    T##vec4 T##vec4::__izxw() { return T##vec4( 0, z, x, w ); } \
    /* Swizzler Getter Function(`izxi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, z, x, 0 )` */ \
    T##vec4 T##vec4::__izxi() { return T##vec4( 0, z, x, 0 ); } \
    /* Swizzler Getter Function(`izyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, z, y, x )` */ \
    T##vec4 T##vec4::__izyx() { return T##vec4( 0, z, y, x ); } \
    /* Swizzler Getter Function(`izyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, z, y, y )` */ \
    T##vec4 T##vec4::__izyy() { return T##vec4( 0, z, y, y ); } \
    /* Swizzler Getter Function(`izyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, z, y, z )` */ \
    T##vec4 T##vec4::__izyz() { return T##vec4( 0, z, y, z ); } \
    /* Swizzler Getter Function(`izyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, z, y, w )` */ \
    T##vec4 T##vec4::__izyw() { return T##vec4( 0, z, y, w ); } \
    /* Swizzler Getter Function(`izyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, z, y, 0 )` */ \
    T##vec4 T##vec4::__izyi() { return T##vec4( 0, z, y, 0 ); } \
    /* Swizzler Getter Function(`izzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, z, z, x )` */ \
    T##vec4 T##vec4::__izzx() { return T##vec4( 0, z, z, x ); } \
    /* Swizzler Getter Function(`izzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, z, z, y )` */ \
    T##vec4 T##vec4::__izzy() { return T##vec4( 0, z, z, y ); } \
    /* Swizzler Getter Function(`izzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, z, z, z )` */ \
    T##vec4 T##vec4::__izzz() { return T##vec4( 0, z, z, z ); } \
    /* Swizzler Getter Function(`izzw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, z, z, w )` */ \
    T##vec4 T##vec4::__izzw() { return T##vec4( 0, z, z, w ); } \
    /* Swizzler Getter Function(`izzi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, z, z, 0 )` */ \
    T##vec4 T##vec4::__izzi() { return T##vec4( 0, z, z, 0 ); } \
    /* Swizzler Getter Function(`izwx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, z, w, x )` */ \
    T##vec4 T##vec4::__izwx() { return T##vec4( 0, z, w, x ); } \
    /* Swizzler Getter Function(`izwy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, z, w, y )` */ \
    T##vec4 T##vec4::__izwy() { return T##vec4( 0, z, w, y ); } \
    /* Swizzler Getter Function(`izwz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, z, w, z )` */ \
    T##vec4 T##vec4::__izwz() { return T##vec4( 0, z, w, z ); } \
    /* Swizzler Getter Function(`izww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, z, w, w )` */ \
    T##vec4 T##vec4::__izww() { return T##vec4( 0, z, w, w ); } \
    /* Swizzler Getter Function(`izwi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, z, w, 0 )` */ \
    T##vec4 T##vec4::__izwi() { return T##vec4( 0, z, w, 0 ); } \
    /* Swizzler Getter Function(`izix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, z, 0, x )` */ \
    T##vec4 T##vec4::__izix() { return T##vec4( 0, z, 0, x ); } \
    /* Swizzler Getter Function(`iziy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, z, 0, y )` */ \
    T##vec4 T##vec4::__iziy() { return T##vec4( 0, z, 0, y ); } \
    /* Swizzler Getter Function(`iziz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, z, 0, z )` */ \
    T##vec4 T##vec4::__iziz() { return T##vec4( 0, z, 0, z ); } \
    /* Swizzler Getter Function(`iziw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, z, 0, w )` */ \
    T##vec4 T##vec4::__iziw() { return T##vec4( 0, z, 0, w ); } \
    /* Swizzler Getter Function(`izii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, z, 0, 0 )` */ \
    T##vec4 T##vec4::__izii() { return T##vec4( 0, z, 0, 0 ); } \
    /* Swizzler Getter Function(`iwxx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, w, x, x )` */ \
    T##vec4 T##vec4::__iwxx() { return T##vec4( 0, w, x, x ); } \
    /* Swizzler Getter Function(`iwxy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, w, x, y )` */ \
    T##vec4 T##vec4::__iwxy() { return T##vec4( 0, w, x, y ); } \
    /* Swizzler Getter Function(`iwxz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, w, x, z )` */ \
    T##vec4 T##vec4::__iwxz() { return T##vec4( 0, w, x, z ); } \
    /* Swizzler Getter Function(`iwxw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, w, x, w )` */ \
    T##vec4 T##vec4::__iwxw() { return T##vec4( 0, w, x, w ); } \
    /* Swizzler Getter Function(`iwxi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, w, x, 0 )` */ \
    T##vec4 T##vec4::__iwxi() { return T##vec4( 0, w, x, 0 ); } \
    /* Swizzler Getter Function(`iwyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, w, y, x )` */ \
    T##vec4 T##vec4::__iwyx() { return T##vec4( 0, w, y, x ); } \
    /* Swizzler Getter Function(`iwyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, w, y, y )` */ \
    T##vec4 T##vec4::__iwyy() { return T##vec4( 0, w, y, y ); } \
    /* Swizzler Getter Function(`iwyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, w, y, z )` */ \
    T##vec4 T##vec4::__iwyz() { return T##vec4( 0, w, y, z ); } \
    /* Swizzler Getter Function(`iwyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, w, y, w )` */ \
    T##vec4 T##vec4::__iwyw() { return T##vec4( 0, w, y, w ); } \
    /* Swizzler Getter Function(`iwyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, w, y, 0 )` */ \
    T##vec4 T##vec4::__iwyi() { return T##vec4( 0, w, y, 0 ); } \
    /* Swizzler Getter Function(`iwzx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, w, z, x )` */ \
    T##vec4 T##vec4::__iwzx() { return T##vec4( 0, w, z, x ); } \
    /* Swizzler Getter Function(`iwzy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, w, z, y )` */ \
    T##vec4 T##vec4::__iwzy() { return T##vec4( 0, w, z, y ); } \
    /* Swizzler Getter Function(`iwzz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, w, z, z )` */ \
    T##vec4 T##vec4::__iwzz() { return T##vec4( 0, w, z, z ); } \
    /* Swizzler Getter Function(`iwzw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, w, z, w )` */ \
    T##vec4 T##vec4::__iwzw() { return T##vec4( 0, w, z, w ); } \
    /* Swizzler Getter Function(`iwzi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, w, z, 0 )` */ \
    T##vec4 T##vec4::__iwzi() { return T##vec4( 0, w, z, 0 ); } \
    /* Swizzler Getter Function(`iwwx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, w, w, x )` */ \
    T##vec4 T##vec4::__iwwx() { return T##vec4( 0, w, w, x ); } \
    /* Swizzler Getter Function(`iwwy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, w, w, y )` */ \
    T##vec4 T##vec4::__iwwy() { return T##vec4( 0, w, w, y ); } \
    /* Swizzler Getter Function(`iwwz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, w, w, z )` */ \
    T##vec4 T##vec4::__iwwz() { return T##vec4( 0, w, w, z ); } \
    /* Swizzler Getter Function(`iwww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, w, w, w )` */ \
    T##vec4 T##vec4::__iwww() { return T##vec4( 0, w, w, w ); } \
    /* Swizzler Getter Function(`iwwi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, w, w, 0 )` */ \
    T##vec4 T##vec4::__iwwi() { return T##vec4( 0, w, w, 0 ); } \
    /* Swizzler Getter Function(`iwix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, w, 0, x )` */ \
    T##vec4 T##vec4::__iwix() { return T##vec4( 0, w, 0, x ); } \
    /* Swizzler Getter Function(`iwiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, w, 0, y )` */ \
    T##vec4 T##vec4::__iwiy() { return T##vec4( 0, w, 0, y ); } \
    /* Swizzler Getter Function(`iwiz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, w, 0, z )` */ \
    T##vec4 T##vec4::__iwiz() { return T##vec4( 0, w, 0, z ); } \
    /* Swizzler Getter Function(`iwiw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, w, 0, w )` */ \
    T##vec4 T##vec4::__iwiw() { return T##vec4( 0, w, 0, w ); } \
    /* Swizzler Getter Function(`iwii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, w, 0, 0 )` */ \
    T##vec4 T##vec4::__iwii() { return T##vec4( 0, w, 0, 0 ); } \
    /* Swizzler Getter Function(`iixx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, x, x )` */ \
    T##vec4 T##vec4::__iixx() { return T##vec4( 0, 0, x, x ); } \
    /* Swizzler Getter Function(`iixy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, x, y )` */ \
    T##vec4 T##vec4::__iixy() { return T##vec4( 0, 0, x, y ); } \
    /* Swizzler Getter Function(`iixz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, x, z )` */ \
    T##vec4 T##vec4::__iixz() { return T##vec4( 0, 0, x, z ); } \
    /* Swizzler Getter Function(`iixw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, x, w )` */ \
    T##vec4 T##vec4::__iixw() { return T##vec4( 0, 0, x, w ); } \
    /* Swizzler Getter Function(`iixi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, x, 0 )` */ \
    T##vec4 T##vec4::__iixi() { return T##vec4( 0, 0, x, 0 ); } \
    /* Swizzler Getter Function(`iiyx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, y, x )` */ \
    T##vec4 T##vec4::__iiyx() { return T##vec4( 0, 0, y, x ); } \
    /* Swizzler Getter Function(`iiyy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, y, y )` */ \
    T##vec4 T##vec4::__iiyy() { return T##vec4( 0, 0, y, y ); } \
    /* Swizzler Getter Function(`iiyz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, y, z )` */ \
    T##vec4 T##vec4::__iiyz() { return T##vec4( 0, 0, y, z ); } \
    /* Swizzler Getter Function(`iiyw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, y, w )` */ \
    T##vec4 T##vec4::__iiyw() { return T##vec4( 0, 0, y, w ); } \
    /* Swizzler Getter Function(`iiyi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, y, 0 )` */ \
    T##vec4 T##vec4::__iiyi() { return T##vec4( 0, 0, y, 0 ); } \
    /* Swizzler Getter Function(`iizx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, z, x )` */ \
    T##vec4 T##vec4::__iizx() { return T##vec4( 0, 0, z, x ); } \
    /* Swizzler Getter Function(`iizy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, z, y )` */ \
    T##vec4 T##vec4::__iizy() { return T##vec4( 0, 0, z, y ); } \
    /* Swizzler Getter Function(`iizz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, z, z )` */ \
    T##vec4 T##vec4::__iizz() { return T##vec4( 0, 0, z, z ); } \
    /* Swizzler Getter Function(`iizw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, z, w )` */ \
    T##vec4 T##vec4::__iizw() { return T##vec4( 0, 0, z, w ); } \
    /* Swizzler Getter Function(`iizi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, z, 0 )` */ \
    T##vec4 T##vec4::__iizi() { return T##vec4( 0, 0, z, 0 ); } \
    /* Swizzler Getter Function(`iiwx`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, w, x )` */ \
    T##vec4 T##vec4::__iiwx() { return T##vec4( 0, 0, w, x ); } \
    /* Swizzler Getter Function(`iiwy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, w, y )` */ \
    T##vec4 T##vec4::__iiwy() { return T##vec4( 0, 0, w, y ); } \
    /* Swizzler Getter Function(`iiwz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, w, z )` */ \
    T##vec4 T##vec4::__iiwz() { return T##vec4( 0, 0, w, z ); } \
    /* Swizzler Getter Function(`iiww`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, w, w )` */ \
    T##vec4 T##vec4::__iiww() { return T##vec4( 0, 0, w, w ); } \
    /* Swizzler Getter Function(`iiwi`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, w, 0 )` */ \
    T##vec4 T##vec4::__iiwi() { return T##vec4( 0, 0, w, 0 ); } \
    /* Swizzler Getter Function(`iiix`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, 0, x )` */ \
    T##vec4 T##vec4::__iiix() { return T##vec4( 0, 0, 0, x ); } \
    /* Swizzler Getter Function(`iiiy`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, 0, y )` */ \
    T##vec4 T##vec4::__iiiy() { return T##vec4( 0, 0, 0, y ); } \
    /* Swizzler Getter Function(`iiiz`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, 0, z )` */ \
    T##vec4 T##vec4::__iiiz() { return T##vec4( 0, 0, 0, z ); } \
    /* Swizzler Getter Function(`iiiw`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, 0, w )` */ \
    T##vec4 T##vec4::__iiiw() { return T##vec4( 0, 0, 0, w ); } \
    /* Swizzler Getter Function(`iiii`) */ \
    /* Shorthand is defined in `swizzling_shorthand.hpp` */ \
    /* Returns `T##vec4( 0, 0, 0, 0 )` */ \
    T##vec4 T##vec4::__iiii() { return T##vec4( 0, 0, 0, 0 ); } \

#endif