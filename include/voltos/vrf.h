// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/vrf.h
 *
 * 	Virtual Routing and Forwarding (VRF) Instances
 */

#ifndef _VOLTOS_VRF_H
#define _VOLTOS_VRF_H

#include <voltos/refcount.h>
#include <nbapi/voltos/vrf.h>

typedef __voltos_vrf_id_t 		vrf_id_t;

struct vrf {
	const char 			vrf_name[VRF_NAME_SIZE];
	vrf_id_t 			vrf_id;

	refcount_t refcount;
};

#endif /* _VOLTOS_VRF_H */
