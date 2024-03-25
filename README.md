# yonsei-space-y-flightctrl

## 1. mathlib

Flight Controller 개발 편의성을 위해서 Vector, Quaternion, EulerAngle 데이터 타입을 제공하는 라이브러리입니다. GLSL의 Vector 자료형을 참고하였습니다.

### 1.1. Vector

Boolean 타입을 포함하여 각각의 스칼라 타입(bool, int, float, double)에 대해서, 2에서 4개의 성분을 가진 벡터를 제공합니다. (2 &le; *n* &le; 4)

+ `bvecn`: Boolean 벡터
+ `ivecn`: Integer 벡터
+ `fvecn`: 단정밀도 부동소수점수(Float) 벡터 (`vecn`으로도 사용가능)
+ `dvecn`: 배정밀도 부동소수점수(Double) 벡터

벡터 값들은 스칼라 값들(bool, int, float, double)과 같은 수학 연산자들을 가질 수 있습니다. 모두 각 성분에 대해 각각 연산을 수행합니다. 그러나 이 연산자들이 벡터에 대해 작동하기 위해서는 두 벡터가 동일한 개수의 성분을 가져야 합니다.

`+, -, *, /, abs, sign, min, max, floor, ceil, round, trunc, sin, cos, asin, acos, atan, mod, degrees, radians, fract, inversesqrt, clamp, smoothstep, step, lerp, log, exp, log2, exp2, sqrt, pow`

### 1.2. Swizzling

다음 구문을 사용하여 벡터의 각 구성 요소에 액세스할 수 있습니다:

```glsl
vec4 someVec;
someVec.x + someVec.y;
```

이것을 스위즐링(swizzling)이라고 합니다. 첫 번째, 두 번째, 세 번째, 네 번째 성분을 각각 나타내는 x, y, z, w 또는 i를 사용할 수 있습니다. 이때 i는 해당 성분이 `0` 또는 `false`임을 나타냅니다.

또한 하나씩 접근하는 것이 아닌 여러개를 한 번에 접근하고 수정하는 것도 가능합니다. 아래 코드의 다음 구문은 완전히 유효합니다:

```glsl
ivec2 someVec(1, 3);
ivec4 otherVec = someVec.xyix; // (1, 3, 0, 1)
ivec3 thirdVec = otherVec.zyy; // (0, 1, 1)
```

최대 4개의 문자 조합을 사용하여 해당 길이의 벡터(같은 기본 유형의)를 만들 수 있습니다. 따라서 otherVec.zyy는 vec3이며, 원본 벡터에 실제로 해당 성분이 있는 한 최대 4개의 문자 조합이 허용됩니다. 예를 들어 vec3의 '`w`' 성분에 액세스하려고 시도하는 것은 컴파일 에러를 일으킵니다.

Swizzling은 `l-value`에서도 작동합니다:

```glsl
vec4 someVec;
someVec.wzyx = vec4(1.0, 2.0, 3.0, 4.0); // Reverses the order.
someVec.zx = vec2(3.0, 5.0); // Sets the 3rd component of someVec to 3.0 and the 1st component to 5.0
```

그러나 GLSL에서와는 달리 **xyzw**외의 rgba나 stpq는 사용할 수 없습니다.
그리고 OpenGL 4.2 이상에서 처럼 스칼라 값은 Swizzling을 사용할 수 없습니다. (e.g. `float aFloat;
vec4 someVec = aFloat.xxxx;` 는 사용 불가능)

### 1.3. Angles

Quaternion과 EulerAngle을 Float, Double 두가지 타입으로 제공합니다.