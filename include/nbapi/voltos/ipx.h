// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/ipx.h
 *
 *	Internetwork Packet eXchange (IPX)
 */

#ifndef _NBAPI_VOLTOS_IPX_H
#define _NBAPI_VOLTOS_IPX_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_ipx {
	__voltos_sa_family_t sipx_family;
};

#endif /* _NBAPI_VOLTOS_IPX_H */
