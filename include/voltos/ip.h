#ifndef VOLTOS_IP_H
#define VOLTOS_IP_H

#include <voltos/if.h>
#include <voltos/in.h>
#include <voltos/types.h>
#include <net/protocol.h>
#include <nbapi/voltos/ip.h>

struct ip {
	struct protocol 		*protocol;

	bool 				router;
	bool 				multicast_router;
	bool 				host_router;
	bool 				source_route;

	struct in_addr 			default_gateway;
};

struct ip_interface {
	struct ip 			*ip;
	struct interface 		*interface;

	bool 				enable;
	bool 				forward_broadcast;
	bool 				proxy_arp;
	enum ip_split_horizon_type	split_horizon;
	int 				security_level;
	bool 				icmp_redirects;
	bool 				icmp_unreachables;
	bool 				icmp_mask_replies;
	bool 				fast_switching;
	bool 				fast_switching_same_interface;
	bool 				sse_switching;
	bool 				router_discovery;
	bool 				accounting;
	bool 				header_compression;
	bool 				probe_proxy_name_replies;
	bool 				gateway_discovery;

	u8 				ttl;
	u16 				mtu;
	struct in_addr 			broadcast_address;
	struct in_addr 			helper_address;
	struct in_addr 			*multicast_groups;

	bool 				address_set;
	struct in_addr 			address;
	bool 				netmask_set;
	struct in_addr 			netmask;
};

#endif /* VOLTOS_IP_H */
