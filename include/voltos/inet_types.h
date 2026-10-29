// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/inet_types.h
 *
 */

#ifndef _VOLTOS_INET_TYPES_H
#define _VOLTOS_INET_TYPES_H

#include <voltos/types.h>

typedef u16			asn16_t;
typedef u32			asn32_t;

typedef char 			domain_name_t;
typedef char 			hostname_t;
typedef char 			url_t;

typedef __net16 		ip_mtu_t;
typedef __net16 		ip_port_t;
typedef u8 			ip_protocol_t;
typedef u8 			ip_ttl_t;

typedef enum {
	IP_VERSION_T_UNSPEC	= 0,
	IP_VERSION_T_V4		= 4,
	IP_VERSION_T_V6		= 6,
	__IP_VERSION_T_MAX__
} ip_version_t;

#endif /* _VOLTOS_INET_TYPES_H */
