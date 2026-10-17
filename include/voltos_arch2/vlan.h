// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/vlan.h
 *
 */

#ifndef _VOLTOS_VLAN_H
#define _VOLTOS_VLAN_H

#include <voltos/refcount.h>
#include <nbapi/voltos/vlan.h>

typedef __voltos_vlan_id_t 		vlan_id_t;

struct vlan {
	const char 			vlan_name[VLAN_NAME_SIZE];
	vlan_id_t 			vlan_id;

	refcount_t refcount;
};

#endif /* _VOLTOS_VLAN_H */
