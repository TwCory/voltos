// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/if_bluetooth.h
 *
 */

#ifndef _NBAPI_VOLTOS_IF_BLUETOOTH_H
#define _NBAPI_VOLTOS_IF_BLUETOOTH_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_bt {
	__voltos_sa_family_t 		sbt_family;
};

#endif /* _NBAPI_VOLTOS_IF_BLUETOOTH_H */
