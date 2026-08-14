// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/aodv.h
 *
 * 	Ad-Hoc On-Demand Distance Vector (AODV)
 */

#ifndef _ROUTER_AODV_H
#define _ROUTER_AODV_H

#include <voltos/inet.h>
#include <voltos/types.h>

struct aodv_protocol {
	bool 			enabled;
};

struct aodv_interface {
	bool 			passive;
};

struct aodv_route {
	ipv4_prefix_t 		prefix;
};

#endif /* _ROUTER_AODV_H */
