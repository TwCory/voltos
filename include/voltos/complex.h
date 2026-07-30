// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/complex.h
 *
 * 	Complex Data Types
 */

#ifndef _VOLTOS_COMPLEX_H
#define _VOLTOS_COMPLEX_H

#ifndef __complex__
#define __complex__			_Complex
#endif /* __complex__ */

typedef __complex__ float		cf16;
typedef __complex__ float		cf32;
typedef __complex__ double		cf64;

typedef struct {
	union {
		__complex__ float	s128_cf32[4];
		__complex__ double	s128_cf64[2];
	};
} __attribute__ ((packed)) cf128;

#endif /* _VOLTOS_COMPLEX_H */
