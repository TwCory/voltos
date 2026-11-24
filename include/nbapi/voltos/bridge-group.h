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
	BRIDGE_GROUP_MODE_UNSPEC		= 0,
	BRIDGE_GROUP_MODE_CRB			= 1,
	BRIDGE_GROUP_MODE_IRB			= 2,
	__BRIDGE_GROUP_MODE_MAX__
};

#define BRIDGE_GROUP_MODE_MAX			(__BRIDGE_GROUP_MODE_MAX__ - 1)

enum bridge_group_code {
	BRIDGE_GROUP_CODE_UNSPEC		= 0,
	BRIDGE_GROUP_CODE_PERMENANT		= 1,
	BRIDGE_GROUP_CODE_SELF			= 2,
	__BRIDGE_GROUP_CODE_MAX__
};

#define BRIDGE_GROUP_CODE_MAX			(__BRIDGE_GROUP_CODE_MAX__ - 1)

enum bridge_group_action {
	BRIDGE_GROUP_ACTION_UNSPEC		= 0,
	BRIDGE_GROUP_ACTION_FORWARD		= 1,
	BRIDGE_GROUP_ACTION_RECEIVE		= 2,
	__BRIDGE_GROUP_ACTION_MAX__
};

#define BRIDGE_GROUP_ACTION_MAX			(__BRIDGE_GROUP_ACTION_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_BRIDGE_GROUP_H */
