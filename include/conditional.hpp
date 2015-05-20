/**
 * @file   conditional.hpp
 * @author chris@headeronly.org 
 * @brief  Compile-time conditional type definitions.
 */

#pragma once
#ifndef LIBCMM_CONDITIONAL_HPP
#define LIBCMM_CONDITIONAL_HPP


template <bool b, class T, class F>
struct conditional {
	using type = T;
};

template <class T, class F>
struct conditional<false, T, F> {
	using type = F;
};


#endif // LIBCMM_CONDITIONAL_HPP
