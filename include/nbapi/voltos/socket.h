// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/socket.h
 *
 * 	Socket Interface Definitions
 */

#ifndef _NBAPI_VOLTOS_SOCKET_H
#define _NBAPI_VOLTOS_SOCKET_H

#define _S_SS_SIZE_MAX				128

typedef unsigned short 				__voltos_sa_family_t;

struct __voltos_sockaddr_storage {
	union {
		struct {
			__voltos_sa_family_t	ss_family;
			char			__data[_S_SS_SIZE_MAX - sizeof(unsigned short)];
		};
		void *__align;
	};
};

#define SOCK_SEND_BUF_LOCK			1
#define SOCK_RECV_BUF_LOCK			2

#define SOCK_BUF_LOCK_MASK			(SOCK_SEND_BUF_LOCK | SOCK_RECV_BUF_LOCK)

enum {
	SOCK_TX_REHASH_T_DISABLED		= 0,
#define SOCK_TX_REHASH_DISABLED			SOCK_TX_REHASH_T_DISABLED
	SOCK_TX_REHASH_T_ENABLED		= 1,
#define SOCK_TX_REHASH_ENABLED			SOCK_TX_REHASH_T_ENABLED
	SOCK_TX_REHASH_T_DEFAULT		= 255,
#define SOCK_TX_REHASH_DEFAULT			SOCK_TX_REHASH_T_DEFAULT
	__SOCK_TX_REHASH_T_MAX__
};

#define SOCK_TX_REHASH_MAX			(__SOCK_TX_REHASH_T_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_SOCKET_H */
