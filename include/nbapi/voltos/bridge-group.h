// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/bridge-group.h
 *
 *	Bridge Group Instance and
 *	Interface Definitions
 */

#ifndef _NBAPI_VOLTOS_BRIDGE_GROUP_H
#define _NBAPI_VOLTOS_BRIDGE_GROUP_H

#include <voltos/types.h>

#define BRIDGE_GROUP_ID_MIN			1
#define BRIDGE_GROUP_ID_MAX			255

#define BRIDGE_CIRCUIT_GROUP_ID_MIN		1
#define BRIDGE_CIRCUIT_GROUP_ID_MAX		255

typedef __u8 					__br_group_id_t;
typedef __u8	 				__br_cgroup_id_t;

enum bridge_group_mode {
	BRIDGE_GROUP_MODE_T_UNSPEC		= 0,
	BRIDGE_GROUP_MODE_T_CRB			= 1,
	BRIDGE_GROUP_MODE_T_IRB			= 2,
	__BRIDGE_GROUP_MODE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_BRIDGE_GROUP_H */
