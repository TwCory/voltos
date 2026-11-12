// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/openfabric_route.h
 *
 */

#ifndef _ROUTER_OPENFABRIC_ROUTE_H
#define _ROUTER_OPENFABRIC_ROUTE_H

struct openfabric_route {
	struct openfabric_router 	*openfabric;
	struct route 			*route;
};

#endif /* _ROUTER_OPENFABRIC_ROUTE_H */
