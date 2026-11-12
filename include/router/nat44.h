// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/nat44.h
 *
 */

#ifndef _ROUTER_NAT44_H
#define _ROUTER_NAT44_H

struct nat44_interface {
	struct interface 		*interface;
};

struct nat44_pool {
	const char 			name[NAT44_POOL_NAME_SIZE];
};

struct nat44_route {
	struct route 			*route;
};

extern void nat44_interface_init(void);

#endif /* _ROUTER_NAT44_H */
