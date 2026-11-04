// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/sna.h
 *
 * 	IBM Systems Network Architecture (SNA) Socket Family
 */

#ifndef _NBAPI_VOLTOS_SNA_H
#define _NBAPI_VOLTOS_SNA_H

#include <voltos/socket.h>
#include <voltos/types.h>

#define SNA_NODE_SIZE			8
#define SNA_LINK_SIZE			8

struct sockaddr_sna {
	__voltos_sa_family_t 		ssna_family;
	uint8_t 			ssna_len;

	unsigned char 			ssna_node[SNA_NODE_SIZE];
	unsigned char 			ssna_link[SNA_LINK_SIZE];
};

#endif /* _NBAPI_VOLTOS_SNA_H */
