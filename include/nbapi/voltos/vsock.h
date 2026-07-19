#ifndef _NBAPI_VOLTOS_VSOCK_H
#define _NBAPI_VOLTOS_VSOCK_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_vsock {
	__voltos_sa_family_t svsock_family;
};

#endif /* _NBAPI_VOLTOS_VSOCK_H */
