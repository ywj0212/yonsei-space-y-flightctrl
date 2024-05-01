#ifndef __SPACE_Y_MATHLIB_STRING__
#define __SPACE_Y_MATHLIB_STRING__

#include "vec.hpp"

#define __MAX_VEC_STR_LEN 256
char VEC_STR_BUFFER[__MAX_VEC_STR_LEN];

#define __VECTOR_TO_STRING(T, fmt, arg)\
template <int N>\
const char* toString(const vec<T, N> &s) {\
  int offset = 0, i;\
  offset += snprintf(VEC_STR_BUFFER + offset, __MAX_VEC_STR_LEN - offset, "(");\
  for(i = 0; i < N - 1; i++) {\
    offset += snprintf(VEC_STR_BUFFER + offset, __MAX_VEC_STR_LEN - offset, (fmt ", "), (arg));\
  }\
  offset += snprintf(VEC_STR_BUFFER + offset, __MAX_VEC_STR_LEN - offset, (fmt ")"), (arg));\
  return VEC_STR_BUFFER;\
}\
template <int N>\
const char* toStringFmt(const vec<T, N> &s, const char* format) {\
  int offset = 0, i;\
  offset += snprintf(VEC_STR_BUFFER + offset, __MAX_VEC_STR_LEN - offset, "(");\
  for(i = 0; i < N - 1; i++) {\
    offset += snprintf(VEC_STR_BUFFER + offset, __MAX_VEC_STR_LEN - offset, (format), (arg));\
    offset += snprintf(VEC_STR_BUFFER + offset, __MAX_VEC_STR_LEN - offset, (", "));\
  }\
  offset += snprintf(VEC_STR_BUFFER + offset, __MAX_VEC_STR_LEN - offset, (format), (arg));\
  offset += snprintf(VEC_STR_BUFFER + offset, __MAX_VEC_STR_LEN - offset, (")"));\
  return VEC_STR_BUFFER;\
}\
template <int N>\
const char* toString(const vec<T, N> &s, const char* start, const char* end) {\
  int offset = 0, i;\
  offset += snprintf(VEC_STR_BUFFER + offset, __MAX_VEC_STR_LEN - offset, start);\
  for(i = 0; i < N - 1; i++) {\
    offset += snprintf(VEC_STR_BUFFER + offset, __MAX_VEC_STR_LEN - offset, (fmt ", "), (arg));\
  }\
  offset += snprintf(VEC_STR_BUFFER + offset, __MAX_VEC_STR_LEN - offset, (fmt), (arg));\
  offset += snprintf(VEC_STR_BUFFER + offset, __MAX_VEC_STR_LEN - offset, end);\
  return VEC_STR_BUFFER;\
}\
template <int N>\
const char* toStringFmt(const vec<T, N> &s, const char* format, const char* start, const char* end) {\
  int offset = 0, i;\
  offset += snprintf(VEC_STR_BUFFER + offset, __MAX_VEC_STR_LEN - offset, start);\
  for(i = 0; i < N - 1; i++) {\
    offset += snprintf(VEC_STR_BUFFER + offset, __MAX_VEC_STR_LEN - offset, (format), (arg));\
    offset += snprintf(VEC_STR_BUFFER + offset, __MAX_VEC_STR_LEN - offset, (", "));\
  }\
  offset += snprintf(VEC_STR_BUFFER + offset, __MAX_VEC_STR_LEN - offset, (format), (arg));\
  offset += snprintf(VEC_STR_BUFFER + offset, __MAX_VEC_STR_LEN - offset, end);\
  return VEC_STR_BUFFER;\
}

__VECTOR_TO_STRING(int, "%d", s.data[i]);
__VECTOR_TO_STRING(long, "%ld", s.data[i]);
__VECTOR_TO_STRING(float, "%.5f", s.data[i]);
__VECTOR_TO_STRING(double, "%.10lf", s.data[i]);
__VECTOR_TO_STRING(bool, "%s", (s.data[i] ? "True" : "False"));

#endif