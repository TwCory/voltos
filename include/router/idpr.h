// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/idpr.h
 *
 */

#ifndef _ROUTER_IDPR_H
#define _ROUTER_IDPR_H

#include <voltos/idpr.h>
#include <voltos/if.h>
#include <voltos/inet.h>
#include <voltos/route.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <net/protocol.h>

struct idpr_interface {
	struct interface 		*interface;
};

struct idpr_protocol {
	struct protocol 		*protocol;
	struct vrf 			*vrf;
};

struct idpr_route {
	struct route 			*route;

	ip_prefix_t 			prefix;
};

struct idpr_router {
	bool 				shutdown;
};

#endif /* _ROUTER_IDPR_H */
