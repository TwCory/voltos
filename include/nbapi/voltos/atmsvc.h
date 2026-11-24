// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/atmsvc.h
 *
 * 	Asynchronous Transfer Mode (ATM) Switched Virtual Circuit (SVC) Socket Family
 */

#ifndef _NBAPI_VOLTOS_ATMSVC_H
#define _NBAPI_VOLTOS_ATMSVC_H

#include <voltos/atm.h>
#include <voltos/atm_api.h>
#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_atmsvc {
	__voltos_sa_family_t 			satmsvc_family;
	struct {
		unsigned char			private[ATM_ESA_LEN];
		char				public[ATM_E164_LEN + 1];
		char				lij_type;
		__u32				lij_type;
	} satmsvc_addr __ATM_API_ALIGNED__;
};

#endif /* _NBAPI_VOLTOS_ATMSVC_H */
