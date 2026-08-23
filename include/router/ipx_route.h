// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/ipx_route.h
 *
 */

#ifndef _ROUTER_IPX_ROUTE_H
#define _ROUTER_IPX_ROUTE_H

#include <router/ipx.h>

struct ipx_route_node {
	struct ipx_protocol 		*ipx;
	struct ipx_interface 		*interface;
};

struct ipx_route_table {

};

#endif /* _ROUTER_IPX_ROUTE_H */
