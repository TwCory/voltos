// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/admin_group.h
 *
 */

#ifndef _VOLTOS_ADMIN_GROUP_H
#define _VOLTOS_ADMIN_GROUP_H

#include <nbapi/voltos/admin_group.h>

struct admin_group {
	const char 			name[ADMIN_GROUP_NAME_SIZE];
	__admin_group_key_t 		index;
};

struct ext_admin_group {
	const char 			name[EXT_ADMIN_GROUP_NAME_SIZE];
	__ext_admin_group_key_t 	index;
};

#endif /* _VOLTOS_ADMIN_GROUP_H */
