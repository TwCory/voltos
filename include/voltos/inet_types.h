#ifndef _VOLTOS_INET_TYPES_H
#define _VOLTOS_INET_TYPES_H

#include <voltos/inet_const.h>
#include <voltos/list.h>
#include <voltos/types.h>

typedef u_char 			hostname_t;
typedef u_char 			domain_name_t;

typedef u16 			ip_mtu_t;
typedef u16 			ip_port_t;
typedef u8 			ip_protocol_t;
typedef u8 			ip_ttl_t;

typedef struct {
	__octet 		address[IPV4_ADDR_OCTET_SIZE];
} ipv4_addr_t;

typedef struct {
	__hextet 		address[IPV6_ADDR_HEXTET_SIZE];
} ipv6_addr_t;

typedef struct {
	union {
		ipv4_addr_t 	ipv4;
		ipv6_addr_t 	ipv6;
	};
} ip_addr_t;

typedef struct {
	ipv4_addr_t 		address;
	u8 			prefix_length;
} ipv4_prefix_t;

typedef struct {
	ipv6_addr_t 		address;
	u8 			prefix_length;
} ipv6_prefix_t;

typedef struct {
	union {
		ipv4_prefix_t 	ipv4;
		ipv6_prefix_t 	ipv6;
	};
} ip_prefix_t;

typedef struct {
	ipv4_addr_t 		address;
	hostname_t 		hostname;
} ipv4_host_t;

typedef struct {
	ipv6_addr_t 		address;
	hostname_t 		hostname;
} ipv6_host_t;

typedef struct {
	ip_addr_t 		address;
	hostname_t 		hostname;
} ip_host_t;

typedef struct {
	struct list_head 	list;
} ipv4_addr_list_t;

typedef struct {
	struct list_head 	list;
} ipv6_addr_list_t;

#endif /* _VOLTOS_INET_TYPES_H */
