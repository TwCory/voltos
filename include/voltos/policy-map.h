// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/policy-map.h
 *
 */

#ifndef _VOLTOS_POLICY_MAP_H
#define _VOLTOS_POLICY_MAP_H

#include <voltos/refcount.h>
#include <nbapi/voltos/policy-map.h>

struct policy_map {
	const char name[POLICY_MAP_NAME_SIZE];
	refcount_t refcount;
};

#endif /* _VOLTOS_POLICY_MAP_H */
