// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/refcount_types.h
 *
 * 	Reference Counting
 */

#ifndef _VOLTOS_REFCOUNT_TYPES_H
#define _VOLTOS_REFCOUNT_TYPES_H

#include <voltos/atomic.h>

typedef struct refcount_s {
	union {
		atomic32_t 		refs32;
		atomic64_t 		refs64;
	};
} refcount_t;

#endif /* _VOLTOS_REFCOUNT_TYPES_H */
