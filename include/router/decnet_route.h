// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/decnet_route.h
 *
 */

#ifndef _ROUTER_DECNET_ROUTE_H
#define _ROUTER_DECNET_ROUTE_H

#include <voltos/decnet.h>
#include <voltos/decnet_route.h>
#include <voltos/route.h>
#include <router/decnet.h>

struct decnet_route {
	struct decnet_protocol 		*decnet;
	struct route 			*route;
	struct decnet_interface 	*interface;
};

#endif /* _ROUTER_DECNET_ROUTE_H */
