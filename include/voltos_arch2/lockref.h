// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/lockref.h
 *
 */

#ifndef _VOLTOS_LOCKREF_H
#define _VOLTOS_LOCKREF_H

#include <voltos/spinlock.h>
#include <voltos/types.h>

typedef struct {
	union {
		aligned_u64 		lock_count;
		struct {
			spinlock_t 	lock;
			int 		count;
		};
	};
} lockref_t;

#endif /* _VOLTOS_LOCKREF_H */
