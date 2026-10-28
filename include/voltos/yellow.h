// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/yellow.h
 *
 */

#ifndef _VOLTOS_YELLOW_H
#define _VOLTOS_YELLOW_H

#include <voltos/refcount.h>
#include <nbapi/voltos/yellow.h>

struct yellow_alarm {
	const char 				name[YELLOW_ALARM_NAME_SIZE];
	refcount_t 				ref_count;
};

#endif /* _VOLTOS_YELLOW_H */
