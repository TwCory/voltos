// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/vrf_list.h
 *
 */

#ifndef _VOLTOS_VRF_LIST_H
#define _VOLTOS_VRF_LIST_H

#include <voltos/refcount.h>
#include <nbapi/voltos/vrf_list.h>

struct vrf_list {
	refcount_t refcount;
};

#endif /* _VOLTOS_VRF_LIST_H */
