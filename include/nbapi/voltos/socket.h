// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/socket.h
 *
 */

#ifndef _NBAPI_VOLTOS_SOCKET_H
#define _NBAPI_VOLTOS_SOCKET_H

#define _V_SS_MAX_SIZE				(128)

typedef unsigned short 				__voltos_sa_family_t;

struct __voltos_sockaddr_storage {
	union {
		struct {
			__voltos_sa_family_t 	ss_family;
		};
		void 				*__align;
	};
};

#endif /* _NBAPI_VOLTOS_SOCKET_H */
