// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/bridge-domain.h
 *
 * 	Bridge Domain Module
 */

#ifndef _NBAPI_VOLTOS_BRIDGE_DOMAIN_H
#define _NBAPI_VOLTOS_BRIDGE_DOMAIN_H

#define BRIDGE_DOMAIN_ID_MIN			1
#define BRIDGE_DOMAIN_ID_MAX			16000

#define BRIDGE_DOMAIN_MAC_ADDRESS_MIN		1
#define BRIDGE_DOMAIN_MAC_ADDRESS_MAX		65500
#define BRIDGE_DOMAIN_MAC_ADDRESS_DEFAULT	10240

typedef unsigned short 				__voltos_brd_id_t;

enum brd_state {
	BRD_STATE_T_UNSPEC			= 0,
	BRD_STATE_T_DOWN			= 1,
	BRD_STATE_T_UP				= 2,
	__BRD_STATE_T_MAX__
};

enum brd_mac_learning_state {
	BRD_MAC_LEARNING_STATE_T_UNSPEC		= 0,	
	BRD_MAC_LEARNING_STATE_T_DISABLED	= 1,
	BRD_MAC_LEARNING_STATE_T_ENABLED	= 2,
	__BRD_MAC_LEARNING_STATE_T_MAX__
};

enum brd_mac_policy_type {
	BRD_MAC_POLICY_TYPE_T_UNSPEC		= 0,
	BRD_MAC_POLICY_TYPE_T_FORWARD		= 1,
	__BRD_MAC_POLICY_TYPE_T_MAX__
};

enum brd_mac_tag_type {
	BRD_MAC_TAG_TYPE_T_UNSPEC		= 0,
	BRD_MAC_TAG_TYPE_T_DYNAMIC		= 1,
	BRD_MAC_TAG_TYPE_T_STATIC		= 2,
	__BRD_MAC_TAG_TYPE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_BRIDGE_DOMAIN_H */
