// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/vlan_filter.h
 *
 */

#ifndef _VOLTOS_VLAN_FILTER_H
#define _VOLTOS_VLAN_FILTER_H

#include <voltos/refcount.h>
#include <nbapi/voltos/vlan_filter.h>

struct vlan_filter {
	const char 				name[VLAN_FILTER_NAME_SIZE];
	refcount_t 				ref_count;
};

#endif /* _VOLTOS_VLAN_FILTER_H */
