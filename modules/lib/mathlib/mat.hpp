#ifndef __SPACE_Y_MATHLIB_MAT__
#define __SPACE_Y_MATHLIB_MAT__


// template <class T, int M, int N>
// struct mat;
// template <class T, int M, int N>
// mat<T, M, N>& operator*=(mat<T, M, N> &a, T &scalar);
// template <class T, int M, int N>
// mat<T, M, N> operator*(mat<T, M, N> &a, T &scalar);
// template <class T, int M, int N>
// mat<T, M, N> operator*(T &scalar, mat<T, M, N> &a);
// template <class T, int M, int N>
// mat<T, M, N>& operator/=(mat<T, M, N> &a, T &scalar);
// template <class T, int M, int N>
// mat<T, M, N> operator/(mat<T, M, N> &a, T &scalar);

#include <type_traits>
#include "vec.hpp"

#define __MAT_MEMBER(member, M, N)\
union {\
  T data[M][N];\
  member\
};

#define __MAT_COMMON(M, N)\
  mat() {}\
  mat(const T arr[M][N]) {\
    for(int i = 0; i < N; i++) {\
      for(int j = 0; j < M; j++) {\
        data[j][i] = arr[j][i];\
      }\
    }\
  }\
  mat<T, M, N>& operator+=(mat<T, M, N> b) {\
    for(int i = 0; i < M; i++) {\
      for(int j = 0; j < N; j++) {\
        data[i][j] += b.data[i][j];\
      }\
    }\
    return (*this);\
  }\
  mat<T, M, N>  operator+ (mat<T, M, N> b) {\
    mat<T, M, N> result;\
    for(int i = 0; i < M; i++) {\
      for(int j = 0; j < N; j++) {\
        result.data[i][j] = data[i][j] + b.data[i][j];\
      }\
    }\
    return result;\
  }\
  mat<T, M, N>& operator-=(mat<T, M, N> b) {\
    for(int i = 0; i < M; i++) {\
      for(int j = 0; j < N; j++) {\
        data[i][j] -= b.data[i][j];\
      }\
    }\
    return (*this);\
  }\
  mat<T, M, N>  operator- (mat<T, M, N> b) {\
    mat<T, M, N> result;\
    for(int i = 0; i < M; i++) {\
      for(int j = 0; j < N; j++) {\
        result.data[i][j] = data[i][j] - b.data[i][j];\
      }\
    }\
    return result;\
  }\
  template <int R>\
  mat<T, M, R> operator*(mat<T, N, R> &b) {\
    mat<T, M, R> result;\
    for(int i = 0; i < M; i++) {\
      for(int j = 0; j < R; j++) {\
        result.data[i][j] = dot(row(i+1), b.col(j+1));\
      }\
    }\
    return result;\
  }\
  T entry(int row, int col) {\
    return data[col][row];\
  }\
  vec<T, N> row(int row) {\
    vec<T, N> result;\
    for(int i = 0; i < N; i++) {\
      result.data[i] = data[row-1][i];\
    }\
    return result;\
  }\
  vec<T, M> col(int col) {\
    vec<T, M> result;\
    for(int i = 0; i < M; i++) {\
      result.data[i] = data[i][col-1];\
    }\
    return result;\
  }

template <class T, int M, int N>
struct mat {
  __MAT_MEMBER(, M, N)
  __MAT_COMMON(M, N)
};

template <class T, int N>
struct mat<T, N, N> {
  __MAT_MEMBER(, N, N)
  __MAT_COMMON(N, N)
  static mat<T, N, N> identity() {
    mat<T, N, N> result;
    for(int i = 0; i < N; i++) {
      for(int j = 0; j < N; j++) {
        if(i == j) result.data[i][j] == 1;
        else result &= (result.data[i][j] == 0);
      }
    }
  }
};

#define __T_VEC2 vec<T, 2>
#define __T_VEC3 vec<T, 3>
#define __T_VEC4 vec<T, 4>
template <class T>
struct mat<T, 2, 2> {
  __MAT_MEMBER(
    struct {
      T m11; T m12;
      T m21; T m22;
    };
    struct {
      __T_VEC2 r1;
      __T_VEC2 r2;
    };,
    2, 2
  )
  __MAT_COMMON(2, 2)

  mat(
    const T &m11, const T &m12,
    const T &m21, const T &m22
  ) : m11(m11), m12(m12),
      m21(m21), m22(m22) {}
  
  mat(
    const __T_VEC2 &r1,
    const __T_VEC2 &r2
  ) : r1(r1), r2(r2) {}

  static mat<T, 2, 2> identity() {
    mat<T, 2, 2> result;
    for(int i = 0; i < 2; i++) {
      for(int j = 0; j < 2; j++) {
        if(i == j) result.data[i][j] == 1;
        else result &= (result.data[i][j] == 0);
      }
    }
  }
};
template <class T>
struct mat<T, 3, 3> {
  __MAT_MEMBER(
    struct {
      T m11; T m12; T m13;
      T m21; T m22; T m23;
      T m31; T m32; T m33;
    };
    struct {
      __T_VEC3 r1;
      __T_VEC3 r2;
      __T_VEC3 r3;
    };,
    3, 3
  )
  __MAT_COMMON(3, 3)

  mat(
    const T &m11, const T &m12, const T &m13,
    const T &m21, const T &m22, const T &m23,
    const T &m31, const T &m32, const T &m33
  ) : m11(m11), m12(m12), m13(m13),
      m21(m21), m22(m22), m23(m23),
      m31(m31), m32(m32), m33(m33) {}

  mat(const mat &a) : m11(a.m11), m12(a.m12), m13(a.m13),
                      m21(a.m21), m22(a.m22), m23(a.m23),
                      m31(a.m31), m32(a.m32), m33(a.m33) {}
  mat(
    const __T_VEC3 &r1,
    const __T_VEC3 &r2,
    const __T_VEC3 &r3
  ) : r1(r1), r2(r2), r3(r3) {}

  static mat<T, 3, 3> identity() {
    mat<T, 3, 3> result;
    for(int i = 0; i < 3; i++) {
      for(int j = 0; j < 3; j++) {
        if(i == j) result.data[i][j] == 1;
        else result &= (result.data[i][j] == 0);
      }
    }
  }
};

typedef mat<int, 2, 2> imat2x2;
typedef mat<float, 2, 2> mat2x2;
typedef mat<double, 2, 2> dmat2x2;
typedef mat<int, 3, 3> imat3x3;
typedef mat<float, 3, 3> mat3x3;
typedef mat<double, 3, 3> dmat3x3;

template <class T, int M, int N> bool          operator==(mat<T, M, N> &a, mat<T, M, N> &b) {
  bool result = true;
  for(int i = 0; i < M; i++) {
    for(int j = 0; j < N; j++) {
      result &= (a.data[i][j] == b.data[i][j]);
    }
  }
  return result;
}
template <class T, int M, int N> bool          operator!=(mat<T, M, N> &a, mat<T, M, N> &b) {
  bool result = false;
  for(int i = 0; i < M; i++) {
    for(int j = 0; j < N; j++) {
      result |= (a.data[i][j] != b.data[i][j]);
    }
  }
  return result;
}
template <class T, int M, int N> mat<T, M, N>& operator*=(mat<T, M, N> &a, T scalar) {
  for(int i = 0; i < M; i++) {
    for(int j = 0; j < N; j++) {
      a.data[i][j] *= scalar;
    }
  }
  return a;
}
template <class T, int M, int N> mat<T, M, N>  operator* (mat<T, M, N> a, T scalar) {
  mat<T, M, N> result;
  for(int i = 0; i < M; i++) {
    for(int j = 0; j < N; j++) {
      result.data[i][j] = a.data[i][j] * scalar;
    }
  }
  return result;
}
template <class T, int M, int N> mat<T, M, N>  operator* (T scalar, mat<T, M, N> a) {
  mat<T, M, N> result;
  for(int i = 0; i < M; i++) {
    for(int j = 0; j < N; j++) {
      result.data[i][j] = a.data[i][j] * scalar;
    }
  }
  return result;
}
template <class T, int M, int N> mat<T, M, N>& operator/=(mat<T, M, N> &a, T scalar) {
  for(int i = 0; i < M; i++) {
    for(int j = 0; j < N; j++) {
      a.data[i][j] /= scalar;
    }
  }
  return a;
}
template <class T, int M, int N> mat<T, M, N>  operator/ (mat<T, M, N> a, T scalar) {
  mat<T, M, N> result;
  for(int i = 0; i < M; i++) {
    for(int j = 0; j < N; j++) {
      result.data[i][j] = a.data[i][j] / scalar;
    }
  }
  return result;
}

template <class T, int M, int N> ivec2                  dim(mat<T, M, N>)                 { return ivec2(M, N); }
template <class T, int M, int N> bool                   isSquare(mat<T, M, N>)            { return (N == M); }
template <class T, int N>        bool                   isIdentity(mat<T, N, N> &a)       {
  bool result = true;
  for(int i = 0; i < N; i++) {
    for(int j = 0; j < N; j++) {
      if(i == j) result &= (a.data[i][j] == 1);
      else result &= (a.data[i][j] == 0);
    }
  }
  return result;
}
// template <class T, int N, typename = std::enable_if<(N > 1)>>
// double                 det(mat<T, N, N> &a)              {
//   if(N == 1) {
//     return a.data[0][0];
//   }
//   else if(N == 2) {
//     return a.data[0][0] * a.data[1][1] - a.data[0][1] * a.data[1][0];
//   }

//   int i, j, k, sign = 1;
//   double result = 0;
  
//   if(N > 2) {
//     mat<T, N-1, N-1> sub;
//     for(k = 0; k < N; k++) {
//       for(i = 1; i < N; i++) {
//         for(j = 0; j < N; j++) {
//           if(j < k)
//             sub.data[i - 1][j] = a.data[i][j];
//           else if(j > k)
//             sub.data[i - 1][j - 1] = a.data[i][j];
//         }
//       }
//       if(N > 1) {
//         result += sign * a.data[0][k] * det(sub);
//         sign = -sign;
//       }
//     }
//   }
//   return result;
// }

#endif