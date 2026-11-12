// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/ospfv3.h
 *
 *	Open Shortest Path First, Version 3 (OSPFv3)
 */

#ifndef _ROUTER_OSPFV3_H
#define _ROUTER_OSPFV3_H

struct ospf6_area {
	struct ospf6_router 		*ospf6;
};

struct ospf6_interface {
	struct ospf6_router 		*ospf6;
	struct interface 		*interface;
};

struct ospf6_neighbour {
	struct ospf6_router 		*ospf6;
};

struct ospf6_router {

};

extern void ospf6_interface_init(void);
extern void ospf6_router_init(void);

#endif /* _ROUTER_OSPFV3_H */
