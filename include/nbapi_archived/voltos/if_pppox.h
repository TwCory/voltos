// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/if_pppox.h
 *
 */

#ifndef _NBAPI_VOLTOS_IF_PPPOX_H
#define _NBAPI_VOLTOS_IF_PPPOX_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_pppox {
	__voltos_sa_family_t		spppox_family;
	__u32				spppox_protocol;
};

#endif /* _NBAPI_VOLTOS_IF_PPPOX_H */
