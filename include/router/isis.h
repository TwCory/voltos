// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/isis.h
 *
 *	Intermediate System to Intermediate System (IS-IS)
 */

#ifndef _ROUTER_ISIS_H
#define _ROUTER_ISIS_H

struct isis_adjacency {
	struct isis_router 		*isis;
};

struct isis_circuit {
	struct isis_router 		*isis;
};

struct isis_interface {
	struct isis_router 		*isis;
	struct interface 		*interface;
};

struct isis_router {

};

extern void isis_interface_init(void);
extern void isis_router_init(void);

#endif /* _ROUTER_ISIS_H */
