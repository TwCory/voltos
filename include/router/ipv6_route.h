// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/ipv6_route.h
 *
 */

#ifndef _ROUTER_IPV6_ROUTE_H
#define _ROUTER_IPV6_ROUTE_H

#include <router/ipv6.h>

struct ipv6_route_node {
	struct ipv6_protocol 		*ipv6;
	struct ipv6_interface 		*interface;

};

struct ipv6_route_table {

};

#endif /* _ROUTER_IPV6_ROUTE_H */
