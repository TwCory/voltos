// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/ripng.h
 *
 * 	Routing Information Protocol Next Generation (RIPng)
 */

#ifndef _ROUTER_RIPNG_H
#define _ROUTER_RIPNG_H

#include <voltos/if.h>
#include <voltos/inet.h>
#include <voltos/ripng.h>
#include <voltos/route.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <net/neighbour.h>
#include <net/neighbour_table.h>
#include <net/protocol.h>

struct ripng_interface {
	struct interface 		*interface;
};

struct ripng_neighbour {
	struct neighbour 		*neighbour;
};

struct ripng_offset_list {

};

struct ripng_protocol {
	struct protocol 		*protocol;
	struct vrf 			*vrf;
};

struct ripng_route {
	struct route 			*route;

	ipv6_prefix_t 			prefix;
};

struct ripng_router {
	bool shutdown;
};

#endif /* _ROUTER_RIPNG_H */
