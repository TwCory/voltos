#ifndef _NBAPI_VOLTOS_MPLS_H_
#define _NBAPI_VOLTOS_MPLS_H_

#include <voltos/socket.h>
#include <voltos/types.h>

#define MPLS_ETHERTYPE			0x8847
#define MPLS_UA_LABEL_ETHERTYPE		0x8848

struct mpls_shim_hdr {

};

struct sockaddr_mpls {
	__voltos_sa_family_t smpls_family;
};

#endif /* _NBAPI_VOLTOS_MPLS_H_ */
