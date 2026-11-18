// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/socket.h
 *
 */

#ifndef _VOLTOS_SOCKET_H
#define _VOLTOS_SOCKET_H

#include <nbapi/voltos/socket.h>

typedef __voltos_sa_family_t 		sa_family_t;

struct sockaddr {
	sa_family_t 			sa_family;
	char 				sa_data[14];
};

struct sockaddr_generic {
	__voltos_sa_family_t		sa_family;
	char				sa_data[];
};

struct linger {
	int 				l_state;
	int 				l_linger;
};

#define sockaddr_storage		__voltos_sockaddr_storage

struct msghdr {

};

#endif /* _VOLTOS_SOCKET_H */
