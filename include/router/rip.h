// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/rip.h
 *
 * 	Routing Information Protocol (RIP)
 */

#ifndef _ROUTER_RIP_H
#define _ROUTER_RIP_H

#include <voltos/inet.h>
#include <voltos/types.h>

struct rip_protocol {
	bool 				enabled;
};

struct rip_interface {
	bool 				passive;
};

struct rip_neighbour {
	ipv4_addr_t 			address;
};

struct rip_route {
	ipv4_prefix_t 			prefix;
};

struct rip_offset_list {

};

#endif /* _ROUTER_RIP_H */
