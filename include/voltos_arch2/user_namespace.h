// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/user_namespace.h
 *
 */

#ifndef _VOLTOS_USER_NAMESPACE_H
#define _VOLTOS_USER_NAMESPACE_H

#include <voltos/refcount.h>

struct user_namespace {
	const char name;
	refcount_t refcount;
};

#endif /* _VOLTOS_USER_NAMESPACE_H */
