// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/rip.h
 *
 *	Routing Information Protocol (RIP)
 */

#ifndef _ROUTER_RIP_H
#define _ROUTER_RIP_H

struct rip_router;

struct rip_interface {
	struct rip_router 		*rip;
	struct interface 		*interface;
};

struct rip_neighbour {
	struct rip_router 		*rip;
};

struct rip_offset_list {
	struct rip_router 		*rip;
};

struct rip_route {
	struct rip_router 		*rip;
	struct route 			*route;
};

struct rip_router {

};

extern void rip_interface_init(void);
extern void rip_router_init(void);

extern void rip_request_send();
extern void rip_request_recv();

extern void rip_response_send();
extern void rip_response_recv();

extern void rip_traceOff_send();
extern void rip_traceOff_recv();

extern void rip_traceOn_send();
extern void rip_traceOn_recv();

#endif /* _ROUTER_RIP_H */
