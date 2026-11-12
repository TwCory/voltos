// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/ripng.h
 *
 *	Routing Information Protocol, Next Generation (RIPng)
 */

#ifndef _ROUTER_RIPNG_H
#define _ROUTER_RIPNG_H

struct rip6_router;

struct rip6_interface {
	struct rip6_router 		*rip6;
	struct interface 		*interface;
};

struct rip6_neighbour {
	struct rip6_router 		*rip6;
};

struct rip6_offset_list {
	struct rip6_router 		*rip6;
};

struct rip6_route {
	struct rip6_router 		*rip6;
	struct route 			*route;
};

struct rip6_router {

};

extern void rip6_interface_init(void);
extern void rip6_router_init(void);

extern void rip6_request_send();
extern void rip6_request_recv();

extern void rip6_response_send();
extern void rip6_response_recv();

#endif /* _ROUTER_RIPNG_H */
