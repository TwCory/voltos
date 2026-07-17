#ifndef _VOLTOS_NETROM_H
#define _VOLTOS_NETROM_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_netrom {
	__voltos_sa_family_t snetrom_family;
};

#endif /* _VOLTOS_NETROM_H */
