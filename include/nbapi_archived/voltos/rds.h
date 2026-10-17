// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/rds.h
 *
 * 	Reliable Datagram Sockets (RDS) Socket Family
 */

#ifndef _NBAPI_VOLTOS_RDS_H
#define _NBAPI_VOLTOS_RDS_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_rds {
	__voltos_sa_family_t srds_family;
};

#endif /* _NBAPI_VOLTOS_RDS_H */
