// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/ipv6_route.h
 *
 */

#ifndef _ROUTER_IPV6_ROUTE_H
#define _ROUTER_IPV6_ROUTE_H

#include <voltos/if.h>
#include <voltos/inet.h>
#include <voltos/ipv6_route.h>
#include <voltos/route.h>
#include <voltos/vrf.h>

struct ipv6_route {
	struct route 			*route;
	struct vrf 			*vrf;
	struct interface 		*interface;

	ipv6_prefix_t 			prefix;
	u8 				distance;
	ipv6_route_protocol_t 		protocol;
};

#endif /* _ROUTER_IPV6_ROUTE_H */
