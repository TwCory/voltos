#ifndef _VOLTOS_ATMSVC_H
#define _VOLTOS_ATMSVC_H

#include <voltos/socket.h>

struct sockaddr_atmsvc {
	__voltos_sa_family_t satmsvc_family;
};

#endif /* _VOLTOS_ATMSVC_H */
