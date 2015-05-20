/**
 * @file   int_fit_types.hpp
 * @author chris@headeronly.org 
 * @brief  Integer types chosen to hold a given value.
 */

#pragma once
#ifndef LIBCMM_INT_FIT_TYPES_HPP
#define LIBCMM_INT_FIT_TYPES_HPP


#include "conditional.h"
#include "int_types.h"
#include "numeric_limits.h"
#include "type_traits.hpp"


template <class T, class U = typename conditional<is_signed<T>::value, intmax_t, uintmax_t>::type>
constexpr bool is_in_range<T> (U x) {
	return (x >= numeric_limits<T>::min()) && (x <= numeric_limits<T>::max());
}

template <intmax_t x>
using intfit_t =
		typename conditional<is_in_range<int8_t>(x), int8_t,
			typename conditional<is_in_range<int16_t>(x), int16_t,
				typename conditional<is_in_range<int32_t>(x), int32_t,
					typename enable_if<is_in_range<int64_t>(x), int64_t>::type
				>::type
			>::type
		>::type;

template <uintmax_t x>
using uintfit_t =
		typename conditional<is_in_range<uint8_t>(x), uint8_t,
			typename conditional<is_in_range<uint16_t>(x), uint16_t,
				typename conditional<is_in_range<uint32_t>(x), uint32_t,
					typename enable_if<is_in_range<uint64_t>(x), uint64_t>::type
				>::type
			>::type
		>::type;


#endif // LIBCMM_INT_FIT_TYPES_HPP
