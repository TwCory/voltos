// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/ip.h
 *
 */

#ifndef _VOLTOS_IP_H
#define _VOLTOS_IP_H

#include <voltos/in.h>
#include <voltos/types.h>
#include <nbapi/voltos/ip.h>

struct ip_global_conf {
	bool 			classless;
	struct in_addr 		default_gateway;
	struct in_addr		*default_networks;
	bool 			host_routing;
	bool 			hostname_strict;
	bool 			multicast_routing;
	bool			options_drop;
	bool 			routing;
	bool 			source_route;
	bool 			sticky_arp;
	bool 			subnet_zero;
};

struct ip_interface_conf {
	struct in_addr		broadcast_address;
	bool			clear_dont_fragment;
	bool 			directed_broadcast;
	struct in_addr 		helper_address;
	bool			local_proxy_arp;
	bool			mask_reply;
	__u16			mtu;
	bool			network_broadcast;
	bool			proxy_arp;
	bool			redirects;
	__u8			ttl;
	bool 			unnumbered;
};

struct ip_host_conf {

};

struct ip_route_conf {

};

#endif /* _VOLTOS_IP_H */
