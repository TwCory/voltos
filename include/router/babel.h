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
#include <net/src.h>

struct babel_protocol;

struct babel_interface {
	struct babel_protocol 		*babel;
	struct interface 		*interface;

	bool 				passive;
};

struct babel_neighbour {
	struct babel_protocol 		*babel;
	struct neighbour 		*neighbour;

	ip_addr_t 			address;
};

struct babel_protocol {
	struct protocol 		*protocol;
	struct vrf 			*vrf;

	struct neighbour_table 		*neighbour_table;
	struct route_table 		*route_table;

	bool 				enabled;
	u8 				distance;
};

struct babel_route {
	struct babel_protocol 		*babel;
	struct route 			*route;

	ip_prefix_t 			prefix;
};

struct babel_router {
	struct babel_protocol 		*babel;

	bool 				shutdown;
};

struct babel_source {
	struct babel_protocol 		*babel;
	struct src_entry 		*source;

	ip_prefix_t 			prefix;
};

struct babel_xroute {
	struct babel_protocol 		*babel;

	ip_prefix_t 			prefix;
};

#endif /* _ROUTER_BABEL_H */
