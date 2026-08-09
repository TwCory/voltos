// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/x25.h
 *
 */

#ifndef _NBAPI_VOLTOS_X25_H
#define _NBAPI_VOLTOS_X25_H

#include <voltos/socket.h>

#define X25_ADDR_SIZE			15

struct x25_addr {
	unsigned char 			s_addr[X25_ADDR_SIZE];
	unsigned char 			s_null;
};

struct sockaddr_x25 {
	__voltos_sa_family_t 		sx25_family;
	struct x25_addr 		sx25_addr;
};

#endif /* _NBAPI_VOLTOS_X25_H */
