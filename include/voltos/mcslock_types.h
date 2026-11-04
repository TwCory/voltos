// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/mcslock_types.h
 *
 */

#ifndef _VOLTOS_MCSLOCK_TYPES_H
#define _VOLTOS_MCSLOCK_TYPES_H

#include <voltos/spinlock.h>

typedef struct mcslock {
	raw_spinlock_t lock;
} mcslock_t;

#endif /* _VOLTOS_MCSLOCK_TYPES_H */
