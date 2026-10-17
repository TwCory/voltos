// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/if_x25.h
 *
 */

#ifndef _NBAPI_VOLTOS_IF_X25_H
#define _NBAPI_VOLTOS_IF_X25_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct x25_addr {

};

struct sockaddr_x25 {
	__voltos_sa_family_t 		sx25_family;
	struct x25_addr 		sx25_addr;
};

#endif /* _NBAPI_VOLTOS_IF_X25_H */
