// SPDX-License-Identifier: BSD-3-Clause

/*
 *  include/nbapi/voltos/mpls.h
 *
 *	Multi-Protocol Label Switching (MPLS)
 */

#ifndef _NBAPI_VOLTOS_MPLS_H
#define _NBAPI_VOLTOS_MPLS_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct mpls_shim_hdr {

};

struct sockaddr_mpls {
	__voltos_sa_family_t smpls_family;
};

#endif /* _NBAPI_VOLTOS_MPLS_H */
