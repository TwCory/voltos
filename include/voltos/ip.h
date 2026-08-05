// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/ip.h
 *
 */

#ifndef _VOLTOS_IP_H
#define _VOLTOS_IP_H

#include <voltos/inet.h>
#include <voltos/types.h>
#include <nbapi/voltos/ip.h>

struct ip_global_conf {
	ipv4_addr_t				default_gateway;
	bool 					host_routing;
	bool 					multicast_routing;
	bool 					routing;
	bool 					source_route;
};

struct ip_interface_conf {
	ipv4_addr_t				broadcast_address;
	ipv4_addr_t				helper_address;
};

struct ip_host_conf {
	ipv4_addr_t				address;
};

#endif /* _VOLTOS_IP_H */
