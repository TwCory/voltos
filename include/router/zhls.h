// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/zhls.h
 *
 * 	Zone-Based Hierarchical Link State (ZHLS)
 */

#ifndef _ROUTER_ZHLS_H
#define _ROUTER_ZHLS_H

#include <voltos/inet.h>
#include <voltos/types.h>

struct zhls_protocol {
	bool 			enabled;
};

struct zhls_interface {
	bool 			passive;
};

struct zhls_route {
	ip_prefix_t 		prefix;
};

#endif /* _ROUTER_ZHLS_H */
