#ifndef _VOLTOS_ISDN_H
#define _VOLTOS_ISDN_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_isdn {
	__voltos_sa_family_t sisdn_family;
};

#endif /* _VOLTOS_ISDN_H */
