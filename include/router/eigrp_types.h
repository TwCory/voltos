// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/eigrp_types.h
 *
 */

#ifndef _ROUTER_EIGRP_TYPES_H
#define _ROUTER_EIGRP_TYPES_H

#include <voltos/inet.h>
#include <voltos/types.h>

typedef asn16_t 			eigrp_asn_t;

typedef u64 				eigrp_bandwidth_t;
typedef u64 				eigrp_delay_t;
typedef u64 				eigrp_metric_t;
typedef u32 				eigrp_scaled_t;

typedef u32 				eigrp_system_metric_t;
typedef u32	 			eigrp_system_delay_t;
typedef u32 				eigrp_system_bandwidth_t;

typedef enum {
	EIGRP_AFI_T_UNSPEC		= 0,
	EIGRP_AFI_T_IPV4_UNICAST	= 1,
	EIGRP_AFI_T_IPV6_UNICAST	= 2,
	__EIGRP_AFI_T_MAX__
} eigrp_afi_t;

#endif /* _ROUTER_EIGRP_TYPES_H */
