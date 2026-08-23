// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/decnet_route.h
 *
 */

#ifndef _ROUTER_DECNET_ROUTE_H
#define _ROUTER_DECNET_ROUTE_H

#include <router/decnet.h>

struct decnet_route_node {
	struct decnet_protocol 		*decnet;
	struct decnet_interface 	*interface;
};

struct decnet_route_table {

};

#endif /* _ROUTER_DECNET_ROUTE_H */
