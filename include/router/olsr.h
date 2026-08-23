// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/olsr.h
 *
 * 	Optimized Link State Routing (OLSR)
 */

#ifndef _ROUTER_OLSR_H
#define _ROUTER_OLSR_H

struct olsr_protocol;

struct olsr_interface {
	struct olsr_protocol 		*olsr;

};

struct olsr_protocol {

};

struct olsr_route {
	struct olsr_protocol 		*olsr;

};

struct olsr_router {
	struct olsr_protocol 		*olsr;

};

#endif /* _ROUTER_OLSR_H */
