// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/ospfv3.h
 *
 * 	Open Shortest Path First, Version 3 (OSPFv3)
 */

#ifndef _ROUTER_OSPFV3_H
#define _ROUTER_OSPFV3_H

#include <router/ospfv3/bfd.h>
#include <router/ospfv3/interface.h>
#include <router/ospfv3/lsdb.h>
#include <router/ospfv3/route.h>
#include <router/ospfv3/snmp.h>
#include <router/ospfv3/types.h>

struct ospfv3_protocol {

};

extern void ospfv3_init(void);

int ospfv3_allrouters_group_join(struct ospfv3_interface *iface);
int ospfv3_allrouters_group_leave(struct ospfv3_interface *iface);

int ospfv3_drouters_group_join(struct ospfv3_interface *iface);
int ospfv3_drouters_group_leave(struct ospfv3_interface *iface);

#endif /* _ROUTER_OSPFV3_H */
