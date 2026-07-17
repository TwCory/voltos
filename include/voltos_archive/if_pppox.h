#ifndef _VOLTOS_IF_PPPOX_H
#define _VOLTOS_IF_PPPOX_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_pppox {
	__voltos_sa_family_t spppox_family;
};

#endif /* _VOLTOS_IF_PPPOX_H */
