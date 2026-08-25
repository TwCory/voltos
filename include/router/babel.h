// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/babel.h
 *
 * 	Babel Routing Protocol
 */

#ifndef _ROUTER_BABEL_H
#define _ROUTER_BABEL_H

#include <voltos/types.h>
#include <router/babel_route.h>
#include <router/babel_types.h>

struct babel_protocol;

struct babel_interface {
	struct babel_protocol 		*babel;

	babel_cost_t 			cost;

	u16 				hello_seqno;
	u32 				hello_interval;
	u32 				update_interval;

	u16 				rtt_decay;
	u32 				rtt_min;
	u32 				rtt_max;
	u32 				max_rtt_penalty;
};

struct babel_neighbour {
	struct babel_protocol 		*babel;
	struct babel_interface 		*interface;

	babel_addr_t 			address;
	s32 				hello_seqno;
	u16 				reachability;
	u16 				txcost;

	u16 				hello_interval;
	u16 				ihu_interval;

	u32 				hello_send_usec;
	u32 				rtt;
};

struct babel_protocol {

};

struct babel_router {
	struct babel_protocol 		*babel;

};

struct babel_source {
	struct babel_protocol 		*babel;

	babel_router_id_t 		id;
	babel_prefix_t 			prefix;
	u16 				seq_no;
	babel_cost_t 			cost;
	u16 				route_count;
	time_t 				time;
};

struct babel_xroute {
	struct babel_protocol 		*babel;
	struct babel_interface 		*interface;

	babel_prefix_t 			prefix;
	babel_cost_t 			metric;
	s32 				protocol;
};

#endif /* _ROUTER_BABEL_H */
