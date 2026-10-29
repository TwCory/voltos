// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/vrf_list.h
 *
 * 	Virtual Routing and Forwarding (VRF) Lists
 */

#ifndef _VOLTOS_VRF_LIST_H
#define _VOLTOS_VRF_LIST_H

#include <voltos/refcount.h>
#include <nbapi/voltos/vrf_list.h>

struct vrf_list {
	const char 				name[VRF_LIST_NAME_SIZE];
	refcount_t 				ref_count;
};

#endif /* _VOLTOS_VRF_LIST_H */
