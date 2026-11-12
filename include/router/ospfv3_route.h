// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/ospfv3_route.h
 *
 */

#ifndef _ROUTER_OSPFV3_ROUTE_H
#define _ROUTER_OSPFV3_ROUTE_H

struct ospf6_ext_type1_route {
	struct ospf6_router 		*ospf6;
};

struct ospf6_ext_type2_route {
	struct ospf6_router 		*ospf6;
};

struct ospf6_inter_area_route {
	struct ospf6_router 		*ospf6;
};

struct ospf6_intra_area_route {
	struct ospf6_router 		*ospf6;
};

struct ospf6_nssa_ext_type1_route {
	struct ospf6_router 		*ospf6;
};

struct ospf6_nssa_ext_type2_route {
	struct ospf6_router 		*ospf6;
};

struct ospf6_route {
	struct ospf6_router 		*ospf6;
	struct route 			*route;
};

#endif /* _ROUTER_OSPFV3_ROUTE_H */
