// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/vxlan.h
 *
 */

#ifndef _NBAPI_VOLTOS_VXLAN_H
#define _NBAPI_VOLTOS_VXLAN_H

#include <voltos/types.h>

#define VXLAN_VNI_SIZE			3

struct vxlan_vni {
	__u8 				s_vni[VXLAN_VNI_SIZE];
};

struct vxlan_hdr {

};

#endif /* _NBAPI_VOLTOS_VXLAN_H */
