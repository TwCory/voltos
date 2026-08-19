// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/mctp.h
 *
 * 	Management Component Transport Protocol (MCTP) Socket Family
 */

#ifndef _NBAPI_VOLTOS_MCTP_H
#define _NBAPI_VOLTOS_MCTP_H

#include <voltos/socket.h>
#include <voltos/types.h>

typedef __u8				mctp_eid_t;

struct mctp_addr {
	mctp_eid_t			s_addr;
};

struct sockaddr_mctp {
	__voltos_sa_family_t		smctp_family;
	struct mctp_addr		smctp_addr;
};

#endif /* _NBAPI_VOLTOS_MCTP_H */
