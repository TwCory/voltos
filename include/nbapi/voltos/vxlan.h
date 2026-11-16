// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/vxlan.h
 *
 * 	Virtual Extensible Local Area Network (VXLAN)
 */

#ifndef _NBAPI_VOLTOS_VXLAN_H
#define _NBAPI_VOLTOS_VXLAN_H

#define VXLAN_PORT		4789
#define VXLAN_VNI_SIZE		3

struct vxlan_vni {
	unsigned char		s_vni[VXLAN_VNI_SIZE];
};

struct vxlan_hdr {

};

#endif /* _NBAPI_VOLTOS_VXLAN_H */
