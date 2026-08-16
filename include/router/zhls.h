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

struct zhls_interface {
	struct interface 		*interface;
};

struct zhls_protocol {
	struct protocol 		*protocol;
	struct vrf 			*vrf;
};

struct zhls_route {
	struct route 			*route;

	ip_prefix_t 			prefix;
};

struct zhls_router {
	bool 				shutdown;
};

#endif /* _ROUTER_ZHLS_H */
