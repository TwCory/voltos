// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/mcslock_types.h
 *
 *	MCS-Based Spin Locks
 */

#ifndef _VOLTOS_MCSLOCK_TYPES_H
#define _VOLTOS_MCSLOCK_TYPES_H

#include <voltos/spinlock.h>

typedef struct mcslock {
	raw_spinlock_t lock;
} mcslock_t;

#define __MCS_LOCK_INITIALIZER(name)

#define __MCS_LOCK_UNLOCKED(name)

#endif /* _VOLTOS_MCSLOCK_TYPES_H */
