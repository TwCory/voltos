// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/bridge-group.h
 *
 */

#ifndef _VOLTOS_BRIDGE_GROUP_H
#define _VOLTOS_BRIDGE_GROUP_H

#include <voltos/refcount.h>
#include <nbapi/voltos/bridge-group.h>

struct bridge_group {
	refcount_t ref_count;
};

#endif /* _VOLTOS_BRIDGE_GROUP_H */
