// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/qipc.h
 *
 * 	Qualcomm(R) IPC Router Socket Family
 */

#ifndef _NBAPI_VOLTOS_QIPC_H
#define _NBAPI_VOLTOS_QIPC_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_qipc {
	__voltos_sa_family_t 		sqipc_family;
};

#endif /* _NBAPI_VOLTOS_QIPC_H */
