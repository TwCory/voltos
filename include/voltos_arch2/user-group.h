// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/user-groups.h
 *
 */

#ifndef _VOLTOS_USER_GROUP_H
#define _VOLTOS_USER_GROUP_H

#include <voltos/refcount.h>
#include <nbapi/voltos/user-group.h>

struct user_group {
	const char name;
	refcount_t refcount;
};

#endif /* _VOLTOS_USER_GROUP_H */
