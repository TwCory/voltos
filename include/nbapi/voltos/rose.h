// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/rose.h
 *
 */

#ifndef _NBAPI_VOLTOS_ROSE_H
#define _NBAPI_VOLTOS_ROSE_H

#include <voltos/ax25.h>
#include <voltos/socket.h>

struct rose_addr {

};

struct sockaddr_rose {
	__voltos_sa_family_t		srose_family;
	struct rose_addr		srose_addr;
	struct ax25_addr		srose_call;
	int				srose_ndigis;
	struct ax25_addr		srose_digi;
};

#endif /* _NBAPI_VOLTOS_ROSE_H */
