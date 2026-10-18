// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/atmpvc.h
 *
 * 	Asynchronous Transfer Mode (ATM) Permenant Virtual Circuit (PVC) Socket Family
 */

#ifndef _NBAPI_VOLTOS_ATMPVC_H
#define _NBAPI_VOLTOS_ATMPVC_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_atmpvc {
	__voltos_sa_family_t 		satmpvc_family;
};

#endif /* _NBAPI_VOLTOS_ATMPVC_H */
