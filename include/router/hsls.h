// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/hsls.h
 *
 *	Hazy-Sighted Link State (HSLS)
 */

#ifndef _ROUTER_HSLS_H
#define _ROUTER_HSLS_H

struct hsls_interface {
	struct hsls_router		*hsls;
	struct interface 		*interface;
};

struct hsls_route {
	struct hsls_router		*hsls;
	struct route 			*route;
};

struct hsls_router {

};

extern void hsls_interface_init(void);
extern void hsls_router_init(void);

extern void hsls_msg_send();
extern void hsls_msg_recv();

#endif /* _ROUTER_HSLS_H */
