// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/bridge_matm.h
 *
 *	Bridging Subsystem: MAC Address
 *	Translation Manager (MATM) Service
 *	Definitions
 */

#ifndef _NBAPI_VOLTOS_BRIDGE_MATM_H
#define _NBAPI_VOLTOS_BRIDGE_MATM_H

enum matm_table_type {
	MATM_TABLE_TYPE_T_UNSPEC		= 0,
	MATM_TABLE_TYPE_T_VLAN			= 1,
	MATM_TABLE_TYPE_T_VLAN_INDEPENDENT	= 2,
	MATM_TABLE_TYPE_T_L3_INTERFACE		= 3,
	MATM_TABLE_TYPE_T_VLAN_TABLE		= 4,
	__MATM_TABLE_TYPE_T_MAX__
};

enum matm_address_type {
	MATM_ADDRESS_TYPE_T_UNSPEC		= 0,
	MATM_ADDRESS_TYPE_T_STATIC		= 1,
	MATM_ADDRESS_TYPE_T_DYNAMIC		= 2,
	MATM_ADDRESS_TYPE_T_ANY			= 3,
	__MATM_ADDRESS_TYPE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_BRIDGE_MATM_H */
