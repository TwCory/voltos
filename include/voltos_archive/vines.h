#ifndef _VOLTOS_VINES_H
#define _VOLTOS_VINES_H

#include <voltos/socket.h>
#include <voltos/types.h>

#define VINES_ETHERTYPE			0x0BAD
#define VINES_LOOPBACK_ETHERTYPE	0x0BAE
#define VINES_ECHO_ETHERTYPE		0x0BAF

struct sockaddr_vines {
	__voltos_sa_family_t 		svines_family;
};

#endif /* _VOLTOS_VINES_H */
