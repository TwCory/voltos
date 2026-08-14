// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/rpl.h
 *
 * 	IPv6 Routing Protocol for Low-Power Lossy Networks (RPL)
 */

#ifndef _ROUTER_RPL_H
#define _ROUTER_RPL_H

#include <voltos/inet.h>
#include <voltos/types.h>

struct rpl_protocol {
	bool 			enabled;
};

struct rpl_interface {
	bool 			passive;
};

struct rpl_route {
	ipv6_prefix_t 		prefix;
};

#endif /* _ROUTER_RPL_H */
