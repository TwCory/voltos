// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/ip_route.h
 *
 */

#ifndef _ROUTER_IP_ROUTE_H
#define _ROUTER_IP_ROUTE_H

#include <router/ip.h>

struct ip_route_node {
	struct ip_protocol 		*ip;
	struct ip_interface 		*interface;

};

struct ip_route_table {

};

#endif /* _ROUTER_IP_ROUTE_H */
