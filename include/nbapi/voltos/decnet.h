#ifndef _NBAPI_VOLTOS_DECNET_H_
#define _NBAPI_VOLTOS_DECNET_H_

#include <voltos/socket.h>
#include <voltos/types.h>

#define DECNET_PHASE_IV_ETHERTYPE	0x6003

struct sockaddr_dn {
	__voltos_sa_family_t 		sdn_family;
};

#endif /* _NBAPI_VOLTOS_DECNET_H_ */
