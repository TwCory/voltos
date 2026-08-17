// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/ip_route.h
 *
 */

#ifndef _ROUTER_IP_ROUTE_H
#define _ROUTER_IP_ROUTE_H

#include <voltos/if.h>
#include <voltos/inet.h>
#include <voltos/ip_route.h>
#include <voltos/route.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <router/ip.h>

struct ip_route {
	struct ip_protocol 		*ip;
	struct route 			*route;
	struct vrf 			*vrf;
	struct ip_interface 		*interface;

	ipv4_prefix_t 			prefix;
	u8 				distance;
	ip_route_protocol_t 		protocol;
};

#endif /* _ROUTER_IP_ROUTE_H */
