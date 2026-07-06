#ifndef _VOLTOS_IF_BRIDGE_H
#define _VOLTOS_IF_BRIDGE_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_bridge {
	__voltos_sa_family_t sbridge_family;
};

#endif /* _VOLTOS_IF_BRIDGE_H */
