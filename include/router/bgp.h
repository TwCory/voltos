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

struct bgp_community {

};

struct bgp_community_list {

};

struct bgp_ext_community {

};

struct bgp_fsm {

};

struct bgp_interface {
	struct interface 		*interface;
};

struct bgp_large_community {

};

struct bgp_next_hop {
	struct next_hop 		*next_hop;
};

struct bgp_peer {

};

struct bgp_peer_group {

};

struct bgp_protocol {
	struct protocol 		*protocol;
	struct vrf 			*vrf;
};

struct bgp_route {
	struct route 			*route;
};

struct bgp_router {
	bool 				shutdown;
};

struct bgp_update_group {

};

#endif /* _ROUTER_BGP_H */
