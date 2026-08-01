// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/vrf.h
 *
 */

#ifndef _VOLTOS_VRF_H
#define _VOLTOS_VRF_H

#include <nbapi/voltos/vrf.h>

typedef __voltos_vrf_id_t 		vrf_id_t;

struct vrf {
	const char 			vrf_name[VRF_NAME_SIZE];
	vrf_id_t 			vrf_id;
};

#endif /* _VOLTOS_VRF_H */
