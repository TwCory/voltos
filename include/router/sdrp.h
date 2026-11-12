// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/sdrp.h
 *
 *	Source Demand Routing Protocol (SDRP)
 */

#ifndef _ROUTER_SDRP_H
#define _ROUTER_SDRP_H

struct sdrp_interface {
	struct sdrp_router		*sdrp;
	struct interface 		*interface;
};

struct sdrp_route {
	struct sdrp_router		*sdrp;
	struct route 			*route;
};

struct sdrp_router {

};

extern void sdrp_interface_init(void);
extern void sdrp_router_init(void);

#endif /* _ROUTER_SDRP_H */
