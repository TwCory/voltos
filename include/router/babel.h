// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/babel.h
 *
 * 	Babel Routing Protocol
 */

#ifndef _ROUTER_BABEL_H
#define _ROUTER_BABEL_H

struct babel_protocol;

struct babel_interface {
	struct babel_protocol 		*babel;

};

struct babel_neighbour {
	struct babel_protocol 		*babel;
	struct babel_interface 		*interface;
};

struct babel_protocol {

};

struct babel_route {
	struct babel_protocol 		*babel;

};

struct babel_router {
	struct babel_protocol 		*babel;

};

struct babel_source {
	struct babel_protocol 		*babel;

};

struct babel_xroute {
	struct babel_protocol 		*babel;

};

#endif /* _ROUTER_BABEL_H */
