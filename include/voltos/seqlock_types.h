// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/seqlock_types.h
 *
 */

#ifndef _VOLTOS_SEQLOCK_TYPES_H
#define _VOLTOS_SEQLOCK_TYPES_H

#include <voltos/spinlock_types.h>

typedef struct seqcount {
	unsigned long 				sequence;
} seqcount_t;

typedef struct seqlock {
	spinlock_t 				lock;
} seqlock_t;

#endif /* _VOLTOS_SEQLOCK_TYPES_H */
