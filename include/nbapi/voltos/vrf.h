// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/vrf.h
 *
 * 	Virtual Routing and Forwarding (VRF)
 */

#ifndef _NBAPI_VOLTOS_VRF_H
#define _NBAPI_VOLTOS_VRF_H

#define VRF_NAME_SIZE					32
#define VRF_COMMENT_SIZE				100

typedef unsigned int 					__voltos_vrf_id_t;

enum vrf_instance_type {
	VRF_INSTANCE_TYPE_T_UNSPEC			= 0,
	VRF_INSTANCE_TYPE_T_IPV4_ONLY			= 1,
	VRF_INSTANCE_TYPE_T_PROTOCOL_INDEPENDENT	= 2,
	__VRF_INSTANCE_TYPE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_VRF_H */
