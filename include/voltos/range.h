// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/range.h
 *
 */

#ifndef _VOLTOS_RANGE_H
#define _VOLTOS_RANGE_H

#include <voltos/types.h>

typedef struct {
	u64 					r_start;
	u64 					r_stop;
	unsigned int 				r_step;
} range_t;

#ifndef DEFINE_RANGE
#define DEFINE_RANGE(start, stop, step)
#endif /* DEFINE_RANGE */



#endif /* _VOLTOS_RANGE_H */
