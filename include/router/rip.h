// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/rip.h
 *
 * 	Routing Information Protocol (RIP)
 */

#ifndef _ROUTER_RIP_H
#define _ROUTER_RIP_H

#include <voltos/if.h>
#include <voltos/inet.h>
#include <voltos/rip.h>
#include <voltos/route.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <net/neighbour.h>
#include <net/neighbour_table.h>
#include <net/protocol.h>

struct rip_interface {
	struct interface 		*interface;
};

struct rip_neighbour {
	struct neighbour 		*neighbour;
};

struct rip_offset_list {

};

struct rip_protocol {
	struct protocol 		*protocol;
	struct vrf 			*vrf;
};

struct rip_route {
	struct route 			*route;

	ipv4_prefix_t 			prefix;
};

struct rip_router {
	bool shutdown;
};

#endif /* _ROUTER_RIP_H */
