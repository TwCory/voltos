// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/complex/types.h
 *
 */

#ifndef _VOLTOS_COMPLEX_TYPES_H
#define _VOLTOS_COMPLEX_TYPES_H

#ifndef __complex
#define __complex			_Complex
#endif /* __complex */

typedef struct {
	__complex float 		cf32;
} complex32_t;

typedef struct {
	__complex double 		cf64;
} complex64_t;

#endif /* _VOLTOS_COMPLEX_TYPES_H */
