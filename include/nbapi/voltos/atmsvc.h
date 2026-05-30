#ifndef _NBAPI_VOLTOS_ATMSVC_H_
#define _NBAPI_VOLTOS_ATMSVC_H_

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_atmsvc {
	__voltos_sa_family_t satmsvc_family;
};

#endif /* _NBAPI_VOLTOS_ATMSVC_H_ */
