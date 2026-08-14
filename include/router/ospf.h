// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/ospf.h
 *
 * 	Open Shortest Path First (OSPF)
 */

#ifndef _ROUTER_OSPF_H
#define _ROUTER_OSPF_H

#include <voltos/inet.h>
#include <voltos/ospf.h>
#include <voltos/ospf_common.h>
#include <voltos/types.h>

struct ospf_protocol {
	ospf_pid_t 			instance;
	bool 				enabled;
};

struct ospf_interface {
	bool 				passive;
};

struct ospf_area {
	ospf_area_id_t 			id;
	ospf_area_type_t 		type;
};

struct ospf_neighbour {
	ipv4_addr_t 			address;
};

struct ospf_network {
	ospf_network_type_t 		type;
};

struct ospf_route {
	ipv4_prefix_t 			prefix;
	ospf_cost_t 			cost;
};

struct ospf_virtual_link {

};

#endif /* _ROUTER_OSPF_H */
