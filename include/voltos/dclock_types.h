// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/dclock_types.h
 *
 */

#ifndef _VOLTOS_DCLOCK_TYPES_H
#define _VOLTOS_DCLOCK_TYPES_H

#include <voltos/spinlock.h>

typedef struct dc_lock {
	raw_spinlock_t lock;
} dc_lock_t;

#endif /* _VOLTOS_DCLOCK_TYPES_H */
