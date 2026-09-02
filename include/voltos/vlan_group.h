// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/vlan_group.h
 *
 */

#ifndef _VOLTOS_VLAN_GROUP_H
#define _VOLTOS_VLAN_GROUP_H

#include <voltos/refcount.h>
#include <nbapi/voltos/vlan_group.h>

struct vlan_group {
	refcount_t refcount;
};

#endif /* _VOLTOS_VLAN_GROUP_H */
