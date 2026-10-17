// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/sna.h
 *
 * 	IBM System Network Architecture (SNA) Socket Family
 */

#ifndef _NBAPI_VOLTOS_SNA_H
#define _NBAPI_VOLTOS_SNA_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct sna_addr {

};

struct sockaddr_sna {
	__voltos_sa_family_t ssna_family;
};

#endif /* _NBAPI_VOLTOS_SNA_H */
