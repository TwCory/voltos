// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/dsr.h
 *
 * 	Dynamic Source Routing (DSR)
 */

#ifndef _ROUTER_DSR_H
#define _ROUTER_DSR_H

#include <voltos/dsr.h>
#include <voltos/if.h>
#include <voltos/inet.h>
#include <voltos/route.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <net/protocol.h>

struct dsr_interface {
	struct interface 		*interface;
};

struct dsr_protocol {
	struct protocol 		*protocol;
	struct vrf 			*vrf;
};

struct dsr_route {
	struct route 			*route;

	ip_prefix_t 			prefix;
};

struct dsr_router {
	bool 				shutdown;
};

#endif /* _ROUTER_DSR_H */
