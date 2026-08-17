// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/zhls.h
 *
 * 	Zone-Based Hierarchical Link State (ZHLS)
 */

#ifndef _ROUTER_ZHLS_H
#define _ROUTER_ZHLS_H

#include <voltos/if.h>
#include <voltos/inet.h>
#include <voltos/route.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <voltos/zhls.h>
#include <net/protocol.h>

struct zhls_protocol;

struct zhls_interface {
	struct zhls_protocol 		*zhls;
	struct interface 		*interface;
};

struct zhls_protocol {
	struct protocol 		*protocol;
	struct vrf 			*vrf;

	struct route_table 		*route_table;

	bool 				enabled;
	u8 				distance;
};

struct zhls_route {
	struct zhls_protocol 		*zhls;
	struct route 			*route;

	ip_prefix_t 			prefix;
};

struct zhls_router {
	struct zhls_protocol 		*zhls;

	bool 				shutdown;
};

#endif /* _ROUTER_ZHLS_H */
