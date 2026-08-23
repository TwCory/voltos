// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/rip_types.h
 *
 */

#ifndef _ROUTER_RIP_TYPES_H
#define _ROUTER_RIP_TYPES_H

#include <voltos/types.h>

#define RIP_METRIC_MIN						1
#define RIP_METRIC_MAX						15
#define RIP_METRIC_INFINITY					16

typedef u8 							rip_metric_t;

typedef enum {
	RIP_VERSION_T_UNSPEC 					= 0,
	RIP_VERSION_T_V1 					= 1,
	RIP_VERSION_T_V2 					= 2,
	__RIP_VERSION_T_MAX__
} rip_version_t;

typedef enum {
	RIP_SPLIT_HORIZON_TYPE_T_DISABLED 			= 0,
	RIP_SPLIT_HORIZON_TYPE_T_ENABLED 			= 1,
	RIP_SPLIT_HORIZON_TYPE_T_ENABLED_POISON_REVERSE 	= 2,
	__RIP_SPLIT_HORIZON_TYPE_T_MAX__
} rip_split_horizon_type_t;

#endif /* _ROUTER_RIP_TYPES_H */
