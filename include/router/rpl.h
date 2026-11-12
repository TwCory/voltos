// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/rpl.h
 *
 *	Routing Protocol for Low-Power/Lossy Networks (RPL)
 */

#ifndef _ROUTER_RPL_H
#define _ROUTER_RPL_H

struct rpl_interface {
	struct rpl_router 		*rpl;
	struct interface 		*interface;
};

struct rpl_route {
	struct rpl_router		*rpl;
	struct route 			*route;
};

struct rpl_router {

};

extern void rpl_interface_init(void);
extern void rpl_router_init(void);

#endif /* _ROUTER_RPL_H */
