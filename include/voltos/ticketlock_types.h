// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/ticketlock_types.h
 *
 * 	Ticket Spin Locks
 */

#ifndef _VOLTOS_TICKETLOCK_TYPES_H
#define _VOLTOS_TICKETLOCK_TYPES_H

#include <voltos/spinlock.h>

typedef struct ticketlock {
	raw_spinlock_t lock;
} ticketlock_t;

#endif /* _VOLTOS_TICKETLOCK_TYPES_H */
