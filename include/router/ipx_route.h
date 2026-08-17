// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/ipx_route.h
 *
 */

#ifndef _ROUTER_IPX_ROUTE_H
#define _ROUTER_IPX_ROUTE_H

#include <voltos/if.h>
#include <voltos/ipx_route.h>
#include <voltos/route.h>
#include <router/ipx.h>

struct ipx_route {
	struct ipx_protocol 		*ipx;
	struct route 			*route;
	struct ipx_interface 		*interface;
};

#endif /* _ROUTER_IPX_ROUTE_H */
