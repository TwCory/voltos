#ifndef _NBAPI_VOLTOS_VXLAN_H
#define _NBAPI_VOLTOS_VXLAN_H

#include <voltos/types.h>

#define VXLAN_PORT					4789
#define VXLAN_ALT_PORT					8472

enum vxlan_src_hash_type {
	VXLAN_SRC_HASH_TYPE_T_3TUPLE			= 1,
	VXLAN_SRC_HASH_TYPE_T_3TUPLE_FOR_FRAGMENTS	= 2,
	__VXLAN_SRC_HASH_TYPE_T_MAX__
};

enum vxlan_tunnel_mode {
	VXLAN_TUNNEL_MODE_T_UNSPEC			= 0,
	VXLAN_TUNNEL_MODE_T_DEFAULT_MAC			= 1,
	VXLAN_TUNNEL_MODE_T_GPE				= 2,
	__VXLAN_TUNNEL_MODE_T_MAX__
};

#define VXLAN_VNI_BYTE_SIZE				3

struct vxlan_vni {
	__byte 						bytes[VXLAN_VNI_BYTE_SIZE];
};

#endif /* _NBAPI_VOLTOS_VXLAN_H */
