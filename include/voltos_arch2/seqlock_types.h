// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/seqlock_types.h
 *
 */

#ifndef _VOLTOS_SEQLOCK_TYPES_H
#define _VOLTOS_SEQLOCK_TYPES_H

#include <voltos/lockdep.h>
#include <voltos/mutex.h>
#include <voltos/spinlock.h>

typedef struct seqcount {
	unsigned long 				sequence;
} seqcount_t;

typedef struct seqlock {
	spinlock_t 				lock;
} seqlock_t;

#define __SEQ_LOCK_INITIALIZER(name)

#define __SEQ_LOCK_UNLOCKED(name)

#endif /* _VOLTOS_SEQLOCK_TYPES_H */
