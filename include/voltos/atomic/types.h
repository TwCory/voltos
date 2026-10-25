// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/atomic/types.h
 *
 */

#ifndef _VOLTOS_ATOMIC_TYPES_H
#define _VOLTOS_ATOMIC_TYPES_H

#ifndef __atomic
#define __atomic			_Atomic
#endif /* __atomic */

typedef struct {
	__atomic int 			counter;
} atomic32_t;

#define ATOMIC32_INIT(i)

typedef struct {
	__atomic long long 		counter;
} atomic64_t;

#define ATOMIC64_INIT(i)

typedef union {
	atomic32_t			counter32;
	atomic64_t			counter64;
} atomic_t;

#define ATOMIC_INIT(i)

#endif /* _VOLTOS_ATOMIC_TYPES_H */
