// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/zhls.h
 *
 *	Zone-Based Hierarchical Link State (ZHLS)
 */

#ifndef _ROUTER_ZHLS_H
#define _ROUTER_ZHLS_H

struct zhls_interface {
	struct zhls_router		*zhls;
	struct interface 		*interface;
};

struct zhls_route {
	struct zhls_router		*zhls;
	struct route 			*route;
};

struct zhls_router {

};

extern void zhls_interface_init(void);
extern void zhls_router_init(void);

extern void zhls_msg_send();
extern void zhls_msg_recv();

#endif /* _ROUTER_ZHLS_H */
