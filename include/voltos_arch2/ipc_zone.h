// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/ipc_zone.h
 *
 */

#ifndef _VOLTOS_IPC_ZONE_H
#define _VOLTOS_IPC_ZONE_H

#include <voltos/refcount.h>
#include <nbapi/voltos/ipc_zone.h>

struct ipc_zone {
	const char 			name[IPC_ZONE_NAME_SIZE];
	refcount_t 			refcount;
};

#endif /* _VOLTOS_IPC_ZONE_H */
