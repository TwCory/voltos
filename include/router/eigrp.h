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

struct eigrp_protocol;

struct eigrp_interface {
	struct eigrp_protocol 		*eigrp;
	struct interface 		*interface;
};

struct eigrp_neighbour {
	struct eigrp_protocol 		*eigrp;
	struct neighbour 		*neighbour;
};

struct eigrp_protocol {
	struct protocol 		*protocol;
	struct vrf 			*vrf;

	bool 				enabled;
	u8 				distance;
	u8 				distance_external;
};

struct eigrp_route {
	struct eigrp_protocol 		*eigrp;
	struct route 			*route;

	ip_prefix_t 			prefix;
};

struct eigrp_router {
	struct eigrp_protocol 		*eigrp;

	bool 				shutdown;
};

#endif /* _ROUTER_EIGRP_H */
