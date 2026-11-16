// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/route_direct.h
 *
 *	Directly-Connected Routes
 */

#ifndef _ROUTER_ROUTE_DIRECT_H
#define _ROUTER_ROUTE_DIRECT_H

#include <voltos/route.h>

struct connected_route {
	struct route *route;
};

struct local_route {
	struct route *route;
};

#endif /* _ROUTER_ROUTE_DIRECT_H */
