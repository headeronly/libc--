/**
 * @file   static_assert.h
 * @author chris@headeronly.org
 * @brief  Defines `static_assert` macro for use in C and C++.
 */

#pragma once
#ifndef LIBCMM_STATIC_ASSERT_H
#define LIBCMM_STATIC_ASSERT_H


#ifndef __cplusplus
	#define static_assert(bool_constexpr, message) \
			_Static_assert(bool_constexpr, message)
#endif // __cplusplus


#endif // LIBCMM_STATIC_ASSERT_H
