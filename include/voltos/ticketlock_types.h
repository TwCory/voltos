// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/ticketlock_types.h
 *
 * 	Ticket Locks
 */

#ifndef _VOLTOS_TICKETLOCK_TYPES_H
#define _VOLTOS_TICKETLOCK_TYPES_H

#include <voltos/spinlock.h>

struct ticketlock {
	raw_spinlock_t 			lock;
	union {
		atomic_t 		tickets;
		struct {
			atomic_t 	current_ticket;
			atomic_t 	next_ticket;
		};
	};
};

typedef struct ticketlock 		ticketlock_t;

#endif /* _VOLTOS_TICKETLOCK_TYPES_H */
