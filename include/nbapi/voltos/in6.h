// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/in6.h
 *
 */

#ifndef _NBAPI_VOLTOS_IN6_H
#define _NBAPI_VOLTOS_IN6_H

#include <voltos/socket.h>
#include <voltos/types.h>

#define IN6_ADDR_SIZE8		16
#define IN6_ADDR_SIZE16		8
#define IN6_ADDR_SIZE32		4
#define IN6_ADDR_SIZE64		2

struct in6_addr {
	union {
		uint8_t 	u6_addr8[IN6_ADDR_SIZE8];
		__net16 	u6_addr16[IN6_ADDR_SIZE16];
		__net32 	u6_addr32[IN6_ADDR_SIZE32];
		__net64 	u6_addr64[IN6_ADDR_SIZE64];
		__net128 	u6_addr;
	} in6_u;
#define s6_addr8		in6_u.u6_addr8
#define s6_addr16		in6_u.u6_addr16
#define s6_addr32		in6_u.u6_addr32
#define s6_addr64		in6_u.u6_addr64
#define s6_addr			in6_u.u6_addr
};

struct sockaddr_in6 {
	__voltos_sa_family_t	sin6_family;
	__net16			sin6_port;
	__net32			sin6_flowinfo;
	struct in6_addr		sin6_addr;
	uint32_t		sin6_scope_id;
};

#endif /* _NBAPI_VOLTOS_IN6_H */
