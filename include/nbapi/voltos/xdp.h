#ifndef _NBAPI_VOLTOS_XDP_H
#define _NBAPI_VOLTOS_XDP_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_xdp {
	__voltos_sa_family_t sxdp_family;
};

#endif /* _NBAPI_VOLTOS_XDP_H */
