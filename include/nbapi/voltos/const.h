// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/const.h
 *
 * 	Sourced from <uapi/linux/const.h>
 */

#ifndef _NBAPI_VOLTOS_CONST_H
#define _NBAPI_VOLTOS_CONST_H

/* 	Some constant macros are used in both assembler and
 * 	C code.  Therefore we cannot annotate them always with
 * 	'UL' and other type specifiers unilaterally.  We
 * 	use the following macros to deal with this.
 *
 * 	Similarly, _AT() will cast an expression with a type in C, but
 * 	leave it unchanged in asm.
 */

#ifdef __ASSEMBLY__
#define _AC(X,Y)					X
#define _AT(T,X)					X
#else
#define __AC(X,Y)					(X##Y)
#define _AC(X,Y)					__AC(X,Y)
#define _AT(T,X)					((T)(X))
#endif

#define _UL(x)						(_AC(x, UL))
#define _ULL(x)						(_AC(x, ULL))

#define _BITUL(x)					(_UL(1) << (x))
#define _BITULL(x)					(_ULL(1) << (x))

#if !defined(__ASSEMBLY__)
#define _BIT128(x)					((unsigned __int128)(1) << (x))
#endif

#define __ALIGN_VOLTOS(x, a)				__ALIGN_VOLTOS_MASK(x, (__typeof__(x))(a) - 1)
#define __ALIGN_VOLTOS_MASK(x, mask)			(((x) + (mask)) & ~(mask))

#define __VOLTOS_DIV_ROUND_UP(n, d) 			(((n) + (d) - 1) / (d))

/*
 * 	Divide positive or negative dividend by positive or negative divisor
 * 	and round to closest integer. Result is undefined for negative
 * 	divisors if the dividend variable type is unsigned and for negative
 * 	dividends if the divisor variable type is unsigned.
 */

#define __VOLTOS_DIV_ROUND_CLOSEST(x, divisor)		\
({							\
	__typeof__(x) __x = x;				\
	__typeof__(divisor) __d = divisor;		\
							\
	(((__typeof__(x))-1) > 0 ||			\
	 ((__typeof__(divisor))-1) > 0 ||		\
	 (((__x) > 0) == ((__d) > 0))) ?		\
		(((__x) + ((__d) / 2)) / (__d)) :	\
		(((__x) - ((__d) / 2)) / (__d));	\
})

#endif /* _NBAPI_VOLTOS_CONST_H */
