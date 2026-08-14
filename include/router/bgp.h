// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/bgp.h
 *
 * 	Border Gateway Protocol (BGP)
 */

#ifndef _ROUTER_BGP_H
#define _ROUTER_BGP_H

#include <voltos/inet.h>
#include <voltos/types.h>

struct bgp_protocol {
	asn32_t 			asn;
	bool 				enabled;
};

struct bgp_interface {
	bool 				passive;
};

struct bgp_route {
	ip_prefix_t 			prefix;
};

#endif /* _ROUTER_BGP_H */
