// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/pmipv6.h
 *
 *	Proxy Mobile IPv6 (PMIPv6)
 */

#ifndef _ROUTER_PMIPV6_H
#define _ROUTER_PMIPV6_H

struct pmipv6_interface {
	struct pmipv6_router 		*pmipv6;
	struct interface 		*interface;
};

struct pmipv6_route {
	struct pmipv6_router 		*pmipv6;
	struct route 			*route;
};

struct pmipv6_router {

};

extern void pmipv6_interface_init(void);
extern void pmipv6_router_init(void);

#endif /* _ROUTER_PMIPV6_H */
