// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/if_bluetooth.h
 *
 * 	Bluetooth Interfaces and Socket Family
 */

#ifndef _NBAPI_VOLTOS_IF_BLUETOOTH_H
#define _NBAPI_VOLTOS_IF_BLUETOOTH_H

#include <voltos/socket.h>

#define BT_ADDR_SIZE			6

struct sockaddr_bt {
	__voltos_sa_family_t		sbt_family;
};

#endif /* _NBAPI_VOLTOS_IF_BLUETOOTH_H */
