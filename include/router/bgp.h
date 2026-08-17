// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/bgp.h
 *
 * 	Border Gateway Protocol (BGP)
 */

#ifndef _ROUTER_BGP_H
#define _ROUTER_BGP_H

#include <voltos/bgp.h>
#include <voltos/if.h>
#include <voltos/inet.h>
#include <voltos/route.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <net/nexthop.h>
#include <net/protocol.h>

struct bgp_protocol;

struct bgp_community {

};

struct bgp_community_list {

};

struct bgp_ext_community {

};

struct bgp_fsm {
	struct bgp_protocol 		*bgp;
};

struct bgp_interface {
	struct bgp_protocol 		*bgp;
	struct interface 		*interface;
};

struct bgp_large_community {

};

struct bgp_next_hop {
	struct bgp_protocol 		*bgp;
	struct next_hop 		*next_hop;
};

struct bgp_peer {
	struct bgp_protocol 		*bgp;
};

struct bgp_peer_group {
	struct bgp_protocol 		*bgp;
};

struct bgp_protocol {
	struct protocol 		*protocol;
	struct vrf 			*vrf;

	struct route_table 		*route_table;

	bool 				enabled;
	u8 				distance_ebgp;
	u8 				distance_ibgp;
	asn32_t 			asn;
};

struct bgp_route {
	struct bgp_protocol 		*bgp;
	struct route 			*route;
};

struct bgp_router {
	struct bgp_protocol 		*bgp;

	bool 				shutdown;
};

struct bgp_update_group {
	struct bgp_protocol 		*bgp;
};

#endif /* _ROUTER_BGP_H */
