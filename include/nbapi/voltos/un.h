// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/un.h
 *
 * 	UNIX Domain Socket Family
 */

#ifndef _NBAPI_VOLTOS_UN_H
#define _NBAPI_VOLTOS_UN_H

#include <voltos/socket.h>

#define UNIX_PATH_MAX				108

struct sockaddr_un {
	__voltos_sa_family_t 			sun_family;
	char 					sun_path[UNIX_PATH_MAX];
};

#endif /* _NBAPI_VOLTOS_UN_H */
