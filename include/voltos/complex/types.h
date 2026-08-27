// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/complex/types.h
 *
 */

#ifndef _VOLTOS_COMPLEX_TYPES_H
#define _VOLTOS_COMPLEX_TYPES_H

#include <voltos/types.h>

typedef struct {
	f32 				cf_data;
} complex32_t;

#define COMPLEX32_INIT(i)

typedef struct {
	f64 				cf_data;
} complex64_t;

#define COMPLEX64_INIT(i)

typedef union {
	complex32_t 			cf_data32;
	complex64_t 			cf_data64;
} complex_t;

#define COMPLEX_INIT(i)

#endif /* _VOLTOS_COMPLEX_TYPES_H */
