// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/policy-list.h
 *
 */

#ifndef _VOLTOS_POLICY_LIST_H
#define _VOLTOS_POLICY_LIST_H

#include <voltos/refcount.h>
#include <nbapi/voltos/policy-list.h>

struct policy_list {
	const char name[POLICY_LIST_NAME_SIZE];
	refcount_t refcount;
};

#endif /* _VOLTOS_POLICY_LIST_H */
