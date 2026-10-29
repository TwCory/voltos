// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/seqlock_types.h
 *
 */

#ifndef _VOLTOS_SEQLOCK_TYPES_H
#define _VOLTOS_SEQLOCK_TYPES_H

#include <voltos/spinlock.h>

typedef struct {

} seqcount_t;

typedef struct seqlock {
	raw_spinlock_t lock;
} seqlock_t;

#endif /* _VOLTOS_SEQLOCK_TYPES_H */
