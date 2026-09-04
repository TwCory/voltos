// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/time-range.h
 *
 */

#ifndef _VOLTOS_TIME_RANGE_H
#define _VOLTOS_TIME_RANGE_H

#include <voltos/refcount.h>
#include <nbapi/voltos/time-range.h>

struct time_range {
	const char name[TIME_RANGE_NAME_SIZE];
	refcount_t refcount;
};

#endif /* _VOLTOS_TIME_RANGE_H */
