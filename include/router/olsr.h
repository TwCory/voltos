// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/olsr.h
 *
 * 	Optimized Link State Routing (OLSR)
 */

#ifndef _ROUTER_OLSR_H
#define _ROUTER_OLSR_H

#include <voltos/inet.h>
#include <voltos/types.h>

struct olsr_protocol {
	bool 			enabled;
};

struct olsr_interface {
	bool 			passive;
};

struct olsr_neighbour {

};

struct olsr_route {
	ip_prefix_t 		prefix;
};

struct olsr_mpr {

};

struct olsr_link {

};

struct olsr_neighbourhood {

};

#endif /* _ROUTER_OLSR_H */
