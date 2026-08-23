// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/bgp.h
 *
 * 	Border Gateway Protocol (BGP)
 */

#ifndef _ROUTER_BGP_H
#define _ROUTER_BGP_H

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

};

struct bgp_large_community {

};

struct bgp_next_hop {
	struct bgp_protocol 		*bgp;

};

struct bgp_peer {
	struct bgp_protocol 		*bgp;
};

struct bgp_peer_group {
	struct bgp_protocol 		*bgp;
};

struct bgp_protocol {

};

struct bgp_route {
	struct bgp_protocol 		*bgp;

};

struct bgp_router {
	struct bgp_protocol 		*bgp;

};

struct bgp_update_group {
	struct bgp_protocol 		*bgp;
};

#endif /* _ROUTER_BGP_H */
