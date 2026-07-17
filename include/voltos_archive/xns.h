#ifndef _VOLTOS_XNS_H
#define _VOLTOS_XNS_H

#include <voltos/socket.h>
#include <voltos/types.h>

#define XNS_ETHERTYPE			0x0600
#define XNS_COMPAT_ETHERTYPE		0x0807

struct sockaddr_xns {
	__voltos_sa_family_t 		sxns_family;
};

#endif /* _VOLTOS_XNS_H */
