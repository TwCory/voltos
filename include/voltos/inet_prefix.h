// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/inet_prefix.h
 *
 */

#ifndef _VOLTOS_INET_PREFIX_H
#define _VOLTOS_INET_PREFIX_H

#include <voltos/inet_addr.h>
#include <voltos/types.h>

typedef struct {
	ip4_addr_t		address;
	u8			prefix_length;
} ip4_prefix_t;

typedef struct {
	ip6_addr_t		address;
	u8			prefix_length;
} ip6_prefix_t;

typedef struct {
	ip_addr_t		address;
	u8			prefix_length;
} ip_prefix_t;

#endif /* _VOLTOS_INET_PREFIX_H */
