#ifndef _NBAPI_VOLTOS_ATMPVC_H_
#define _NBAPI_VOLTOS_ATMPVC_H_

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_atmpvc {
	__voltos_sa_family_t satmpvc_family;
};

#endif /* _NBAPI_VOLTOS_ATMPVC_H_ */
