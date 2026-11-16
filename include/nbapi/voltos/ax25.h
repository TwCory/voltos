// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/ax25.h
 *
 */

#ifndef _NBAPI_VOLTOS_AX25_H
#define _NBAPI_VOLTOS_AX25_H

#include <voltos/socket.h>
#include <voltos/types.h>

#define AX25_DIGIS_MAX		8
#define AX25_CALL_SIZE		6

struct ax25_addr {
	char			s_call[AX25_CALL_SIZE];
	char			s_ssid;
};

struct sockaddr_ax25 {
	__voltos_sa_family_t 	sax25_family;
	struct ax25_addr	sax25_call;
	int			sax25_ndigis;
};

struct full_sockaddr_ax25 {
	struct sockaddr_ax25	fsax25_addr;
	struct ax25_addr	fsax25_digipeater[AX25_DIGIS_MAX];
};

#endif /* _NBAPI_VOLTOS_AX25_H */
