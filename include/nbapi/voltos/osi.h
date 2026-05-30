#ifndef _NBAPI_VOLTOS_OSI_H_
#define _NBAPI_VOLTOS_OSI_H_

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_osi {
	__voltos_sa_family_t sosi_family;
};

#endif /* _NBAPI_VOLTOS_OSI_H_ */
