#ifndef NBAPI_VOLTOS_ATALK_H
#define NBAPI_VOLTOS_ATALK_H

#include <voltos/socket.h>
#include <voltos/types.h>

#define ATALK_ETHERTYPE		0x809B

struct atalk_addr {

};

struct sockaddr_at {
	__voltos_sa_family_t sat_family;
};

#endif /* NBAPI_VOLTOS_ATALK_H */
