// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/nat64.h
 *
 */

#ifndef _ROUTER_NAT64_H
#define _ROUTER_NAT64_H

struct nat64_interface {
	struct interface 		*interface;
};

struct nat64_route {
	struct route 			*route;
};

extern void nat64_interface_init(void);

#endif /* _ROUTER_NAT64_H */
