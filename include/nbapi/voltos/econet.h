// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/econet.h
 *
 *	Acorn Econet Socket Family
 */

#ifndef _NBAPI_VOLTOS_ECONET_H
#define _NBAPI_VOLTOS_ECONET_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_econet {
	__voltos_sa_family_t		seconet_family;
	__u8				seconet_port;
	__u8				seconet_station;
	__u8				seconet_net;
	unsigned long			seconet_cookie;
};

#endif /* _NBAPI_VOLTOS_ECONET_H */
