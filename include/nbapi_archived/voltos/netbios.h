// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/netbios.h
 *
 * 	Network Basic I/O (NetBIOS) Socket Family
 */

#ifndef _NBAPI_VOLTOS_NETBIOS_H
#define _NBAPI_VOLTOS_NETBIOS_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_netbios {
	__voltos_sa_family_t snetbios_family;
};

#endif /* _NBAPI_VOLTOS_NETBIOS_H */
