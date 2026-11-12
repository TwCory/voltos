// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/ospf_route.h
 *
 */

#ifndef _ROUTER_OSPF_ROUTE_H
#define _ROUTER_OSPF_ROUTE_H

struct ospf_ext_type1_route {
	struct ospf_router		*ospf;
};

struct ospf_ext_type2_route {
	struct ospf_router		*ospf;
};

struct ospf_inter_area_route {
	struct ospf_router		*ospf;
};

struct ospf_nssa_ext_type1_route {
	struct ospf_router		*ospf;
};

struct ospf_nssa_ext_type2_route {
	struct ospf_router		*ospf;
};

struct ospf_route {
	struct ospf_router		*ospf;
	struct route 			*route;
};

#endif /* _ROUTER_OSPF_ROUTE_H */
