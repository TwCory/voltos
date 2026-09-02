// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/ipv6/interface.h
 *
 */

#ifndef _ROUTER_IPV6_INTERFACE_H
#define _ROUTER_IPV6_INTERFACE_H

#include <voltos/inet.h>
#include <voltos/types.h>

struct ipv6_interface {
	bool 			enable;
	u8 			hop_limit;
	ip_mtu_t 		mtu;
	bool 			redirects;
};

#endif /* _ROUTER_IPV6_INTERFACE_H */
