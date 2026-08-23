// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/zhls.h
 *
 * 	Zone-Based Hierarchical Link State (ZHLS)
 */

#ifndef _ROUTER_ZHLS_H
#define _ROUTER_ZHLS_H

struct zhls_protocol;

struct zhls_interface {
	struct zhls_protocol 		*zhls;

};

struct zhls_protocol {

};

struct zhls_route {
	struct zhls_protocol 		*zhls;

};

struct zhls_router {
	struct zhls_protocol 		*zhls;

};

#endif /* _ROUTER_ZHLS_H */
