// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/if_vlan.h
 *
 *	VLAN Virtual Interfaces
 */

#ifndef _VOLTOS_IF_VLAN_H
#define _VOLTOS_IF_VLAN_H

#include <voltos/idb.h>
#include <nbapi/voltos/if_vlan.h>

struct vlan_if {
	struct idb *ifp;
};

#endif /* _VOLTOS_IF_VLAN_H */
