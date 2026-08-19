// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/socket.h
 *
 * 	Socket Interface Definitions
 */

#ifndef _NBAPI_VOLTOS_SOCKET_H
#define _NBAPI_VOLTOS_SOCKET_H

#include <voltos/types.h>

typedef __u16 				__voltos_sa_family_t;

struct __voltos_sockaddr_storage {
	__voltos_sa_family_t 		ss_family;
	void 				*ss_data;
};

#endif /* _NBAPI_VOLTOS_SOCKET_H */
