// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/vlan.h
 *
 * 	Virtual Local Area Network (VLAN)
 */

#ifndef _NBAPI_VOLTOS_VLAN_H
#define _NBAPI_VOLTOS_VLAN_H

#define VLAN_NAME_SIZE			(32)
#define VLAN_COMMENT_SIZE		(100)

#define VLAN_ID_MIN			1
#define VLAN_ID_MAX			4094

#define VLAN_ID_DEFAULT			1
#define VLAN_ID_FDDI_DEFAULT		1002
#define VLAN_ID_TOKEN_RING_DEFAULT	1003
#define VLAN_ID_FDDINET_DEFAULT		1004
#define VLAN_ID_TRNET_DEFAULT		1005

#define VLAN_NAME_DEFAULT		"default"
#define VLAN_NAME_FDDI_DEFAULT		"fddi-default"
#define VLAN_NAME_TOKEN_RING_DEFAULT	"token-ring-default"
#define VLAN_NAME_FDDINET_DEFAULT	"fddinet-default"
#define VLAN_NAME_TRNET_DEFAULT		"trnet-default"

typedef unsigned short 			__voltos_vlan_id_t;

enum vlan_media_type {
	VLAN_MEDIA_TYPE_UNSPEC		= 0,
	VLAN_MEDIA_TYPE_ETHERNET	= 1,
	VLAN_MEDIA_TYPE_FDDI		= 2,
	VLAN_MEDIA_TYPE_FDDI_NET	= 3,
	VLAN_MEDIA_TYPE_TR		= 4,
	VLAN_MEDIA_TYPE_TR_NET		= 5,
	VLAN_MEDIA_TYPE_UNSUPPORTED	= 6,
	__VLAN_MEDIA_TYPE_MAX__
};

#define VLAN_MEDIA_TYPE_MAX		(__VLAN_MEDIA_TYPE_MAX__ - 1)

enum vlan_state {
	VLAN_STATE_UNSPEC		= 0,
	VLAN_STATE_ACTIVE		= 1,
	VLAN_STATE_SUSPENDED		= 2,
	__VLAN_STATE_MAX__
};

#define VLAN_STATE_MAX			(__VLAN_STATE_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_VLAN_H */
