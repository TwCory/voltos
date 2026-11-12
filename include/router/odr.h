// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/odr.h
 *
 *	On-Demand Routing (ODR)
 */

#ifndef _ROUTER_ODR_H
#define _ROUTER_ODR_H

struct odr_interface {
	struct odr_router		*odr;
	struct interface 		*interface;
};

struct odr_route {
	struct odr_router		*odr;
	struct route 			*route;
};

struct odr_router {

};

extern void odr_interface_init(void);
extern void odr_router_init(void);

#endif /* _ROUTER_ODR_H */
