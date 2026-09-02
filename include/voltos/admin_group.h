// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/admin_group.h
 *
 */

#ifndef _VOLTOS_ADMIN_GROUP_H
#define _VOLTOS_ADMIN_GROUP_H

#include <voltos/refcount.h>
#include <nbapi/voltos/admin_group.h>

struct admin_group {
	const char 			name[ADMIN_GROUP_NAME_SIZE];
	refcount_t 			refcount;
};

struct ext_admin_group {
	const char 			name[EXT_ADMIN_GROUP_NAME_SIZE];
	refcount_t 			refcount;
};

#endif /* _VOLTOS_ADMIN_GROUP_H */
