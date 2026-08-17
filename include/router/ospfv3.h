// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/ospfv3.h
 *
 * 	Open Shortest Path First, Version 3 (OSPFv3)
 */

#ifndef _ROUTER_OSPFV3_H
#define _ROUTER_OSPFV3_H

#include <voltos/if.h>
#include <voltos/inet.h>
#include <voltos/ospf_common.h>
#include <voltos/ospfv3.h>
#include <voltos/route.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <net/neighbour.h>
#include <net/neighbour_table.h>
#include <net/protocol.h>

struct ospfv3_protocol;

struct ospfv3_area {
	struct ospfv3_protocol 		*ospfv3;
};

struct ospfv3_interface {
	struct ospfv3_protocol 		*ospfv3;
	struct interface 		*interface;
};

struct ospfv3_protocol {
	struct protocol 		*protocol;
	struct vrf 			*vrf;

	struct route_table 		*route_table;

	bool 				enabled;
	u8 				distance;
	ospf_pid_t 			instance;
};

struct ospfv3_route {
	struct ospfv3_protocol 		*ospfv3;
	struct route 			*route;

	ip_prefix_t 			prefix;
};

struct ospfv3_router {
	struct ospfv3_protocol 		*ospfv3;

	bool 				shutdown;
};

struct ospfv3_virtual_link {
	struct ospfv3_protocol 		*ospfv3;
};

#endif /* _ROUTER_OSPFV3_H */
