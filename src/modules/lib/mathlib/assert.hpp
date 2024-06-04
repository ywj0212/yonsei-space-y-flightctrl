#ifndef __SPACE_Y_MATHLIB_ASSERT__
#define __SPACE_Y_MATHLIB_ASSERT__

#include "vec.hpp"
#include <cassert>

#define VECTOR_SIZE_ERROR_MESSAGE "Size of vector is invalid!"
static_assert(sizeof(vec<bool, 1>) == sizeof(bool) * 1, VECTOR_SIZE_ERROR_MESSAGE);
static_assert(sizeof(vec<bool, 2>) == sizeof(bool) * 2, VECTOR_SIZE_ERROR_MESSAGE);
static_assert(sizeof(vec<bool, 3>) == sizeof(bool) * 3, VECTOR_SIZE_ERROR_MESSAGE);
static_assert(sizeof(vec<bool, 4>) == sizeof(bool) * 4, VECTOR_SIZE_ERROR_MESSAGE);
static_assert(sizeof(vec<bool, 5>) == sizeof(bool) * 5, VECTOR_SIZE_ERROR_MESSAGE);

static_assert(sizeof(vec<int, 1>) == sizeof(int) * 1, VECTOR_SIZE_ERROR_MESSAGE);
static_assert(sizeof(vec<int, 2>) == sizeof(int) * 2, VECTOR_SIZE_ERROR_MESSAGE);
static_assert(sizeof(vec<int, 3>) == sizeof(int) * 3, VECTOR_SIZE_ERROR_MESSAGE);
static_assert(sizeof(vec<int, 4>) == sizeof(int) * 4, VECTOR_SIZE_ERROR_MESSAGE);
static_assert(sizeof(vec<int, 5>) == sizeof(int) * 5, VECTOR_SIZE_ERROR_MESSAGE);

static_assert(sizeof(vec<float, 1>) == sizeof(float) * 1, VECTOR_SIZE_ERROR_MESSAGE);
static_assert(sizeof(vec<float, 2>) == sizeof(float) * 2, VECTOR_SIZE_ERROR_MESSAGE);
static_assert(sizeof(vec<float, 3>) == sizeof(float) * 3, VECTOR_SIZE_ERROR_MESSAGE);
static_assert(sizeof(vec<float, 4>) == sizeof(float) * 4, VECTOR_SIZE_ERROR_MESSAGE);
static_assert(sizeof(vec<float, 5>) == sizeof(float) * 5, VECTOR_SIZE_ERROR_MESSAGE);

static_assert(sizeof(vec<double, 1>) == sizeof(double) * 1, VECTOR_SIZE_ERROR_MESSAGE);
static_assert(sizeof(vec<double, 2>) == sizeof(double) * 2, VECTOR_SIZE_ERROR_MESSAGE);
static_assert(sizeof(vec<double, 3>) == sizeof(double) * 3, VECTOR_SIZE_ERROR_MESSAGE);
static_assert(sizeof(vec<double, 4>) == sizeof(double) * 4, VECTOR_SIZE_ERROR_MESSAGE);
static_assert(sizeof(vec<double, 5>) == sizeof(double) * 5, VECTOR_SIZE_ERROR_MESSAGE);

#endif