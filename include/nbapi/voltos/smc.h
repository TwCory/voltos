// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/smc.h
 *
 */

#ifndef _NBAPI_VOLTOS_SMC_H
#define _NBAPI_VOLTOS_SMC_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_smc {
	__voltos_sa_family_t ssmc_family;
};

#endif /* _NBAPI_VOLTOS_SMC_H */
