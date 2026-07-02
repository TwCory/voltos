#ifndef _VOLTOS_VSOCK_H
#define _VOLTOS_VSOCK_H

#include <voltos/socket.h>

struct sockaddr_vsock {
	__voltos_sa_family_t svsock_family;
};

#endif /* _VOLTOS_VSOCK_H */
