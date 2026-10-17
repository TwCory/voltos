// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/spinlock_types_up.h
 *
 */

#ifndef _VOLTOS_SPINLOCK_TYPES_UP_H
#define _VOLTOS_SPINLOCK_TYPES_UP_H

typedef struct arch_spinlock {
	volatile unsigned int spinlock;
} arch_spinlock_t;

typedef struct arch_rwlock {

} arch_rwlock_t;

#endif /* _VOLTOS_SPINLOCK_TYPES_UP_H */
