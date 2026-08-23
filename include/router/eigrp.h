// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/eigrp.h
 *
 * 	Enhanced Interior Gateway Routing Protocol (EIGRP)
 */

#ifndef _ROUTER_EIGRP_H
#define _ROUTER_EIGRP_H

struct eigrp_protocol;

struct eigrp_interface {
	struct eigrp_protocol 		*eigrp;

};

struct eigrp_neighbour {
	struct eigrp_protocol 		*eigrp;

};

struct eigrp_protocol {

};

struct eigrp_route {
	struct eigrp_protocol 		*eigrp;

};

struct eigrp_router {
	struct eigrp_protocol 		*eigrp;

};

#endif /* _ROUTER_EIGRP_H */
