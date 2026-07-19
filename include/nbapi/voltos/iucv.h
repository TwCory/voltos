#ifndef _NBAPI_VOLTOS_IUCV_H
#define _NBAPI_VOLTOS_IUCV_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_iucv {
	__voltos_sa_family_t siucv_family;
};

#endif /* _NBAPI_VOLTOS_IUCV_H */
