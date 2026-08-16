// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/eigrp.h
 *
 * 	Enhanced Interior Gateway Routing Protocol (EIGRP)
 */

#ifndef _ROUTER_EIGRP_H
#define _ROUTER_EIGRP_H

#include <voltos/eigrp.h>
#include <voltos/if.h>
#include <voltos/inet.h>
#include <voltos/route.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <net/neighbour.h>
#include <net/neighbour_table.h>
#include <net/protocol.h>

struct eigrp_interface {
	struct interface 		*interface;
};

struct eigrp_neighbour {
	struct neighbour 		*neighbour;
};

struct eigrp_protocol {
	struct protocol 		*protocol;
	struct vrf 			*vrf;
};

struct eigrp_route {
	struct route 			*route;

	ip_prefix_t 			prefix;
};

struct eigrp_router {
	bool 				shutdown;
};

#endif /* _ROUTER_EIGRP_H */
