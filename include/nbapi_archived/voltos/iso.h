// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/iso.h
 *
 * 	ISO/OSI Socket Family
 */

#ifndef _NBAPI_VOLTOS_ISO_H
#define _NBAPI_VOLTOS_ISO_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct iso_addr {

};

struct sockaddr_iso {
	__voltos_sa_family_t		siso_family;
	__u8				siso_len;
	struct iso_addr			siso_addr;
	__u8				siso_tlen;
	__u8				siso_nlen;
	__u8				siso_slen;
	__u8				siso_plen;
};

#endif /* _NBAPI_VOLTOS_ISO_H */
