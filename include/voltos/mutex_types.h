// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/mutex_types.h
 *
 * 	Mutual Exclusions
 */

#ifndef _VOLTOS_MUTEX_TYPES_H
#define _VOLTOS_MUTEX_TYPES_H

#include <voltos/spinlock.h>

typedef struct mutex {
	raw_spinlock_t lock;
} mutex_t;

#endif /* _VOLTOS_MUTEX_TYPES_H */
