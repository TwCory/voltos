// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/async.h
 *
 * 	Asynchronous Functions and Utilities
 */

#ifndef _VOLTOS_ASYNC_H
#define _VOLTOS_ASYNC_H

#include <voltos/types.h>

#ifndef __async
#define __async
#endif /* __async */

typedef __u64 				__voltos_async_nsid_t;

struct async_namespace {
	__voltos_async_nsid_t 		index;
};

#endif /* _VOLTOS_ASYNC_H */
