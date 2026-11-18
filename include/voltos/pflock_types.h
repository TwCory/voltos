// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/pflock_types.h
 *
 * 	Phase-Fair Locks
 */

#ifndef _VOLTOS_PFLOCK_TYPES_H
#define _VOLTOS_PFLOCK_TYPES_H

struct pflock {
	raw_spinlock_t		lock;
	struct {
		atomic_t 	in;
		atomic_t 	out;
	} read;
	struct {
		atomic_t 	in;
		atomic_t 	out;
	} write;
};

typedef struct pflock pflock_t;

#endif /* _VOLTOS_PFLOCK_TYPES_H */
