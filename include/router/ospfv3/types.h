// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/ospfv3/types.h
 *
 */

#ifndef _ROUTER_OSPFV3_TYPES_H
#define _ROUTER_OSPFV3_TYPES_H

#include <voltos/inet.h>
#include <voltos/types.h>

typedef ip_addr_t 					ospfv3_address_t;
typedef ip_prefix_t 					ospfv3_prefix_t;

typedef enum {
	OSPFV3_ADDRESS_FAMILY_T_UNSPEC			= 0,
	OSPFV3_ADDRESS_FAMILY_T_IPV4_UNICAST		= 1,
	OSPFV3_ADDRESS_FAMILY_T_IPV6_UNICAST		= 2,
	__OSPFV3_ADDRESS_FAMILY_T_MAX__
} ospfv3_address_family_t;

#endif /* _ROUTER_OSPFV3_TYPES_H */
