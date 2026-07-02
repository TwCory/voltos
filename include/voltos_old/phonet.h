#ifndef _VOLTOS_PHONET_H
#define _VOLTOS_PHONET_H

#include <voltos/socket.h>

struct sockaddr_phonet {
	__voltos_sa_family_t sphonet_family;
};

#endif /* _VOLTOS_PHONET_H */
