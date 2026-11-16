// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/vines.h
 *
 * 	Banyan VINES Socket Family
 */

#ifndef _NBAPI_VOLTOS_VINES_H
#define _NBAPI_VOLTOS_VINES_H

#include <voltos/socket.h>
#include <voltos/types.h>

#define VINES_ETHERTYPE				0x0BAD
#define VINES_LOOPBACK_ETHERTYPE		0x0BAE
#define VINES_ECHO_ETHERTYPE			0x0BAF

struct vines_addr {
	__net32 				s_addr;
	__net16 				s_subnet;
};

struct sockaddr_vines {
	__voltos_sa_family_t 			svines_family;
	struct vines_addr 			svines_addr;
};

#endif /* _NBAPI_VOLTOS_VINES_H */
