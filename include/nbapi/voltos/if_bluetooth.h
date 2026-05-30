#ifndef _NBAPI_VOLTOS_IF_BLUETOOTH_H_
#define _NBAPI_VOLTOS_IF_BLUETOOTH_H_

#include <voltos/socket.h>
#include <voltos/types.h>

#define BT_ADDR_SIZE	6

struct sockaddr_bt {
	__voltos_sa_family_t sbt_family;
};

#endif /* _NBAPI_VOLTOS_IF_BLUETOOTH_H_ */
