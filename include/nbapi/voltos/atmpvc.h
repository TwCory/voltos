// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/atmpvc.h
 *
 * 	Asynchronous Transfer Mode (ATM) Permenant Virtual Circuit (PVC) Socket Family
 */

#ifndef _NBAPI_VOLTOS_ATMPVC_H
#define _NBAPI_VOLTOS_ATMPVC_H

#include <voltos/atm_api.h>
#include <voltos/socket.h>

struct sockaddr_atmpvc {
	__voltos_sa_family_t 			satmpvc_family;
	struct {
		short				iface;
		short				vpi;
		short				vci;
	} satmpvc_addr __ATM_API_ALIGNED__;
};

#endif /* _NBAPI_VOLTOS_ATMPVC_H */
