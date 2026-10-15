// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/ospf.h
 *
 * 	Open Shortest Path First (OSPF)
 */

#ifndef _ROUTER_OSPF_H
#define _ROUTER_OSPF_H

#include <router/ospfv2/abr.h>
#include <router/ospfv2/area.h>
#include <router/ospfv2/asbr.h>
#include <router/ospfv2/auth.h>
#include <router/ospfv2/bfd.h>
#include <router/ospfv2/dijkstra.h>
#include <router/ospfv2/flood.h>
#include <router/ospfv2/ia.h>
#include <router/ospfv2/interface.h>
#include <router/ospfv2/ism.h>
#include <router/ospfv2/lsa.h>
#include <router/ospfv2/lsdb.h>
#include <router/ospfv2/neighbour.h>
#include <router/ospfv2/nsf.h>
#include <router/ospfv2/nsm.h>
#include <router/ospfv2/route.h>
#include <router/ospfv2/snmp.h>
#include <router/ospfv2/types.h>

struct ospf_protocol {

};

extern void ospf_init(void);

int ospf_allrouters_group_join(struct ospf_interface *iface);
int ospf_allrouters_group_leave(struct ospf_interface *iface);

int ospf_drouters_group_join(struct ospf_interface *iface);
int ospf_drouters_group_leave(struct ospf_interface *iface);

#endif /* _ROUTER_OSPF_H */
