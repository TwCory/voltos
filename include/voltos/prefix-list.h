// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/prefix-list.h
 *
 */

#ifndef _VOLTOS_PREFIX_LIST_H
#define _VOLTOS_PREFIX_LIST_H

#include <voltos/refcount.h>
#include <nbapi/voltos/prefix-list.h>

struct prefix_list {
	refcount_t refcount;
};

#endif /* _VOLTOS_PREFIX_LIST_H */
