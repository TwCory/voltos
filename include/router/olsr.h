// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/olsr.h
 *
 * 	Optimized Link State Routing (OLSR)
 */

#ifndef _ROUTER_OLSR_H
#define _ROUTER_OLSR_H

#include <voltos/if.h>
#include <voltos/inet.h>
#include <voltos/olsr.h>
#include <voltos/route.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <net/protocol.h>

struct olsr_interface {
	struct interface 		*interface;
};

struct olsr_protocol {
	struct protocol 		*protocol;
	struct vrf 			*vrf;
};

struct olsr_route {
	struct route 			*route;

	ip_prefix_t 			prefix;
};

struct olsr_router {
	bool 				shutdown;
};

#endif /* _ROUTER_OLSR_H */
