// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/ipv6/general-prefix.h
 *
 */

#ifndef _ROUTER_IPV6_GENERAL_PREFIX_H
#define _ROUTER_IPV6_GENERAL_PREFIX_H

#include <voltos/inet.h>

#define IPV6_GENERAL_PREFIX_NAME_SIZE		64

struct ipv6_general_prefix {
	const char 				name[IPV6_GENERAL_PREFIX_NAME_SIZE];
	ipv6_prefix_t 				prefix;
};

#endif /* _ROUTER_IPV6_GENERAL_PREFIX_H */
