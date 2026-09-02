// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/ipv4/interface.h
 *
 */

#ifndef _ROUTER_IPV4_INTERFACE_H
#define _ROUTER_IPV4_INTERFACE_H

#include <voltos/inet.h>
#include <voltos/types.h>

struct ipv4_interface {
	ipv4_addr_t 			broadcast_address;
	bool 				clear_dont_fragment;
	bool 				directed_broadcast;
	ipv4_addr_t 			helper_address;
	bool 				local_proxy_arp;
	bool 				mask_reply;
	ip_mtu_t 			mtu;
	bool 				network_broadcast;
	bool 				proxy_arp;
	bool 				redirects;
	ip_ttl_t 			ttl;
};

#endif /* _ROUTER_IPV4_INTERFACE_H */
