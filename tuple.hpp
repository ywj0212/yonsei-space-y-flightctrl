#ifndef __SPACE_Y_MATHLIB_TUPLE__
#define __SPACE_Y_MATHLIB_TUPLE__

struct __b_tuple_1 {
  bool &x;

  __b_tuple_1(bool &_x) : x(_x) {}
  __b_tuple_1& operator=(const __b_tuple_1 &ref) {
    bool _x = ref.x;
    x = _x;
    return *this; 
  }
};
struct __i_tuple_1 {
  int &x;

  __i_tuple_1(int &_x) : x(_x) {}
  __i_tuple_1& operator=(const __i_tuple_1 &ref) {
    int _x = ref.x;
    x = _x;
    return *this;
  }
};
struct __f_tuple_1 {
  float &x;

  __f_tuple_1(float &_x) : x(_x) {}
  __f_tuple_1& operator=(const __f_tuple_1 &ref) {
    float _x = ref.x;
    x = _x;
    return *this;
  }
};
struct __d_tuple_1 {
  double &x;

  __d_tuple_1(double &_x) : x(_x) {}
  __d_tuple_1& operator=(const __d_tuple_1 &ref) {
    double _x = ref.x;
    x = _x;
    return *this;
  }
};

struct __b_tuple_2 {
  bool &x;
  bool &y;

  __b_tuple_2(bool &_x, bool &_y) : x(_x), y(_y) {}
  __b_tuple_2& operator=(const __b_tuple_2 &ref) {
    bool _x = ref.x;
    bool _y = ref.y;
    x = _x;
    y = _y;
    return *this;
  }
  operator __b_tuple_1() const { return __b_tuple_1(x); }
};
struct __i_tuple_2 {
  int &x;
  int &y;

  __i_tuple_2(int &_x, int &_y) : x(_x), y(_y) {}
  __i_tuple_2& operator=(const __i_tuple_2 &ref) {
    int _x = ref.x;
    int _y = ref.y;
    x = _x;
    y = _y;
    return *this;
  }
  operator __i_tuple_1() const { return __i_tuple_1(x); }
};
struct __f_tuple_2 {
  float &x;
  float &y;

  __f_tuple_2(float &_x, float &_y) : x(_x), y(_y) {}
  __f_tuple_2& operator=(const __f_tuple_2 &ref) {
    float _x = ref.x;
    float _y = ref.y;
    x = _x;
    y = _y;
    return *this;
  }
  operator __f_tuple_1() const { return __f_tuple_1(x); }
};
struct __d_tuple_2 {
  double &x;
  double &y;

  __d_tuple_2(double &_x, double &_y) : x(_x), y(_y) {}
  __d_tuple_2& operator=(const __d_tuple_2 &ref) {
    double _x = ref.x;
    double _y = ref.y;
    x = _x;
    y = _y;
    return *this;
  }
  operator __d_tuple_1() const { return __d_tuple_1(x); }
};

struct __b_tuple_3 {
  bool &x;
  bool &y;
  bool &z;

  __b_tuple_3(bool &_x, bool &_y, bool &_z) : x(_x), y(_y), z(_z) {}
  __b_tuple_3& operator=(const __b_tuple_3 &ref) {
    bool _x = ref.x;
    bool _y = ref.y;
    bool _z = ref.z;
    x = _x;
    y = _y;
    z = _z;
    return *this;
  }
  operator __b_tuple_1() const { return __b_tuple_1(x); }
  operator __b_tuple_2() const { return __b_tuple_2(x, y); }
};
struct __i_tuple_3 {
  int &x;
  int &y;
  int &z;

  __i_tuple_3(int &_x, int &_y, int &_z) : x(_x), y(_y), z(_z) {}
  __i_tuple_3& operator=(const __i_tuple_3 &ref) {
    int _x = ref.x;
    int _y = ref.y;
    int _z = ref.z;
    x = _x;
    y = _y;
    z = _z;
    return *this;
  }
  operator __i_tuple_1() const { return __i_tuple_1(x); }
  operator __i_tuple_2() const { return __i_tuple_2(x, y); }
};
struct __f_tuple_3 {
  float &x;
  float &y;
  float &z;

  __f_tuple_3(float &_x, float &_y, float &_z) : x(_x), y(_y), z(_z) {}
  __f_tuple_3& operator=(const __f_tuple_3 &ref) {
    float _x = ref.x;
    float _y = ref.y;
    float _z = ref.z;
    x = _x;
    y = _y;
    z = _z;
    return *this;
  }
  operator __f_tuple_1() const { return __f_tuple_1(x); }
  operator __f_tuple_2() const { return __f_tuple_2(x, y); }
};
struct __d_tuple_3 {
  double &x;
  double &y;
  double &z;

  __d_tuple_3(double &_x, double &_y, double &_z) : x(_x), y(_y), z(_z) {}
  __d_tuple_3& operator=(const __d_tuple_3 &ref) {
    double _x = ref.x;
    double _y = ref.y;
    double _z = ref.z;
    x = _x;
    y = _y;
    z = _z;
    return *this;
  }
  operator __d_tuple_1() const { return __d_tuple_1(x); }
  operator __d_tuple_2() const { return __d_tuple_2(x, y); }
};

struct __b_tuple_4 {
  bool &x;
  bool &y;
  bool &z;
  bool &w;

  __b_tuple_4(bool &_x, bool &_y, bool &_z, bool &_w) : x(_x), y(_y), z(_z), w(_w) {}
  __b_tuple_4& operator=(const __b_tuple_4 &ref) {
    bool _x = ref.x;
    bool _y = ref.y;
    bool _z = ref.z;
    bool _w = ref.w;
    x = _x;
    y = _y;
    z = _z;
    w = _w;
    return *this;
  }
  operator __b_tuple_1() const { return __b_tuple_1(x); }
  operator __b_tuple_2() const { return __b_tuple_2(x, y); }
  operator __b_tuple_3() const { return __b_tuple_3(x, y, z); }
};
struct __i_tuple_4 {
  int &x;
  int &y;
  int &z;
  int &w;

  __i_tuple_4(int &_x, int &_y, int &_z, int &_w) : x(_x), y(_y), z(_z), w(_w) {}
  __i_tuple_4& operator=(const __i_tuple_4 &ref) {
    int _x = ref.x;
    int _y = ref.y;
    int _z = ref.z;
    int _w = ref.w;
    x = _x;
    y = _y;
    z = _z;
    w = _w;
    return *this;
  }
  operator __i_tuple_1() const { return __i_tuple_1(x); }
  operator __i_tuple_2() const { return __i_tuple_2(x, y); }
  operator __i_tuple_3() const { return __i_tuple_3(x, y, z); }
};
struct __f_tuple_4 {
  float &x;
  float &y;
  float &z;
  float &w;

  __f_tuple_4(float &_x, float &_y, float &_z, float &_w) : x(_x), y(_y), z(_z), w(_w) {}
  __f_tuple_4& operator=(const __f_tuple_4 &ref) {
    float _x = ref.x;
    float _y = ref.y;
    float _z = ref.z;
    float _w = ref.w;
    x = _x;
    y = _y;
    z = _z;
    w = _w;
    return *this;
  }
  operator __f_tuple_1() const { return __f_tuple_1(x); }
  operator __f_tuple_2() const { return __f_tuple_2(x, y); }
  operator __f_tuple_3() const { return __f_tuple_3(x, y, z); }
};
struct __d_tuple_4 {
  double &x;
  double &y;
  double &z;
  double &w;

  __d_tuple_4(double &_x, double &_y, double &_z, double &_w) : x(_x), y(_y), z(_z), w(_w) {}
  __d_tuple_4& operator=(const __d_tuple_4 &ref) {
    double _x = ref.x;
    double _y = ref.y;
    double _z = ref.z;
    double _w = ref.w;
    x = _x;
    y = _y;
    z = _z;
    w = _w;
    return *this;
  }
  operator __d_tuple_1() const { return __d_tuple_1(x); }
  operator __d_tuple_2() const { return __d_tuple_2(x, y); }
  operator __d_tuple_3() const { return __d_tuple_3(x, y, z); }
};

#endif