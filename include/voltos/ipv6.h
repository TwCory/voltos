// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/ipv6.h
 *
 */

#ifndef _VOLTOS_IPV6_H
#define _VOLTOS_IPV6_H

#include <voltos/in6.h>
#include <voltos/types.h>
#include <nbapi/voltos/ipv6.h>

struct ipv6_global_conf {
	bool			flowset;
	__u8			hop_limit;
	bool 			multicast_routing;
	bool			source_route;
	bool 			unicast_routing;
};

struct ipv6_interface_conf {
	bool 			enable;
	__u16			mtu;
	bool			redirects;
	bool			unnumbered;
};

struct ipv6_host_conf {
	struct in6_addr		address;
	char			*hostname;
};

#endif /* _VOLTOS_IPV6_H */
