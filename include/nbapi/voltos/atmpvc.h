#ifndef NBAPI_VOLTOS_ATMPVC_H
#define NBAPI_VOLTOS_ATMPVC_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_atmpvc {
	__voltos_sa_family_t satmpvc_family;
};

#endif /* NBAPI_VOLTOS_ATMPVC_H */
