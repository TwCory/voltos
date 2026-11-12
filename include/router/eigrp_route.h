// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/eigrp_route.h
 *
 */

#ifndef _ROUTER_EIGRP_ROUTE_H
#define _ROUTER_EIGRP_ROUTE_H

struct eigrp_external_route {
	struct eigrp_router		*eigrp;
};

struct eigrp_route {
	struct eigrp_router		*eigrp;
	struct route 			*route;
};

#endif /* _ROUTER_EIGRP_ROUTE_H */
