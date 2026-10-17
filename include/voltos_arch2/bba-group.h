// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/bba-group.h
 *
 * 	Broadband Access Aggregation (BBA) Groups
 */

#ifndef _VOLTOS_BBA_GROUP_H
#define _VOLTOS_BBA_GROUP_H

#include <voltos/refcount.h>
#include <nbapi/voltos/bba-group.h>

struct bba_group {
	const char 			name[BBA_GROUP_NAME_SIZE];
	refcount_t 			refcount;
};

#endif /* _VOLTOS_BBA_GROUP_H */
