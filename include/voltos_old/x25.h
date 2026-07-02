#ifndef _VOLTOS_X25_H
#define _VOLTOS_X25_H

#include <voltos/socket.h>

#define X25_ETHERTYPE		0x0805

struct x25_addr {

};

struct sockaddr_x25 {
	__voltos_sa_family_t sx25_family;
};

#endif /* _VOLTOS_X25_H */
