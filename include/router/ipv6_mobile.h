// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/ipv6_mobile.h
 *
 */

#ifndef _ROUTER_IPV6_MOBILE_H
#define _ROUTER_IPV6_MOBILE_H

#include <voltos/if.h>
#include <voltos/route.h>

struct pmipv6_interface {
	struct interface 		*interface;
};

struct pmipv6_route {
	struct route 			*route;
};

struct pmipv6_router {

};

#endif /* _ROUTER_IPV6_MOBILE_H */
