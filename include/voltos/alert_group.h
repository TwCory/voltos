// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/alert_group.h
 *
 */

#ifndef _VOLTOS_ALERT_GROUP_H
#define _VOLTOS_ALERT_GROUP_H

#include <voltos/refcount.h>
#include <nbapi/voltos/alert_group.h>

struct alert_group {
	const char 			name[ALERT_GROUP_NAME_SIZE];
	refcount_t 			ref_count;
};

#endif /* _VOLTOS_ALERT_GROUP_H */
