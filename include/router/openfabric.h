// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/openfabric.h
 *
 */

#ifndef _ROUTER_OPENFABRIC_H
#define _ROUTER_OPENFABRIC_H

#include <voltos/if.h>
#include <voltos/inet.h>
#include <voltos/nsap.h>
#include <voltos/openfabric.h>
#include <voltos/route.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <net/protocol.h>

struct openfabric_protocol;

struct openfabric_interface {
	struct openfabric_protocol 	*openfabric;
	struct interface 		*interface;
};

struct openfabric_protocol {
	struct protocol 		*protocol;
	struct vrf 			*vrf;

	struct route_table 		*route_table;

	bool 				enabled;
	u8 				distance;
	nsap_addr_t 			domain;
};

struct openfabric_route {
	struct openfabric_protocol 	*openfabric;
	struct route 			*route;

	ip_prefix_t 			prefix;
};

struct openfabric_router {
	struct openfabric_protocol 	*openfabric;

	bool 				shutdown;
};

#endif /* _ROUTER_OPENFABRIC_H */
