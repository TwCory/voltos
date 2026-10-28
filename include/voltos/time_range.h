// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/time_range.h
 *
 */

#ifndef _VOLTOS_TIME_RANGE_H
#define _VOLTOS_TIME_RANGE_H

#include <voltos/refcount.h>
#include <nbapi/voltos/time_range.h>

struct time_range {
	const char 				name[TIME_RANGE_NAME_SIZE];
	refcount_t 				ref_count;
};

#endif /* _VOLTOS_TIME_RANGE_H */
