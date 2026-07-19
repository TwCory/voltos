#ifndef _NBAPI_VOLTOS_NETLINK_H
#define _NBAPI_VOLTOS_NETLINK_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_nl {
	__voltos_sa_family_t snl_family;
};

#endif /* _NBAPI_VOLTOS_NETLINK_H */
