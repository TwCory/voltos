// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/if_vlan.h
 *
 */

#ifndef _VOLTOS_IF_VLAN_H
#define _VOLTOS_IF_VLAN_H

#include <voltos/if.h>
#include <nbapi/voltos/if_vlan.h>

struct vlan_interface {
	struct interface *ifp;
};

#endif /* _VOLTOS_IF_VLAN_H */
