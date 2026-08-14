// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/nhrp.h
 *
 * 	Next-Hop Resolution Protocol (NHRP)
 */

#ifndef _ROUTER_NHRP_H
#define _ROUTER_NHRP_H

#include <voltos/inet.h>
#include <voltos/types.h>

struct nhrp_protocol {
	bool 			enabled;
};

struct nhrp_interface {

};

struct nhrp_route {
	ip_prefix_t 		prefix;
};

#endif /* _ROUTER_NHRP_H */
