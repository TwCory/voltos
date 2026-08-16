// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/bba-group.h
 *
 * 	Broadband Aggregation (BBA) Group
 */

#ifndef _VOLTOS_BBA_GROUP_H
#define _VOLTOS_BBA_GROUP_H

#include <nbapi/voltos/bba-group.h>

struct bba_group {
	const char 			name[BBA_GROUP_NAME_SIZE];
	__bba_group_key_t 		index;
	enum bba_group_type 		type;
};

#endif /* _VOLTOS_BBA_GROUP_H */
