// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/vpdn-group.h
 *
 */

#ifndef _VOLTOS_VPDN_GROUP_H
#define _VOLTOS_VPDN_GROUP_H

#include <voltos/refcount.h>
#include <nbapi/voltos/vpdn-group.h>

struct vpdn_group {
	refcount_t refcount;
};

#endif /* _VOLTOS_VPDN_GROUP_H */
