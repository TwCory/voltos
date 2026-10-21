// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/bridge-group.h
 *
 * 	Bridge Group Module
 * 	Concurrent Routing and Bridging (CRB)
 * 	Integrated Routing and Bridging (IRB)
 */

#ifndef _NBAPI_VOLTOS_BRIDGE_GROUP_H
#define _NBAPI_VOLTOS_BRIDGE_GROUP_H

typedef unsigned short 				__voltos_br_gid_t;

enum bridge_group_mode {
	BRIDGE_GROUP_MODE_T_UNSPEC		= 0,
	BRIDGE_GROUP_MODE_T_CRB			= 1,
	BRIDGE_GROUP_MODE_T_IRB			= 2,
	__BRIDGE_GROUP_MODE_T_MAX__
};

enum bridge_group_code {
	BRIDGE_GROUP_CODE_T_UNSPEC		= 0,
	BRIDGE_GROUP_CODE_T_PERMENANT		= 1,
	BRIDGE_GROUP_CODE_T_SELF		= 2,
	__BRIDGE_GROUP_CODE_T_MAX__
};

enum bridge_group_action {
	BRIDGE_GROUP_ACTION_T_UNSPEC		= 0,
	BRIDGE_GROUP_ACTION_T_FORWARD		= 1,
	BRIDGE_GROUP_ACTION_T_RECEIVE		= 2,
	__BRIDGE_GROUP_ACTION_T_MAX__
};

#endif /* _NBAPI_VOLTOS_BRIDGE_GROUP_H */
