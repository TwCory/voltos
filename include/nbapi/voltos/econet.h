// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/econet.h
 *
 *	EcoNet Socket Address Family
 */

#ifndef _NBAPI_VOLTOS_ECONET_H
#define _NBAPI_VOLTOS_ECONET_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_econet {
	__voltos_sa_family_t seconet_family;
};

#endif /* _NBAPI_VOLTOS_ECONET_H */
