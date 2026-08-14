// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/ripng.h
 *
 * 	Routing Information Protocol Next Generation (RIPng)
 */

#ifndef _ROUTER_RIPNG_H
#define _ROUTER_RIPNG_H

#include <voltos/inet.h>
#include <voltos/types.h>

struct ripng_protocol {
	bool 				enabled;
};

struct ripng_interface {
	bool 				passive;
};

struct ripng_neighbour {
	ipv6_addr_t 			address;
};

struct ripng_route {
	ipv6_prefix_t 			prefix;
};

struct ripng_offset_list {

};

#endif /* _ROUTER_RIPNG_H */
