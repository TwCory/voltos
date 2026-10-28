// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/vnet.h
 *
 */

#ifndef _VOLTOS_VNET_H
#define _VOLTOS_VNET_H

#include <voltos/refcount.h>
#include <nbapi/voltos/vnet.h>

struct vnet_tag {
	const char 				name[VNET_TAG_NAME_SIZE];
	refcount_t 				ref_count;
};

#endif /* _VOLTOS_VNET_H */
