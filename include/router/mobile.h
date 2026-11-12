// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/mobile.h
 *
 *	Mobile IP Router
 */

#ifndef _ROUTER_MOBILE_H
#define _ROUTER_MOBILE_H


struct mobile_interface {
	struct mobile_router 		*mobile;
	struct interface 		*interface;
};

struct mobile_route {
	struct mobile_router		*mobile;
	struct route 			*route;
};

struct mobile_router {

};

extern void mobile_interface_init(void);
extern void mobile_router_init(void);

#endif /* _ROUTER_MOBILE_H */
