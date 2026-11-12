// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/idpr.h
 *
 *	Inter-Domain Policy Routing Protocol (IDPR)
 */

#ifndef _ROUTER_IDPR_H
#define _ROUTER_IDPR_H

struct idpr_interface {
	struct idpr_router		*idpr;
	struct interface 		*interface;
};

struct idpr_route {
	struct idpr_router		*idpr;
	struct route 			*route;
};

struct idpr_router {

};

extern void idpr_interface_init(void);
extern void idpr_router_init(void);

#endif /* _ROUTER_IDPR_H */
