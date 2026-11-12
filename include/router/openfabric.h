// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/openfabric.h
 *
 *	OpenFabric Routing Protocol
 */

#ifndef _ROUTER_OPENFABRIC_H
#define _ROUTER_OPENFABRIC_H

struct openfabric_interface {
	struct openfabric_router	*openfabric;
	struct interface 		*interface;
};

struct openfabric_router {

};

extern void openfabric_interface_init(void);
extern void openfabric_router_init(void);

#endif /* _ROUTER_OPENFABRIC_H */
