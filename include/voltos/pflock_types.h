// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/pflock_types.h
 *
 * 	Phase-Fair Locks
 */

#ifndef _VOLTOS_PFLOCK_TYPES_H
#define _VOLTOS_PFLOCK_TYPES_H

#include <voltos/spinlock.h>

typedef struct pflock {
	raw_spinlock_t lock;
} pflock_t;

#endif /* _VOLTOS_PFLOCK_TYPES_H */
