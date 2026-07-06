#ifndef _VOLTOS_IPX_H
#define _VOLTOS_IPX_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_ipx {
	__voltos_sa_family_t sipx_family;
};

#endif /* _VOLTOS_IPX_H */
