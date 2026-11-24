// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/if_bridge.h
 *
 *	Bridge Interface Definitions
 */

#ifndef _NBAPI_VOLTOS_IF_BRIDGE_H
#define _NBAPI_VOLTOS_IF_BRIDGE_H

enum bridge_mac_type {
	BRIDGE_MAC_TYPE_UNSPEC			= 0,
	BRIDGE_MAC_TYPE_STATIC			= 1,
	BRIDGE_MAC_TYPE_DYNAMIC			= 2,
	__BRIDGE_MAC_TYPE_MAX__
};

#define BRIDGE_MAC_TYPE_MAX			(__BRIDGE_MAC_TYPE_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_IF_BRIDGE_H */
