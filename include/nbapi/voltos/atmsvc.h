#ifndef _NBAPI_VOLTOS_ATMSVC_H
#define _NBAPI_VOLTOS_ATMSVC_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_atmsvc {
	__voltos_sa_family_t satmsvc_family;
};

#endif /* _NBAPI_VOLTOS_ATMSVC_H */
