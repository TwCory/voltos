// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/eigrp.h
 *
 * 	Enhanced Interior Gateway Routing Protocol (EIGRP)
 */

#ifndef _ROUTER_EIGRP_H
#define _ROUTER_EIGRP_H

#include <voltos/inet.h>
#include <voltos/types.h>

struct eigrp_protocol {
	asn16_t 			asn;
	bool 				enabled;
};

struct eigrp_interface {
	bool 				passive;
};

struct eigrp_neighbour {
	ip_addr_t 			address;
};

struct eigrp_route {
	ip_prefix_t 			prefix;
};

#endif /* _ROUTER_EIGRP_H */
