#ifndef _NBAPI_VOLTOS_IF_INFINIBAND_H_
#define _NBAPI_VOLTOS_IF_INFINIBAND_H_

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_ib {
	__voltos_sa_family_t sib_family;
};

#endif /* _NBAPI_VOLTOS_IF_INFINIBAND_H_ */
