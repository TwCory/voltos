// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/netrom.h
 *
 */

#ifndef _NBAPI_VOLTOS_NETROM_H
#define _NBAPI_VOLTOS_NETROM_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_netrom {
	__voltos_sa_family_t snetrom_family;
};

#endif /* _NBAPI_VOLTOS_NETROM_H */
