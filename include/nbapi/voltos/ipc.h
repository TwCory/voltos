// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/ipc.h
 *
 *	Inter-Process Communication (IPC) Subsystem Frontend
 */

#ifndef _NBAPI_VOLTOS_IPC_H
#define _NBAPI_VOLTOS_IPC_H

#include <asm/ipcbuf.h>

enum ipc_node_type {
	IPC_NODE_TYPE_T_UNSPEC			= 0,
	IPC_NODE_TYPE_T_LOCAL			= 1,
	IPC_NODE_TYPE_T_RSP_CY			= 2,
	__IPC_NODE_TYPE_T_MAX__
};

enum ipc_port_type {
	IPC_PORT_TYPE_T_UNSPEC			= 0,
	IPC_PORT_TYPE_T_UNICAST			= 1,
	__IPC_PORT_TYPE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_IPC_H */
