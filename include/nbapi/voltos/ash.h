// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/ash.h
 *
 */

#ifndef _NBAPI_VOLTOS_ASH_H
#define _NBAPI_VOLTOS_ASH_H

#include <voltos/socket.h>
#include <voltos/types.h>

#define ASH_PREFIX_SIZE			16

struct sockaddr_ash {
	__voltos_sa_family_t 		sash_family;
	int 				sash_ifindex;
	unsigned char 			sash_channel;
	unsigned int 			sash_plen;
	unsigned char 			sash_prefix[ASH_PREFIX_SIZE];
};

#endif /* _NBAPI_VOLTOS_ASH_H */
