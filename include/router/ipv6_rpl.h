// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/ipv6_rpl.h
 *
 */

#ifndef _ROUTER_IPV6_RPL_H
#define _ROUTER_IPV6_RPL_H

struct rpl_protocol;

struct rpl_interface {
	struct rpl_protocol 		*rpl;

};

struct rpl_protocol {

};

struct rpl_route {
	struct rpl_protocol 		*rpl;

};

struct rpl_router {
	struct rpl_protocol 		*rpl;

};

#endif /* _ROUTER_IPV6_RPL_H */
