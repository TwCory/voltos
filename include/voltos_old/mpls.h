#ifndef _VOLTOS_MPLS_H
#define _VOLTOS_MPLS_H

#include <voltos/socket.h>

#define MPLS_ETHERTYPE			0x8847
#define MPLS_UA_LABEL_ETHERTYPE		0x8848

struct mpls_shim_hdr {

};

struct sockaddr_mpls {
	__voltos_sa_family_t smpls_family;
};

#endif /* _VOLTOS_MPLS_H */
