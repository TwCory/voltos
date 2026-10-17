// SPDX-License-Identifier: BSD-3-Clause

/*
 *  	include/nbapi/voltos/bbu.h
 *
 *	Battery Backup Unit (BBU) Definitions
 */

#ifndef _NBAPI_VOLTOS_BBU_H
#define _NBAPI_VOLTOS_BBU_H

#include <voltos/types.h>

typedef __u8 					__voltos_bbu_index_t;

enum bbu_type {
	BBU_TYPE_T_UNSPEC			= 0,
	BBU_TYPE_T_LEAD_ACID			= 1,
	BBU_TYPE_T_LITHIUM_ION			= 2,
	BBU_TYPE_T_LITHIUM_POLYMER		= 3,
	__BBU_TYPE_T_MAX__
};

enum bbu_state {
	BBU_STATE_T_UNSPEC			= 0,
	BBU_STATE_T_ERROR			= 1,
	BBU_STATE_T_BAD_CELL			= 2,
	BBU_STATE_T_CHARGING			= 3,
	BBU_STATE_T_DISCHARGING			= 4,
	BBU_STATE_T_FULL			= 5,
	BBU_STATE_T_EMPTY			= 6,
	BBU_STATE_T_IDLE			= 7,
	__BBU_STATE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_BBU_H */
