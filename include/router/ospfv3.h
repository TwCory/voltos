// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/ospfv3.h
 *
 * 	Open Shortest Path First, Version 3 (OSPFv3)
 */

#ifndef _ROUTER_OSPFV3_H
#define _ROUTER_OSPFV3_H

#include <voltos/inet.h>
#include <voltos/ospf_common.h>
#include <voltos/types.h>

struct ospfv3_protocol {
	ospf_pid_t 			instance;
	bool 				enabled;
};

struct ospfv3_interface {
	bool 				passive;
};

struct ospfv3_area {
	ospf_area_id_t 			id;
	ospf_area_type_t 		type;
};

struct ospfv3_neighbour {
	ip_addr_t 			address;
};

struct ospfv3_network {
	ospf_network_type_t 		type;
};

struct ospfv3_route {
	ip_prefix_t 			prefix;
	ospf_cost_t 			cost;
};

struct ospfv3_virtual_link {

};

#endif /* _ROUTER_OSPFV3_H */
