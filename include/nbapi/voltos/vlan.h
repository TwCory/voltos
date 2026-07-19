#ifndef _NBAPI_VOLTOS_VLAN_H
#define _NBAPI_VOLTOS_VLAN_H

#include <voltos/types.h>

#define VLAN_NAME_SIZE				32
#define VLAN_GROUP_NAME_SIZE			32

#define VLAN_ID_MIN				1
#define VLAN_ID_MAX				4095

typedef __u16 					__voltos_vlan_id_t;

enum vlan_state {
	VLAN_STATE_T_UNSPEC			= 0,
	VLAN_STATE_T_ACTIVE			= 1,
	VLAN_STATE_T_SUSPENDED			= 2,
	__VLAN_STATE_T_MAX__
};

enum vlan_media_type {
	VLAN_MEDIA_TYPE_T_UNSPEC		= 0,
	VLAN_MEDIA_TYPE_T_ETHERNET		= 1,
	VLAN_MEDIA_TYPE_T_FDDI			= 2,
	VLAN_MEDIA_TYPE_T_TOKEN_RING		= 3,
	VLAN_MEDIA_TYPE_T_FDDI_NET		= 4,
	VLAN_MEDIA_TYPE_T_TR_NET		= 5,
	__VLAN_MEDIA_TYPE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_VLAN_H */
