// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/inet_prefix.h
 *
 */

#ifndef _VOLTOS_INET_PREFIX_H
#define _VOLTOS_INET_PREFIX_H

#include <voltos/inet_addr.h>
#include <voltos/types.h>

#define IPV4_PREFIX_LENGTH_MIN		0
#define IPV4_PREFIX_LENGTH_MAX		32
typedef struct {
	ipv4_addr_t			address;
	__u8				prefix_length;
} ipv4_prefix_t;

#define IPV6_PREFIX_LENGTH_MIN		0
#define IPV6_PREFIX_LENGTH_MAX		128
typedef struct {
	ipv6_addr_t			address;
	__u8 				prefix_length;
} ipv6_prefix_t;

typedef struct {
	union {
		ipv4_addr_t		ipv4;
		ipv6_addr_t		ipv6;
	} address;
	__u8				prefix_length;
} ip_prefix_t;

#define IPV4_PREFIX_INIT(A, B, C, D, MASK)
#define IPV6_PREFIX_INIT(H1, H2, H3, H4, H5, H6, H7, H8, MASK)

#endif /* _VOLTOS_INET_PREFIX_H */
