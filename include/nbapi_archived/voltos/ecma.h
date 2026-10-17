// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/ecma.h
 *
 * 	European Computer Manufacturers Association (ECMA) Socket Family
 */

#ifndef _NBAPI_VOLTOS_ECMA_H
#define _NBAPI_VOLTOS_ECMA_H

#include <voltos/socket.h>

struct sockaddr_ecma {
	__voltos_sa_family_t		secma_family;
};

#endif /* _NBAPI_VOLTOS_ECMA_H */
