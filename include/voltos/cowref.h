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

#define COWREF_INIT(i)

#endif /* _VOLTOS_COWREF_H */
