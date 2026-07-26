// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/const.h
 *
 *	Macros and Helpers for Working
 *	with Constants
 */

#ifndef _NBAPI_VOLTOS_CONST_H
#define _NBAPI_VOLTOS_CONST_H

#define __AC(X, Y)  				(X##Y)
#define _AC(X, Y)   				__AC(X, Y)
#define _AT(T, X)   				((T)(X))

#define _UL(x)  				(_AC(x, UL))
#define _ULL(x)     				(_AC(x, ULL))

#define _BITUL(x)   				(_UL(1) << (x))
#define _BITULL(x)  				(_ULL(1) << (x))

#define _BIT128(x)  				((unsigned __int128)(1) << (x))

#define __ALIGN_VOLTOS(x, a)
#define __ALIGN_VOLTOS_MASK(x, mask)

#define __VOLTOS_DIVIDE_ROUND_UP(n, d)  	(((n) + (d) - 1) / (d))

#endif /* _NBAPI_VOLTOS_CONST_H */
