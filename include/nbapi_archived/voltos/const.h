// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/const.h
 *
 *	Macros and Helpers for Working
 *	with Constants
 */

#ifndef _NBAPI_VOLTOS_CONST_H
#define _NBAPI_VOLTOS_CONST_H

#ifdef __ASSEMBLY__
#define _AC(X, Y)						X
#define _AT(T, X)						X
#else
#define __AC(X, Y)						(X##Y)
#define _AC(X, Y)						__AC(X, Y)
#define _AT(T, X)						((T)(X))
#endif /* __ASSEMBLY__ */

#define _UL(x)							(_AC(x, UL))
#define _ULL(x)							(_AC(x, ULL))

#define _BITUL(x)						(_UL(1) << (x))
#define _BITULL(x)						(_ULL(1) << (x))

#if !defined(__ASSEMBLY__)
#define _BIT128(x)						((unsigned __int128)(1) << (x))
#endif

#define __ALIGN_SYSTEM_MASK(x, mask)				(((x) + (mask)) & ~(mask))
#define __ALIGN_SYSTEM(x, a)					__ALIGN_SYSTEM_MASK(x, (__typeof__(x))(a) - 1)

#define __SYSTEM_DIVIDE_ROUND_CLOSEST(x, divisor)		\
({								\
	__typeof__(x) __x = x;					\
	__typeof__(divisor) __d = divisor;			\
								\
	(((__typeof__(x))-1) > 0 ||				\
	 ((__typeof__(divisor))-1) > 0 ||			\
	 (((__x) > 0) == ((__d) > 0))) ?			\
		(((__x) + ((__d) / 2)) / (__d)) :		\
		(((__x) - ((__d) / 2)) / (__d));		\
})

#endif /* _NBAPI_VOLTOS_CONST_H */
