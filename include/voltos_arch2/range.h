// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/range.h
 *
 */

#ifndef _VOLTOS_RANGE_H
#define _VOLTOS_RANGE_H

#include <voltos/types.h>

typedef struct {
	u32 r_start;
	u32 r_stop;
	u32 r_step;
} range32_t;

typedef struct {
	u64 r_start;
	u64 r_stop;
	u64 r_step;
} range64_t;

typedef union {
	range32_t r32;
	range64_t r64;
} range_t;

#ifndef DEFINE_RANGE
#define DEFINE_RANGE(start, stop, step)
#endif /* DEFINE_RANGE */

#endif /* _VOLTOS_RANGE_H */
