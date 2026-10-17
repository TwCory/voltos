// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/if_phonet.h
 *
 */

#ifndef _NBAPI_VOLTOS_IF_PHONET_H
#define _NBAPI_VOLTOS_IF_PHONET_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_phonet {
	__voltos_sa_family_t 		sphonet_family;
};

#endif /* _NBAPI_VOLTOS_IF_PHONET_H */
