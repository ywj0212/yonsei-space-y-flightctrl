# yonsei-space-y-flightctrl

## 1. mathlib

Flight Controller 개발 편의성을 위해서 Vector, Quaternion, EulerAngle, Matrix 데이터 타입을 제공하는 라이브러리입니다. 전반적으로 GLSL의 Vector 자료형을 참고하였습니다.

### 1.1. Vector

Boolean 타입을 포함하여 각각의 스칼라 타입(bool, int, float, double)에 대해서, 2에서 4개의 성분을 가진 벡터를 제공합니다. (1 &le; *n* &le; 4)

+ `bvecn`: Boolean 벡터 (내부적으로 `vec<bool, n>`)
+ `ivecn`: Integer 벡터 (내부적으로 `vec<int, n>`)
+ `fvecn`: 단정밀도 부동소수점수(Float) 벡터 (`vecn`으로도 사용가능) (내부적으로 `vec<float, n>`)
+ `dvecn`: 배정밀도 부동소수점수(Double) 벡터 (내부적으로 `vec<double, n>`)

이 외의 데이터 타입이나 5개 이상의 차원을 가진 벡터 자료형에 대해서는 `vec<T, N>`을 사용하십시오. 위에서 제공된 벡터 자료형이 아닌 경우에는 벡터의 각 요소의 접근을 위해서는 `T data[]` 배열 멤버를 이용하여 접근하십시오.
```cpp
vec<int, 6> a;
a.data[5] = 3;
```

벡터 값들은 스칼라 값들(bool, int, float, double)과 같은 수학 연산자들을 가질 수 있습니다. 모두 각 성분에 대해 각각 연산을 수행합니다. 그러나 이 연산자들이 벡터에 대해 작동하기 위해서는 두 벡터가 동일한 개수의 성분을 가져야 합니다.

+ 기본 연산자`(float, double)`: `+, -, *, /, +=, -=, *=, /=`
+ 기본 연산자(추가)`(int)`: `%, %=`
+ 그 외 수학 함수들: `abs, sign, min, max, floor, ceil, round, trunc, sin, cos, asin, acos, atan, mod, degrees, radians, fract, inversesqrt, clamp, smoothstep, step, lerp, log, exp, log2, exp2, sqrt, pow`

### 1.2. Swizzling

다음 구문을 사용하여 벡터의 각 구성 요소에 액세스할 수 있습니다:

```glsl
vec4 someVec;
someVec.x + someVec.y;
```

이것을 스위즐링(swizzling)이라고 합니다. 첫 번째, 두 번째, 세 번째, 네 번째 성분을 각각 나타내는 `x`, `y`, `z`, `w` (`r`, `g`, `b`, `a` / `s`, `t`, `p`, `q`) 또는 `i`를 사용할 수 있습니다. 이때 i는 해당 성분이 `0` 또는 `false`임을 나타냅니다.

또한 하나씩 접근하는 것이 아닌 여러개를 한 번에 접근하고 수정하는 것도 가능합니다. 아래 코드의 다음 구문은 완전히 유효합니다:

```glsl
ivec2 someVec(1, 3);
ivec4 otherVec = someVec.xyix; // (1, 3, 0, 1)
ivec3 thirdVec = otherVec.zyy; // (0, 1, 1)
```

최대 4개의 문자 조합을 사용하여 해당 길이의 벡터(내부적으로는   `swizzler`라는 객체)를 만들 수 있습니다. 따라서 `otherVec.zyy`는 `vec<int, 3>`과 함께 쓰일 수 있으며, 원본 벡터에 실제로 해당 성분이 있는 한 최대 4개의 문자 조합이 허용됩니다. 예를 들어 vec3의 '`w`' 성분에 액세스하려고 시도하는 것은 컴파일 에러를 일으킵니다.

Swizzling은 `l-value`에서도 작동합니다:

```glsl
vec4 someVec;
someVec.wzyx = vec4(1.0, 2.0, 3.0, 4.0); // Reverses the order.
someVec.zx = vec2(3.0, 5.0); // Sets the 3rd component of someVec to 3.0 and the 1st component to 5.0
```

GLSL처럼 **xyzw** 뿐만 아니라 **rgba**나 **stpq**또한 사용할 수 있습니다.
그러나 OpenGL 4.2 이상에서 처럼 스칼라 값은 Swizzling을 사용할 수 없습니다. (e.g. `float aFloat;
vec4 someVec = aFloat.xxxx;` 는 사용 불가능)

### 1.3. Angles

Quaternion과 EulerAngle을 Float, Double 두가지 타입으로 제공합니다.

### 1.4 Matrices

기본적인 행렬 연산을 제공합니다.

## 2. Scheduler
## 3. Utils
### 3.1. PID Controller
### 3.2. Logger
### 3.3. Integrator