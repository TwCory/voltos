// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/idrp.h
 *
 *	Inter-Domain Routing Protocol (IDRP)
 */

#ifndef _ROUTER_IDRP_H
#define _ROUTER_IDRP_H

struct idrp_interface {
	struct idrp_router 		*idrp;
	struct interface 		*interface;
};

struct idrp_route {
	struct idrp_router 		*idrp;
	struct route 			*route;
};

struct idrp_router {

};

extern void idrp_interface_init(void);
extern void idrp_router_init(void);

#endif /* _ROUTER_IDRP_H */
