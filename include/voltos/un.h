#ifndef _VOLTOS_UN_H
#define _VOLTOS_UN_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_un {
	__voltos_sa_family_t sun_family;
};

#endif /* _VOLTOS_UN_H */
