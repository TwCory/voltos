#ifndef _VOLTOS_MPLS_H
#define _VOLTOS_MPLS_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct mpls_shim_hdr {

};

struct sockaddr_mpls {
	__voltos_sa_family_t smpls_family;
};

#endif /* _VOLTOS_MPLS_H */
