// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/time_namespace.h
 *
 */

#ifndef _VOLTOS_TIME_NAMESPACE_H
#define _VOLTOS_TIME_NAMESPACE_H

#include <voltos/types.h>

typedef __u64 				__voltos_time_nsid_t;

struct time_namespace {
	__voltos_time_nsid_t 		index;
};

#endif /* _VOLTOS_TIME_NAMESPACE_H */
