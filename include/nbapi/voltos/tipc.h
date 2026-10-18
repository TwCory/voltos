// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/tipc.h
 *
 */

#ifndef _NBAPI_VOLTOS_TIPC_H
#define _NBAPI_VOLTOS_TIPC_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_tipc {
	__voltos_sa_family_t 			stipc_family;
};

#endif /* _NBAPI_VOLTOS_TIPC_H */
