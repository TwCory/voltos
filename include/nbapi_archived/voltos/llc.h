// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/llc.h
 *
 *	Logical Link Control (LLC) Socket Family
 */

#ifndef _NBAPI_VOLTOS_LLC_H
#define _NBAPI_VOLTOS_LLC_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_llc {
	__voltos_sa_family_t		sllc_family;
	__voltos_sa_family_t		sllc_arphrd;
	unsigned char			sllc_test;
	unsigned char			sllc_xid;
	unsigned char			sllc_ua;
	unsigned char			sllc_sap;
	unsigned char			sllc_mac;
	unsigned char			__pad;
};

#endif /* _NBAPI_VOLTOS_LLC_H */
