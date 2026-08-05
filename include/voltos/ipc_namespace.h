// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/ipc_namespace.h
 *
 */

#ifndef _VOLTOS_IPC_NAMESPACE_H
#define _VOLTOS_IPC_NAMESPACE_H

#include <voltos/types.h>

typedef __u64 				__voltos_ipc_nsid_t;

struct ipc_namespace {
	__voltos_ipc_nsid_t 		index;
};

#endif /* _VOLTOS_IPC_NAMESPACE_H */
