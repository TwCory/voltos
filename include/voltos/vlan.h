// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/vlan.h
 *
 */

#ifndef _VOLTOS_VLAN_H
#define _VOLTOS_VLAN_H

#include <voltos/refcount.h>
#include <nbapi/voltos/vlan.h>

struct vlan {
	const char 				name[VLAN_NAME_SIZE];
	refcount_t 				ref_count;
};

struct private_vlan {
	refcount_t 				ref_count;
};

#endif /* _VOLTOS_VLAN_H */
