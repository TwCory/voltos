// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/inet_addr.h
 *
 */

#ifndef _VOLTOS_INET_ADDR_H
#define _VOLTOS_INET_ADDR_H

#include <voltos/types.h>

#define IPV4_ADDR_OCTET_SIZE		4
typedef struct {
	__u8 				octets[IPV4_ADDR_OCTET_SIZE];
} ipv4_addr_t;

#define IPV6_ADDR_HEXTET_SIZE		8
typedef struct {
	__u16 				hextets[IPV6_ADDR_HEXTET_SIZE];
} ipv6_addr_t;

typedef union {
	ipv4_addr_t			ipv4;
	ipv6_addr_t			ipv6;
} ip_addr_t;

#define IPV4_ADDR_INIT(A, B, C, D)
#define IPV6_ADDR_INIT(H1, H2, H3, H4, H5, H6, H7, H8)

#endif /* _VOLTOS_INET_ADDR_H */
