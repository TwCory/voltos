// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/inet_types.h
 *
 */

#ifndef _VOLTOS_INET_TYPES_H
#define _VOLTOS_INET_TYPES_H

#include <voltos/types.h>

typedef unsigned char		hostname_t;
typedef unsigned char		domain_name_t;
typedef unsigned char		uri_t;

typedef __u16 			asn16_t;
typedef __u32			asn32_t;

typedef __u16 			ip_mtu_t;
typedef __u8 			ip_port_t;
typedef __u8 			ip_protocol_t;
typedef __u8 			ip_ttl_t;

typedef enum {
	IP_VERSION_T_UNSPEC 	= 0,
	IP_VERSION_T_IPV4 	= 4,
	IP_VERSION_T_ST 	= 5,
	IP_VERSION_T_IPV6 	= 6,
	__IP_VERSION_T_MAX__
} ip_version_t;

#endif /* _VOLTOS_INET_TYPES_H */
