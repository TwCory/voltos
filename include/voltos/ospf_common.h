// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/ospf_common.h
 *
 */

#ifndef _VOLTOS_OSPF_COMMON_H
#define _VOLTOS_OSPF_COMMON_H

#include <voltos/types.h>

typedef __u16					ospf_cost_t;
typedef __u16					ospf_pid_t;

typedef __net32 				ospf_area_id_t;
typedef __net32 				ospf_router_id_t;

typedef enum {
	OSPF_AREA_TYPE_T_UNSPEC			= 0,
	OSPF_AREA_TYPE_T_BACKBONE		= 1,
	OSPF_AREA_TYPE_T_NORMAL			= 2,
	OSPF_AREA_TYPE_T_STUB			= 3,
	OSPF_AREA_TYPE_T_TOTALLY_STUBBY		= 4,
	OSPF_AREA_TYPE_T_NSSA			= 5,
	OSPF_AREA_TYPE_T_TOTALLY_NSSA		= 6,
	__OSPF_AREA_TYPE_T_MAX__
} ospf_area_type_t;

typedef enum {
	OSPF_NETWORK_TYPE_T_UNSPEC		= 0,
	OSPF_NETWORK_TYPE_T_BROADCAST		= 1,
	OSPF_NETWORK_TYPE_T_NBMA		= 2,
	OSPF_NETWORK_TYPE_T_P2P			= 3,
	OSPF_NETWORK_TYPE_T_P2MP		= 4,
	OSPF_NETWORK_TYPE_T_P2MP_NB		= 5,
	OSPF_NETWORK_TYPE_T_PASSIVE		= 6,
	__OSPF_NETWORK_TYPE_T_MAX__
} ospf_network_type_t;

#endif /* _VOLTOS_OSPF_COMMON_H */
