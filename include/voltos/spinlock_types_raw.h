// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/spinlock_types_raw.h
 *
 */

#ifndef _VOLTOS_SPINLOCK_TYPES_RAW_H
#define _VOLTOS_SPINLOCK_TYPES_RAW_H

#include <voltos/spinlock_types_up.h>

typedef struct raw_spinlock {
	arch_spinlock_t 			lock;
	unsigned int 				magic;
	unsigned int 				owner_cpu;
	void 					*owner;
} raw_spinlock_t;

#endif /* _VOLTOS_SPINLOCK_TYPES_RAW_H */
