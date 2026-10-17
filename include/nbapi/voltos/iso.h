// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/iso.h
 *
 */

#ifndef _NBAPI_VOLTOS_ISO_H
#define _NBAPI_VOLTOS_ISO_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct iso_addr {

};

struct sockaddr_iso {
	__voltos_sa_family_t 		siso_family;
	struct iso_addr 		siso_addr;
};

#endif /* _NBAPI_VOLTOS_ISO_H */
