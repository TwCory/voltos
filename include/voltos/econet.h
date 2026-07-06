#ifndef _VOLTOS_ECONET_H
#define _VOLTOS_ECONET_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_econet {
	__voltos_sa_family_t seconet_family;
};

#endif /* _VOLTOS_ECONET_H */
