// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/x25_route.h
 *
 */

#ifndef _ROUTER_X25_ROUTE_H
#define _ROUTER_X25_ROUTE_H

#include <router/x25.h>

struct x25_route_node {
	struct x25_protocol 		*x25;
	struct x25_interface 		*interface;
};

struct x25_route_table {

};

#endif /* _ROUTER_X25_ROUTE_H */
