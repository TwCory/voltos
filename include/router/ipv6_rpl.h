// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/ipv6_rpl.h
 *
 */

#ifndef _ROUTER_IPV6_RPL_H
#define _ROUTER_IPV6_RPL_H

#include <voltos/if.h>
#include <voltos/route.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <net/protocol.h>

struct rpl_protocol;

struct rpl_interface {
	struct rpl_protocol 		*rpl;
	struct interface 		*interface;
};

struct rpl_protocol {
	struct protocol 		*protocol;
	struct vrf 			*vrf;

	struct route_table 		*route_table;

	bool 				enabled;
	u8 				distance;
};

struct rpl_route {
	struct rpl_protocol 		*rpl;
	struct route 			*route;
};

struct rpl_router {
	struct rpl_protocol 		*rpl;

	bool 				shutdown;
};

#endif /* _ROUTER_IPV6_RPL_H */
