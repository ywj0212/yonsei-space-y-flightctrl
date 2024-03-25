#include "vec.hpp"
#include "swizzling.hpp"
__VEC2_SWIZZLE(b);
__VEC2_SWIZZLE(i);
__VEC2_SWIZZLE(f);
__VEC2_SWIZZLE(d);
__VEC3_SWIZZLE(b);
__VEC3_SWIZZLE(i);
__VEC3_SWIZZLE(f);
__VEC3_SWIZZLE(d);
__VEC4_SWIZZLE(b);
__VEC4_SWIZZLE(i);
__VEC4_SWIZZLE(f);
__VEC4_SWIZZLE(d);

#include <cmath>

bvec2::bvec2() {}
bvec2::bvec2(bool _identity) : x(_identity), y(_identity) {}
bvec2::bvec2(bool _x, bool _y) : x(_x), y(_y) {}
bvec2::bvec2(ivec2 _ivec2) : x(_ivec2.x), y(_ivec2.y) {}
bvec2::bvec2(fvec2 _fvec2) : x(_fvec2.x), y(_fvec2.y) {}
bvec2::bvec2(dvec2 _dvec2) : x(_dvec2.x), y(_dvec2.y) {}
bvec2 bvec2::operator&(const bvec2 &ref) { return bvec2(x&&ref.x , y&&ref.y); }
bvec2 bvec2::operator|(const bvec2 &ref) { return bvec2(x||ref.x , y||ref.y); }
bool bvec2::operator==(const bvec2 &ref) { return (x == ref.x && y == ref.y); }
bool bvec2::operator!=(const bvec2 &ref) { return (x != ref.x || y != ref.y); }
bvec2& bvec2::operator=(const bvec2 &ref) { x = ref.x; y = ref.y; return *this; }
bvec2& bvec2::operator=(const ivec2 &ref) { x = ref.x; y = ref.y; return *this; }
bvec2& bvec2::operator=(const fvec2 &ref) { x = ref.x; y = ref.y; return *this; }
bvec2& bvec2::operator=(const dvec2 &ref) { x = ref.x; y = ref.y; return *this; }

// bvec2& bvec2::operator+=(const bvec2 &ref); // TODO
// bvec2& bvec2::operator*=(const bvec2 &ref);
// bvec2& bvec2::operator&=(const bvec2 &ref);
// bvec2& bvec2::operator|=(const bvec2 &ref);

// bvec2& bvec2::operator+=(const __b_tuple_2 &ref); // TODO
// bvec2& bvec2::operator*=(const __b_tuple_2 &ref);
// bvec2& bvec2::operator&=(const __b_tuple_2 &ref);
// bvec2& bvec2::operator|=(const __b_tuple_2 &ref);

bvec2::operator ivec2() const { return ivec2(*this); }
bvec2::operator fvec2() const { return fvec2(*this); }
bvec2::operator dvec2() const { return dvec2(*this); }

// char* bvec2::toString(); // TODO

ivec2::ivec2() {}
ivec2::ivec2(int _identity) : x(_identity), y(_identity) {}
ivec2::ivec2(int _x, int _y) : x(_x), y(_y) {}
ivec2::ivec2(bvec2 _bvec2) : x(_bvec2.x), y(_bvec2.y) {}
ivec2::ivec2(fvec2 _fvec2) : x(_fvec2.x), y(_fvec2.y) {}
ivec2::ivec2(dvec2 _dvec2) : x(_dvec2.x), y(_dvec2.y) {}
const ivec2 ivec2::up = ivec2(0, 1);
const ivec2 ivec2::down = ivec2(0, -1);
const ivec2 ivec2::left = ivec2(-1, 0);
const ivec2 ivec2::right = ivec2(1, 0);
const ivec2 ivec2::zero = ivec2(0, 0);
const ivec2 ivec2::one = ivec2(1, 1);
float ivec2::len() const { return sqrtf(x*x + y*y); }
double ivec2::dlen() const { return sqrt(x*x + y*y); }
fvec2 ivec2::normalized() const { float l = len(); return fvec2(x/l, y/l); }
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
ivec2& ivec2::operator=(const fvec2  &ref) { x = ref.x; y = ref.y; return *this; }
ivec2& ivec2::operator=(const dvec2 &ref) { x = ref.x; y = ref.y; return *this; }
ivec2::operator bvec2() const { return bvec2(*this); }
ivec2::operator fvec2()  const { return fvec2(*this); }
ivec2::operator dvec2() const { return dvec2(*this); }

fvec2::fvec2() {}
fvec2::fvec2(float _identity) : x(_identity), y(_identity) {}
fvec2::fvec2(float _x, float _y) : x(_x), y(_y) {}
fvec2::fvec2(bvec2 _bvec2) : x(_bvec2.x), y(_bvec2.y) {}
fvec2::fvec2(ivec2 _ivec2) : x(_ivec2.x), y(_ivec2.y) {}
fvec2::fvec2(dvec2 _dvec2) : x(_dvec2.x), y(_dvec2.y) {}
const fvec2 fvec2::up = fvec2(0.0f, 1.0f);
const fvec2 fvec2::down = fvec2(0.0f, -1.0f);
const fvec2 fvec2::left = fvec2(-1.0f, 0.0f);
const fvec2 fvec2::right = fvec2(1.0f, 0.0f);
const fvec2 fvec2::zero = fvec2(0.0f, 0.0f);
const fvec2 fvec2::one = fvec2(1.0f, 1.0f);
float fvec2::len() const { return sqrtf(x*x + y*y); }
double fvec2::dlen() const { return sqrt(x*x + y*y); }
fvec2 fvec2::normalized() const { float l = len(); return fvec2(x/l, y/l); }
fvec2 fvec2::operator+() { return *this; }
fvec2 fvec2::operator-() { return fvec2(-x, -y); }
fvec2 fvec2::operator+(const fvec2 &ref) { return fvec2(x+ref.x, y+ref.y); }
fvec2 fvec2::operator-(const fvec2 &ref) { return fvec2(x-ref.x, y-ref.y); }
fvec2 fvec2::operator*(const float scalar) { return fvec2(x*scalar, y*scalar); }
fvec2 fvec2::operator/(const float scalar) { return fvec2(x/scalar, y/scalar); }
bool fvec2::operator==(const fvec2 &ref) { return (x == ref.x && y == ref.y); }
bool fvec2::operator!=(const fvec2 &ref) { return (x != ref.x || y != ref.y); }
fvec2& fvec2::operator=(const bvec2 &ref) { x = ref.x; y = ref.y; return *this; }
fvec2& fvec2::operator=(const ivec2 &ref) { x = ref.x; y = ref.y; return *this; }
fvec2& fvec2::operator=(const fvec2  &ref) { x = ref.x; y = ref.y; return *this; }
fvec2& fvec2::operator=(const dvec2 &ref) { x = ref.x; y = ref.y; return *this; }
fvec2::operator bvec2() const { return bvec2(*this); }
fvec2::operator ivec2() const { return ivec2(*this); }
fvec2::operator dvec2() const { return dvec2(*this); }

dvec2::dvec2() {}
dvec2::dvec2(double _identity) : x(_identity), y(_identity) {}
dvec2::dvec2(double _x, double _y) : x(_x), y(_y) {}
dvec2::dvec2(bvec2 _bvec2) : x(_bvec2.x), y(_bvec2.y) {}
dvec2::dvec2(ivec2 _ivec2) : x(_ivec2.x), y(_ivec2.y) {}
dvec2::dvec2(fvec2 _fvec2) : x(_fvec2.x), y(_fvec2.y) {}
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
dvec2& dvec2::operator=(const fvec2  &ref) { x = ref.x; y = ref.y; return *this; }
dvec2& dvec2::operator=(const dvec2 &ref) { x = ref.x; y = ref.y; return *this; }
dvec2::operator bvec2() const { return bvec2(*this); }
dvec2::operator ivec2() const { return ivec2(*this); }
dvec2::operator fvec2()  const { return fvec2(*this); }

bvec3::bvec3() {}
bvec3::bvec3(bool _identity) : x(_identity), y(_identity), z(_identity) {}
bvec3::bvec3(bool _x, bool _y, bool _z) : x(_x), y(_y), z(_z) {}
bvec3::bvec3(ivec3 _ivec3) : x(_ivec3.x), y(_ivec3.y), z(_ivec3.z) {}
bvec3::bvec3(fvec3 _fvec3) : x(_fvec3.x), y(_fvec3.y), z(_fvec3.z)  {}
bvec3::bvec3(dvec3 _dvec3) : x(_dvec3.x), y(_dvec3.y), z(_dvec3.z) {}
bvec3 bvec3::operator&(const bvec3 &ref) { return bvec3(x&&ref.x , y&&ref.y, z&&ref.z); }
bvec3 bvec3::operator|(const bvec3 &ref) { return bvec3(x||ref.x , y||ref.y, z||ref.z); }
bool bvec3::operator==(const bvec3 &ref) { return (x == ref.x && y == ref.y && z == ref.z); }
bool bvec3::operator!=(const bvec3 &ref) { return (x != ref.x || y != ref.y || z != ref.z); }
bvec3& bvec3::operator=(const bvec3 &ref) { x = ref.x; y = ref.y; z = ref.z; return *this; }
bvec3& bvec3::operator=(const ivec3 &ref) { x = ref.x; y = ref.y; z = ref.z; return *this; }
bvec3& bvec3::operator=(const fvec3 &ref) { x = ref.x; y = ref.y; z = ref.z; return *this; }
bvec3& bvec3::operator=(const dvec3 &ref) { x = ref.x; y = ref.y; z = ref.z; return *this; }
bvec3::operator ivec3() const { return ivec3(*this); }
bvec3::operator fvec3() const { return fvec3(*this); }
bvec3::operator dvec3() const { return dvec3(*this); }

ivec3::ivec3() {}
ivec3::ivec3(int _identity) : x(_identity), y(_identity), z(_identity) {}
ivec3::ivec3(int _x, int _y, int _z) : x(_x), y(_y), z(_z) {}
ivec3::ivec3(bvec3 _bvec3) : x(_bvec3.x), y(_bvec3.y), z(_bvec3.z) {}
ivec3::ivec3(fvec3 _fvec3) : x(_fvec3.x), y(_fvec3.y), z(_fvec3.z) {}
ivec3::ivec3(dvec3 _dvec3) : x(_dvec3.x), y(_dvec3.y), z(_dvec3.z) {}
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
fvec3 ivec3::normalized() const { float l = len(); return fvec3(x/l, y/l, z/l); }
ivec3 ivec3::operator+() { return *this; }
ivec3 ivec3::operator-() { return ivec3(-x, -y, -z); }
ivec3 ivec3::operator+(const ivec3 &ref) { return ivec3(x+ref.x, y+ref.y, z+ref.z); }
ivec3 ivec3::operator-(const ivec3 &ref) { return ivec3(x-ref.x, y-ref.y, z-ref.z); }
ivec3 ivec3::operator*(const int scalar) { return ivec3(x*scalar, y*scalar, z*scalar); }
ivec3 ivec3::operator/(const int scalar) { return ivec3(x/scalar, y/scalar, z/scalar); }
bool ivec3::operator==(const ivec3 &ref) { return (x == ref.x && y == ref.y && z == ref.z); }
bool ivec3::operator!=(const ivec3 &ref) { return (x != ref.x || y != ref.y || z != ref.z); }
ivec3& ivec3::operator=(const bvec3 &ref) { x = ref.x; y = ref.y; z = ref.z; return *this; }
ivec3& ivec3::operator=(const ivec3 &ref) { x = ref.x; y = ref.y; z = ref.z; return *this; }
ivec3& ivec3::operator=(const fvec3 &ref) { x = ref.x; y = ref.y; z = ref.z; return *this; }
ivec3& ivec3::operator=(const dvec3 &ref) { x = ref.x; y = ref.y; z = ref.z; return *this; }
ivec3::operator bvec3() const { return bvec3(*this); }
ivec3::operator fvec3() const { return fvec3(*this); }
ivec3::operator dvec3() const { return dvec3(*this); }

fvec3::fvec3() {}
fvec3::fvec3(float _identity) : x(_identity), y(_identity), z(_identity) {}
fvec3::fvec3(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}
fvec3::fvec3(bvec3 _bvec3) : x(_bvec3.x), y(_bvec3.y), z(_bvec3.z) {}
fvec3::fvec3(ivec3 _ivec3) : x(_ivec3.x), y(_ivec3.y), z(_ivec3.z) {}
fvec3::fvec3(dvec3 _dvec3) : x(_dvec3.x), y(_dvec3.y), z(_dvec3.z) {}
const fvec3 fvec3::up;
const fvec3 fvec3::down;
const fvec3 fvec3::left;
const fvec3 fvec3::right;
const fvec3 fvec3::back;
const fvec3 fvec3::forward;
const fvec3 fvec3::zero;
const fvec3 fvec3::one;
float fvec3::len() const { return sqrtf(x*x + y*y + z*z); }
double fvec3::dlen() const { return sqrt(x*x + y*y + z*z); }
fvec3 fvec3::normalized() const { float l = len(); return fvec3(x/l, y/l, z/l); }
fvec3 fvec3::operator+() { return *this; }
fvec3 fvec3::operator-() { return fvec3(-x, -y, -z); }
fvec3 fvec3::operator+(const fvec3 &ref) { return fvec3(x+ref.x, y+ref.y, z+ref.z); }
fvec3 fvec3::operator-(const fvec3 &ref) { return fvec3(x-ref.x, y-ref.y, z-ref.z); }
fvec3 fvec3::operator*(const float scalar) { return fvec3(x*scalar, y*scalar, z*scalar); }
fvec3 fvec3::operator/(const float scalar) { return fvec3(x/scalar, y/scalar, z/scalar); }
bool fvec3::operator==(const fvec3 &ref) { return (x == ref.x && y == ref.y && z == ref.z); }
bool fvec3::operator!=(const fvec3 &ref) { return (x != ref.x || y != ref.y || z != ref.z); }
fvec3& fvec3::operator=(const bvec3 &ref) { x = ref.x; y = ref.y; z = ref.z; return *this; }
fvec3& fvec3::operator=(const ivec3 &ref) { x = ref.x; y = ref.y; z = ref.z; return *this; }
fvec3& fvec3::operator=(const fvec3 &ref) { x = ref.x; y = ref.y; z = ref.z; return *this; }
fvec3& fvec3::operator=(const dvec3 &ref) { x = ref.x; y = ref.y; z = ref.z; return *this; }
fvec3::operator bvec3() const { return bvec3(*this); }
fvec3::operator ivec3() const { return ivec3(*this); }
fvec3::operator dvec3() const { return dvec3(*this); }

dvec3::dvec3() {}
dvec3::dvec3(double _identity) : x(_identity), y(_identity), z(_identity) {}
dvec3::dvec3(double _x, double _y, double _z) : x(_x), y(_y), z(_z) {}
dvec3::dvec3(bvec3 _bvec3) : x(_bvec3.x), y(_bvec3.y), z(_bvec3.z) {}
dvec3::dvec3(ivec3 _ivec3) : x(_ivec3.x), y(_ivec3.y), z(_ivec3.z) {}
dvec3::dvec3(fvec3 _fvec3) : x(_fvec3.x), y(_fvec3.y), z(_fvec3.z) {}
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
dvec3 dvec3::operator+(const dvec3 &ref) { return dvec3(x+ref.x, y+ref.y, z+ref.z); }
dvec3 dvec3::operator-(const dvec3 &ref) { return dvec3(x-ref.x, y-ref.y, z-ref.z); }
dvec3 dvec3::operator*(const double scalar) { return dvec3(x*scalar, y*scalar, z*scalar); }
dvec3 dvec3::operator/(const double scalar) { return dvec3(x/scalar, y/scalar, z/scalar); }
bool dvec3::operator==(const dvec3 &ref) { return (x == ref.x && y == ref.y && z == ref.z); }
bool dvec3::operator!=(const dvec3 &ref) { return (x != ref.x || y != ref.y || z != ref.z); }
dvec3& dvec3::operator=(const bvec3 &ref) { x = ref.x; y = ref.y; z = ref.z; return *this; }
dvec3& dvec3::operator=(const ivec3 &ref) { x = ref.x; y = ref.y; z = ref.z; return *this; }
dvec3& dvec3::operator=(const fvec3 &ref) { x = ref.x; y = ref.y; z = ref.z; return *this; }
dvec3& dvec3::operator=(const dvec3 &ref) { x = ref.x; y = ref.y; z = ref.z; return *this; }
dvec3::operator bvec3() const { return bvec3(*this); }
dvec3::operator ivec3() const { return ivec3(*this); }
dvec3::operator fvec3() const { return fvec3(*this); }

bvec4::bvec4() {}
bvec4::bvec4(bool _identity) : x(_identity), y(_identity), z(_identity), w(_identity) {}
bvec4::bvec4(bool _x, bool _y, bool _z, bool _w) : x(_x), y(_y), z(_z), w(_w) {}
bvec4::bvec4(fvec4 _fvec4) : x(_fvec4.x), y(_fvec4.y), z(_fvec4.z), w(_fvec4.w) {}
bvec4::bvec4(ivec4 _ivec4) : x(_ivec4.x), y(_ivec4.y), z(_ivec4.z), w(_ivec4.w) {}
bvec4::bvec4(dvec4 _dvec4) : x(_dvec4.x), y(_dvec4.y), z(_dvec4.z), w(_dvec4.w) {}
bvec4 bvec4::operator&(const bvec4 &ref) { return bvec4(x&&ref.x , y&&ref.y, z&&ref.z, w&&ref.w); }
bvec4 bvec4::operator|(const bvec4 &ref) { return bvec4(x||ref.x , y||ref.y, z||ref.z, w||ref.w); }
bool bvec4::operator==(const bvec4 &ref) { return (x == ref.x && y == ref.y && z == ref.z && w == ref.w); }
bool bvec4::operator!=(const bvec4 &ref) { return (x != ref.x || y != ref.y || z != ref.z || w != ref.w); }
bvec4& bvec4::operator=(const bvec4 &ref) { x = ref.x; y = ref.y; z = ref.z; w = ref.w; return *this; }
bvec4& bvec4::operator=(const ivec4 &ref) { x = ref.x; y = ref.y; z = ref.z; w = ref.w; return *this; }
bvec4& bvec4::operator=(const fvec4 &ref) { x = ref.x; y = ref.y; z = ref.z; w = ref.w; return *this; }
bvec4& bvec4::operator=(const dvec4 &ref) { x = ref.x; y = ref.y; z = ref.z; w = ref.w; return *this; }
bvec4::operator ivec4() const { return ivec4(*this); }
bvec4::operator fvec4() const { return fvec4(*this); }
bvec4::operator dvec4() const { return dvec4(*this); }

ivec4::ivec4() {}
ivec4::ivec4(int _identity) : x(_identity), y(_identity), z(_identity), w(_identity) {}
ivec4::ivec4(int _x, int _y, int _z, int _w) : x(_x), y(_y), z(_z), w(_w) {}
ivec4::ivec4(bvec4 _bvec4) : x(_bvec4.x), y(_bvec4.y), z(_bvec4.z), w(_bvec4.w) {}
ivec4::ivec4(fvec4 _fvec4) : x(_fvec4.x), y(_fvec4.y), z(_fvec4.z), w(_fvec4.w)  {}
ivec4::ivec4(dvec4 _dvec4) : x(_dvec4.x), y(_dvec4.y), z(_dvec4.z), w(_dvec4.w) {}
float ivec4::len() const { return sqrtf(x*x + y*y + z*z + w*w); }
double ivec4::dlen() const { return sqrt(x*x + y*y + z*z + w*w); }
fvec4 ivec4::normalized() const { float l = len(); return fvec4(x/l, y/l, z/l, w/l); }
ivec4 ivec4::operator+() { return *this; }
ivec4 ivec4::operator-() { return ivec4(-x, -y, -z, -w); }
ivec4 ivec4::operator+(const ivec4 &ref) { return ivec4(x+ref.x, y+ref.y, z+ref.z, w+ref.w); }
ivec4 ivec4::operator-(const ivec4 &ref) { return ivec4(x-ref.x, y-ref.y, z-ref.z, w-ref.w); }
ivec4 ivec4::operator*(const int scalar) { return ivec4(x*scalar, y*scalar, z*scalar, w*scalar); }
ivec4 ivec4::operator/(const int scalar) { return ivec4(x/scalar, y/scalar, z/scalar, w/scalar); }
bool ivec4::operator==(const ivec4 &ref) { return (x == ref.x && y == ref.y && z == ref.z && w == ref.w); }
bool ivec4::operator!=(const ivec4 &ref) { return (x != ref.x || y != ref.y || z != ref.z || w != ref.w); }
ivec4& ivec4::operator=(const bvec4 &ref) { x = ref.x; y = ref.y; z = ref.z; w = ref.w; return *this; }
ivec4& ivec4::operator=(const ivec4 &ref) { x = ref.x; y = ref.y; z = ref.z; w = ref.w; return *this; }
ivec4& ivec4::operator=(const fvec4 &ref) { x = ref.x; y = ref.y; z = ref.z; w = ref.w; return *this; }
ivec4& ivec4::operator=(const dvec4 &ref) { x = ref.x; y = ref.y; z = ref.z; w = ref.w; return *this; }
ivec4::operator bvec4() const { return bvec4(*this); }
ivec4::operator fvec4() const { return vec4(*this); }
ivec4::operator dvec4() const { return dvec4(*this); }

fvec4::fvec4() {}
fvec4::fvec4(float _identity) : x(_identity), y(_identity), z(_identity), w(_identity) {}
fvec4::fvec4(float _x, float _y, float _z, float _w) : x(_x), y(_y), z(_z), w(_w) {}
fvec4::fvec4(bvec4 _bvec4) : x(_bvec4.x), y(_bvec4.y), z(_bvec4.z), w(_bvec4.w) {}
fvec4::fvec4(ivec4 _ivec4) : x(_ivec4.x), y(_ivec4.y), z(_ivec4.z), w(_ivec4.w) {}
fvec4::fvec4(dvec4 _dvec4) : x(_dvec4.x), y(_dvec4.y), z(_dvec4.z), w(_dvec4.w) {}
float fvec4::len() const { return sqrtf(x*x + y*y + z*z + w*w); }
double fvec4::dlen() const { return sqrt(x*x + y*y + z*z + w*w); }
fvec4 fvec4::normalized() const { float l = len(); return fvec4(x/l, y/l, z/l, w/l); }
fvec4 fvec4::operator+() { return *this; }
fvec4 fvec4::operator-() { return vec4(-x, -y, -z, -w); }
fvec4 fvec4::operator+(const fvec4 &ref) { return fvec4(x+ref.x, y+ref.y, z+ref.z, w+ref.w); }
fvec4 fvec4::operator-(const fvec4 &ref) { return fvec4(x-ref.x, y-ref.y, z-ref.z, w-ref.w); }
fvec4 fvec4::operator*(const float scalar) { return fvec4(x*scalar, y*scalar, z*scalar, w*scalar); }
fvec4 fvec4::operator/(const float scalar) { return fvec4(x/scalar, y/scalar, z/scalar, w/scalar); }
bool fvec4::operator==(const fvec4 &ref) { return (x == ref.x && y == ref.y && z == ref.z && w == ref.w); }
bool fvec4::operator!=(const fvec4 &ref) { return (x != ref.x || y != ref.y || z != ref.z || w != ref.w); }
fvec4& fvec4::operator=(const bvec4 &ref) { x = ref.x; y = ref.y; z = ref.z; w = ref.w; return *this; }
fvec4& fvec4::operator=(const ivec4 &ref) { x = ref.x; y = ref.y; z = ref.z; w = ref.w; return *this; }
fvec4& fvec4::operator=(const fvec4  &ref) { x = ref.x; y = ref.y; z = ref.z; w = ref.w; return *this; }
fvec4& fvec4::operator=(const dvec4 &ref) { x = ref.x; y = ref.y; z = ref.z; w = ref.w; return *this; }
fvec4::operator bvec4() const { return bvec4(*this); }
fvec4::operator ivec4() const { return ivec4(*this); }
fvec4::operator dvec4() const { return dvec4(*this); }

dvec4::dvec4() {}
dvec4::dvec4(double _identity) : x(_identity), y(_identity), z(_identity), w(_identity) {}
dvec4::dvec4(double _x, double _y, double _z, double _w) : x(_x), y(_y), z(_z), w(_w) {}
dvec4::dvec4(bvec4 _bvec4) : x(_bvec4.x), y(_bvec4.y), z(_bvec4.z), w(_bvec4.w) {}
dvec4::dvec4(ivec4 _ivec4) : x(_ivec4.x), y(_ivec4.y), z(_ivec4.z), w(_ivec4.w) {}
dvec4::dvec4(fvec4 _fvec4)  : x(_fvec4.x),  y(_fvec4.y),  z(_fvec4.z),  w(_fvec4.w)  {}
float dvec4::len() const { return sqrtf(x*x + y*y + z*z + w*w); }
double dvec4::dlen() const { return sqrt(x*x + y*y + z*z + w*w); }
dvec4 dvec4::normalized() const { double l = dlen(); return dvec4(x/l, y/l, z/l, w/l); }
dvec4 dvec4::operator+() { return *this; }
dvec4 dvec4::operator-() { return dvec4(-x, -y, -z, -w); }
dvec4 dvec4::operator+(const dvec4 &ref) { return dvec4(x+ref.x, y+ref.y, z+ref.z, w+ref.w); }
dvec4 dvec4::operator-(const dvec4 &ref) { return dvec4(x-ref.x, y-ref.y, z-ref.z, w-ref.w); }
dvec4 dvec4::operator*(const double scalar) { return dvec4(x*scalar, y*scalar, z*scalar, w*scalar); }
dvec4 dvec4::operator/(const double scalar) { return dvec4(x/scalar, y/scalar, z/scalar, w/scalar); }
bool dvec4::operator==(const dvec4 &ref) { return (x == ref.x && y == ref.y && z == ref.z && w == ref.w); }
bool dvec4::operator!=(const dvec4 &ref) { return (x != ref.x || y != ref.y || z != ref.z || w != ref.w); }
dvec4& dvec4::operator=(const bvec4 &ref) { x = ref.x; y = ref.y; z = ref.z; w = ref.w; return *this; }
dvec4& dvec4::operator=(const ivec4 &ref) { x = ref.x; y = ref.y; z = ref.z; w = ref.w; return *this; }
dvec4& dvec4::operator=(const fvec4 &ref) { x = ref.x; y = ref.y; z = ref.z; w = ref.w; return *this; }
dvec4& dvec4::operator=(const dvec4 &ref) { x = ref.x; y = ref.y; z = ref.z; w = ref.w; return *this; }
dvec4::operator bvec4() const { return bvec4(*this); }
dvec4::operator ivec4() const { return ivec4(*this); }
dvec4::operator fvec4() const { return fvec4(*this); }

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