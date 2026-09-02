// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/ipv4/route.h
 *
 */

#ifndef _ROUTER_IPV4_ROUTE_H
#define _ROUTER_IPV4_ROUTE_H

#include <voltos/inet.h>

struct ipv4_connected_route {
	ipv4_addr_t 			address;
};

struct ipv4_local_route {
	ipv4_prefix_t 			prefix;
};

struct ipv4_static_route {
	ipv4_prefix_t 			prefix;
};

#endif /* _ROUTER_IPV4_ROUTE_H */
