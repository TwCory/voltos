// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/eigrp/types.h
 *
 */

#ifndef _ROUTER_EIGRP_TYPES_H
#define _ROUTER_EIGRP_TYPES_H

#include <voltos/inet.h>
#include <voltos/types.h>

typedef asn16_t 					eigrp_asn_t;

typedef ip_addr_t 					eigrp_address_t;
typedef ip_prefix_t 					eigrp_prefix_t;

typedef enum {
	EIGRP_ADDRESS_FAMILY_T_UNSPEC			= 0,
	EIGRP_ADDRESS_FAMILY_T_IPV4_UNICAST		= 1,
	EIGRP_ADDRESS_FAMILY_T_IPV6_UNICAST		= 2,
	__EIGRP_ADDRESS_FAMILY_T_MAX__
} eigrp_address_family_t;

#endif /* _ROUTER_EIGRP_TYPES_H */
