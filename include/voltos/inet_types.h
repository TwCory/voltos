// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_INET_TYPES_H_
#define _VOLTOS_INET_TYPES_H_

#include <voltos/list.h>
#include <voltos/types.h>

/*
 *	16-Bit Autonomous System Number
 *
 *
 */
typedef u16					asn16_t;

/*
 *	32-Bit Autonomous System Number
 *
 *
 */
typedef u32					asn32_t;

/*
 *	Domain Name
 *
 *
 */
typedef unsigned char				domain_name_t;

/*
 *	Fully-Qualified Domain Name
 *
 *
 */
typedef unsigned char				fqdn_t;

/*
 *	Host Name
 *
 *
 */
typedef unsigned char 				hostname_t;

/*
 *	TCP/IP Maximum Transmission Unit (MTU)
 *
 *
 */
typedef u16 					ip_mtu_t;

/*
 *	TCP/IP Transport Layer Port Number
 *
 *
 */
typedef u16 					ip_port_t;

/*
 *	TCP/IP Protocol Number
 *
 *
 */
typedef u8 					ip_protocol_t;

/*
 *	TCP/IP Time-to-Live (TTL) or Hop Limit
 *
 *
 */
typedef u8 					ip_ttl_t;

/*
 *	TCP/IP Version
 *
 *
 */
typedef enum {
	IP_VERSION_T_V4				= 4,
	IP_VERSION_T_V6				= 6,
	__IP_VERSION_T_MAX__
} ip_version_t;

/*
 *	Uniform Resource Identifier
 *
 *
 */
typedef unsigned char 				uri_t;

/*
 *	IPv4 Classful Address Type
 *
 *
 */
typedef enum {
	IPV4_CLASS_T_A				= 1,
	IPV4_CLASS_T_B				= 2,
	IPV4_CLASS_T_C				= 3,
	IPV4_CLASS_T_D				= 4,
	IPV4_CLASS_T_E				= 5,
	__IPV4_CLASS_T_MAX__
} ipv4_class_t;

/*
 *	IPv4 Address Scope
 *
 *
 */
typedef enum {
	IPV4_SCOPE_T_UNICAST			= 1,
	IPV4_SCOPE_T_MULTICAST			= 2,
	IPV4_SCOPE_T_BROADCAST			= 3,
	__IPV4_SCOPE_T_MAX__
} ipv4_scope_t;

/*
 *	IPv6 Address Scope
 *
 *
 */
typedef enum {
	IPV6_SCOPE_T_UNICAST			= 1,
	IPV6_SCOPE_T_MULTICAST			= 2,
	IPV6_SCOPE_T_ANYCAST			= 3,
	__IPV6_SCOPE_T_MAX__
} ipv6_scope_t;

/*
 *	IPv6 Multicast Address Scope
 *
 *
 */
typedef enum {
	IPV6_MC_SCOPE_T_INTERFACE_LOCAL		= 0x1,
	IPV6_MC_SCOPE_T_LINK_LOCAL		= 0x2,
	IPV6_MC_SCOPE_T_REALM_LOCAL		= 0x3,
	IPV6_MC_SCOPE_T_ADMIN_LOCAL		= 0x4,
	IPV6_MC_SCOPE_T_SITE_LOCAL		= 0x5,
	IPV6_MC_SCOPE_T_ORGANIZATION_LOCAL	= 0x8,
	IPV6_MC_SCOPE_T_GLOBAL			= 0xe,
	__IPV6_MC_SCOPE_T_MAX__
} ipv6_mc_scope_t;

/*
 *	IPv4 Address
 *
 *
 */
#define IPV4_ADDRESS_OCTET_SIZE			4

typedef struct {
	u8 					octets[IPV4_ADDRESS_OCTET_SIZE];
} ipv4_address_t;

/*
 *	IPv6 Address
 *
 *
 */
#define IPV6_ADDRESS_HEXTET_SIZE		8

typedef struct {
	u16 					hextets[IPV6_ADDRESS_HEXTET_SIZE];
} ipv6_address_t;

/*
 *	IP Address (IPv4 or IPv6)
 *
 *
 */
typedef union {
	ipv4_address_t				ipv4;
	ipv6_address_t				ipv6;
} ip_address_t;

/*
 *	IPv4 Network Prefix
 *
 *
 */
#define IPV4_PREFIX_LENGTH_MIN			0
#define IPV4_PREFIX_LENGTH_MAX			32

typedef struct {
	ipv4_address_t				address;
	u8					prefix_length;
} ipv4_prefix_t;

/*
 *	IPv6 Network Prefix
 *
 *
 */
#define IPV6_PREFIX_LENGTH_MIN			0
#define IPV6_PREFIX_LENGTH_MAX			128

typedef struct {
	ipv6_address_t				address;
	u8 					prefix_length;
} ipv6_prefix_t;

/*
 *	IP Network Prefix (IPv4 or IPv6)
 *
 *
 */
typedef union {
	ipv4_prefix_t				ipv4;
	ipv6_prefix_t				ipv6;
} ip_prefix_t;

/*
 *	IPv4 Host + Address Pair
 *
 *
 */
typedef struct {
	ipv4_address_t				address;
	hostname_t				hostname;
} ipv4_host_t;

/*
 *	IPv6 Host + Address Pair
 *
 *
 */
typedef struct {
	ipv6_address_t				address;
	hostname_t				hostname;
} ipv6_host_t;

/*
 *	IP Host + Address Pair (IPv4 or IPv6)
 *
 *
 */
typedef union {
	ipv4_host_t				ipv4;
	ipv6_host_t				ipv6;
} ip_host_t;

/*
 *	IPv4 Address List
 *
 *
 */
typedef struct {
	struct list_head			list;
	u64					total;
} ipv4_address_list_t;

/*
 *	IPv6 Address List
 *
 *
 */
typedef struct {
	struct list_head			list;
	u64					total;
} ipv6_address_list_t;

/*
 *	IPv4 Address Range
 *
 *
 */
typedef struct {
	ipv4_address_t 				first_address;
	ipv4_address_t 				last_address;
	u64					total;
} ipv4_address_range_t;

/*
 *	IPv6 Address Range
 *
 *
 */
typedef struct {
	ipv6_address_t 				first_address;
	ipv6_address_t 				last_address;
	u64					total;
} ipv6_address_range_t;

#endif /* _VOLTOS_INET_TYPES_H_ */
