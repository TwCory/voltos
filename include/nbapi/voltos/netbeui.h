#ifndef _NBAPI_VOLTOS_NETBEUI_H_
#define _NBAPI_VOLTOS_NETBEUI_H_

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_netbeui {
	__voltos_sa_family_t snetbeui_family;
};

#endif /* _NBAPI_VOLTOS_NETBEUI_H_ */
