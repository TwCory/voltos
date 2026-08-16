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

struct openfabric_interface {
	struct interface 		*interface;
};

struct openfabric_protocol {
	struct protocol 		*protocol;
	struct vrf 			*vrf;
};

struct openfabric_route {
	struct route 			*route;

	ip_prefix_t 			prefix;
};

struct openfabric_router {
	bool 				shutdown;
};

#endif /* _ROUTER_OPENFABRIC_H */
