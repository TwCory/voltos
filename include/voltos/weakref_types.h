// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/weakref_types.h
 *
 * 	Weak References
 */

#ifndef _VOLTOS_WEAKREF_TYPES_H
#define _VOLTOS_WEAKREF_TYPES_H

#include <voltos/refcount.h>
#include <voltos/types.h>

typedef struct weakref {
	refcount_t 			refcount;
	bool 				unreachable;
} weakref_t;

#endif /* _VOLTOS_WEAKREF_TYPES_H */
