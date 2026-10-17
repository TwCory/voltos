// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/linear_range.h
 *
 */

#ifndef _VOLTOS_LINEAR_RANGE_H
#define _VOLTOS_LINEAR_RANGE_H

#include <voltos/types.h>

struct linear_range {
	unsigned int 			min;
	unsigned int 			min_sel;
	unsigned int 			max_sel;
	unsigned int 			step;
};

#define LINEAR_RANGE(_min, _min_sel, _max_sel, _step)			\
	{								\
		.min = _min,						\
		.min_sel = _min_sel,					\
		.max_sel = _max_sel,					\
		.step = _step,						\
	}

#define LINEAR_RANGE_INDEX(_index, _min, _min_sel, _max_sel, _step)	\
	[_index] = LINEAR_RANGE(_min, _min_sel, _max_sel, _step)		

#endif /* _VOLTOS_LINEAR_RANGE_H */
