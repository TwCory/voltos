// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/ripng_types.h
 *
 */

#ifndef _ROUTER_RIPNG_TYPES_H
#define _ROUTER_RIPNG_TYPES_H

#include <voltos/types.h>

#define RIPNG_METRIC_MIN					1
#define RIPNG_METRIC_MAX					15
#define RIPNG_METRIC_INFINITY					16

typedef u8 							ripng_metric_t;

typedef enum {
	RIPNG_SPLIT_HORIZON_TYPE_T_DISABLED 			= 0,
	RIPNG_SPLIT_HORIZON_TYPE_T_ENABLED 			= 1,
	RIPNG_SPLIT_HORIZON_TYPE_T_ENABLED_POISON_REVERSE 	= 2,
	__RIPNG_SPLIT_HORIZON_TYPE_T_MAX__
} ripng_split_horizon_type_t;

#endif /* _ROUTER_RIPNG_TYPES_H */
