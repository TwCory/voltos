// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/sna.h
 *
 * 	IBM Systems Network Architecture (AF_SNA) Socket Family
 */

#ifndef _NBAPI_VOLTOS_SNA_H
#define _NBAPI_VOLTOS_SNA_H

#include <voltos/socket.h>
#include <voltos/types.h>

#define SNA_ETHERTYPE			0x80D5

#define SNA_NODE_LEN			(8)
#define SNA_LINK_LEN			(8)

struct sockaddr_sna {
	__voltos_sa_family_t 		ssna_family;
	__u8				ssna_len;

	unsigned char 			ssna_node[SNA_NODE_LEN];
	unsigned char 			ssna_link[SNA_LINK_LEN];
};

#endif /* _NBAPI_VOLTOS_SNA_H */
