// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/vrf.h
 *
 *	Virtual Routing and Forwarding (VRF)
 */

#ifndef _ROUTER_VRF_H
#define _ROUTER_VRF_H

struct vrf {
	const char 			vrf_name[VRF_NAME_SIZE];
	vrf_id_t			vrf_id;
};

#endif /* _ROUTER_VRF_H */
