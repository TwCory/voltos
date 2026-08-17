// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/x25_route.h
 *
 */

#ifndef _ROUTER_X25_ROUTE_H
#define _ROUTER_X25_ROUTE_H

#include <voltos/if.h>
#include <voltos/route.h>
#include <router/x25.h>

struct x25_route {
	struct x25_protocol 		*x25;
	struct route 			*route;
	struct x25_interface 		*interface;
};

#endif /* _ROUTER_X25_ROUTE_H */
