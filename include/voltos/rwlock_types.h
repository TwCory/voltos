// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/rwlock_types.h
 *
 * 	Reader-Writer Locks
 */

#ifndef _VOLTOS_RWLOCK_TYPES_H
#define _VOLTOS_RWLOCK_TYPES_H

#include <voltos/spinlock.h>

typedef struct rwlock {
	raw_spinlock_t lock;
} rwlock_t;

#endif /* _VOLTOS_RWLOCK_TYPES_H */
