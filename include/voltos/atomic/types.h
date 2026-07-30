// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/atomic/types.h
 *
 */

#ifndef _VOLTOS_ATOMIC_TYPES_H
#define _VOLTOS_ATOMIC_TYPES_H

#include <voltos/types.h>

#ifndef __atomic__
#define __atomic__			_Atomic
#endif /* __atomic__ */

typedef struct {
	__atomic__ __s32		counter;
} atomic32_t;

typedef struct {
	__atomic__ __s64		counter;
} atomic64_t;

typedef struct {
	union {
		__atomic__ __s16 	counter16;
		__atomic__ __s32 	counter32;
		__atomic__ __s64 	counter64;
	};
} atomic_t;

#endif /* _VOLTOS_ATOMIC_TYPES_H */
