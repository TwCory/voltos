#ifndef _NBAPI_VOLTOS_VRF_H
#define _NBAPI_VOLTOS_VRF_H

#include <voltos/types.h>

#define VRF_NAME_SIZE				64
#define VRF_LIST_NAME_SIZE			64

typedef __u32 					__voltos_vrf_id_t;

enum vrf_afi {
	VRF_AFI_T_UNSPEC			= 0,
	VRF_AFI_T_IPV4_UNICAST			= 1,
	VRF_AFI_T_IPV6_UNICAST			= 2,
	VRF_AFI_T_IPV4_MULTICAST		= 3,
	VRF_AFI_T_IPV6_MULTICAST		= 4,
	__VRF_AFI_T_MAX__
};

#endif /* _NBAPI_VOLTOS_VRF_H */
