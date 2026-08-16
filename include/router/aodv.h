// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/aodv.h
 *
 * 	Ad-Hoc On-Demand Distance Vector (AODV)
 */

#ifndef _ROUTER_AODV_H
#define _ROUTER_AODV_H

#include <voltos/aodv.h>
#include <voltos/if.h>
#include <voltos/inet.h>
#include <voltos/route.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <net/protocol.h>

struct aodv_interface {
	struct interface 		*interface;
};

struct aodv_protocol {
	struct protocol 		*protocol;
	struct vrf 			*vrf;
};

struct aodv_route {
	struct route 			*route;

	ipv4_prefix_t 			prefix;
};

struct aodv_router {
	bool 				shutdown;
};

#endif /* _ROUTER_AODV_H */
