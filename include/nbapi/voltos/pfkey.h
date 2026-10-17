// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/pfkey.h
 *
 */

#ifndef _NBAPI_VOLTOS_PFKEY_H
#define _NBAPI_VOLTOS_PFKEY_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_key {
	__voltos_sa_family_t 		skey_family;
};

#endif /* _NBAPI_VOLTOS_PFKEY_H */
