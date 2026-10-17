// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/rose.h
 *
 */

#ifndef _NBAPI_VOLTOS_ROSE_H
#define _NBAPI_VOLTOS_ROSE_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_rose {
	__voltos_sa_family_t 		srose_family;
};

#endif /* _NBAPI_VOLTOS_ROSE_H */
