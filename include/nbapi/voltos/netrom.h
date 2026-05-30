#ifndef _NBAPI_VOLTOS_NETROM_H_
#define _NBAPI_VOLTOS_NETROM_H_

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_netrom {
	__voltos_sa_family_t snetrom_family;
};

#endif /* _NBAPI_VOLTOS_NETROM_H_ */
