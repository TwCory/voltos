#ifndef _NBAPI_VOLTOS_MPLS_H_
#define _NBAPI_VOLTOS_MPLS_H_

#include <voltos/socket.h>
#include <voltos/types.h>

struct mpls_shim_hdr {

};

struct sockaddr_mpls {
	__voltos_sa_family_t smpls_family;
};

#endif /* _NBAPI_VOLTOS_MPLS_H_ */
