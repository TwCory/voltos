// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/socket.h
 *
 */

#ifndef _VOLTOS_SOCKET_H
#define _VOLTOS_SOCKET_H

#include <sys/socket.h>
#include <sys/socketvar.h>
#include <nbapi/voltos/socket.h>

struct sockaddr_generic {
	__voltos_sa_family_t 		sa_family;
	char 				sa_data[];
};

#endif /* _VOLTOS_SOCKET_H */
