// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/ospf.h
 *
 * 	Open Shortest Path First (OSPF)
 */

#ifndef _ROUTER_OSPF_H
#define _ROUTER_OSPF_H

#include <voltos/if.h>
#include <voltos/inet.h>
#include <voltos/ospf.h>
#include <voltos/ospf_common.h>
#include <voltos/route.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <net/neighbour.h>
#include <net/neighbour_table.h>
#include <net/protocol.h>

struct ospf_protocol;

struct ospf_area {
	struct ospf_protocol 		*ospf;
};

struct ospf_interface {
	struct ospf_protocol 		*ospf;
	struct interface 		*interface;
};

struct ospf_ism {
	struct ospf_protocol 		*ospf;
};

struct ospf_neighbour {
	struct ospf_protocol 		*ospf;
	struct neighbour 		*neighbour;
};

struct ospf_nsm {
	struct ospf_protocol 		*ospf;
};

struct ospf_protocol {
	struct protocol 		*protocol;
	struct vrf 			*vrf;

	struct route_table 		*route_table;

	bool 				enabled;
	u8 				distance;
	ospf_pid_t 			instance;
};

struct ospf_route {
	struct ospf_protocol 		*ospf;
	struct route 			*route;

	ipv4_prefix_t 			prefix;
};

struct ospf_router {
	struct ospf_protocol 		*ospf;

	bool 				shutdown;
};

struct ospf_virtual_link {
	struct ospf_protocol 		*ospf;
};

#endif /* _ROUTER_OSPF_H */
