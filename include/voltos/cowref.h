// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/cowref.h
 *
 */

#ifndef _VOLTOS_COWREF_H
#define _VOLTOS_COWREF_H

#include <voltos/atomic.h>

typedef struct {
	atomic_t counter;
} cowref_t;

#endif /* _VOLTOS_COWREF_H */
