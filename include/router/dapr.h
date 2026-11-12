// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/dapr.h
 *
 *	Dynamic Application Policy Routing (DAPR)
 */

#ifndef _ROUTER_DAPR_H
#define _ROUTER_DAPR_H

struct dapr_interface {
	struct interface 		*interface;
};

struct dapr_route {
	struct route 			*route;
};

extern void dapr_interface_init(void);

#endif /* _ROUTER_DAPR_H */
