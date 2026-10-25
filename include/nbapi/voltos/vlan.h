// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/vlan.h
 *
 * 	Virtual Local Area Network (VLAN)
 */

#ifndef _NBAPI_VOLTOS_VLAN_H
#define _NBAPI_VOLTOS_VLAN_H

#define VLAN_NAME_SIZE			32

#define VLAN_ID_MIN			1
#define VLAN_ID_MAX			4094

typedef unsigned short 			__voltos_vlan_id_t;

enum vlan_state {
	VLAN_STATE_T_UNSPEC		= 0,
	VLAN_STATE_T_ACTIVE		= 1,
	VLAN_STATE_T_SUSPENDED		= 2,
	__VLAN_STATE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_VLAN_H */
