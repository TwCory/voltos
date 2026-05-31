#ifndef _NBAPI_VOLTOS_X25_H_
#define _NBAPI_VOLTOS_X25_H_

#include <voltos/socket.h>
#include <voltos/types.h>

#define X25_ETHERTYPE		0x0805

struct x25_addr {

};

struct sockaddr_x25 {
	__voltos_sa_family_t 	sx25_family;
};

#endif /* _NBAPI_VOLTOS_X25_H_ */
