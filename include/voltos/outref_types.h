// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/outref_types.h
 *
 */

#ifndef _VOLTOS_OUTREF_TYPES_H
#define _VOLTOS_OUTREF_TYPES_H

#include <voltos/atomic.h>

typedef struct {
	atomic_t counter;
} outref_t;

#endif /* _VOLTOS_OUTREF_TYPES_H */
