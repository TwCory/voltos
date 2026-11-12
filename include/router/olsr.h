// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/olsr.h
 *
 *	Optimized Link State Routing (OLSR)
 */

#ifndef _ROUTER_OLSR_H
#define _ROUTER_OLSR_H

struct olsr_interface {
	struct olsr_router 		*olsr;
	struct interface 		*interface;
};

struct olsr_route {
	struct olsr_router		*olsr;
	struct route 			*route;
};

struct olsr_router {

};

extern void olsr_interface_init(void);
extern void olsr_router_init(void);

extern void olsr_hello_send();
extern void olsr_hello_recv();

extern void olsr_tc_send();
extern void olsr_tc_recv();

extern void olsr_mid_send();
extern void olsr_mid_recv();

extern void olsr_hna_send();
extern void olsr_hna_recv();

#endif /* _ROUTER_OLSR_H */
