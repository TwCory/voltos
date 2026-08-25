// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/babel_route.h
 *
 */

#ifndef _ROUTER_BABEL_ROUTE_H
#define _ROUTER_BABEL_ROUTE_H

#include <voltos/types.h>
#include <router/babel.h>
#include <router/babel_types.h>

struct babel_route {
	struct babel_protocol 		*babel;
	struct babel_source 		*source;
	struct babel_neighbour 		*neighbour;

	babel_cost_t 			ref_metric;
	babel_cost_t 			cost;
	babel_cost_t 			add_metric;
	u16 				seq_no;
	babel_addr_t 			next_hop;
	time_t 				time;
	u16 				hold_time;
	babel_cost_t 			smoothed_metric;
	time_t 				smoothed_metric_time;
	s16 				installed;
};

#endif /* _ROUTER_BABEL_ROUTE_H */
