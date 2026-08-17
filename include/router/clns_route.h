// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/clns_route.h
 *
 */

#ifndef _ROUTER_CLNS_ROUTE_H
#define _ROUTER_CLNS_ROUTE_H

#include <voltos/clns.h>
#include <voltos/clns_route.h>
#include <voltos/nsap.h>
#include <voltos/route.h>
#include <router/clns.h>

struct clns_route {
	struct clns_protocol 		*clns;
	struct route 			*route;
	struct clns_interface 		*interface;

	nsap_prefix_t 			prefix;
	clns_route_protocol_t 		protocol;
};

#endif /* _ROUTER_CLNS_ROUTE_H */
