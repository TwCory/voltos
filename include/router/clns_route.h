// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/clns_route.h
 *
 */

#ifndef _ROUTER_CLNS_ROUTE_H
#define _ROUTER_CLNS_ROUTE_H

#include <router/clns.h>

struct clns_route_node {
	struct clns_protocol 		*clns;
	struct clns_interface 		*interface;

};

struct clns_route_table {

};

#endif /* _ROUTER_CLNS_ROUTE_H */
