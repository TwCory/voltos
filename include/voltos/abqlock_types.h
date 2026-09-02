// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/abqlock_types.h
 *
 * 	Array-Based Queue Locks
 */

#ifndef _VOLTOS_ABQLOCK_TYPES_H
#define _VOLTOS_ABQLOCK_TYPES_H

#include <voltos/spinlock.h>

typedef struct abqlock {
	raw_spinlock_t lock;
} abqlock_t;

#endif /* _VOLTOS_ABQLOCK_TYPES_H */
