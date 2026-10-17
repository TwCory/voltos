// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/atomic/types.h
 *
 * 	Atomic Data Types
 */

#ifndef _VOLTOS_ATOMIC_TYPES_H
#define _VOLTOS_ATOMIC_TYPES_H

#include <voltos/compiler.h>
#include <voltos/types.h>

typedef struct {
	s32 __aligned(sizeof(s32)) 	counter;
} atomic32_t;

#define ATOMIC32_INIT(i)		{ (i) }

typedef struct {
	s64 __aligned(sizeof(s64)) 	counter;
} atomic64_t;

#define ATOMIC64_INIT(i)		{ (i) }

typedef union {
	atomic32_t			a32;
	atomic64_t			a64;
} atomic_t;

#define ATOMIC_INIT(i)			{ (i) }

#endif /* _VOLTOS_ATOMIC_TYPES_H */
