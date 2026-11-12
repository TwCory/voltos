// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/bgp.h
 *
 *	Border Gateway Protocol (BGP)
 */

#ifndef _ROUTER_BGP_H
#define _ROUTER_BGP_H

struct bgp_fsm {
	struct bgp_router		*bgp;
};

struct bgp_interface {
	struct bgp_router 		*bgp;
	struct interface 		*interface;
};

struct bgp_peer {
	struct bgp_router 		*bgp;
};

struct bgp_peer_group {
	struct bgp_router 		*bgp;
};

struct bgp_route {
	struct bgp_router 		*bgp;
	struct route 			*route;
};

struct bgp_router {

};

struct bgp_update_group {
	struct bgp_router 		*bgp;
};

extern void bgp_interface_init(void);
extern void bgp_router_init(void);

extern void bgp_open_send();
extern void bgp_open_recv();

extern void bgp_update_send();
extern void bgp_update_recv();

extern void bgp_notification_send();
extern void bgp_notification_recv();

extern void bgp_keepalive_send();
extern void bgp_keepalive_recv();

extern void bgp_route_refresh_send();
extern void bgp_route_refresh_recv();

#endif /* _ROUTER_BGP_H */
