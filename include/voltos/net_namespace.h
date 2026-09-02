// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/net_namespace.h
 *
 * 	Network Namespaces
 */

#ifndef _VOLTOS_NET_NAMESPACE_H
#define _VOLTOS_NET_NAMESPACE_H

#include <voltos/refcount.h>
#include <nbapi/voltos/net_namespace.h>

struct net_namespace {
	const char 			name[NET_NAMESPACE_NAME_SIZE];
	refcount_t 			refcount;
};

#endif /* _VOLTOS_NET_NAMESPACE_H */
