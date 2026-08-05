// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/user_namespace.h
 *
 */

#ifndef _VOLTOS_USER_NAMESPACE_H
#define _VOLTOS_USER_NAMESPACE_H

#include <voltos/types.h>

typedef __u64 				__voltos_user_nsid_t;

struct user_namespace {
	__voltos_user_nsid_t 		index;
};

#endif /* _VOLTOS_USER_NAMESPACE_H */
