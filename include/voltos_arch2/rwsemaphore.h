// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/rwsemaphore.h
 *
 * 	Reader-Writer Semaphores
 */

#ifndef _VOLTOS_RWSEMAPHORE_H
#define _VOLTOS_RWSEMAPHORE_H

#include <voltos/spinlock.h>

typedef struct rw_semaphore {
	raw_spinlock_t lock;
} rw_semaphore_t;

#ifndef DEFINE_RW_SEMAPHORE
#define DEFINE_RW_SEMAPHORE(name)
#endif /* DEFINE_RW_SEMAPHORE */

#endif /* _VOLTOS_RWSEMAPHORE_H */
