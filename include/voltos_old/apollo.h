#ifndef _VOLTOS_APOLLO_H
#define _VOLTOS_APOLLO_H

#include <voltos/socket.h>

#define APOLLO_DOMAIN_ETHERTYPE		0x8019
#define APOLLO_COMPUTER_ETHERTYPE	0x80F7

struct sockaddr_apollo {
	__voltos_sa_family_t 		sapollo_family;
};

#endif /* _VOLTOS_APOLLO_H */
