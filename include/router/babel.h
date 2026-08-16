// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/babel.h
 *
 * 	Babel Routing Protocol
 */

#ifndef _ROUTER_BABEL_H
#define _ROUTER_BABEL_H

#include <voltos/babel.h>
#include <voltos/if.h>
#include <voltos/inet.h>
#include <voltos/route.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <net/neighbour.h>
#include <net/neighbour_table.h>
#include <net/protocol.h>

struct babel_interface {
	struct interface 		*interface;
};

struct babel_neighbour {
	struct neighbour 		*neighbour;
};

struct babel_protocol {
	struct protocol 		*protocol;
	struct vrf 			*vrf;
};

struct babel_route {
	struct route 			*route;

	ip_prefix_t 			prefix;
};

struct babel_router {
	bool 				shutdown;
};

struct babel_source {

};

struct babel_xroute {

};

#endif /* _ROUTER_BABEL_H */
