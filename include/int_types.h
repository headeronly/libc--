/**
 * @file   int_types.h
 * @author chris@headeronly.org 
 * @brief  Integer type definitions
 */

#pragma once
#ifndef LIBCMM_INT_TYPES_H
#define LIBCMM_INT_TYPES_H


#include "static_assert.h"


/// Quick-and-dirty sanity check for LP64 platforms
static_assert((sizeof(int) == 4) && (sizeof(long) == 8) && (sizeof(void *) == 8),
		"Unsupported platform");


/**
 * @name Exact-width integer types
 * @{
 */

typedef signed char  int8_t;  ///< Signed integer type with *exactly*  8 bits.
typedef signed short int16_t; ///< Signed integer type with *exactly* 16 bits.
typedef signed int   int32_t; ///< Signed integer type with *exactly* 32 bits.
typedef signed long  int64_t; ///< Signed integer type with *exactly* 64 bits.

typedef unsigned char  uint8_t;  ///< Unsigned integer type with *exactly*  8 bits.
typedef unsigned short uint16_t; ///< Unsigned integer type with *exactly* 16 bits.
typedef unsigned int   uint32_t; ///< Unsigned integer type with *exactly* 32 bits.
typedef unsigned long  uint64_t; ///< Unsigned integer type with *exactly* 64 bits.

/// @}


/**
 * @name Minimum-width integer types
 * @{
 */

typedef int8_t  int_least8_t;  ///< Signed integer type with *at least*  8 bits.
typedef int16_t int_least16_t; ///< Signed integer type with *at least* 16 bits.
typedef int32_t int_least32_t; ///< Signed integer type with *at least* 32 bits.
typedef int64_t int_least64_t; ///< Signed integer type with *at least* 64 bits.

typedef uint8_t  uint_least8_t;  ///< Unigned integer type with *at least*  8 bits.
typedef uint16_t uint_least16_t; ///< Unigned integer type with *at least* 16 bits.
typedef uint32_t uint_least32_t; ///< Unigned integer type with *at least* 32 bits.
typedef uint64_t uint_least64_t; ///< Unigned integer type with *at least* 64 bits.

/// @}


/**
 * @name Fast minimum-width integer types
 * @{
 */

typedef int_least32_t int_fast8_t;  ///< Signed integer type with at least  8 bits *and no speed penalty*.
typedef int_least32_t int_fast16_t; ///< Signed integer type with at least 16 bits *and no speed penalty*.
typedef int_least32_t int_fast32_t; ///< Signed integer type with at least 32 bits *and no speed penalty*.
typedef int_least64_t int_fast64_t; ///< Signed integer type with at least 64 bits *and no speed penalty*.

typedef uint_least32_t uint_fast8_t;  ///< Unsigned integer type with at least  8 bits *and no speed penalty*.
typedef uint_least32_t uint_fast16_t; ///< Unsigned integer type with at least 16 bits *and no speed penalty*.
typedef uint_least32_t uint_fast32_t; ///< Unsigned integer type with at least 32 bits *and no speed penalty*.
typedef uint_least64_t uint_fast64_t; ///< Unsigned integer type with at least 64 bits *and no speed penalty*.

/// @}


typedef int64_t  intmax_t;  ///< Largest supported signed integer type.
typedef uint64_t uintmax_t; ///< Largest supported unsigned integer type.

typedef uint64_t size_t;
typedef int64_t  ssize_t;

typedef uint64_t uintptr_t; ///< Unsigned integer type capable of representing a pointer.
typedef int64_t  intptr_t;  ///< Signed integer type capable of representing a pointer.


#ifdef __cplusplus
	#include "int_fit_types.hpp"
#endif


#endif // LIBCMM_INT_TYPES_H
