#ifndef _VOLTOS_XDP_H
#define _VOLTOS_XDP_H

#include <voltos/socket.h>

struct sockaddr_xdp {
	__voltos_sa_family_t sxdp_family;
};

#endif /* _VOLTOS_XDP_H */
