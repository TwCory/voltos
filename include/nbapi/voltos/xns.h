// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/xns.h
 *
 * 	Xerox Network Systems (XNS) Socket Family
 */

#ifndef _NBAPI_VOLTOS_XNS_H
#define _NBAPI_VOLTOS_XNS_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct xns_addr {

};

struct sockaddr_xns {
	__voltos_sa_family_t		sxns_family;
	__u8				sxns_len;
	struct xns_addr			sxns_addr;
};

#endif /* _NBAPI_VOLTOS_XNS_H */
