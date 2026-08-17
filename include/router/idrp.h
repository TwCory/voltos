// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/idrp.h
 *
 */

#ifndef _ROUTER_IDRP_H
#define _ROUTER_IDRP_H

#include <voltos/idrp.h>
#include <voltos/if.h>
#include <voltos/inet.h>
#include <voltos/route.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <net/protocol.h>

struct idrp_protocol;

struct idrp_interface {
	struct idrp_protocol 		*idrp;
	struct interface 		*interface;
};

struct idrp_protocol {
	struct protocol 		*protocol;
	struct vrf 			*vrf;

	struct route_table 		*route_table;

	bool 				enabled;
	u8 				distance;
};

struct idrp_route {
	struct idrp_protocol 		*idrp;
	struct route 			*route;

	ip_prefix_t 			prefix;
};

struct idrp_router {
	struct idrp_protocol 		*idrp;

	bool 				shutdown;
};

#endif /* _ROUTER_IDRP_H */
