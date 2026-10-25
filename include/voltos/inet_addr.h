// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/inet_addr.h
 *
 */

#ifndef _VOLTOS_INET_ADDR_H
#define _VOLTOS_INET_ADDR_H

#include <voltos/in.h>
#include <voltos/in6.h>

typedef struct in_addr 		ip4_addr_t;
typedef struct in6_addr 	ip6_addr_t;

typedef union {
	ip4_addr_t 		ip4;
	ip6_addr_t 		ip6;
} ip_addr_t;

typedef struct sockaddr_in 	sockaddr_ip4_t;
typedef struct sockaddr_in6 	sockaddr_ip6_t;

typedef union {
	sockaddr_ip4_t 		ip4;
	sockaddr_ip6_t 		ip6;
} sockaddr_ip_t;

#endif /* _VOLTOS_INET_ADDR_H */
