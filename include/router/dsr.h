// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/dsr.h
 *
 *	Dynamic Source Routing (DSR)
 */

#ifndef _ROUTER_DSR_H
#define _ROUTER_DSR_H

struct dsr_interface {
	struct dsr_router 		*dsr;
	struct interface 		*interface;
};

struct dsr_route {
	struct dsr_router		*dsr;
	struct route 			*route;
};

struct dsr_router {

};

extern void dsr_interface_init(void);
extern void dsr_router_init(void);

extern void dsr_msg_send();
extern void dsr_msg_recv();

#endif /* _ROUTER_DSR_H */
