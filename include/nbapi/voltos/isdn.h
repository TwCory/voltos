// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/isdn.h
 *
 *	Integrated Services Digital Network (ISDN)
 */

#ifndef _NBAPI_VOLTOS_ISDN_H
#define _NBAPI_VOLTOS_ISDN_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_isdn {
	__voltos_sa_family_t sisdn_family;
};

#endif /* _NBAPI_VOLTOS_ISDN_H */
