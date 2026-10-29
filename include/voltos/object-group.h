// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/object-group.h
 *
 */

#ifndef _VOLTOS_OBJECT_GROUP_H
#define _VOLTOS_OBJECT_GROUP_H

#include <voltos/refcount.h>
#include <nbapi/voltos/object-group.h>

struct object_group {
	refcount_t ref_count;
};

#endif /* _VOLTOS_OBJECT_GROUP_H */
