// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/sdrp.h
 *
 * 	Source Demand Routing Protocol (SDRP)
 */

#ifndef _ROUTER_SDRP_H
#define _ROUTER_SDRP_H

#include <voltos/if.h>
#include <voltos/route.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <net/protocol.h>

struct sdrp_protocol;

struct sdrp_interface {
	struct sdrp_protocol 		*sdrp;
	struct interface 		*interface;
};

struct sdrp_protocol {
	struct protocol 		*protocol;
	struct vrf 			*vrf;

	struct route_table 		*route_table;

	bool 				enabled;
	u8 				distance;
};

struct sdrp_route {
	struct sdrp_protocol 		*sdrp;
	struct route 			*route;
};

struct sdrp_router {
	struct sdrp_protocol 		*sdrp;

	bool 				shutdown;
};

#endif /* _ROUTER_SDRP_H */
