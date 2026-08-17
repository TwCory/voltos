// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/isis.h
 *
 */

#ifndef _ROUTER_ISIS_H
#define _ROUTER_ISIS_H

#include <voltos/if.h>
#include <voltos/inet.h>
#include <voltos/isis.h>
#include <voltos/nsap.h>
#include <voltos/route.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <net/neighbour.h>
#include <net/neighbour_table.h>
#include <net/protocol.h>

struct isis_protocol;

struct isis_circuit {
	struct isis_protocol 		*isis;
};

struct isis_csm {
	struct isis_protocol 		*isis;
};

struct isis_interface {
	struct isis_protocol 		*isis;
	struct interface 		*interface;
};

struct isis_neighbour {
	struct isis_protocol 		*isis;
	struct neighbour 		*neighbour;
};

struct isis_protocol {
	struct protocol 		*protocol;
	struct vrf 			*vrf;

	struct route_table 		*route_table;

	bool 				enabled;
	u8 				distance;
	nsap_addr_t 			domain;
};

struct isis_route {
	struct isis_protocol 		*isis;
	struct route 			*route;
};

struct isis_router {
	struct isis_protocol 		*isis;

	bool 				shutdown;
};

#endif /* _ROUTER_ISIS_H */
