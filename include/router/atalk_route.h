// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/atalk_route.h
 *
 */

#ifndef _ROUTER_ATALK_ROUTE_H
#define _ROUTER_ATALK_ROUTE_H

#include <router/atalk.h>

struct atalk_route_node {
	struct atalk_protocol 		*atalk;
	struct atalk_interface 		*interface;
};

struct atalk_route_table {

};

#endif /* _ROUTER_ATALK_ROUTE_H */
