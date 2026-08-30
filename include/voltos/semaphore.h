// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/semaphore.h
 *
 * 	Semaphores
 */

#ifndef _VOLTOS_SEMAPHORE_H
#define _VOLTOS_SEMAPHORE_H

#include <voltos/spinlock.h>

typedef struct semaphore {
	raw_spinlock_t 			lock;
	unsigned int 			count;
} semaphore_t;

#ifndef DEFINE_SEMAPHORE
#define DEFINE_SEMAPHORE(name)
#endif /* DEFINE_SEMAPHORE */

#endif /* _VOLTOS_SEMAPHORE_H */
