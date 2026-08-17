// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/atalk_route.h
 *
 */

#ifndef _ROUTER_ATALK_ROUTE_H
#define _ROUTER_ATALK_ROUTE_H

#include <voltos/atalk.h>
#include <voltos/atalk_route.h>
#include <voltos/route.h>
#include <router/atalk.h>

struct atalk_route {
	struct atalk_protocol 		*atalk;
	struct route 			*route;
	struct atalk_interface 		*interface;
};

#endif /* _ROUTER_ATALK_ROUTE_H */
