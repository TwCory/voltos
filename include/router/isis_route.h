// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/isis_route.h
 *
 */

#ifndef _ROUTER_ISIS_ROUTE_H
#define _ROUTER_ISIS_ROUTE_H

struct isis_inter_area_route {
	struct isis_router 		*isis;
};

struct isis_level1_route {
	struct isis_router 		*isis;
};

struct isis_level2_route {
	struct isis_router 		*isis;
};

struct isis_route {
	struct isis_router 		*isis;
	struct route 			*route;
};

struct isis_summary_route {
	struct isis_router 		*isis;
};

#endif /* _ROUTER_ISIS_ROUTE_H */
