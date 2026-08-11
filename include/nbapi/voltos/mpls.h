// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/mpls.h
 *
 *	Multi-Protocol Label Switching (MPLS)
 */

#ifndef _NBAPI_VOLTOS_MPLS_H
#define _NBAPI_VOLTOS_MPLS_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct mpls_shim_hdr {
	__net32 shim_label;
};

struct sockaddr_mpls {
	__voltos_sa_family_t smpls_family;
	__u8 smpls_len;
	__net16 smpls_pad0;
	__net32 smpls_label;
	__net32 smpls_pad1;
	__net32 smpls_pad2;
};

#endif /* _NBAPI_VOLTOS_MPLS_H */
