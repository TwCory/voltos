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

struct ospf_area {

};

struct ospf_interface {
	struct interface 		*interface;
};

struct ospf_ism {

};

struct ospf_neighbour {
	struct neighbour 		*neighbour;
};

struct ospf_nsm {

};

struct ospf_protocol {
	struct protocol 		*protocol;
	struct vrf 			*vrf;
};

struct ospf_route {
	struct route 			*route;

	ipv4_prefix_t 			prefix;
};

struct ospf_router {
	bool 				shutdown;
};

struct ospf_virtual_link {

};

#endif /* _ROUTER_OSPF_H */
