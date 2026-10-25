// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/vrf.h
 *
 */

#ifndef _VOLTOS_VRF_H
#define _VOLTOS_VRF_H

#include <voltos/refcount.h>
#include <nbapi/voltos/vrf.h>

struct vrf {
	const char 		name[VRF_NAME_SIZE];
};

#endif /* _VOLTOS_VRF_H */
