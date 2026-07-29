// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/apollo.h
 *
 *	Apollo Domain Socket Address Family
 */

#ifndef _NBAPI_VOLTOS_APOLLO_H
#define _NBAPI_VOLTOS_APOLLO_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct apollo_addr {

};

struct sockaddr_apollo {
	__voltos_sa_family_t 		sapollo_family;
	struct apollo_addr 		sapollo_addr;
};

#endif /* _NBAPI_VOLTOS_APOLLO_H */
