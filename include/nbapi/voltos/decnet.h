// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/decnet.h
 *
 *	DECnet Socket and Network Protocol
 *	Family Definitions
 */

#ifndef _NBAPI_VOLTOS_DECNET_H
#define _NBAPI_VOLTOS_DECNET_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_dn {
	__voltos_sa_family_t sdn_family;
};

#endif /* _NBAPI_VOLTOS_DECNET_H */
