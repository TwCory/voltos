// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/xns.h
 *
 * 	Xerox Network Systems (XNS) Socket Family
 */

#ifndef _NBAPI_VOLTOS_XNS_H
#define _NBAPI_VOLTOS_XNS_H

#include <voltos/socket.h>
#include <voltos/types.h>

#define XNS_COMPAT_ETHERTYPE		0x0807

struct xns_addr {

};

struct sockaddr_xns {
	__voltos_sa_family_t 		sxns_family;
	struct xns_addr 		sxns_addr;
};

#endif /* _NBAPI_VOLTOS_XNS_H */
