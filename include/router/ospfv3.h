// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/ospfv3.h
 *
 * 	Open Shortest Path First, Version 3 (OSPFv3)
 */

#ifndef _ROUTER_OSPFV3_H
#define _ROUTER_OSPFV3_H

struct ospfv3_protocol;

struct ospfv3_area {
	struct ospfv3_protocol 		*ospfv3;
};

struct ospfv3_interface {
	struct ospfv3_protocol 		*ospfv3;

};

struct ospfv3_protocol {

};

struct ospfv3_route {
	struct ospfv3_protocol 		*ospfv3;

};

struct ospfv3_router {
	struct ospfv3_protocol 		*ospfv3;

};

struct ospfv3_virtual_link {
	struct ospfv3_protocol 		*ospfv3;
};

#endif /* _ROUTER_OSPFV3_H */
