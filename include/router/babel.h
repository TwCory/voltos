// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/babel.h
 *
 *	Babel Routing Protocol
 */

#ifndef _ROUTER_BABEL_H
#define _ROUTER_BABEL_H

struct babel_interface {
	struct babel_router 		*babel;
	struct interface 		*interface;
};

struct babel_neighbour {
	struct babel_router 		*babel;
	struct babel_interface		*interface;
};

struct babel_route {
	struct babel_router 		*babel;
	struct route 			*route;
	struct babel_neighbour		*neighbour;
	struct babel_source		*source;
};

struct babel_router {

};

struct babel_source {
	struct babel_router 		*babel;

};

struct babel_xroute {
	struct babel_router 		*babel;
};

extern void babel_interface_init(void);
extern void babel_router_init(void);

extern void babel_msg_send();
extern void babel_msg_recv();

#endif /* _ROUTER_BABEL_H */
