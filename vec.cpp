#include "vec.hpp"
#include "swizzling.hpp"
#include <cmath>

bvec2::bvec2() {}
bvec2::bvec2(bool _identity) : x(_identity), y(_identity) {}
bvec2::bvec2(bool _x, bool _y) : x(_x), y(_y) {}
bvec2::bvec2(__b_tuple_2 _t) : x(_t.x), y(_t.y) {}

bvec2 bvec2::operator=(const bvec2 &ref) {
  if(this == &ref) // check for self-assignment
    return *this;
  
  x = ref.x;
  y = ref.y;
  return *this;
}

bvec2 bvec2::operator&=(const bvec2 &ref) {
  x &= ref.x;
  y &= ref.y;
  return *this;
}
bvec2 bvec2::operator|=(const bvec2 &ref) {
  x |= ref.x;
  y |= ref.y;
  return *this;
}
bvec2 bvec2::operator^=(const bvec2 &ref) {
  x ^= ref.x;
  y ^= ref.y;
  return *this;
}
bvec2 bvec2::operator&(const bvec2 &ref) const {
  return bvec2(*this) &= ref;
}
bvec2 bvec2::operator|(const bvec2 &ref) const {
  return bvec2(*this) |= ref;
}
bvec2 bvec2::operator^(const bvec2 &ref) const {
  return bvec2(*this) ^= ref;
}

bvec2 bvec2::operator~() const {
  return bvec2(!x, !y);
};

bool bvec2::operator==(const bvec2 &ref) const { return (x == ref.x && y == ref.y); }
bool bvec2::operator!=(const bvec2 &ref) const { return (x != ref.x || y != ref.y); }

bvec2::operator __b_tuple_2() const { return __b_tuple_2((bool*)&x, (bool*)&y); }

bvec2::operator ivec2() const { return ivec2(x, y); }
bvec2::operator fvec2() const { return fvec2(x, y); }
bvec2::operator dvec2() const { return dvec2(x, y); }

__VEC2_SWIZZLE(b);

bvec3::bvec3() {}
bvec3::bvec3(bool _identity) : x(_identity), y(_identity), z(_identity) {}
bvec3::bvec3(bool _x, bool _y, bool _z) : x(_x), y(_y), z(_z) {}
bvec3::bvec3(__b_tuple_3 _t) : x(_t.x), y(_t.y), z(_t.z) {}

bvec3 bvec3::operator=(const bvec3 &ref) {
  if(this == &ref) // check for self-assignment
    return *this;
  
  x = ref.x;
  y = ref.y;
  z = ref.z;
  return *this;
}

bvec3 bvec3::operator&=(const bvec3 &ref) {
  x &= ref.x;
  y &= ref.y;
  z &= ref.z;
  return *this;
}
bvec3 bvec3::operator|=(const bvec3 &ref) {
  x |= ref.x;
  y |= ref.y;
  z |= ref.z;
  return *this;
}
bvec3 bvec3::operator^=(const bvec3 &ref) {
  x ^= ref.x;
  y ^= ref.y;
  z ^= ref.z;
  return *this;
}

bvec3 bvec3::operator&(const bvec3 &ref) const {
  return bvec3(*this) &= ref;
}
bvec3 bvec3::operator|(const bvec3 &ref) const {
  return bvec3(*this) |= ref;
}
bvec3 bvec3::operator^(const bvec3 &ref) const {
  return bvec3(*this) ^= ref;
}

bvec3 bvec3::operator~() const {
  return bvec3(!x, !y, !z);
};

bool bvec3::operator==(const bvec3 &ref) const { return (x == ref.x && y == ref.y && z == ref.z); }
bool bvec3::operator!=(const bvec3 &ref) const { return (x != ref.x || y != ref.y || z != ref.z); }

bvec3::operator __b_tuple_3() const { return __b_tuple_3((bool*)&x, (bool*)&y, (bool*)&z); }

bvec3::operator ivec3() const { return ivec3(x, y, z); }
bvec3::operator fvec3() const { return fvec3(x, y, z); }
bvec3::operator dvec3() const { return dvec3(x, y, z); }

__VEC3_SWIZZLE(b);

bvec4::bvec4() {}
bvec4::bvec4(bool _identity) : x(_identity), y(_identity), z(_identity) {}
bvec4::bvec4(bool _x, bool _y, bool _z, bool _w) : x(_x), y(_y), z(_z), w(_w) {}
bvec4::bvec4(__b_tuple_4 _t) : x(_t.x), y(_t.y), z(_t.z), w(_t.w) {}

bvec4 bvec4::operator=(const bvec4 &ref) {
  if(this == &ref) // check for self-assignment
    return *this;
  
  x = ref.x;
  y = ref.y;
  z = ref.z;
  w = ref.w;
  return *this;
}

bvec4 bvec4::operator&=(const bvec4 &ref) {
  x &= ref.x;
  y &= ref.y;
  z &= ref.z;
  w &= ref.w;
  return *this;
}
bvec4 bvec4::operator|=(const bvec4 &ref) {
  x |= ref.x;
  y |= ref.y;
  z |= ref.z;
  w |= ref.w;
  return *this;
}
bvec4 bvec4::operator^=(const bvec4 &ref) {
  x ^= ref.x;
  y ^= ref.y;
  z ^= ref.z;
  w ^= ref.w;
  return *this;
}

bvec4 bvec4::operator&(const bvec4 &ref) const {
  return bvec4(*this) &= ref;
}
bvec4 bvec4::operator|(const bvec4 &ref) const {
  return bvec4(*this) |= ref;
}
bvec4 bvec4::operator^(const bvec4 &ref) const {
  return bvec4(*this) ^= ref;
}

bvec4 bvec4::operator~() const {
  return bvec4(!x, !y, !z, !w);
};

bool bvec4::operator==(const bvec4 &ref) const { return (x == ref.x && y == ref.y && z == ref.z && w == ref.w); }
bool bvec4::operator!=(const bvec4 &ref) const { return (x != ref.x || y != ref.y || z != ref.z || w != ref.w); }

bvec4::operator __b_tuple_4() const { return __b_tuple_4((bool*)&x, (bool*)&y, (bool*)&z, (bool*)&w); }

bvec4::operator ivec4() const { return ivec4(x, y, z, w); }
bvec4::operator fvec4() const { return fvec4(x, y, z, w); }
bvec4::operator dvec4() const { return dvec4(x, y, z, w); }

__VEC4_SWIZZLE(b);

ivec2::ivec2() {}
ivec2::ivec2(int _identity) : x(_identity), y(_identity) {}
ivec2::ivec2(int _x, int _y) : x(_x), y(_y) {}
ivec2::ivec2(__i_tuple_2 _t) : x(_t.x), y(_t.y) {}

float ivec2::len() const { return sqrtf(x*x + y*y); }
double ivec2::dlen() const { return sqrt(x*x + y*y); }
fvec2 ivec2::normalized() const { float l = len(); return fvec2(x/l, y/l); }
dvec2 ivec2::dnormalized() const { double l = dlen(); return dvec2(x/l, y/l); }

ivec2 ivec2::operator=(const ivec2 &ref) {
  if(this == &ref) // check for self-assignment
    return *this;
  
  x = ref.x;
  y = ref.y;
  return *this;
}

ivec2 ivec2::operator+=(const ivec2 &ref) {
  x += ref.x;
  y += ref.y;
  return *this;
}
ivec2 ivec2::operator-=(const ivec2 &ref)  {
  x -= ref.x;
  y -= ref.y;
  return *this;
}
ivec2 ivec2::operator*=(const ivec2 &ref)  {
  x *= ref.x;
  y *= ref.y;
  return *this;
}
ivec2 ivec2::operator/=(const ivec2 &ref)  {
  x /= ref.x;
  y /= ref.y;
  return *this;
}
ivec2 ivec2::operator%=(const ivec2 &ref)  {
  x %= ref.x;
  y %= ref.y;
  return *this;
}
ivec2 ivec2::operator*=(const int scalar) {
  x *= scalar;
  y *= scalar;
  return *this;
}
ivec2 ivec2::operator/=(const int scalar) {
  x /= scalar;
  y /= scalar;
  return *this;
}
ivec2 ivec2::operator%=(const int mod) {
  x %= mod;
  y %= mod;
  return *this;
}

ivec2 ivec2::operator+(const ivec2 &ref) const {
  return ivec2(*this) += ref;
}
ivec2 ivec2::operator-(const ivec2 &ref) const {
  return ivec2(*this) -= ref;
}
ivec2 ivec2::operator*(const ivec2 &ref) const {
  return ivec2(*this) *= ref;
}
ivec2 ivec2::operator/(const ivec2 &ref) const {
  return ivec2(*this) /= ref;
}
ivec2 ivec2::operator%(const ivec2 &ref) const {
  return ivec2(*this) %= ref;
}
ivec2 ivec2::operator*(const int scalar) const {
  return ivec2(*this) *= scalar;
}
ivec2 ivec2::operator/(const int scalar) const {
  return ivec2(*this) /= scalar;
}
ivec2 ivec2::operator%(const int mod) const {
  return ivec2(*this) %= mod;
}

ivec2 ivec2::operator+() const { return *this; }
ivec2 ivec2::operator-() const { return ivec2(-x, -y); }

bool ivec2::operator==(const ivec2 &ref) const { return (x == ref.x && y == ref.y); }
bool ivec2::operator!=(const ivec2 &ref) const { return (x != ref.x || y != ref.y); }

ivec2::operator __i_tuple_2() const { return __i_tuple_2((int*)&x, (int*)&y); }

ivec2::operator bvec2() const { return bvec2(x, y); }
ivec2::operator fvec2()  const { return fvec2(x, y); }
ivec2::operator dvec2() const { return dvec2(x, y); }

const ivec2 ivec2::up     = ivec2(0, 1);
const ivec2 ivec2::down   = ivec2(0, -1);
const ivec2 ivec2::left   = ivec2(-1, 0);
const ivec2 ivec2::right  = ivec2(1, 0);
const ivec2 ivec2::zero   = ivec2(0, 0);
const ivec2 ivec2::one    = ivec2(1, 1);

const ivec2 ivec2::e1     = ivec2(1, 0);
const ivec2 ivec2::e2     = ivec2(0, 1);

__VEC2_SWIZZLE(i);

ivec3::ivec3() {}
ivec3::ivec3(int _identity) : x(_identity), y(_identity), z(_identity) {}
ivec3::ivec3(int _x, int _y, int _z) : x(_x), y(_y), z(_z) {}
ivec3::ivec3(__i_tuple_3 _t) : x(_t.x), y(_t.y), z(_t.z) {}

float ivec3::len() const { return sqrtf(x*x + y*y + z*z); }
double ivec3::dlen() const { return sqrt(x*x + y*y + z*z); }
fvec3 ivec3::normalized() const { float l = len(); return fvec3(x/l, y/l, z/l); }
dvec3 ivec3::dnormalized() const { double l = dlen(); return dvec3(x/l, y/l, z/l); }

ivec3 ivec3::operator=(const ivec3 &ref) {
  if(this == &ref) // check for self-assignment
    return *this;
  
  x = ref.x;
  y = ref.y;
  z = ref.z;
  return *this;
}

ivec3 ivec3::operator+=(const ivec3 &ref) {
  x += ref.x;
  y += ref.y;
  z += ref.z;
  return *this;
}
ivec3 ivec3::operator-=(const ivec3 &ref)  {
  x -= ref.x;
  y -= ref.y;
  z -= ref.z;
  return *this;
}
ivec3 ivec3::operator*=(const ivec3 &ref)  {
  x *= ref.x;
  y *= ref.y;
  z *= ref.z;
  return *this;
}
ivec3 ivec3::operator/=(const ivec3 &ref)  {
  x /= ref.x;
  y /= ref.y;
  z /= ref.z;
  return *this;
}
ivec3 ivec3::operator%=(const ivec3 &ref)  {
  x %= ref.x;
  y %= ref.y;
  z %= ref.z;
  return *this;
}
ivec3 ivec3::operator*=(const int scalar) {
  x *= scalar;
  y *= scalar;
  z *= scalar;
  return *this;
}
ivec3 ivec3::operator/=(const int scalar) {
  x /= scalar;
  y /= scalar;
  z /= scalar;
  return *this;
}
ivec3 ivec3::operator%=(const int mod) {
  x %= mod;
  y %= mod;
  z %= mod;
  return *this;
}

ivec3 ivec3::operator+(const ivec3 &ref) const {
  return ivec3(*this) += ref;
}
ivec3 ivec3::operator-(const ivec3 &ref) const {
  return ivec3(*this) -= ref;
}
ivec3 ivec3::operator*(const ivec3 &ref) const {
  return ivec3(*this) *= ref;
}
ivec3 ivec3::operator/(const ivec3 &ref) const {
  return ivec3(*this) /= ref;
}
ivec3 ivec3::operator%(const ivec3 &ref) const {
  return ivec3(*this) %= ref;
}
ivec3 ivec3::operator*(const int scalar) const {
  return ivec3(*this) *= scalar;
}
ivec3 ivec3::operator/(const int scalar) const {
  return ivec3(*this) /= scalar;
}
ivec3 ivec3::operator%(const int mod) const {
  return ivec3(*this) %= mod;
}

ivec3 ivec3::operator+() const { return *this; }
ivec3 ivec3::operator-() const { return ivec3(-x, -y, -z); }

bool ivec3::operator==(const ivec3 &ref) const { return (x == ref.x && y == ref.y && z == ref.z); }
bool ivec3::operator!=(const ivec3 &ref) const { return (x != ref.x || y != ref.y || z != ref.z); }

ivec3::operator __i_tuple_3() const { return __i_tuple_3((int*)&x, (int*)&y, (int*)&z); }

ivec3::operator bvec3() const { return bvec3(x, y, z); }
ivec3::operator fvec3() const { return fvec3(x, y, z); }
ivec3::operator dvec3() const { return dvec3(x, y, z); }

const ivec3 ivec3::up       = ivec3(0, 1, 0);
const ivec3 ivec3::down     = ivec3(0, -1, 0);
const ivec3 ivec3::left     = ivec3(-1, 0, 0);
const ivec3 ivec3::right    = ivec3(1, 0, 0);
const ivec3 ivec3::back     = ivec3(0, 0, -1);
const ivec3 ivec3::forward  = ivec3(0, 0, 1);
const ivec3 ivec3::zero     = ivec3(0, 0, 0);
const ivec3 ivec3::one      = ivec3(1, 1, 1);

const ivec3 ivec3::e1       = ivec3(1, 0, 0);
const ivec3 ivec3::e2       = ivec3(0, 1, 0);
const ivec3 ivec3::e3       = ivec3(0, 0, 1);

__VEC3_SWIZZLE(i);

ivec4::ivec4() {}
ivec4::ivec4(int _identity) : x(_identity), y(_identity), z(_identity), w(_identity) {}
ivec4::ivec4(int _x, int _y, int _z, int _w) : x(_x), y(_y), z(_z), w(_w) {}
ivec4::ivec4(__i_tuple_4 _t) : x(_t.x), y(_t.y), z(_t.z), w(_t.w) {}

float ivec4::len() const { return sqrtf(x*x + y*y + z*z + w*w); }
double ivec4::dlen() const { return sqrt(x*x + y*y + z*z + w*w); }
fvec4 ivec4::normalized() const { float l = len(); return fvec4(x/l, y/l, z/l, w/l); }
dvec4 ivec4::dnormalized() const { double l = dlen(); return dvec4(x/l, y/l, z/l, w/l); }

ivec4 ivec4::operator=(const ivec4 &ref) {
  if(this == &ref) // check for self-assignment
    return *this;
  
  x = ref.x;
  y = ref.y;
  z = ref.z;
  w = ref.w;
  return *this;
}

ivec4 ivec4::operator+=(const ivec4 &ref) {
  x += ref.x;
  y += ref.y;
  z += ref.z;
  w += ref.w;
  return *this;
}
ivec4 ivec4::operator-=(const ivec4 &ref)  {
  x -= ref.x;
  y -= ref.y;
  z -= ref.z;
  w -= ref.w;
  return *this;
}
ivec4 ivec4::operator*=(const ivec4 &ref)  {
  x *= ref.x;
  y *= ref.y;
  z *= ref.z;
  w *= ref.w;
  return *this;
}
ivec4 ivec4::operator/=(const ivec4 &ref)  {
  x /= ref.x;
  y /= ref.y;
  z /= ref.z;
  w /= ref.w;
  return *this;
}
ivec4 ivec4::operator%=(const ivec4 &ref)  {
  x %= ref.x;
  y %= ref.y;
  z %= ref.z;
  w %= ref.w;
  return *this;
}
ivec4 ivec4::operator*=(const int scalar) {
  x *= scalar;
  y *= scalar;
  z *= scalar;
  w *= scalar;
  return *this;
}
ivec4 ivec4::operator/=(const int scalar) {
  x /= scalar;
  y /= scalar;
  z /= scalar;
  w /= scalar;
  return *this;
}
ivec4 ivec4::operator%=(const int mod) {
  x %= mod;
  y %= mod;
  z %= mod;
  w %= mod;
  return *this;
}

ivec4 ivec4::operator+(const ivec4 &ref) const {
  return ivec4(*this) += ref;
}
ivec4 ivec4::operator-(const ivec4 &ref) const {
  return ivec4(*this) -= ref;
}
ivec4 ivec4::operator*(const ivec4 &ref) const {
  return ivec4(*this) *= ref;
}
ivec4 ivec4::operator/(const ivec4 &ref) const {
  return ivec4(*this) /= ref;
}
ivec4 ivec4::operator%(const ivec4 &ref) const {
  return ivec4(*this) %= ref;
}
ivec4 ivec4::operator*(const int scalar) const {
  return ivec4(*this) *= scalar;
}
ivec4 ivec4::operator/(const int scalar) const {
  return ivec4(*this) /= scalar;
}
ivec4 ivec4::operator%(const int mod) const {
  return ivec4(*this) %= mod;
}

ivec4 ivec4::operator+() const { return *this; }
ivec4 ivec4::operator-() const { return ivec4(-x, -y, -z, -w); }

bool ivec4::operator==(const ivec4 &ref) const { return (x == ref.x && y == ref.y && z == ref.z && w == ref.w); }
bool ivec4::operator!=(const ivec4 &ref) const { return (x != ref.x || y != ref.y || z != ref.z || w != ref.w); }

ivec4::operator __i_tuple_4() const { return __i_tuple_4((int*)&x, (int*)&y, (int*)&z, (int*)&w); }

ivec4::operator bvec4() const { return bvec4(x, y, z, w); }
ivec4::operator fvec4() const { return fvec4(x, y, z, w); }
ivec4::operator dvec4() const { return dvec4(x, y, z, w); }

const ivec4 ivec4::e1       = ivec4(1, 0, 0, 0);
const ivec4 ivec4::e2       = ivec4(0, 1, 0, 0);
const ivec4 ivec4::e3       = ivec4(0, 0, 1, 0);
const ivec4 ivec4::e4       = ivec4(0, 0, 0, 1);

__VEC4_SWIZZLE(i);

fvec2::fvec2() {}
fvec2::fvec2(float _identity) : x(_identity), y(_identity) {}
fvec2::fvec2(float _x, float _y) : x(_x), y(_y) {}
fvec2::fvec2(__f_tuple_2 _t) : x(_t.x), y(_t.y) {}

float fvec2::len() const { return sqrtf(x*x + y*y); }
double fvec2::dlen() const { return sqrt(x*x + y*y); }
fvec2 fvec2::normalized() const { float l = len(); return fvec2(x/l, y/l); }
dvec2 fvec2::dnormalized() const { double l = dlen(); return dvec2(x/l, y/l); }

fvec2 fvec2::operator=(const fvec2 &ref) {
  if(this == &ref) // check for self-assignment
    return *this;
  
  x = ref.x;
  y = ref.y;
  return *this;
}

fvec2 fvec2::operator+=(const fvec2 &ref) {
  x += ref.x;
  y += ref.y;
  return *this;
}
fvec2 fvec2::operator-=(const fvec2 &ref)  {
  x -= ref.x;
  y -= ref.y;
  return *this;
}
fvec2 fvec2::operator*=(const fvec2 &ref)  {
  x *= ref.x;
  y *= ref.y;
  return *this;
}
fvec2 fvec2::operator/=(const fvec2 &ref)  {
  x /= ref.x;
  y /= ref.y;
  return *this;
}
fvec2 fvec2::operator*=(const float scalar) {
  x *= scalar;
  y *= scalar;
  return *this;
}
fvec2 fvec2::operator/=(const float scalar) {
  x /= scalar;
  y /= scalar;
  return *this;
}

fvec2 fvec2::operator+(const fvec2 &ref) const {
  return fvec2(*this) += ref;
}
fvec2 fvec2::operator-(const fvec2 &ref) const {
  return fvec2(*this) -= ref;
}
fvec2 fvec2::operator*(const fvec2 &ref) const {
  return fvec2(*this) *= ref;
}
fvec2 fvec2::operator/(const fvec2 &ref) const {
  return fvec2(*this) /= ref;
}
fvec2 fvec2::operator*(const float scalar) const {
  return fvec2(*this) *= scalar;
}
fvec2 fvec2::operator/(const float scalar) const {
  return fvec2(*this) /= scalar;
}

fvec2 fvec2::operator+() const { return *this; }
fvec2 fvec2::operator-() const { return fvec2(-x, -y); }

bool fvec2::operator==(const fvec2 &ref) const { return (x == ref.x && y == ref.y); }
bool fvec2::operator!=(const fvec2 &ref) const { return (x != ref.x || y != ref.y); }

fvec2::operator __f_tuple_2() const { return __f_tuple_2((float*)&x, (float*)&y); }

fvec2::operator bvec2() const { return bvec2(x, y); }
fvec2::operator ivec2()  const { return ivec2(x, y); }
fvec2::operator dvec2() const { return dvec2(x, y); }

const fvec2 fvec2::up     = fvec2(0.0f, 1.0f);
const fvec2 fvec2::down   = fvec2(0.0f, -1.0f);
const fvec2 fvec2::left   = fvec2(-1.0f, 0.0f);
const fvec2 fvec2::right  = fvec2(1.0f, 0.0f);
const fvec2 fvec2::zero   = fvec2(0.0f, 0.0f);
const fvec2 fvec2::one    = fvec2(1.0f, 1.0f);

const fvec2 fvec2::e1     = fvec2(1.0f, 0.0f);
const fvec2 fvec2::e2     = fvec2(0.0f, 1.0f);

__VEC2_SWIZZLE(f);

fvec3::fvec3() {}
fvec3::fvec3(float _identity) : x(_identity), y(_identity), z(_identity) {}
fvec3::fvec3(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}
fvec3::fvec3(__f_tuple_3 _t) : x(_t.x), y(_t.y), z(_t.z) {}

float fvec3::len() const { return sqrtf(x*x + y*y + z*z); }
double fvec3::dlen() const { return sqrt(x*x + y*y + z*z); }
fvec3 fvec3::normalized() const { float l = len(); return fvec3(x/l, y/l, z/l); }
dvec3 fvec3::dnormalized() const { double l = dlen(); return dvec3(x/l, y/l, z/l); }

fvec3 fvec3::operator=(const fvec3 &ref) {
  if(this == &ref) // check for self-assignment
    return *this;
  
  x = ref.x;
  y = ref.y;
  z = ref.z;
  return *this;
}

fvec3 fvec3::operator+=(const fvec3 &ref) {
  x += ref.x;
  y += ref.y;
  z += ref.z;
  return *this;
}
fvec3 fvec3::operator-=(const fvec3 &ref)  {
  x -= ref.x;
  y -= ref.y;
  z -= ref.z;
  return *this;
}
fvec3 fvec3::operator*=(const fvec3 &ref)  {
  x *= ref.x;
  y *= ref.y;
  z *= ref.z;
  return *this;
}
fvec3 fvec3::operator/=(const fvec3 &ref)  {
  x /= ref.x;
  y /= ref.y;
  z /= ref.z;
  return *this;
}
fvec3 fvec3::operator*=(const float scalar) {
  x *= scalar;
  y *= scalar;
  z *= scalar;
  return *this;
}
fvec3 fvec3::operator/=(const float scalar) {
  x /= scalar;
  y /= scalar;
  z /= scalar;
  return *this;
}

fvec3 fvec3::operator+(const fvec3 &ref) const {
  return fvec3(*this) += ref;
}
fvec3 fvec3::operator-(const fvec3 &ref) const {
  return fvec3(*this) -= ref;
}
fvec3 fvec3::operator*(const fvec3 &ref) const {
  return fvec3(*this) *= ref;
}
fvec3 fvec3::operator/(const fvec3 &ref) const {
  return fvec3(*this) /= ref;
}
fvec3 fvec3::operator*(const float scalar) const {
  return fvec3(*this) *= scalar;
}
fvec3 fvec3::operator/(const float scalar) const {
  return fvec3(*this) /= scalar;
}

fvec3 fvec3::operator+() const { return *this; }
fvec3 fvec3::operator-() const { return fvec3(-x, -y, -z); }

bool fvec3::operator==(const fvec3 &ref) const { return (x == ref.x && y == ref.y && z == ref.z); }
bool fvec3::operator!=(const fvec3 &ref) const { return (x != ref.x || y != ref.y || z != ref.z); }

fvec3::operator __f_tuple_3() const { return __f_tuple_3((float*)&x, (float*)&y, (float*)&z); }

fvec3::operator bvec3() const { return bvec3(x, y, z); }
fvec3::operator ivec3() const { return ivec3(x, y, z); }
fvec3::operator dvec3() const { return dvec3(x, y, z); }

const fvec3 fvec3::up       = fvec3(0.0f, 1.0f, 0.0f);
const fvec3 fvec3::down     = fvec3(0.0f, -1.0f, 0.0f);
const fvec3 fvec3::left     = fvec3(-1.0f, 0.0f, 0.0f);
const fvec3 fvec3::right    = fvec3(1.0f, 0.0f, 0.0f);
const fvec3 fvec3::back     = fvec3(0.0f, 0.0f, -1.0f);
const fvec3 fvec3::forward  = fvec3(0.0f, 0.0f, 1.0f);
const fvec3 fvec3::zero     = fvec3(0.0f, 0.0f, 0.0f);
const fvec3 fvec3::one      = fvec3(1.0f, 1.0f, 1.0f);

const fvec3 fvec3::e1       = fvec3(1.0f, 0.0f, 0.0f);
const fvec3 fvec3::e2       = fvec3(0.0f, 1.0f, 0.0f);
const fvec3 fvec3::e3       = fvec3(0.0f, 0.0f, 1.0f);

__VEC3_SWIZZLE(f);

fvec4::fvec4() {}
fvec4::fvec4(float _identity) : x(_identity), y(_identity), z(_identity), w(_identity) {}
fvec4::fvec4(float _x, float _y, float _z, float _w) : x(_x), y(_y), z(_z), w(_w) {}
fvec4::fvec4(__f_tuple_4 _t) : x(_t.x), y(_t.y), z(_t.z), w(_t.w) {}

float fvec4::len() const { return sqrtf(x*x + y*y + z*z + w*w); }
double fvec4::dlen() const { return sqrt(x*x + y*y + z*z + w*w); }
fvec4 fvec4::normalized() const { float l = len(); return fvec4(x/l, y/l, z/l, w/l); }
dvec4 fvec4::dnormalized() const { double l = dlen(); return dvec4(x/l, y/l, z/l, w/l); }

fvec4 fvec4::operator=(const fvec4 &ref) {
  if(this == &ref) // check for self-assignment
    return *this;
  
  x = ref.x;
  y = ref.y;
  z = ref.z;
  w = ref.w;
  return *this;
}

fvec4 fvec4::operator+=(const fvec4 &ref) {
  x += ref.x;
  y += ref.y;
  z += ref.z;
  w += ref.w;
  return *this;
}
fvec4 fvec4::operator-=(const fvec4 &ref)  {
  x -= ref.x;
  y -= ref.y;
  z -= ref.z;
  w -= ref.w;
  return *this;
}
fvec4 fvec4::operator*=(const fvec4 &ref)  {
  x *= ref.x;
  y *= ref.y;
  z *= ref.z;
  w *= ref.w;
  return *this;
}
fvec4 fvec4::operator/=(const fvec4 &ref)  {
  x /= ref.x;
  y /= ref.y;
  z /= ref.z;
  w /= ref.w;
  return *this;
}
fvec4 fvec4::operator*=(const float scalar) {
  x *= scalar;
  y *= scalar;
  z *= scalar;
  w *= scalar;
  return *this;
}
fvec4 fvec4::operator/=(const float scalar) {
  x /= scalar;
  y /= scalar;
  z /= scalar;
  w /= scalar;
  return *this;
}

fvec4 fvec4::operator+(const fvec4 &ref) const {
  return fvec4(*this) += ref;
}
fvec4 fvec4::operator-(const fvec4 &ref) const {
  return fvec4(*this) -= ref;
}
fvec4 fvec4::operator*(const fvec4 &ref) const {
  return fvec4(*this) *= ref;
}
fvec4 fvec4::operator/(const fvec4 &ref) const {
  return fvec4(*this) /= ref;
}
fvec4 fvec4::operator*(const float scalar) const {
  return fvec4(*this) *= scalar;
}
fvec4 fvec4::operator/(const float scalar) const {
  return fvec4(*this) /= scalar;
}

fvec4 fvec4::operator+() const { return *this; }
fvec4 fvec4::operator-() const { return fvec4(-x, -y, -z, -w); }

bool fvec4::operator==(const fvec4 &ref) const { return (x == ref.x && y == ref.y && z == ref.z && w == ref.w); }
bool fvec4::operator!=(const fvec4 &ref) const { return (x != ref.x || y != ref.y || z != ref.z || w != ref.w); }

fvec4::operator __f_tuple_4() const { return __f_tuple_4((float*)&x, (float*)&y, (float*)&z, (float*)&w); }

fvec4::operator bvec4() const { return bvec4(x, y, z, w); }
fvec4::operator ivec4() const { return ivec4(x, y, z, w); }
fvec4::operator dvec4() const { return dvec4(x, y, z, w); }

const fvec4 fvec4::e1       = fvec4(1.0f, 0.0f, 0.0f, 0.0f);
const fvec4 fvec4::e2       = fvec4(0.0f, 1.0f, 0.0f, 0.0f);
const fvec4 fvec4::e3       = fvec4(0.0f, 0.0f, 1.0f, 0.0f);
const fvec4 fvec4::e4       = fvec4(0.0f, 0.0f, 0.0f, 1.0f);

__VEC4_SWIZZLE(f);

dvec2::dvec2() {}
dvec2::dvec2(double _identity) : x(_identity), y(_identity) {}
dvec2::dvec2(double _x, double _y) : x(_x), y(_y) {}
dvec2::dvec2(__d_tuple_2 _t) : x(_t.x), y(_t.y) {}

float dvec2::len() const { return sqrtf(x*x + y*y); }
double dvec2::dlen() const { return sqrt(x*x + y*y); }
fvec2 dvec2::normalized() const { float l = len(); return fvec2(x/l, y/l); }
dvec2 dvec2::dnormalized() const { double l = dlen(); return dvec2(x/l, y/l); }

dvec2 dvec2::operator=(const dvec2 &ref) {
  if(this == &ref) // check for self-assignment
    return *this;
  
  x = ref.x;
  y = ref.y;
  return *this;
}

dvec2 dvec2::operator+=(const dvec2 &ref) {
  x += ref.x;
  y += ref.y;
  return *this;
}
dvec2 dvec2::operator-=(const dvec2 &ref)  {
  x -= ref.x;
  y -= ref.y;
  return *this;
}
dvec2 dvec2::operator*=(const dvec2 &ref)  {
  x *= ref.x;
  y *= ref.y;
  return *this;
}
dvec2 dvec2::operator/=(const dvec2 &ref)  {
  x /= ref.x;
  y /= ref.y;
  return *this;
}
dvec2 dvec2::operator*=(const double scalar) {
  x *= scalar;
  y *= scalar;
  return *this;
}
dvec2 dvec2::operator/=(const double scalar) {
  x /= scalar;
  y /= scalar;
  return *this;
}

dvec2 dvec2::operator+(const dvec2 &ref) const {
  return dvec2(*this) += ref;
}
dvec2 dvec2::operator-(const dvec2 &ref) const {
  return dvec2(*this) -= ref;
}
dvec2 dvec2::operator*(const dvec2 &ref) const {
  return dvec2(*this) *= ref;
}
dvec2 dvec2::operator/(const dvec2 &ref) const {
  return dvec2(*this) /= ref;
}
dvec2 dvec2::operator*(const double scalar) const {
  return dvec2(*this) *= scalar;
}
dvec2 dvec2::operator/(const double scalar) const {
  return dvec2(*this) /= scalar;
}

dvec2 dvec2::operator+() const { return *this; }
dvec2 dvec2::operator-() const { return dvec2(-x, -y); }

bool dvec2::operator==(const dvec2 &ref) const { return (x == ref.x && y == ref.y); }
bool dvec2::operator!=(const dvec2 &ref) const { return (x != ref.x || y != ref.y); }

dvec2::operator __d_tuple_2() const { return __d_tuple_2((double*)&x, (double*)&y); }

dvec2::operator bvec2() const { return bvec2(x, y); }
dvec2::operator ivec2()  const { return ivec2(x, y); }
dvec2::operator fvec2() const { return fvec2(x, y); }

const dvec2 dvec2::up     = dvec2(0.0, 1.0);
const dvec2 dvec2::down   = dvec2(0.0, -1.0);
const dvec2 dvec2::left   = dvec2(-1.0, 0.0);
const dvec2 dvec2::right  = dvec2(1.0, 0.0);
const dvec2 dvec2::zero   = dvec2(0.0, 0.0);
const dvec2 dvec2::one    = dvec2(1.0, 1.0);

const dvec2 dvec2::e1     = dvec2(1.0, 0.0);
const dvec2 dvec2::e2     = dvec2(0.0, 1.0);

__VEC2_SWIZZLE(d);

dvec3::dvec3() {}
dvec3::dvec3(double _identity) : x(_identity), y(_identity), z(_identity) {}
dvec3::dvec3(double _x, double _y, double _z) : x(_x), y(_y), z(_z) {}
dvec3::dvec3(__d_tuple_3 _t) : x(_t.x), y(_t.y), z(_t.z) {}

float dvec3::len() const { return sqrtf(x*x + y*y + z*z); }
double dvec3::dlen() const { return sqrt(x*x + y*y + z*z); }
fvec3 dvec3::normalized() const { float l = len(); return fvec3(x/l, y/l, z/l); }
dvec3 dvec3::dnormalized() const { double l = dlen(); return dvec3(x/l, y/l, z/l); }

dvec3 dvec3::operator=(const dvec3 &ref) {
  if(this == &ref) // check for self-assignment
    return *this;
  
  x = ref.x;
  y = ref.y;
  z = ref.z;
  return *this;
}

dvec3 dvec3::operator+=(const dvec3 &ref) {
  x += ref.x;
  y += ref.y;
  z += ref.z;
  return *this;
}
dvec3 dvec3::operator-=(const dvec3 &ref)  {
  x -= ref.x;
  y -= ref.y;
  z -= ref.z;
  return *this;
}
dvec3 dvec3::operator*=(const dvec3 &ref)  {
  x *= ref.x;
  y *= ref.y;
  z *= ref.z;
  return *this;
}
dvec3 dvec3::operator/=(const dvec3 &ref)  {
  x /= ref.x;
  y /= ref.y;
  z /= ref.z;
  return *this;
}
dvec3 dvec3::operator*=(const double scalar) {
  x *= scalar;
  y *= scalar;
  z *= scalar;
  return *this;
}
dvec3 dvec3::operator/=(const double scalar) {
  x /= scalar;
  y /= scalar;
  z /= scalar;
  return *this;
}

dvec3 dvec3::operator+(const dvec3 &ref) const {
  return dvec3(*this) += ref;
}
dvec3 dvec3::operator-(const dvec3 &ref) const {
  return dvec3(*this) -= ref;
}
dvec3 dvec3::operator*(const dvec3 &ref) const {
  return dvec3(*this) *= ref;
}
dvec3 dvec3::operator/(const dvec3 &ref) const {
  return dvec3(*this) /= ref;
}
dvec3 dvec3::operator*(const double scalar) const {
  return dvec3(*this) *= scalar;
}
dvec3 dvec3::operator/(const double scalar) const {
  return dvec3(*this) /= scalar;
}

dvec3 dvec3::operator+() const { return *this; }
dvec3 dvec3::operator-() const { return dvec3(-x, -y, -z); }

bool dvec3::operator==(const dvec3 &ref) const { return (x == ref.x && y == ref.y && z == ref.z); }
bool dvec3::operator!=(const dvec3 &ref) const { return (x != ref.x || y != ref.y || z != ref.z); }

dvec3::operator __d_tuple_3() const { return __d_tuple_3((double*)&x, (double*)&y, (double*)&z); }

dvec3::operator bvec3() const { return bvec3(x, y, z); }
dvec3::operator ivec3() const { return ivec3(x, y, z); }
dvec3::operator fvec3() const { return fvec3(x, y, z); }

const dvec3 dvec3::up       = dvec3(0.0, 1.0, 0.0);
const dvec3 dvec3::down     = dvec3(0.0, -1.0, 0.0);
const dvec3 dvec3::left     = dvec3(-1.0, 0.0, 0.0);
const dvec3 dvec3::right    = dvec3(1.0, 0.0, 0.0);
const dvec3 dvec3::back     = dvec3(0.0, 0.0, -1.0);
const dvec3 dvec3::forward  = dvec3(0.0, 0.0, 1.0);
const dvec3 dvec3::zero     = dvec3(0.0, 0.0, 0.0);
const dvec3 dvec3::one      = dvec3(1.0, 1.0, 1.0);

const dvec3 dvec3::e1       = dvec3(1.0, 0.0, 0.0);
const dvec3 dvec3::e2       = dvec3(0.0, 1.0, 0.0);
const dvec3 dvec3::e3       = dvec3(0.0, 0.0, 1.0);

__VEC3_SWIZZLE(d);

dvec4::dvec4() {}
dvec4::dvec4(double _identity) : x(_identity), y(_identity), z(_identity), w(_identity) {}
dvec4::dvec4(double _x, double _y, double _z, double _w) : x(_x), y(_y), z(_z), w(_w) {}
dvec4::dvec4(__d_tuple_4 _t) : x(_t.x), y(_t.y), z(_t.z), w(_t.w) {}

float dvec4::len() const { return sqrtf(x*x + y*y + z*z + w*w); }
double dvec4::dlen() const { return sqrt(x*x + y*y + z*z + w*w); }
fvec4 dvec4::normalized() const { float l = len(); return fvec4(x/l, y/l, z/l, w/l); }
dvec4 dvec4::dnormalized() const { double l = dlen(); return dvec4(x/l, y/l, z/l, w/l); }

dvec4 dvec4::operator=(const dvec4 &ref) {
  if(this == &ref) // check for self-assignment
    return *this;
  
  x = ref.x;
  y = ref.y;
  z = ref.z;
  w = ref.w;
  return *this;
}

dvec4 dvec4::operator+=(const dvec4 &ref) {
  x += ref.x;
  y += ref.y;
  z += ref.z;
  w += ref.w;
  return *this;
}
dvec4 dvec4::operator-=(const dvec4 &ref)  {
  x -= ref.x;
  y -= ref.y;
  z -= ref.z;
  w -= ref.w;
  return *this;
}
dvec4 dvec4::operator*=(const dvec4 &ref)  {
  x *= ref.x;
  y *= ref.y;
  z *= ref.z;
  w *= ref.w;
  return *this;
}
dvec4 dvec4::operator/=(const dvec4 &ref)  {
  x /= ref.x;
  y /= ref.y;
  z /= ref.z;
  w /= ref.w;
  return *this;
}
dvec4 dvec4::operator*=(const double scalar) {
  x *= scalar;
  y *= scalar;
  z *= scalar;
  w *= scalar;
  return *this;
}
dvec4 dvec4::operator/=(const double scalar) {
  x /= scalar;
  y /= scalar;
  z /= scalar;
  w /= scalar;
  return *this;
}

dvec4 dvec4::operator+(const dvec4 &ref) const {
  return dvec4(*this) += ref;
}
dvec4 dvec4::operator-(const dvec4 &ref) const {
  return dvec4(*this) -= ref;
}
dvec4 dvec4::operator*(const dvec4 &ref) const {
  return dvec4(*this) *= ref;
}
dvec4 dvec4::operator/(const dvec4 &ref) const {
  return dvec4(*this) /= ref;
}
dvec4 dvec4::operator*(const double scalar) const {
  return dvec4(*this) *= scalar;
}
dvec4 dvec4::operator/(const double scalar) const {
  return dvec4(*this) /= scalar;
}

dvec4 dvec4::operator+() const { return *this; }
dvec4 dvec4::operator-() const { return dvec4(-x, -y, -z, -w); }

bool dvec4::operator==(const dvec4 &ref) const { return (x == ref.x && y == ref.y && z == ref.z && w == ref.w); }
bool dvec4::operator!=(const dvec4 &ref) const { return (x != ref.x || y != ref.y || z != ref.z || w != ref.w); }

dvec4::operator __d_tuple_4() const { return __d_tuple_4((double*)&x, (double*)&y, (double*)&z, (double*)&w); }

dvec4::operator bvec4() const { return bvec4(x, y, z, w); }
dvec4::operator ivec4() const { return ivec4(x, y, z, w); }
dvec4::operator fvec4() const { return fvec4(x, y, z, w); }

const dvec4 dvec4::e1       = dvec4(1.0, 0.0, 0.0, 0.0);
const dvec4 dvec4::e2       = dvec4(0.0, 1.0, 0.0, 0.0);
const dvec4 dvec4::e3       = dvec4(0.0, 0.0, 1.0, 0.0);
const dvec4 dvec4::e4       = dvec4(0.0, 0.0, 0.0, 1.0);

__VEC4_SWIZZLE(d);
// ! <.................................................................................................> ! //

// ! <.................................................................................................> ! //

ivec2 operator*(const int scalar, const ivec2 &ref) { return ivec2(ref.x*scalar, ref.y*scalar); }
ivec2 operator/(const int scalar, const ivec2 &ref) { return ivec2(ref.x/scalar, ref.y/scalar); }
fvec2 operator*(const float scalar, const fvec2 &ref) { return fvec2(ref.x*scalar, ref.y*scalar); }
fvec2 operator/(const float scalar, const fvec2 &ref) { return fvec2(ref.x/scalar, ref.y/scalar); }
dvec2 operator*(const double scalar, const dvec2 &ref) { return dvec2(ref.x*scalar, ref.y*scalar); }
dvec2 operator/(const double scalar, const dvec2 &ref) { return dvec2(ref.x*scalar, ref.y*scalar); }
ivec3 operator*(const int scalar, const ivec3 &ref) { return ivec3(ref.x*scalar, ref.y*scalar, ref.z*scalar); }
ivec3 operator/(const int scalar, const ivec3 &ref) { return ivec3(ref.x/scalar, ref.y/scalar, ref.z/scalar); }
fvec3 operator*(const float scalar, const fvec3 &ref) { return fvec3(ref.x*scalar, ref.y*scalar, ref.z*scalar); }
fvec3 operator/(const float scalar, const fvec3 &ref) { return fvec3(ref.x/scalar, ref.y/scalar, ref.z/scalar); }
dvec3 operator*(const double scalar, const dvec3 &ref) { return dvec3(ref.x*scalar, ref.y*scalar, ref.z*scalar); }
dvec3 operator/(const double scalar, const dvec3 &ref) { return dvec3(ref.x/scalar, ref.y/scalar, ref.z/scalar); }
ivec4 operator*(const int scalar, const ivec4 &ref) { return ivec4(ref.x*scalar, ref.y*scalar, ref.z*scalar, ref.w*scalar); }
ivec4 operator/(const int scalar, const ivec4 &ref) { return ivec4(ref.x/scalar, ref.y/scalar, ref.z/scalar, ref.w/scalar); }
fvec4 operator*(const float scalar, const fvec4 &ref) { return fvec4(ref.x*scalar, ref.y*scalar, ref.z*scalar, ref.w*scalar); }
fvec4 operator/(const float scalar, const fvec4 &ref) { return fvec4(ref.x/scalar, ref.y/scalar, ref.z/scalar, ref.w/scalar); }
dvec4 operator*(const double scalar, const dvec4 &ref) { return dvec4(ref.x*scalar, ref.y*scalar, ref.z*scalar, ref.w*scalar); }
dvec4 operator/(const double scalar, const dvec4 &ref) { return dvec4(ref.x/scalar, ref.y/scalar, ref.z/scalar, ref.w/scalar); }

int    dot(const ivec2 &a, const ivec2 &b) { return (a.x * b.x + a.y * b.y); }
float  dot(const fvec2 &a, const fvec2 &b) { return (a.x * b.x + a.y * b.y); }
double dot(const dvec2 &a, const dvec2 &b) { return (a.x * b.x + a.y * b.y); }
int    dot(const ivec3 &a, const ivec3 &b) { return (a.x * b.x + a.y * b.y + a.z * b.z); }
float  dot(const fvec3 &a, const fvec3 &b) { return (a.x * b.x + a.y * b.y + a.z * b.z); }
double dot(const dvec3 &a, const dvec3 &b) { return (a.x * b.x + a.y * b.y + a.z * b.z); }
int    dot(const ivec4 &a, const ivec4 &b) { return (a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w); }
float  dot(const fvec4 &a, const fvec4 &b) { return (a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w); }
double dot(const dvec4 &a, const dvec4 &b) { return (a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w); }

ivec3 cross(const ivec3 &a, const ivec3 &b) { return ivec3(a.y*b.z - a.z*b.y, a.x*b.z - a.z*b.x, a.x*b.y - a.y*b.x); }
fvec3 cross(const fvec3 &a, const fvec3 &b) { return fvec3(a.y*b.z - a.z*b.y, a.x*b.z - a.z*b.x, a.x*b.y - a.y*b.x); }
dvec3 cross(const dvec3 &a, const dvec3 &b) { return dvec3(a.y*b.z - a.z*b.y, a.x*b.z - a.z*b.x, a.x*b.y - a.y*b.x); }

float len(const ivec2 &ref) { return sqrtf(ref.x*ref.x + ref.y*ref.y); }
float len(const fvec2 &ref) { return sqrtf(ref.x*ref.x + ref.y*ref.y); }
float len(const dvec2 &ref) { return sqrtf(ref.x*ref.x + ref.y*ref.y); }
float len(const ivec3 &ref) { return sqrtf(ref.x*ref.x + ref.y*ref.y + ref.z*ref.z); }
float len(const fvec3 &ref) { return sqrtf(ref.x*ref.x + ref.y*ref.y + ref.z*ref.z); }
float len(const dvec3 &ref) { return sqrtf(ref.x*ref.x + ref.y*ref.y + ref.z*ref.z); }
float len(const ivec4 &ref) { return sqrtf(ref.x*ref.x + ref.y*ref.y + ref.z*ref.z + ref.w*ref.w); }
float len(const fvec4 &ref) { return sqrtf(ref.x*ref.x + ref.y*ref.y + ref.z*ref.z + ref.w*ref.w); }
float len(const dvec4 &ref) { return sqrtf(ref.x*ref.x + ref.y*ref.y + ref.z*ref.z + ref.w*ref.w); }
double dlen(const ivec2 &ref) { return sqrt(ref.x*ref.x + ref.y*ref.y); }
double dlen(const fvec2 &ref) { return sqrt(ref.x*ref.x + ref.y*ref.y); }
double dlen(const dvec2 &ref) { return sqrt(ref.x*ref.x + ref.y*ref.y); }
double dlen(const ivec3 &ref) { return sqrt(ref.x*ref.x + ref.y*ref.y + ref.z*ref.z); }
double dlen(const fvec3 &ref) { return sqrt(ref.x*ref.x + ref.y*ref.y + ref.z*ref.z); }
double dlen(const dvec3 &ref) { return sqrt(ref.x*ref.x + ref.y*ref.y + ref.z*ref.z); }
double dlen(const ivec4 &ref) { return sqrt(ref.x*ref.x + ref.y*ref.y + ref.z*ref.z + ref.w*ref.w); }
double dlen(const fvec4 &ref) { return sqrt(ref.x*ref.x + ref.y*ref.y + ref.z*ref.z + ref.w*ref.w); }
double dlen(const dvec4 &ref) { return sqrt(ref.x*ref.x + ref.y*ref.y + ref.z*ref.z + ref.w*ref.w); }