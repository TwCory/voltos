// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/ipv6_route.h
 *
 */

#ifndef _NBAPI_VOLTOS_IPV6_ROUTE_H
#define _NBAPI_VOLTOS_IPV6_ROUTE_H

enum {
	IPV6_ROUTE_FLAG_F_ANYCAST	= (1 << 0),
	IPV6_ROUTE_FLAG_F_DEFAULT	= (1 << 1),
	IPV6_ROUTE_FLAG_F_PFR		= (1 << 2),
	IPV6_ROUTE_FLAG_F_POLICY	= (1 << 3),
	IPV6_ROUTE_FLAG_F_USER		= (1 << 4),
};

#endif /* _NBAPI_VOLTOS_IPV6_ROUTE_H */
