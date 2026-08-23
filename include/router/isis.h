// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/isis.h
 *
 */

#ifndef _ROUTER_ISIS_H
#define _ROUTER_ISIS_H

struct isis_protocol;

struct isis_circuit {
	struct isis_protocol 		*isis;
};

struct isis_csm {
	struct isis_protocol 		*isis;
};

struct isis_interface {
	struct isis_protocol 		*isis;

};

struct isis_neighbour {
	struct isis_protocol 		*isis;

};

struct isis_protocol {

};

struct isis_route {
	struct isis_protocol 		*isis;

};

struct isis_router {
	struct isis_protocol 		*isis;

};

#endif /* _ROUTER_ISIS_H */
