#ifndef _VOLTOS_NETBEUI_H
#define _VOLTOS_NETBEUI_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_netbeui {
	__voltos_sa_family_t snetbeui_family;
};

#endif /* _VOLTOS_NETBEUI_H */
