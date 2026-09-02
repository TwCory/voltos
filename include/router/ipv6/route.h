// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/ipv6/route.h
 *
 */

#ifndef _ROUTER_IPV6_ROUTE_H
#define _ROUTER_IPV6_ROUTE_H

#include <voltos/inet.h>

struct ipv6_connected_route {
	ipv6_addr_t 			address;
};

struct ipv6_local_route {
	ipv6_prefix_t 			prefix;
};

struct ipv6_static_route {
	ipv6_prefix_t 			prefix;
};

#endif /* _ROUTER_IPV6_ROUTE_H */
