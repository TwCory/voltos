// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/spinlock_types.h
 *
 */

#ifndef _VOLTOS_SPINLOCK_TYPES_H
#define _VOLTOS_SPINLOCK_TYPES_H

#include <voltos/spinlock_types_raw.h>
#include <voltos/types.h>

typedef struct spinlock {
	union {
		struct raw_spinlock 		raw_lock;
		struct {
			u8 __padding;
		};
	};
} spinlock_t;

#define __SPIN_LOCK_INITIALIZER(name)

#define __SPIN_LOCK_UNLOCKED(name)

#endif /* _VOLTOS_SPINLOCK_TYPES_H */
