// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/ip_mobile.h
 *
 */

#ifndef _ROUTER_IP_MOBILE_H
#define _ROUTER_IP_MOBILE_H

#include <voltos/if.h>
#include <voltos/route.h>

struct mobile_interface {
	struct interface 		*interface;
};

struct mobile_route {
	struct route 			*route;
};

struct mobile_router {

};

#endif /* _ROUTER_IP_MOBILE_H */
