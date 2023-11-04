#include "vec.hpp"
#include <cmath>

bvec2::bvec2() {}
bvec2::bvec2(bool _identity) : x(_identity), y(_identity) {}
bvec2::bvec2(bool _x, bool _y) : x(_x), y(_y) {}
bvec2::bvec2(ivec2 _ivec2) : x(_ivec2.x), y(_ivec2.y) {}
bvec2::bvec2(vec2  _vec2)  : x(_vec2.x), y(_vec2.y)   {}
bvec2::bvec2(dvec2 _dvec2) : x(_dvec2.x), y(_dvec2.y) {}
bvec2::bvec2(bvec3 _bvec3) : x(_bvec3.x), y(_bvec3.y) {}
bvec2::bvec2(ivec3 _ivec3) : x(_ivec3.x), y(_ivec3.y) {}
bvec2::bvec2(vec3  _vec3)  : x(_vec3.x),  y(_vec3.y)  {}
bvec2::bvec2(dvec3 _dvec3) : x(_dvec3.x), y(_dvec3.y) {}
bvec2::bvec2(bvec4 _bvec4) : x(_bvec4.x), y(_bvec4.y) {}
bvec2::bvec2(ivec4 _ivec4) : x(_ivec4.x), y(_ivec4.y) {}
bvec2::bvec2(vec4  _vec4)  : x(_vec4.x),  y(_vec4.y)  {}
bvec2::bvec2(dvec4 _dvec4) : x(_dvec4.x), y(_dvec4.y) {}
bvec2::bvec2(__b_tuple_2 _t) : x(_t.x), y(_t.y) {}
bvec2::bvec2(__i_tuple_2 _t) : x(_t.x), y(_t.y) {}
bvec2::bvec2(__f_tuple_2 _t) : x(_t.x), y(_t.y) {}
bvec2::bvec2(__d_tuple_2 _t) : x(_t.x), y(_t.y) {}
bvec2::bvec2(__b_tuple_3 _t) : x(_t.x), y(_t.y) {}
bvec2::bvec2(__i_tuple_3 _t) : x(_t.x), y(_t.y) {}
bvec2::bvec2(__f_tuple_3 _t) : x(_t.x), y(_t.y) {}
bvec2::bvec2(__d_tuple_3 _t) : x(_t.x), y(_t.y) {}
bvec2::bvec2(__b_tuple_4 _t) : x(_t.x), y(_t.y) {}
bvec2::bvec2(__i_tuple_4 _t) : x(_t.x), y(_t.y) {}
bvec2::bvec2(__f_tuple_4 _t) : x(_t.x), y(_t.y) {}
bvec2::bvec2(__d_tuple_4 _t) : x(_t.x), y(_t.y) {}
bvec2 bvec2::operator&(const bvec2 &ref) { return bvec2(x&&ref.x , y&&ref.y); }
bvec2 bvec2::operator|(const bvec2 &ref) { return bvec2(x||ref.x , y||ref.y); }
bool bvec2::operator==(const bvec2 &ref) { return (x == ref.x && y == ref.y); }
bool bvec2::operator!=(const bvec2 &ref) { return (x != ref.x || y != ref.y); }
bvec2& bvec2::operator=(const bvec2 &ref) { x = ref.x; y = ref.y; return *this; }
bvec2& bvec2::operator=(const ivec2 &ref) { x = ref.x; y = ref.y; return *this; }
bvec2& bvec2::operator=(const vec2  &ref) { x = ref.x; y = ref.y; return *this; }
bvec2& bvec2::operator=(const dvec2 &ref) { x = ref.x; y = ref.y; return *this; }
bvec2& bvec2::operator=(const bvec3 &ref) { x = ref.x; y = ref.y; return *this; }
bvec2& bvec2::operator=(const ivec3 &ref) { x = ref.x; y = ref.y; return *this; }
bvec2& bvec2::operator=(const vec3  &ref) { x = ref.x; y = ref.y; return *this; }
bvec2& bvec2::operator=(const dvec3 &ref) { x = ref.x; y = ref.y; return *this; }
bvec2& bvec2::operator=(const bvec4 &ref) { x = ref.x; y = ref.y; return *this; }
bvec2& bvec2::operator=(const ivec4 &ref) { x = ref.x; y = ref.y; return *this; }
bvec2& bvec2::operator=(const vec4  &ref) { x = ref.x; y = ref.y; return *this; }
bvec2& bvec2::operator=(const dvec4 &ref) { x = ref.x; y = ref.y; return *this; }
bvec2& bvec2::operator=(const __b_tuple_2 &ref) { bool   _x = ref.x, _y = ref.y; x = _x; y = _y; return *this; }
bvec2& bvec2::operator=(const __i_tuple_2 &ref) { int    _x = ref.x, _y = ref.y; x = _x; y = _y; return *this; }
bvec2& bvec2::operator=(const __f_tuple_2 &ref) { float  _x = ref.x, _y = ref.y; x = _x; y = _y; return *this; }
bvec2& bvec2::operator=(const __d_tuple_2 &ref) { double _x = ref.x, _y = ref.y; x = _x; y = _y; return *this; }
bvec2& bvec2::operator=(const __b_tuple_3 &ref) { bool   _x = ref.x, _y = ref.y; x = _x; y = _y; return *this; }
bvec2& bvec2::operator=(const __i_tuple_3 &ref) { int    _x = ref.x, _y = ref.y; x = _x; y = _y; return *this; }
bvec2& bvec2::operator=(const __f_tuple_3 &ref) { float  _x = ref.x, _y = ref.y; x = _x; y = _y; return *this; }
bvec2& bvec2::operator=(const __d_tuple_3 &ref) { double _x = ref.x, _y = ref.y; x = _x; y = _y; return *this; }
bvec2& bvec2::operator=(const __b_tuple_4 &ref) { bool   _x = ref.x, _y = ref.y; x = _x; y = _y; return *this; }
bvec2& bvec2::operator=(const __i_tuple_4 &ref) { int    _x = ref.x, _y = ref.y; x = _x; y = _y; return *this; }
bvec2& bvec2::operator=(const __f_tuple_4 &ref) { float  _x = ref.x, _y = ref.y; x = _x; y = _y; return *this; }
bvec2& bvec2::operator=(const __d_tuple_4 &ref) { double _x = ref.x, _y = ref.y; x = _x; y = _y; return *this; }
bvec2::operator ivec2() const { return ivec2(*this); }
bvec2::operator vec2()  const { return vec2(*this); }
bvec2::operator dvec2() const { return dvec2(*this); }

ivec2::ivec2() {}
ivec2::ivec2(int _identity) : x(_identity), y(_identity) {}
ivec2::ivec2(int _x, int _y) : x(_x), y(_y) {}
ivec2::ivec2(bvec2 _bvec2) : x(_bvec2.x), y(_bvec2.y) {}
ivec2::ivec2(vec2  _vec2)  : x(_vec2.x), y(_vec2.y)   {}
ivec2::ivec2(dvec2 _dvec2) : x(_dvec2.x), y(_dvec2.y) {}
ivec2::ivec2(bvec3 _bvec3) : x(_bvec3.x), y(_bvec3.y) {}
ivec2::ivec2(ivec3 _ivec3) : x(_ivec3.x), y(_ivec3.y) {}
ivec2::ivec2(vec3  _vec3)  : x(_vec3.x),  y(_vec3.y)  {}
ivec2::ivec2(dvec3 _dvec3) : x(_dvec3.x), y(_dvec3.y) {}
ivec2::ivec2(bvec4 _bvec4) : x(_bvec4.x), y(_bvec4.y) {}
ivec2::ivec2(ivec4 _ivec4) : x(_ivec4.x), y(_ivec4.y) {}
ivec2::ivec2(vec4  _vec4)  : x(_vec4.x),  y(_vec4.y)  {}
ivec2::ivec2(dvec4 _dvec4) : x(_dvec4.x), y(_dvec4.y) {}
ivec2::ivec2(__b_tuple_2 _t) : x(_t.x), y(_t.y) {}
ivec2::ivec2(__i_tuple_2 _t) : x(_t.x), y(_t.y) {}
ivec2::ivec2(__f_tuple_2 _t) : x(_t.x), y(_t.y) {}
ivec2::ivec2(__d_tuple_2 _t) : x(_t.x), y(_t.y) {}
ivec2::ivec2(__b_tuple_3 _t) : x(_t.x), y(_t.y) {}
ivec2::ivec2(__i_tuple_3 _t) : x(_t.x), y(_t.y) {}
ivec2::ivec2(__f_tuple_3 _t) : x(_t.x), y(_t.y) {}
ivec2::ivec2(__d_tuple_3 _t) : x(_t.x), y(_t.y) {}
ivec2::ivec2(__b_tuple_4 _t) : x(_t.x), y(_t.y) {}
ivec2::ivec2(__i_tuple_4 _t) : x(_t.x), y(_t.y) {}
ivec2::ivec2(__f_tuple_4 _t) : x(_t.x), y(_t.y) {}
ivec2::ivec2(__d_tuple_4 _t) : x(_t.x), y(_t.y) {}
const ivec2 ivec2::up = ivec2(0, 1);
const ivec2 ivec2::down = ivec2(0, -1);
const ivec2 ivec2::left = ivec2(-1, 0);
const ivec2 ivec2::right = ivec2(1, 0);
const ivec2 ivec2::zero = ivec2(0, 0);
const ivec2 ivec2::one = ivec2(1, 1);
float ivec2::len() const { return sqrtf(x*x + y*y); }
double ivec2::dlen() const { return sqrt(x*x + y*y); }
vec2 ivec2::normalized() const { float l = len(); return vec2(x/l, y/l); }
ivec2 ivec2::operator+() { return *this; }
ivec2 ivec2::operator-() { return ivec2(-x, -y); }
ivec2 ivec2::operator+(const ivec2 &ref) { return ivec2(x+ref.x, y+ref.y); }
ivec2 ivec2::operator-(const ivec2 &ref) { return ivec2(x-ref.x, y-ref.y); }
ivec2 ivec2::operator*(const int scalar) { return ivec2(x*scalar, y*scalar); }
ivec2 ivec2::operator/(const int scalar) { return ivec2(x/scalar, y/scalar); }
bool ivec2::operator==(const ivec2 &ref) { return (x == ref.x && y == ref.y); }
bool ivec2::operator!=(const ivec2 &ref) { return (x != ref.x || y != ref.y); }
ivec2& ivec2::operator=(const bvec2 &ref) { x = ref.x; y = ref.y; return *this; }
ivec2& ivec2::operator=(const ivec2 &ref) { x = ref.x; y = ref.y; return *this; }
ivec2& ivec2::operator=(const vec2  &ref) { x = ref.x; y = ref.y; return *this; }
ivec2& ivec2::operator=(const dvec2 &ref) { x = ref.x; y = ref.y; return *this; }
ivec2& ivec2::operator=(const bvec3 &ref) { x = ref.x; y = ref.y; return *this; }
ivec2& ivec2::operator=(const ivec3 &ref) { x = ref.x; y = ref.y; return *this; }
ivec2& ivec2::operator=(const vec3  &ref) { x = ref.x; y = ref.y; return *this; }
ivec2& ivec2::operator=(const dvec3 &ref) { x = ref.x; y = ref.y; return *this; }
ivec2& ivec2::operator=(const bvec4 &ref) { x = ref.x; y = ref.y; return *this; }
ivec2& ivec2::operator=(const ivec4 &ref) { x = ref.x; y = ref.y; return *this; }
ivec2& ivec2::operator=(const vec4  &ref) { x = ref.x; y = ref.y; return *this; }
ivec2& ivec2::operator=(const dvec4 &ref) { x = ref.x; y = ref.y; return *this; }
ivec2& ivec2::operator=(const __b_tuple_2 &ref) { bool   _x = ref.x, _y = ref.y; x = _x; y = _y; return *this; }
ivec2& ivec2::operator=(const __i_tuple_2 &ref) { int    _x = ref.x, _y = ref.y; x = _x; y = _y; return *this; }
ivec2& ivec2::operator=(const __f_tuple_2 &ref) { float  _x = ref.x, _y = ref.y; x = _x; y = _y; return *this; }
ivec2& ivec2::operator=(const __d_tuple_2 &ref) { double _x = ref.x, _y = ref.y; x = _x; y = _y; return *this; }
ivec2& ivec2::operator=(const __b_tuple_3 &ref) { bool   _x = ref.x, _y = ref.y; x = _x; y = _y; return *this; }
ivec2& ivec2::operator=(const __i_tuple_3 &ref) { int    _x = ref.x, _y = ref.y; x = _x; y = _y; return *this; }
ivec2& ivec2::operator=(const __f_tuple_3 &ref) { float  _x = ref.x, _y = ref.y; x = _x; y = _y; return *this; }
ivec2& ivec2::operator=(const __d_tuple_3 &ref) { double _x = ref.x, _y = ref.y; x = _x; y = _y; return *this; }
ivec2& ivec2::operator=(const __b_tuple_4 &ref) { bool   _x = ref.x, _y = ref.y; x = _x; y = _y; return *this; }
ivec2& ivec2::operator=(const __i_tuple_4 &ref) { int    _x = ref.x, _y = ref.y; x = _x; y = _y; return *this; }
ivec2& ivec2::operator=(const __f_tuple_4 &ref) { float  _x = ref.x, _y = ref.y; x = _x; y = _y; return *this; }
ivec2& ivec2::operator=(const __d_tuple_4 &ref) { double _x = ref.x, _y = ref.y; x = _x; y = _y; return *this; }
ivec2::operator bvec2() const { return bvec2(*this); }
ivec2::operator vec2()  const { return vec2(*this); }
ivec2::operator dvec2() const { return dvec2(*this); }

vec2::vec2() {}
vec2::vec2(float _identity) : x(_identity), y(_identity) {}
vec2::vec2(float _x, float _y) : x(_x), y(_y) {}
vec2::vec2(bvec2 _bvec2) : x(_bvec2.x), y(_bvec2.y) {}
vec2::vec2(ivec2 _ivec2) : x(_ivec2.x), y(_ivec2.y) {}
vec2::vec2(dvec2 _dvec2) : x(_dvec2.x), y(_dvec2.y) {}
vec2::vec2(bvec3 _bvec3) : x(_bvec3.x), y(_bvec3.y) {}
vec2::vec2(ivec3 _ivec3) : x(_ivec3.x), y(_ivec3.y) {}
vec2::vec2(vec3  _vec3)  : x(_vec3.x),  y(_vec3.y)  {}
vec2::vec2(dvec3 _dvec3) : x(_dvec3.x), y(_dvec3.y) {}
vec2::vec2(bvec4 _bvec4) : x(_bvec4.x), y(_bvec4.y) {}
vec2::vec2(ivec4 _ivec4) : x(_ivec4.x), y(_ivec4.y) {}
vec2::vec2(vec4  _vec4)  : x(_vec4.x),  y(_vec4.y)  {}
vec2::vec2(dvec4 _dvec4) : x(_dvec4.x), y(_dvec4.y) {}
vec2::vec2(__b_tuple_2 _t) : x(_t.x), y(_t.y) {}
vec2::vec2(__i_tuple_2 _t) : x(_t.x), y(_t.y) {}
vec2::vec2(__f_tuple_2 _t) : x(_t.x), y(_t.y) {}
vec2::vec2(__d_tuple_2 _t) : x(_t.x), y(_t.y) {}
vec2::vec2(__b_tuple_3 _t) : x(_t.x), y(_t.y) {}
vec2::vec2(__i_tuple_3 _t) : x(_t.x), y(_t.y) {}
vec2::vec2(__f_tuple_3 _t) : x(_t.x), y(_t.y) {}
vec2::vec2(__d_tuple_3 _t) : x(_t.x), y(_t.y) {}
vec2::vec2(__b_tuple_4 _t) : x(_t.x), y(_t.y) {}
vec2::vec2(__i_tuple_4 _t) : x(_t.x), y(_t.y) {}
vec2::vec2(__f_tuple_4 _t) : x(_t.x), y(_t.y) {}
vec2::vec2(__d_tuple_4 _t) : x(_t.x), y(_t.y) {}
const vec2 vec2::up = vec2(0.0f, 1.0f);
const vec2 vec2::down = vec2(0.0f, -1.0f);
const vec2 vec2::left = vec2(-1.0f, 0.0f);
const vec2 vec2::right = vec2(1.0f, 0.0f);
const vec2 vec2::zero = vec2(0.0f, 0.0f);
const vec2 vec2::one = vec2(1.0f, 1.0f);
float vec2::len() const { return sqrtf(x*x + y*y); }
double vec2::dlen() const { return sqrt(x*x + y*y); }
vec2 vec2::normalized() const { float l = len(); return vec2(x/l, y/l); }
vec2 vec2::operator+() { return *this; }
vec2 vec2::operator-() { return vec2(-x, -y); }
vec2 vec2::operator+(const vec2 &ref) { return vec2(x+ref.x, y+ref.y); }
vec2 vec2::operator-(const vec2 &ref) { return vec2(x-ref.x, y-ref.y); }
vec2 vec2::operator*(const float scalar) { return vec2(x*scalar, y*scalar); }
vec2 vec2::operator/(const float scalar) { return vec2(x/scalar, y/scalar); }
bool vec2::operator==(const vec2 &ref) { return (x == ref.x && y == ref.y); }
bool vec2::operator!=(const vec2 &ref) { return (x != ref.x || y != ref.y); }
vec2& vec2::operator=(const bvec2 &ref) { x = ref.x; y = ref.y; return *this; }
vec2& vec2::operator=(const ivec2 &ref) { x = ref.x; y = ref.y; return *this; }
vec2& vec2::operator=(const vec2  &ref) { x = ref.x; y = ref.y; return *this; }
vec2& vec2::operator=(const dvec2 &ref) { x = ref.x; y = ref.y; return *this; }
vec2& vec2::operator=(const bvec3 &ref) { x = ref.x; y = ref.y; return *this; }
vec2& vec2::operator=(const ivec3 &ref) { x = ref.x; y = ref.y; return *this; }
vec2& vec2::operator=(const vec3  &ref) { x = ref.x; y = ref.y; return *this; }
vec2& vec2::operator=(const dvec3 &ref) { x = ref.x; y = ref.y; return *this; }
vec2& vec2::operator=(const bvec4 &ref) { x = ref.x; y = ref.y; return *this; }
vec2& vec2::operator=(const ivec4 &ref) { x = ref.x; y = ref.y; return *this; }
vec2& vec2::operator=(const vec4  &ref) { x = ref.x; y = ref.y; return *this; }
vec2& vec2::operator=(const dvec4 &ref) { x = ref.x; y = ref.y; return *this; }
vec2& vec2::operator=(const __b_tuple_2 &ref) { bool   _x = ref.x, _y = ref.y; x = _x; y = _y; return *this; }
vec2& vec2::operator=(const __i_tuple_2 &ref) { int    _x = ref.x, _y = ref.y; x = _x; y = _y; return *this; }
vec2& vec2::operator=(const __f_tuple_2 &ref) { float  _x = ref.x, _y = ref.y; x = _x; y = _y; return *this; }
vec2& vec2::operator=(const __d_tuple_2 &ref) { double _x = ref.x, _y = ref.y; x = _x; y = _y; return *this; }
vec2& vec2::operator=(const __b_tuple_3 &ref) { bool   _x = ref.x, _y = ref.y; x = _x; y = _y; return *this; }
vec2& vec2::operator=(const __i_tuple_3 &ref) { int    _x = ref.x, _y = ref.y; x = _x; y = _y; return *this; }
vec2& vec2::operator=(const __f_tuple_3 &ref) { float  _x = ref.x, _y = ref.y; x = _x; y = _y; return *this; }
vec2& vec2::operator=(const __d_tuple_3 &ref) { double _x = ref.x, _y = ref.y; x = _x; y = _y; return *this; }
vec2& vec2::operator=(const __b_tuple_4 &ref) { bool   _x = ref.x, _y = ref.y; x = _x; y = _y; return *this; }
vec2& vec2::operator=(const __i_tuple_4 &ref) { int    _x = ref.x, _y = ref.y; x = _x; y = _y; return *this; }
vec2& vec2::operator=(const __f_tuple_4 &ref) { float  _x = ref.x, _y = ref.y; x = _x; y = _y; return *this; }
vec2& vec2::operator=(const __d_tuple_4 &ref) { double _x = ref.x, _y = ref.y; x = _x; y = _y; return *this; }
vec2::operator bvec2() const { return bvec2(*this); }
vec2::operator ivec2() const { return ivec2(*this); }
vec2::operator dvec2() const { return dvec2(*this); }

dvec2::dvec2() {}
dvec2::dvec2(double _identity) : x(_identity), y(_identity) {}
dvec2::dvec2(double _x, double _y) : x(_x), y(_y) {}
dvec2::dvec2(bvec2 _bvec2) : x(_bvec2.x), y(_bvec2.y) {}
dvec2::dvec2(ivec2 _ivec2) : x(_ivec2.x), y(_ivec2.y) {}
dvec2::dvec2(vec2  _vec2)  : x(_vec2.x),  y(_vec2.y)  {}
dvec2::dvec2(bvec3 _bvec3) : x(_bvec3.x), y(_bvec3.y) {}
dvec2::dvec2(ivec3 _ivec3) : x(_ivec3.x), y(_ivec3.y) {}
dvec2::dvec2(vec3  _vec3)  : x(_vec3.x),  y(_vec3.y)  {}
dvec2::dvec2(dvec3 _dvec3) : x(_dvec3.x), y(_dvec3.y) {}
dvec2::dvec2(bvec4 _bvec4) : x(_bvec4.x), y(_bvec4.y) {}
dvec2::dvec2(ivec4 _ivec4) : x(_ivec4.x), y(_ivec4.y) {}
dvec2::dvec2(vec4  _vec4)  : x(_vec4.x),  y(_vec4.y)  {}
dvec2::dvec2(dvec4 _dvec4) : x(_dvec4.x), y(_dvec4.y) {}
dvec2::dvec2(__b_tuple_2 _t) : x(_t.x), y(_t.y) {}
dvec2::dvec2(__i_tuple_2 _t) : x(_t.x), y(_t.y) {}
dvec2::dvec2(__f_tuple_2 _t) : x(_t.x), y(_t.y) {}
dvec2::dvec2(__d_tuple_2 _t) : x(_t.x), y(_t.y) {}
dvec2::dvec2(__b_tuple_3 _t) : x(_t.x), y(_t.y) {}
dvec2::dvec2(__i_tuple_3 _t) : x(_t.x), y(_t.y) {}
dvec2::dvec2(__f_tuple_3 _t) : x(_t.x), y(_t.y) {}
dvec2::dvec2(__d_tuple_3 _t) : x(_t.x), y(_t.y) {}
dvec2::dvec2(__b_tuple_4 _t) : x(_t.x), y(_t.y) {}
dvec2::dvec2(__i_tuple_4 _t) : x(_t.x), y(_t.y) {}
dvec2::dvec2(__f_tuple_4 _t) : x(_t.x), y(_t.y) {}
dvec2::dvec2(__d_tuple_4 _t) : x(_t.x), y(_t.y) {}
const dvec2 dvec2::up = dvec2(0.0, 1.0);
const dvec2 dvec2::down = dvec2(0.0, -1.0);
const dvec2 dvec2::left = dvec2(-1.0, 0.0);
const dvec2 dvec2::right = dvec2(1.0, 0.0);
const dvec2 dvec2::zero = dvec2(0.0, 0.0);
const dvec2 dvec2::one = dvec2(1.0, 1.0);
float dvec2::len() const { return sqrtf(x*x + y*y); }
double dvec2::dlen() const { return sqrt(x*x + y*y); }
dvec2 dvec2::normalized() const { float l = len(); return dvec2(x/l, y/l); }
dvec2 dvec2::operator+() { return *this; }
dvec2 dvec2::operator-() { return dvec2(-x, -y); }
dvec2 dvec2::operator+(const dvec2 &ref) { return dvec2(x+ref.x, y+ref.y); }
dvec2 dvec2::operator-(const dvec2 &ref) { return dvec2(x-ref.x, y-ref.y); }
dvec2 dvec2::operator*(const double scalar) { return dvec2(x*scalar, y*scalar); }
dvec2 dvec2::operator/(const double scalar) { return dvec2(x/scalar, y/scalar); }
bool dvec2::operator==(const dvec2 &ref) { return (x == ref.x && y == ref.y); }
bool dvec2::operator!=(const dvec2 &ref) { return (x != ref.x || y != ref.y); }
dvec2& dvec2::operator=(const bvec2 &ref) { x = ref.x; y = ref.y; return *this; }
dvec2& dvec2::operator=(const ivec2 &ref) { x = ref.x; y = ref.y; return *this; }
dvec2& dvec2::operator=(const vec2  &ref) { x = ref.x; y = ref.y; return *this; }
dvec2& dvec2::operator=(const dvec2 &ref) { x = ref.x; y = ref.y; return *this; }
dvec2& dvec2::operator=(const bvec3 &ref) { x = ref.x; y = ref.y; return *this; }
dvec2& dvec2::operator=(const ivec3 &ref) { x = ref.x; y = ref.y; return *this; }
dvec2& dvec2::operator=(const vec3  &ref) { x = ref.x; y = ref.y; return *this; }
dvec2& dvec2::operator=(const dvec3 &ref) { x = ref.x; y = ref.y; return *this; }
dvec2& dvec2::operator=(const bvec4 &ref) { x = ref.x; y = ref.y; return *this; }
dvec2& dvec2::operator=(const ivec4 &ref) { x = ref.x; y = ref.y; return *this; }
dvec2& dvec2::operator=(const vec4  &ref) { x = ref.x; y = ref.y; return *this; }
dvec2& dvec2::operator=(const dvec4 &ref) { x = ref.x; y = ref.y; return *this; }
dvec2& dvec2::operator=(const __b_tuple_2 &ref) { bool   _x = ref.x, _y = ref.y; x = _x; y = _y; return *this; }
dvec2& dvec2::operator=(const __i_tuple_2 &ref) { int    _x = ref.x, _y = ref.y; x = _x; y = _y; return *this; }
dvec2& dvec2::operator=(const __f_tuple_2 &ref) { float  _x = ref.x, _y = ref.y; x = _x; y = _y; return *this; }
dvec2& dvec2::operator=(const __d_tuple_2 &ref) { double _x = ref.x, _y = ref.y; x = _x; y = _y; return *this; }
dvec2& dvec2::operator=(const __b_tuple_3 &ref) { bool   _x = ref.x, _y = ref.y; x = _x; y = _y; return *this; }
dvec2& dvec2::operator=(const __i_tuple_3 &ref) { int    _x = ref.x, _y = ref.y; x = _x; y = _y; return *this; }
dvec2& dvec2::operator=(const __f_tuple_3 &ref) { float  _x = ref.x, _y = ref.y; x = _x; y = _y; return *this; }
dvec2& dvec2::operator=(const __d_tuple_3 &ref) { double _x = ref.x, _y = ref.y; x = _x; y = _y; return *this; }
dvec2& dvec2::operator=(const __b_tuple_4 &ref) { bool   _x = ref.x, _y = ref.y; x = _x; y = _y; return *this; }
dvec2& dvec2::operator=(const __i_tuple_4 &ref) { int    _x = ref.x, _y = ref.y; x = _x; y = _y; return *this; }
dvec2& dvec2::operator=(const __f_tuple_4 &ref) { float  _x = ref.x, _y = ref.y; x = _x; y = _y; return *this; }
dvec2& dvec2::operator=(const __d_tuple_4 &ref) { double _x = ref.x, _y = ref.y; x = _x; y = _y; return *this; }
dvec2::operator bvec2() const { return bvec2(*this); }
dvec2::operator ivec2() const { return ivec2(*this); }
dvec2::operator vec2()  const { return vec2(*this); }

bvec3::bvec3() {}
bvec3::bvec3(bool _identity) : x(_identity), y(_identity), z(_identity) {}
bvec3::bvec3(bool _x, bool _y, bool _z) : x(_x), y(_y), z(_z) {}
bvec3::bvec3(ivec3 _ivec3) : x(_ivec3.x), y(_ivec3.y), z(_ivec3.z) {}
bvec3::bvec3(vec3  _vec3)  : x(_vec3.x),  y(_vec3.y),  z(_vec3.z)  {}
bvec3::bvec3(dvec3 _dvec3) : x(_dvec3.x), y(_dvec3.y), z(_dvec3.z) {}
bvec3::bvec3(bvec4 _bvec4) : x(_bvec4.x), y(_bvec4.y), z(_bvec4.z) {}
bvec3::bvec3(ivec4 _ivec4) : x(_ivec4.x), y(_ivec4.y), z(_ivec4.z) {}
bvec3::bvec3(vec4  _vec4)  : x(_vec4.x),  y(_vec4.y),  z(_vec4.z)  {}
bvec3::bvec3(dvec4 _dvec4) : x(_dvec4.x), y(_dvec4.y), z(_dvec4.z) {}
bvec3::bvec3(__b_tuple_3 _t) : x(_t.x), y(_t.y), z(_t.z) {}
bvec3::bvec3(__i_tuple_3 _t) : x(_t.x), y(_t.y), z(_t.z) {}
bvec3::bvec3(__f_tuple_3 _t) : x(_t.x), y(_t.y), z(_t.z) {}
bvec3::bvec3(__d_tuple_3 _t) : x(_t.x), y(_t.y), z(_t.z) {}
bvec3::bvec3(__b_tuple_4 _t) : x(_t.x), y(_t.y), z(_t.z) {}
bvec3::bvec3(__i_tuple_4 _t) : x(_t.x), y(_t.y), z(_t.z) {}
bvec3::bvec3(__f_tuple_4 _t) : x(_t.x), y(_t.y), z(_t.z) {}
bvec3::bvec3(__d_tuple_4 _t) : x(_t.x), y(_t.y), z(_t.z) {}
bvec3 bvec3::operator&(const bvec2 &ref) { return bvec3(x&&ref.x , y&&ref.y, z); }
bvec3 bvec3::operator&(const bvec3 &ref) { return bvec3(x&&ref.x , y&&ref.y, z&&ref.z); }
bvec3 bvec3::operator|(const bvec2 &ref) { return bvec3(x||ref.x , y||ref.y, z); }
bvec3 bvec3::operator|(const bvec3 &ref) { return bvec3(x||ref.x , y||ref.y, z||ref.z); }
bool bvec3::operator==(const bvec3 &ref) { return (x == ref.x && y == ref.y && z == ref.z); }
bool bvec3::operator!=(const bvec3 &ref) { return (x != ref.x || y != ref.y || z != ref.z); }
bvec3& bvec3::operator=(const bvec3 &ref) { x = ref.x; y = ref.y; z = ref.z; return *this; }
bvec3& bvec3::operator=(const ivec3 &ref) { x = ref.x; y = ref.y; z = ref.z; return *this; }
bvec3& bvec3::operator=(const vec3  &ref) { x = ref.x; y = ref.y; z = ref.z; return *this; }
bvec3& bvec3::operator=(const dvec3 &ref) { x = ref.x; y = ref.y; z = ref.z; return *this; }
bvec3& bvec3::operator=(const bvec4 &ref) { x = ref.x; y = ref.y; z = ref.z; return *this; }
bvec3& bvec3::operator=(const ivec4 &ref) { x = ref.x; y = ref.y; z = ref.z; return *this; }
bvec3& bvec3::operator=(const vec4  &ref) { x = ref.x; y = ref.y; z = ref.z; return *this; }
bvec3& bvec3::operator=(const dvec4 &ref) { x = ref.x; y = ref.y; z = ref.z; return *this; }
bvec3& bvec3::operator=(const __b_tuple_3 &ref) { bool   _x = ref.x, _y = ref.y, _z = ref.z; x = _x; y = _y; z = _z; return *this; }
bvec3& bvec3::operator=(const __i_tuple_3 &ref) { int    _x = ref.x, _y = ref.y, _z = ref.z; x = _x; y = _y; z = _z; return *this; }
bvec3& bvec3::operator=(const __f_tuple_3 &ref) { float  _x = ref.x, _y = ref.y, _z = ref.z; x = _x; y = _y; z = _z; return *this; }
bvec3& bvec3::operator=(const __d_tuple_3 &ref) { double _x = ref.x, _y = ref.y, _z = ref.z; x = _x; y = _y; z = _z; return *this; }
bvec3& bvec3::operator=(const __b_tuple_4 &ref) { bool   _x = ref.x, _y = ref.y, _z = ref.z; x = _x; y = _y; z = _z; return *this; }
bvec3& bvec3::operator=(const __i_tuple_4 &ref) { int    _x = ref.x, _y = ref.y, _z = ref.z; x = _x; y = _y; z = _z; return *this; }
bvec3& bvec3::operator=(const __f_tuple_4 &ref) { float  _x = ref.x, _y = ref.y, _z = ref.z; x = _x; y = _y; z = _z; return *this; }
bvec3& bvec3::operator=(const __d_tuple_4 &ref) { double _x = ref.x, _y = ref.y, _z = ref.z; x = _x; y = _y; z = _z; return *this; }
bvec3::operator bvec2() const { return bvec2(*this); }
bvec3::operator ivec2() const { return ivec2(*this); }
bvec3::operator vec2()  const { return vec2(*this); }
bvec3::operator dvec2() const { return dvec2(*this); }
bvec3::operator ivec3() const { return ivec3(*this); }
bvec3::operator vec3()  const { return vec3(*this); }
bvec3::operator dvec3() const { return dvec3(*this); }

ivec3::ivec3() {}
ivec3::ivec3(int _identity) : x(_identity), y(_identity), z(_identity) {}
ivec3::ivec3(int _x, int _y, int _z) : x(_x), y(_y), z(_z) {}
ivec3::ivec3(bvec3 _bvec3) : x(_bvec3.x), y(_bvec3.y), z(_bvec3.z) {}
ivec3::ivec3(vec3  _vec3)  : x(_vec3.x),  y(_vec3.y),  z(_vec3.z)  {}
ivec3::ivec3(dvec3 _dvec3) : x(_dvec3.x), y(_dvec3.y), z(_dvec3.z) {}
ivec3::ivec3(bvec4 _bvec4) : x(_bvec4.x), y(_bvec4.y), z(_bvec4.z) {}
ivec3::ivec3(ivec4 _ivec4) : x(_ivec4.x), y(_ivec4.y), z(_ivec4.z) {}
ivec3::ivec3(vec4  _vec4)  : x(_vec4.x),  y(_vec4.y),  z(_vec4.z)  {}
ivec3::ivec3(dvec4 _dvec4) : x(_dvec4.x), y(_dvec4.y), z(_dvec4.z) {}
ivec3::ivec3(__b_tuple_3 _t) : x(_t.x), y(_t.y), z(_t.z) {}
ivec3::ivec3(__i_tuple_3 _t) : x(_t.x), y(_t.y), z(_t.z) {}
ivec3::ivec3(__f_tuple_3 _t) : x(_t.x), y(_t.y), z(_t.z) {}
ivec3::ivec3(__d_tuple_3 _t) : x(_t.x), y(_t.y), z(_t.z) {}
ivec3::ivec3(__b_tuple_4 _t) : x(_t.x), y(_t.y), z(_t.z) {}
ivec3::ivec3(__i_tuple_4 _t) : x(_t.x), y(_t.y), z(_t.z) {}
ivec3::ivec3(__f_tuple_4 _t) : x(_t.x), y(_t.y), z(_t.z) {}
ivec3::ivec3(__d_tuple_4 _t) : x(_t.x), y(_t.y), z(_t.z) {}
const ivec3 ivec3::up;
const ivec3 ivec3::down;
const ivec3 ivec3::left;
const ivec3 ivec3::right;
const ivec3 ivec3::back;
const ivec3 ivec3::forward;
const ivec3 ivec3::zero;
const ivec3 ivec3::one;
float ivec3::len() const { return sqrtf(x*x + y*y + z*z); }
double ivec3::dlen() const { return sqrt(x*x + y*y + z*z); }
vec3 ivec3::normalized() const { float l = len(); return vec3(x/l, y/l, z/l); }
ivec3 ivec3::operator+() { return *this; }
ivec3 ivec3::operator-() { return ivec3(-x, -y, -z); }
ivec3 ivec3::operator+(const ivec2 &ref) { return ivec3(x+ref.x, y+ref.y, z); }
ivec3 ivec3::operator+(const ivec3 &ref) { return ivec3(x+ref.x, y+ref.y, z+ref.z); }
ivec3 ivec3::operator-(const ivec2 &ref) { return ivec3(x-ref.x, y-ref.y, z); }
ivec3 ivec3::operator-(const ivec3 &ref) { return ivec3(x-ref.x, y-ref.y, z-ref.z); }
ivec3 ivec3::operator*(const int scalar) { return ivec3(x*scalar, y*scalar, z*scalar); }
ivec3 ivec3::operator/(const int scalar) { return ivec3(x/scalar, y/scalar, z/scalar); }
bool ivec3::operator==(const ivec3 &ref) { return (x == ref.x && y == ref.y && z == ref.z); }
bool ivec3::operator!=(const ivec3 &ref) { return (x != ref.x || y != ref.y || z != ref.z); }
ivec3& ivec3::operator=(const bvec3 &ref) { x = ref.x; y = ref.y; z = ref.z; return *this; }
ivec3& ivec3::operator=(const ivec3 &ref) { x = ref.x; y = ref.y; z = ref.z; return *this; }
ivec3& ivec3::operator=(const vec3  &ref) { x = ref.x; y = ref.y; z = ref.z; return *this; }
ivec3& ivec3::operator=(const dvec3 &ref) { x = ref.x; y = ref.y; z = ref.z; return *this; }
ivec3& ivec3::operator=(const bvec4 &ref) { x = ref.x; y = ref.y; z = ref.z; return *this; }
ivec3& ivec3::operator=(const ivec4 &ref) { x = ref.x; y = ref.y; z = ref.z; return *this; }
ivec3& ivec3::operator=(const vec4  &ref) { x = ref.x; y = ref.y; z = ref.z; return *this; }
ivec3& ivec3::operator=(const dvec4 &ref) { x = ref.x; y = ref.y; z = ref.z; return *this; }
ivec3& ivec3::operator=(const __b_tuple_3 &ref) { bool   _x = ref.x, _y = ref.y, _z = ref.z; x = _x; y = _y; z = _z; return *this; }
ivec3& ivec3::operator=(const __i_tuple_3 &ref) { int    _x = ref.x, _y = ref.y, _z = ref.z; x = _x; y = _y; z = _z; return *this; }
ivec3& ivec3::operator=(const __f_tuple_3 &ref) { float  _x = ref.x, _y = ref.y, _z = ref.z; x = _x; y = _y; z = _z; return *this; }
ivec3& ivec3::operator=(const __d_tuple_3 &ref) { double _x = ref.x, _y = ref.y, _z = ref.z; x = _x; y = _y; z = _z; return *this; }
ivec3& ivec3::operator=(const __b_tuple_4 &ref) { bool   _x = ref.x, _y = ref.y, _z = ref.z; x = _x; y = _y; z = _z; return *this; }
ivec3& ivec3::operator=(const __i_tuple_4 &ref) { int    _x = ref.x, _y = ref.y, _z = ref.z; x = _x; y = _y; z = _z; return *this; }
ivec3& ivec3::operator=(const __f_tuple_4 &ref) { float  _x = ref.x, _y = ref.y, _z = ref.z; x = _x; y = _y; z = _z; return *this; }
ivec3& ivec3::operator=(const __d_tuple_4 &ref) { double _x = ref.x, _y = ref.y, _z = ref.z; x = _x; y = _y; z = _z; return *this; }
ivec3::operator bvec2() const { return bvec2(*this); }
ivec3::operator ivec2() const { return ivec2(*this); }
ivec3::operator vec2()  const { return vec2(*this); }
ivec3::operator dvec2() const { return dvec2(*this); }
ivec3::operator bvec3() const { return bvec3(*this); }
ivec3::operator vec3()  const { return vec3(*this); }
ivec3::operator dvec3() const { return dvec3(*this); }

vec3::vec3() {}
vec3::vec3(float _identity) : x(_identity), y(_identity), z(_identity) {}
vec3::vec3(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}
vec3::vec3(bvec3 _bvec3) : x(_bvec3.x), y(_bvec3.y), z(_bvec3.z) {}
vec3::vec3(ivec3 _ivec3) : x(_ivec3.x), y(_ivec3.y), z(_ivec3.z) {}
vec3::vec3(dvec3 _dvec3) : x(_dvec3.x), y(_dvec3.y), z(_dvec3.z) {}
vec3::vec3(bvec4 _bvec4) : x(_bvec4.x), y(_bvec4.y), z(_bvec4.z) {}
vec3::vec3(ivec4 _ivec4) : x(_ivec4.x), y(_ivec4.y), z(_ivec4.z) {}
vec3::vec3(vec4  _vec4)  : x(_vec4.x),  y(_vec4.y),  z(_vec4.z)  {}
vec3::vec3(dvec4 _dvec4) : x(_dvec4.x), y(_dvec4.y), z(_dvec4.z) {}
vec3::vec3(__b_tuple_3 _t) : x(_t.x), y(_t.y), z(_t.z) {}
vec3::vec3(__i_tuple_3 _t) : x(_t.x), y(_t.y), z(_t.z) {}
vec3::vec3(__f_tuple_3 _t) : x(_t.x), y(_t.y), z(_t.z) {}
vec3::vec3(__d_tuple_3 _t) : x(_t.x), y(_t.y), z(_t.z) {}
vec3::vec3(__b_tuple_4 _t) : x(_t.x), y(_t.y), z(_t.z) {}
vec3::vec3(__i_tuple_4 _t) : x(_t.x), y(_t.y), z(_t.z) {}
vec3::vec3(__f_tuple_4 _t) : x(_t.x), y(_t.y), z(_t.z) {}
vec3::vec3(__d_tuple_4 _t) : x(_t.x), y(_t.y), z(_t.z) {}
const vec3 vec3::up;
const vec3 vec3::down;
const vec3 vec3::left;
const vec3 vec3::right;
const vec3 vec3::back;
const vec3 vec3::forward;
const vec3 vec3::zero;
const vec3 vec3::one;
float vec3::len() const { return sqrtf(x*x + y*y + z*z); }
double vec3::dlen() const { return sqrt(x*x + y*y + z*z); }
vec3 vec3::normalized() const { float l = len(); return vec3(x/l, y/l, z/l); }
vec3 vec3::operator+() { return *this; }
vec3 vec3::operator-() { return vec3(-x, -y, -z); }
vec3 vec3::operator+(const vec2 &ref) { return vec3(x+ref.x, y+ref.y, z); }
vec3 vec3::operator+(const vec3 &ref) { return vec3(x+ref.x, y+ref.y, z+ref.z); }
vec3 vec3::operator-(const vec2 &ref) { return vec3(x-ref.x, y-ref.y, z); }
vec3 vec3::operator-(const vec3 &ref) { return vec3(x-ref.x, y-ref.y, z-ref.z); }
vec3 vec3::operator*(const float scalar) { return vec3(x*scalar, y*scalar, z*scalar); }
vec3 vec3::operator/(const float scalar) { return vec3(x/scalar, y/scalar, z/scalar); }
bool vec3::operator==(const vec3 &ref) { return (x == ref.x && y == ref.y && z == ref.z); }
bool vec3::operator!=(const vec3 &ref) { return (x != ref.x || y != ref.y || z != ref.z); }
vec3& vec3::operator=(const bvec3 &ref) { x = ref.x; y = ref.y; z = ref.z; return *this; }
vec3& vec3::operator=(const ivec3 &ref) { x = ref.x; y = ref.y; z = ref.z; return *this; }
vec3& vec3::operator=(const vec3  &ref) { x = ref.x; y = ref.y; z = ref.z; return *this; }
vec3& vec3::operator=(const dvec3 &ref) { x = ref.x; y = ref.y; z = ref.z; return *this; }
vec3& vec3::operator=(const bvec4 &ref) { x = ref.x; y = ref.y; z = ref.z; return *this; }
vec3& vec3::operator=(const ivec4 &ref) { x = ref.x; y = ref.y; z = ref.z; return *this; }
vec3& vec3::operator=(const vec4  &ref) { x = ref.x; y = ref.y; z = ref.z; return *this; }
vec3& vec3::operator=(const dvec4 &ref) { x = ref.x; y = ref.y; z = ref.z; return *this; }
vec3& vec3::operator=(const __b_tuple_3 &ref) { bool   _x = ref.x, _y = ref.y, _z = ref.z; x = _x; y = _y; z = _z; return *this; }
vec3& vec3::operator=(const __i_tuple_3 &ref) { int    _x = ref.x, _y = ref.y, _z = ref.z; x = _x; y = _y; z = _z; return *this; }
vec3& vec3::operator=(const __f_tuple_3 &ref) { float  _x = ref.x, _y = ref.y, _z = ref.z; x = _x; y = _y; z = _z; return *this; }
vec3& vec3::operator=(const __d_tuple_3 &ref) { double _x = ref.x, _y = ref.y, _z = ref.z; x = _x; y = _y; z = _z; return *this; }
vec3& vec3::operator=(const __b_tuple_4 &ref) { bool   _x = ref.x, _y = ref.y, _z = ref.z; x = _x; y = _y; z = _z; return *this; }
vec3& vec3::operator=(const __i_tuple_4 &ref) { int    _x = ref.x, _y = ref.y, _z = ref.z; x = _x; y = _y; z = _z; return *this; }
vec3& vec3::operator=(const __f_tuple_4 &ref) { float  _x = ref.x, _y = ref.y, _z = ref.z; x = _x; y = _y; z = _z; return *this; }
vec3& vec3::operator=(const __d_tuple_4 &ref) { double _x = ref.x, _y = ref.y, _z = ref.z; x = _x; y = _y; z = _z; return *this; }
vec3::operator bvec2() const { return bvec2(*this); }
vec3::operator ivec2() const { return ivec2(*this); }
vec3::operator vec2()  const { return vec2(*this); }
vec3::operator dvec2() const { return dvec2(*this); }
vec3::operator bvec3() const { return bvec3(*this); }
vec3::operator ivec3() const { return ivec3(*this); }
vec3::operator dvec3() const { return dvec3(*this); }

dvec3::dvec3() {}
dvec3::dvec3(double _identity) : x(_identity), y(_identity), z(_identity) {}
dvec3::dvec3(double _x, double _y, double _z) : x(_x), y(_y), z(_z) {}
dvec3::dvec3(bvec3 _bvec3) : x(_bvec3.x), y(_bvec3.y), z(_bvec3.z) {}
dvec3::dvec3(ivec3 _ivec3) : x(_ivec3.x), y(_ivec3.y), z(_ivec3.z) {}
dvec3::dvec3(vec3  _vec3)  : x(_vec3.x),  y(_vec3.y),  z(_vec3.z)  {}
dvec3::dvec3(bvec4 _bvec4) : x(_bvec4.x), y(_bvec4.y), z(_bvec4.z) {}
dvec3::dvec3(ivec4 _ivec4) : x(_ivec4.x), y(_ivec4.y), z(_ivec4.z) {}
dvec3::dvec3(vec4  _vec4)  : x(_vec4.x),  y(_vec4.y),  z(_vec4.z)  {}
dvec3::dvec3(dvec4 _dvec4) : x(_dvec4.x), y(_dvec4.y), z(_dvec4.z) {}
dvec3::dvec3(__b_tuple_3 _t) : x(_t.x), y(_t.y), z(_t.z) {}
dvec3::dvec3(__i_tuple_3 _t) : x(_t.x), y(_t.y), z(_t.z) {}
dvec3::dvec3(__f_tuple_3 _t) : x(_t.x), y(_t.y), z(_t.z) {}
dvec3::dvec3(__d_tuple_3 _t) : x(_t.x), y(_t.y), z(_t.z) {}
dvec3::dvec3(__b_tuple_4 _t) : x(_t.x), y(_t.y), z(_t.z) {}
dvec3::dvec3(__i_tuple_4 _t) : x(_t.x), y(_t.y), z(_t.z) {}
dvec3::dvec3(__f_tuple_4 _t) : x(_t.x), y(_t.y), z(_t.z) {}
dvec3::dvec3(__d_tuple_4 _t) : x(_t.x), y(_t.y), z(_t.z) {}
const dvec3 dvec3::up;
const dvec3 dvec3::down;
const dvec3 dvec3::left;
const dvec3 dvec3::right;
const dvec3 dvec3::back;
const dvec3 dvec3::forward;
const dvec3 dvec3::zero;
const dvec3 dvec3::one;
float dvec3::len() const { return sqrtf(x*x + y*y + z*z); }
double dvec3::dlen() const { return sqrt(x*x + y*y + z*z); }
dvec3 dvec3::normalized() const { double l = dlen(); return dvec3(x/l, y/l, z/l); }
dvec3 dvec3::operator+() { return *this; }
dvec3 dvec3::operator-() { return dvec3(-x, -y, -z); }
dvec3 dvec3::operator+(const dvec2 &ref) { return dvec3(x+ref.x, y+ref.y, z); }
dvec3 dvec3::operator+(const dvec3 &ref) { return dvec3(x+ref.x, y+ref.y, z+ref.z); }
dvec3 dvec3::operator-(const dvec2 &ref) { return dvec3(x-ref.x, y-ref.y, z); }
dvec3 dvec3::operator-(const dvec3 &ref) { return dvec3(x-ref.x, y-ref.y, z-ref.z); }
dvec3 dvec3::operator*(const double scalar) { return dvec3(x*scalar, y*scalar, z*scalar); }
dvec3 dvec3::operator/(const double scalar) { return dvec3(x/scalar, y/scalar, z/scalar); }
bool dvec3::operator==(const dvec3 &ref) { return (x == ref.x && y == ref.y && z == ref.z); }
bool dvec3::operator!=(const dvec3 &ref) { return (x != ref.x || y != ref.y || z != ref.z); }
dvec3& dvec3::operator=(const bvec3 &ref) { x = ref.x; y = ref.y; z = ref.z; return *this; }
dvec3& dvec3::operator=(const ivec3 &ref) { x = ref.x; y = ref.y; z = ref.z; return *this; }
dvec3& dvec3::operator=(const vec3  &ref) { x = ref.x; y = ref.y; z = ref.z; return *this; }
dvec3& dvec3::operator=(const dvec3 &ref) { x = ref.x; y = ref.y; z = ref.z; return *this; }
dvec3& dvec3::operator=(const bvec4 &ref) { x = ref.x; y = ref.y; z = ref.z; return *this; }
dvec3& dvec3::operator=(const ivec4 &ref) { x = ref.x; y = ref.y; z = ref.z; return *this; }
dvec3& dvec3::operator=(const vec4  &ref) { x = ref.x; y = ref.y; z = ref.z; return *this; }
dvec3& dvec3::operator=(const dvec4 &ref) { x = ref.x; y = ref.y; z = ref.z; return *this; }
dvec3& dvec3::operator=(const __b_tuple_3 &ref) { bool   _x = ref.x, _y = ref.y, _z = ref.z; x = _x; y = _y; z = _z; return *this; }
dvec3& dvec3::operator=(const __i_tuple_3 &ref) { int    _x = ref.x, _y = ref.y, _z = ref.z; x = _x; y = _y; z = _z; return *this; }
dvec3& dvec3::operator=(const __f_tuple_3 &ref) { float  _x = ref.x, _y = ref.y, _z = ref.z; x = _x; y = _y; z = _z; return *this; }
dvec3& dvec3::operator=(const __d_tuple_3 &ref) { double _x = ref.x, _y = ref.y, _z = ref.z; x = _x; y = _y; z = _z; return *this; }
dvec3& dvec3::operator=(const __b_tuple_4 &ref) { bool   _x = ref.x, _y = ref.y, _z = ref.z; x = _x; y = _y; z = _z; return *this; }
dvec3& dvec3::operator=(const __i_tuple_4 &ref) { int    _x = ref.x, _y = ref.y, _z = ref.z; x = _x; y = _y; z = _z; return *this; }
dvec3& dvec3::operator=(const __f_tuple_4 &ref) { float  _x = ref.x, _y = ref.y, _z = ref.z; x = _x; y = _y; z = _z; return *this; }
dvec3& dvec3::operator=(const __d_tuple_4 &ref) { double _x = ref.x, _y = ref.y, _z = ref.z; x = _x; y = _y; z = _z; return *this; }
dvec3::operator bvec2() const { return bvec2(*this); }
dvec3::operator ivec2() const { return ivec2(*this); }
dvec3::operator vec2()  const { return vec2(*this); }
dvec3::operator dvec2() const { return dvec2(*this); }
dvec3::operator bvec3() const { return bvec3(*this); }
dvec3::operator ivec3() const { return ivec3(*this); }
dvec3::operator vec3()  const { return vec3(*this); }

bvec4::bvec4() {}
bvec4::bvec4(bool _identity) : x(_identity), y(_identity), z(_identity), w(_identity) {}
bvec4::bvec4(bool _x, bool _y, bool _z, bool _w) : x(_x), y(_y), z(_z), w(_w) {}
bvec4::bvec4(vec4  _vec4)  : x(_vec4.x),  y(_vec4.y),  z(_vec4.z),  w(_vec4.w)  {}
bvec4::bvec4(ivec4 _ivec4) : x(_ivec4.x), y(_ivec4.y), z(_ivec4.z), w(_ivec4.w) {}
bvec4::bvec4(dvec4 _dvec4) : x(_dvec4.x), y(_dvec4.y), z(_dvec4.z), w(_dvec4.w) {}
bvec4::bvec4(__b_tuple_4 _t) : x(_t.x), y(_t.y), z(_t.z), w(_t.w) {}
bvec4::bvec4(__i_tuple_4 _t) : x(_t.x), y(_t.y), z(_t.z), w(_t.w) {}
bvec4::bvec4(__f_tuple_4 _t) : x(_t.x), y(_t.y), z(_t.z), w(_t.w) {}
bvec4::bvec4(__d_tuple_4 _t) : x(_t.x), y(_t.y), z(_t.z), w(_t.w) {}
bvec4 bvec4::operator&(const bvec2 &ref) { return bvec4(x&&ref.x , y&&ref.y, z       , w); }
bvec4 bvec4::operator&(const bvec3 &ref) { return bvec4(x&&ref.x , y&&ref.y, z&&ref.z, w); }
bvec4 bvec4::operator&(const bvec4 &ref) { return bvec4(x&&ref.x , y&&ref.y, z&&ref.z, w&&ref.w); }
bvec4 bvec4::operator|(const bvec2 &ref) { return bvec4(x||ref.x , y||ref.y, z       , w); }
bvec4 bvec4::operator|(const bvec3 &ref) { return bvec4(x||ref.x , y||ref.y, z||ref.z, w); }
bvec4 bvec4::operator|(const bvec4 &ref) { return bvec4(x||ref.x , y||ref.y, z||ref.z, w||ref.w); }
bool bvec4::operator==(const bvec4 &ref) { return (x == ref.x && y == ref.y && z == ref.z && w == ref.w); }
bool bvec4::operator!=(const bvec4 &ref) { return (x != ref.x || y != ref.y || z != ref.z || w != ref.w); }
bvec4& bvec4::operator=(const bvec4 &ref) { x = ref.x; y = ref.y; z = ref.z; w = ref.w; return *this; }
bvec4& bvec4::operator=(const ivec4 &ref) { x = ref.x; y = ref.y; z = ref.z; w = ref.w; return *this; }
bvec4& bvec4::operator=(const vec4  &ref) { x = ref.x; y = ref.y; z = ref.z; w = ref.w; return *this; }
bvec4& bvec4::operator=(const dvec4 &ref) { x = ref.x; y = ref.y; z = ref.z; w = ref.w; return *this; }
bvec4& bvec4::operator=(const __b_tuple_4 &ref) { bool   _x = ref.x, _y = ref.y, _z = ref.z, _w = ref.w; x = _x; y = _y; z = _z; w = _w; return *this; }
bvec4& bvec4::operator=(const __i_tuple_4 &ref) { int    _x = ref.x, _y = ref.y, _z = ref.z, _w = ref.w; x = _x; y = _y; z = _z; w = _w; return *this; }
bvec4& bvec4::operator=(const __f_tuple_4 &ref) { float  _x = ref.x, _y = ref.y, _z = ref.z, _w = ref.w; x = _x; y = _y; z = _z; w = _w; return *this; }
bvec4& bvec4::operator=(const __d_tuple_4 &ref) { double _x = ref.x, _y = ref.y, _z = ref.z, _w = ref.w; x = _x; y = _y; z = _z; w = _w; return *this; }
bvec4::operator bvec2() const { return bvec2(*this); }
bvec4::operator ivec2() const { return ivec2(*this); }
bvec4::operator vec2()  const { return vec2(*this); }
bvec4::operator dvec2() const { return dvec2(*this); }
bvec4::operator bvec3() const { return bvec3(*this); }
bvec4::operator ivec3() const { return ivec3(*this); }
bvec4::operator vec3()  const { return vec3(*this); }
bvec4::operator dvec3() const { return dvec3(*this); }
bvec4::operator ivec4() const { return ivec4(*this); }
bvec4::operator vec4()  const { return vec4(*this); }
bvec4::operator dvec4() const { return dvec4(*this); }

ivec4::ivec4() {}
ivec4::ivec4(int _identity) : x(_identity), y(_identity), z(_identity), w(_identity) {}
ivec4::ivec4(int _x, int _y, int _z, int _w) : x(_x), y(_y), z(_z), w(_w) {}
ivec4::ivec4(bvec4 _bvec4) : x(_bvec4.x), y(_bvec4.y), z(_bvec4.z), w(_bvec4.w) {}
ivec4::ivec4(vec4  _vec4)  : x(_vec4.x),  y(_vec4.y),  z(_vec4.z),  w(_vec4.w)  {}
ivec4::ivec4(dvec4 _dvec4) : x(_dvec4.x), y(_dvec4.y), z(_dvec4.z), w(_dvec4.w) {}
ivec4::ivec4(__b_tuple_4 _t) : x(_t.x), y(_t.y), z(_t.z), w(_t.w) {}
ivec4::ivec4(__i_tuple_4 _t) : x(_t.x), y(_t.y), z(_t.z), w(_t.w) {}
ivec4::ivec4(__f_tuple_4 _t) : x(_t.x), y(_t.y), z(_t.z), w(_t.w) {}
ivec4::ivec4(__d_tuple_4 _t) : x(_t.x), y(_t.y), z(_t.z), w(_t.w) {}
float ivec4::len() const { return sqrtf(x*x + y*y + z*z + w*w); }
double ivec4::dlen() const { return sqrt(x*x + y*y + z*z + w*w); }
vec4 ivec4::normalized() const { float l = len(); return vec4(x/l, y/l, z/l, w/l); }
ivec4 ivec4::operator+() { return *this; }
ivec4 ivec4::operator-() { return ivec4(-x, -y, -z, -w); }
ivec4 ivec4::operator+(const ivec2 &ref) { return ivec4(x+ref.x, y+ref.y, z      , w); }
ivec4 ivec4::operator+(const ivec3 &ref) { return ivec4(x+ref.x, y+ref.y, z+ref.z, w); }
ivec4 ivec4::operator+(const ivec4 &ref) { return ivec4(x+ref.x, y+ref.y, z+ref.z, w+ref.w); }
ivec4 ivec4::operator-(const ivec2 &ref) { return ivec4(x-ref.x, y-ref.y, z      , w); }
ivec4 ivec4::operator-(const ivec3 &ref) { return ivec4(x-ref.x, y-ref.y, z-ref.z, w); }
ivec4 ivec4::operator-(const ivec4 &ref) { return ivec4(x-ref.x, y-ref.y, z-ref.z, w-ref.w); }
ivec4 ivec4::operator*(const int scalar) { return ivec4(x*scalar, y*scalar, z*scalar, w*scalar); }
ivec4 ivec4::operator/(const int scalar) { return ivec4(x/scalar, y/scalar, z/scalar, w/scalar); }
bool ivec4::operator==(const ivec4 &ref) { return (x == ref.x && y == ref.y && z == ref.z && w == ref.w); }
bool ivec4::operator!=(const ivec4 &ref) { return (x != ref.x || y != ref.y || z != ref.z || w != ref.w); }
ivec4& ivec4::operator=(const bvec4 &ref) { x = ref.x; y = ref.y; z = ref.z; w = ref.w; return *this; }
ivec4& ivec4::operator=(const ivec4 &ref) { x = ref.x; y = ref.y; z = ref.z; w = ref.w; return *this; }
ivec4& ivec4::operator=(const vec4  &ref) { x = ref.x; y = ref.y; z = ref.z; w = ref.w; return *this; }
ivec4& ivec4::operator=(const dvec4 &ref) { x = ref.x; y = ref.y; z = ref.z; w = ref.w; return *this; }
ivec4& ivec4::operator=(const __b_tuple_4 &ref) { bool   _x = ref.x, _y = ref.y, _z = ref.z, _w = ref.w; x = _x; y = _y; z = _z; w = _w; return *this; }
ivec4& ivec4::operator=(const __i_tuple_4 &ref) { int    _x = ref.x, _y = ref.y, _z = ref.z, _w = ref.w; x = _x; y = _y; z = _z; w = _w; return *this; }
ivec4& ivec4::operator=(const __f_tuple_4 &ref) { float  _x = ref.x, _y = ref.y, _z = ref.z, _w = ref.w; x = _x; y = _y; z = _z; w = _w; return *this; }
ivec4& ivec4::operator=(const __d_tuple_4 &ref) { double _x = ref.x, _y = ref.y, _z = ref.z, _w = ref.w; x = _x; y = _y; z = _z; w = _w; return *this; }
ivec4::operator bvec2() const { return bvec2(*this); }
ivec4::operator ivec2() const { return ivec2(*this); }
ivec4::operator vec2()  const { return vec2(*this); }
ivec4::operator dvec2() const { return dvec2(*this); }
ivec4::operator bvec3() const { return bvec3(*this); }
ivec4::operator ivec3() const { return ivec3(*this); }
ivec4::operator vec3()  const { return vec3(*this); }
ivec4::operator dvec3() const { return dvec3(*this); }
ivec4::operator bvec4() const { return bvec4(*this); }
ivec4::operator vec4()  const { return vec4(*this); }
ivec4::operator dvec4() const { return dvec4(*this); }

vec4::vec4() {}
vec4::vec4(float _identity) : x(_identity), y(_identity), z(_identity), w(_identity) {}
vec4::vec4(float _x, float _y, float _z, float _w) : x(_x), y(_y), z(_z), w(_w) {}
vec4::vec4(bvec4 _bvec4) : x(_bvec4.x), y(_bvec4.y), z(_bvec4.z), w(_bvec4.w) {}
vec4::vec4(ivec4 _ivec4) : x(_ivec4.x), y(_ivec4.y), z(_ivec4.z), w(_ivec4.w) {}
vec4::vec4(dvec4 _dvec4) : x(_dvec4.x), y(_dvec4.y), z(_dvec4.z), w(_dvec4.w) {}
vec4::vec4(__b_tuple_4 _t) : x(_t.x), y(_t.y), z(_t.z), w(_t.w) {}
vec4::vec4(__i_tuple_4 _t) : x(_t.x), y(_t.y), z(_t.z), w(_t.w) {}
vec4::vec4(__f_tuple_4 _t) : x(_t.x), y(_t.y), z(_t.z), w(_t.w) {}
vec4::vec4(__d_tuple_4 _t) : x(_t.x), y(_t.y), z(_t.z), w(_t.w) {}
float vec4::len() const { return sqrtf(x*x + y*y + z*z + w*w); }
double vec4::dlen() const { return sqrt(x*x + y*y + z*z + w*w); }
vec4 vec4::normalized() const { float l = len(); return vec4(x/l, y/l, z/l, w/l); }
vec4 vec4::operator+() { return *this; }
vec4 vec4::operator-() { return vec4(-x, -y, -z, -w); }
vec4 vec4::operator+(const vec2 &ref) { return vec4(x+ref.x, y+ref.y, z      , w); }
vec4 vec4::operator+(const vec3 &ref) { return vec4(x+ref.x, y+ref.y, z+ref.z, w); }
vec4 vec4::operator+(const vec4 &ref) { return vec4(x+ref.x, y+ref.y, z+ref.z, w+ref.w); }
vec4 vec4::operator-(const vec2 &ref) { return vec4(x-ref.x, y-ref.y, z      , w); }
vec4 vec4::operator-(const vec3 &ref) { return vec4(x-ref.x, y-ref.y, z-ref.z, w); }
vec4 vec4::operator-(const vec4 &ref) { return vec4(x-ref.x, y-ref.y, z-ref.z, w-ref.w); }
vec4 vec4::operator*(const float scalar) { return vec4(x*scalar, y*scalar, z*scalar, w*scalar); }
vec4 vec4::operator/(const float scalar) { return vec4(x/scalar, y/scalar, z/scalar, w/scalar); }
bool vec4::operator==(const vec4 &ref) { return (x == ref.x && y == ref.y && z == ref.z && w == ref.w); }
bool vec4::operator!=(const vec4 &ref) { return (x != ref.x || y != ref.y || z != ref.z || w != ref.w); }
vec4& vec4::operator=(const bvec4 &ref) { x = ref.x; y = ref.y; z = ref.z; w = ref.w; return *this; }
vec4& vec4::operator=(const ivec4 &ref) { x = ref.x; y = ref.y; z = ref.z; w = ref.w; return *this; }
vec4& vec4::operator=(const vec4  &ref) { x = ref.x; y = ref.y; z = ref.z; w = ref.w; return *this; }
vec4& vec4::operator=(const dvec4 &ref) { x = ref.x; y = ref.y; z = ref.z; w = ref.w; return *this; }
vec4& vec4::operator=(const __b_tuple_4 &ref) { bool   _x = ref.x, _y = ref.y, _z = ref.z, _w = ref.w; x = _x; y = _y; z = _z; w = _w; return *this; }
vec4& vec4::operator=(const __i_tuple_4 &ref) { int    _x = ref.x, _y = ref.y, _z = ref.z, _w = ref.w; x = _x; y = _y; z = _z; w = _w; return *this; }
vec4& vec4::operator=(const __f_tuple_4 &ref) { float  _x = ref.x, _y = ref.y, _z = ref.z, _w = ref.w; x = _x; y = _y; z = _z; w = _w; return *this; }
vec4& vec4::operator=(const __d_tuple_4 &ref) { double _x = ref.x, _y = ref.y, _z = ref.z, _w = ref.w; x = _x; y = _y; z = _z; w = _w; return *this; }
vec4::operator bvec2() const { return bvec2(*this); }
vec4::operator ivec2() const { return ivec2(*this); }
vec4::operator vec2()  const { return vec2(*this); }
vec4::operator dvec2() const { return dvec2(*this); }
vec4::operator bvec3() const { return bvec3(*this); }
vec4::operator ivec3() const { return ivec3(*this); }
vec4::operator vec3()  const { return vec3(*this); }
vec4::operator dvec3() const { return dvec3(*this); }
vec4::operator bvec4() const { return bvec4(*this); }
vec4::operator ivec4() const { return ivec4(*this); }
vec4::operator dvec4() const { return dvec4(*this); }

dvec4::dvec4() {}
dvec4::dvec4(double _identity) : x(_identity), y(_identity), z(_identity), w(_identity) {}
dvec4::dvec4(double _x, double _y, double _z, double _w) : x(_x), y(_y), z(_z), w(_w) {}
dvec4::dvec4(bvec4 _bvec4) : x(_bvec4.x), y(_bvec4.y), z(_bvec4.z), w(_bvec4.w) {}
dvec4::dvec4(ivec4 _ivec4) : x(_ivec4.x), y(_ivec4.y), z(_ivec4.z), w(_ivec4.w) {}
dvec4::dvec4(vec4  _vec4)  : x(_vec4.x),  y(_vec4.y),  z(_vec4.z),  w(_vec4.w)  {}
dvec4::dvec4(__b_tuple_4 _t) : x(_t.x), y(_t.y), z(_t.z), w(_t.w) {}
dvec4::dvec4(__i_tuple_4 _t) : x(_t.x), y(_t.y), z(_t.z), w(_t.w) {}
dvec4::dvec4(__f_tuple_4 _t) : x(_t.x), y(_t.y), z(_t.z), w(_t.w) {}
dvec4::dvec4(__d_tuple_4 _t) : x(_t.x), y(_t.y), z(_t.z), w(_t.w) {}
float dvec4::len() const { return sqrtf(x*x + y*y + z*z + w*w); }
double dvec4::dlen() const { return sqrt(x*x + y*y + z*z + w*w); }
dvec4 dvec4::normalized() const { double l = dlen(); return dvec4(x/l, y/l, z/l, w/l); }
dvec4 dvec4::operator+() { return *this; }
dvec4 dvec4::operator-() { return dvec4(-x, -y, -z, -w); }
dvec4 dvec4::operator+(const dvec2 &ref) { return dvec4(x+ref.x, y+ref.y, z      , w); }
dvec4 dvec4::operator+(const dvec3 &ref) { return dvec4(x+ref.x, y+ref.y, z+ref.z, w); }
dvec4 dvec4::operator+(const dvec4 &ref) { return dvec4(x+ref.x, y+ref.y, z+ref.z, w+ref.w); }
dvec4 dvec4::operator-(const dvec2 &ref) { return dvec4(x-ref.x, y-ref.y, z      , w); }
dvec4 dvec4::operator-(const dvec3 &ref) { return dvec4(x-ref.x, y-ref.y, z-ref.z, w); }
dvec4 dvec4::operator-(const dvec4 &ref) { return dvec4(x-ref.x, y-ref.y, z-ref.z, w-ref.w); }
dvec4 dvec4::operator*(const double scalar) { return dvec4(x*scalar, y*scalar, z*scalar, w*scalar); }
dvec4 dvec4::operator/(const double scalar) { return dvec4(x/scalar, y/scalar, z/scalar, w/scalar); }
bool dvec4::operator==(const dvec4 &ref) { return (x == ref.x && y == ref.y && z == ref.z && w == ref.w); }
bool dvec4::operator!=(const dvec4 &ref) { return (x != ref.x || y != ref.y || z != ref.z || w != ref.w); }
dvec4& dvec4::operator=(const bvec4 &ref) { x = ref.x; y = ref.y; z = ref.z; w = ref.w; return *this; }
dvec4& dvec4::operator=(const ivec4 &ref) { x = ref.x; y = ref.y; z = ref.z; w = ref.w; return *this; }
dvec4& dvec4::operator=(const vec4  &ref) { x = ref.x; y = ref.y; z = ref.z; w = ref.w; return *this; }
dvec4& dvec4::operator=(const dvec4 &ref) { x = ref.x; y = ref.y; z = ref.z; w = ref.w; return *this; }
dvec4& dvec4::operator=(const __b_tuple_4 &ref) { bool   _x = ref.x, _y = ref.y, _z = ref.z, _w = ref.w; x = _x; y = _y; z = _z; w = _w; return *this; }
dvec4& dvec4::operator=(const __i_tuple_4 &ref) { int    _x = ref.x, _y = ref.y, _z = ref.z, _w = ref.w; x = _x; y = _y; z = _z; w = _w; return *this; }
dvec4& dvec4::operator=(const __f_tuple_4 &ref) { float  _x = ref.x, _y = ref.y, _z = ref.z, _w = ref.w; x = _x; y = _y; z = _z; w = _w; return *this; }
dvec4& dvec4::operator=(const __d_tuple_4 &ref) { double _x = ref.x, _y = ref.y, _z = ref.z, _w = ref.w; x = _x; y = _y; z = _z; w = _w; return *this; }
dvec4::operator bvec2() const { return bvec2(*this); }
dvec4::operator ivec2() const { return ivec2(*this); }
dvec4::operator vec2()  const { return vec2(*this); }
dvec4::operator dvec2() const { return dvec2(*this); }
dvec4::operator bvec3() const { return bvec3(*this); }
dvec4::operator ivec3() const { return ivec3(*this); }
dvec4::operator vec3()  const { return vec3(*this); }
dvec4::operator dvec3() const { return dvec3(*this); }
dvec4::operator bvec4() const { return bvec4(*this); }
dvec4::operator ivec4() const { return ivec4(*this); }
dvec4::operator vec4()  const { return vec4(*this); }

ivec2 operator*(const int scalar, const ivec2 &ref) { return ivec2(ref.x*scalar, ref.y*scalar); }
ivec2 operator/(const int scalar, const ivec2 &ref) { return ivec2(ref.x/scalar, ref.y/scalar); }
vec2  operator*(const float scalar, const vec2 &ref) { return vec2(ref.x*scalar, ref.y*scalar); }
vec2  operator/(const float scalar, const vec2 &ref) { return vec2(ref.x/scalar, ref.y/scalar); }
dvec2 operator*(const double scalar, const dvec2 &ref) { return dvec2(ref.x*scalar, ref.y*scalar); }
dvec2 operator/(const double scalar, const dvec2 &ref) { return dvec2(ref.x*scalar, ref.y*scalar); }
ivec3 operator*(const int scalar, const ivec3 &ref) { return ivec3(ref.x*scalar, ref.y*scalar, ref.z*scalar); }
ivec3 operator/(const int scalar, const ivec3 &ref) { return ivec3(ref.x/scalar, ref.y/scalar, ref.z/scalar); }
vec3  operator*(const float scalar, const vec3 &ref) { return vec3(ref.x*scalar, ref.y*scalar, ref.z*scalar); }
vec3  operator/(const float scalar, const vec3 &ref) { return vec3(ref.x/scalar, ref.y/scalar, ref.z/scalar); }
dvec3 operator*(const double scalar, const dvec3 &ref) { return dvec3(ref.x*scalar, ref.y*scalar, ref.z*scalar); }
dvec3 operator/(const double scalar, const dvec3 &ref) { return dvec3(ref.x/scalar, ref.y/scalar, ref.z/scalar); }
ivec4 operator*(const int scalar, const ivec4 &ref) { return ivec4(ref.x*scalar, ref.y*scalar, ref.z*scalar, ref.w*scalar); }
ivec4 operator/(const int scalar, const ivec4 &ref) { return ivec4(ref.x/scalar, ref.y/scalar, ref.z/scalar, ref.w/scalar); }
vec4  operator*(const float scalar, const vec4 &ref) { return vec4(ref.x*scalar, ref.y*scalar, ref.z*scalar, ref.w*scalar); }
vec4  operator/(const float scalar, const vec4 &ref) { return vec4(ref.x/scalar, ref.y/scalar, ref.z/scalar, ref.w/scalar); }
dvec4 operator*(const double scalar, const dvec4 &ref) { return dvec4(ref.x*scalar, ref.y*scalar, ref.z*scalar, ref.w*scalar); }
dvec4 operator/(const double scalar, const dvec4 &ref) { return dvec4(ref.x/scalar, ref.y/scalar, ref.z/scalar, ref.w/scalar); }

int    dot(const ivec2 &a, const ivec2 &b) { return (a.x * b.x + a.y * b.y); }
float  dot(const vec2  &a, const vec2  &b) { return (a.x * b.x + a.y * b.y); }
double dot(const dvec2 &a, const dvec2 &b) { return (a.x * b.x + a.y * b.y); }
int    dot(const ivec3 &a, const ivec3 &b) { return (a.x * b.x + a.y * b.y + a.z * b.z); }
float  dot(const vec3  &a, const vec3  &b) { return (a.x * b.x + a.y * b.y + a.z * b.z); }
double dot(const dvec3 &a, const dvec3 &b) { return (a.x * b.x + a.y * b.y + a.z * b.z); }
int    dot(const ivec4 &a, const ivec4 &b) { return (a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w); }
float  dot(const vec4  &a, const vec4  &b) { return (a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w); }
double dot(const dvec4 &a, const dvec4 &b) { return (a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w); }

ivec3 cross(const ivec3 &a, const ivec3 &b) { return ivec3(a.y*b.z - a.z*b.y, a.x*b.z - a.z*b.x, a.x*b.y - a.y*b.x); }
vec3  cross(const vec3  &a, const vec3  &b) { return  vec3(a.y*b.z - a.z*b.y, a.x*b.z - a.z*b.x, a.x*b.y - a.y*b.x); }
dvec3 cross(const dvec3 &a, const dvec3 &b) { return dvec3(a.y*b.z - a.z*b.y, a.x*b.z - a.z*b.x, a.x*b.y - a.y*b.x); }

float len(const ivec2 &ref) { return sqrtf(ref.x*ref.x + ref.y*ref.y); }
float len(const vec2  &ref) { return sqrtf(ref.x*ref.x + ref.y*ref.y); }
float len(const dvec2 &ref) { return sqrtf(ref.x*ref.x + ref.y*ref.y); }
float len(const ivec3 &ref) { return sqrtf(ref.x*ref.x + ref.y*ref.y + ref.z*ref.z); }
float len(const vec3  &ref) { return sqrtf(ref.x*ref.x + ref.y*ref.y + ref.z*ref.z); }
float len(const dvec3 &ref) { return sqrtf(ref.x*ref.x + ref.y*ref.y + ref.z*ref.z); }
float len(const ivec4 &ref) { return sqrtf(ref.x*ref.x + ref.y*ref.y + ref.z*ref.z + ref.w*ref.w); }
float len(const vec4  &ref) { return sqrtf(ref.x*ref.x + ref.y*ref.y + ref.z*ref.z + ref.w*ref.w); }
float len(const dvec4 &ref) { return sqrtf(ref.x*ref.x + ref.y*ref.y + ref.z*ref.z + ref.w*ref.w); }
double dlen(const ivec2 &ref) { return sqrt(ref.x*ref.x + ref.y*ref.y); }
double dlen(const vec2  &ref) { return sqrt(ref.x*ref.x + ref.y*ref.y); }
double dlen(const dvec2 &ref) { return sqrt(ref.x*ref.x + ref.y*ref.y); }
double dlen(const ivec3 &ref) { return sqrt(ref.x*ref.x + ref.y*ref.y + ref.z*ref.z); }
double dlen(const vec3  &ref) { return sqrt(ref.x*ref.x + ref.y*ref.y + ref.z*ref.z); }
double dlen(const dvec3 &ref) { return sqrt(ref.x*ref.x + ref.y*ref.y + ref.z*ref.z); }
double dlen(const ivec4 &ref) { return sqrt(ref.x*ref.x + ref.y*ref.y + ref.z*ref.z + ref.w*ref.w); }
double dlen(const vec4  &ref) { return sqrt(ref.x*ref.x + ref.y*ref.y + ref.z*ref.z + ref.w*ref.w); }
double dlen(const dvec4 &ref) { return sqrt(ref.x*ref.x + ref.y*ref.y + ref.z*ref.z + ref.w*ref.w); }