#ifndef _NBAPI_VOLTOS_IN_H_
#define _NBAPI_VOLTOS_IN_H_

#include <voltos/socket.h>
#include <voltos/types.h>

struct in_addr {
	__net32 		s_addr;
};

struct sockaddr_in {
	__voltos_sa_family_t 	sin_family;
	__net16 		sin_port;
	struct in_addr 		sin_addr;
};

struct in_ifaddr {

};

#endif /* _NBAPI_VOLTOS_IN_H_ */
