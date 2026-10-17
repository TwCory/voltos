// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/vc-group.h
 *
 */

#ifndef _VOLTOS_VC_GROUP_H
#define _VOLTOS_VC_GROUP_H

#include <voltos/refcount.h>
#include <nbapi/voltos/vc-group.h>

struct vc_group {
	const char 			name[VC_GROUP_NAME_SIZE];
	refcount_t 			refcount;
};

#endif /* _VOLTOS_VC_GROUP_H */
