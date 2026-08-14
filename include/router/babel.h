// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/babel.h
 *
 * 	Babel Routing Protocol
 */

#ifndef _ROUTER_BABEL_H
#define _ROUTER_BABEL_H

#include <voltos/inet.h>
#include <voltos/types.h>

struct babel_protocol {
	bool 				enabled;
};

struct babel_interface {
	bool 				passive;
};

struct babel_neighbour {
	ip_addr_t 			address;
};

struct babel_source {
	ip_prefix_t 			prefix;
};

struct babel_route {
	ip_prefix_t 			prefix;
};

struct babel_xroute {
	ip_prefix_t 			prefix;
};

#endif /* _ROUTER_BABEL_H */
