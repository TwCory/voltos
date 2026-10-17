// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/hyperv.h
 *
 * 	Microsoft Hyper-V Socket Interface Family
 */

#ifndef _NBAPI_VOLTOS_HYPERV_H
#define _NBAPI_VOLTOS_HYPERV_H

#include <voltos/socket.h>

struct sockaddr_hyperv {
	__voltos_sa_family_t		shyperv_family;
};

#endif /* _NBAPI_VOLTOS_HYPERV_H */
