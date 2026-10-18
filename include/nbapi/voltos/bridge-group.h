// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/bridge-group.h
 *
 * 	Bridge Group
 * 	Concurrent Routing and Bridging (CRB)
 * 	Integrated Routing and Bridging (IRB)
 */

#ifndef _NBAPI_VOLTOS_BRIDGE_GROUP_H
#define _NBAPI_VOLTOS_BRIDGE_GROUP_H

enum bridge_group_mode {
	BRIDGE_GROUP_MODE_T_UNSPEC		= 0,
	BRIDGE_GROUP_MODE_T_CRB			= 1,
	BRIDGE_GROUP_MODE_T_IRB			= 2,
	__BRIDGE_GROUP_MODE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_BRIDGE_GROUP_H */
