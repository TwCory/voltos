// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/if_x25.h
 *
 *	X.25 Interface and Socket Family (AF_X25)
 */

#ifndef _NBAPI_VOLTOS_IF_X25_H
#define _NBAPI_VOLTOS_IF_X25_H

#include <voltos/socket.h>
#include <voltos/types.h>

#define X25_ADDR_LEN			(15)

struct x25_addr {
	char 				s_addr[X25_ADDR_LEN];
	char 				s_null;
};

struct sockaddr_x25 {
	__voltos_sa_family_t 		sx25_family;
	struct x25_addr 		sx25_addr;
};

#endif /* _NBAPI_VOLTOS_IF_X25_H */
