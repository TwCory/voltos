#ifndef _VOLTOS_INET_H_
#define _VOLTOS_INET_H_

#include <voltos/types.h>

typedef enum {
	IP_VERSION_T_UNSPEC = 0,
	IP_VERSION_T_V4 = 1,
	IP_VERSION_T_V6 = 2,
	__IP_VERSION_T_MAX__
} ip_version_t;

typedef u16 ip_port_t;

typedef u16 asn16_t;
typedef u32 asn32_t;

typedef struct {
	u8 data[4];
} ip4_addr_t;

typedef struct {
	u16 data[8];
} ip6_addr_t;

typedef struct {
	ip_version_t version;
	union {
		ip4_addr_t ipv4;
		ip6_addr_t ipv6;
	} address;
} ip_addr_t;

typedef struct {
	ip4_addr_t address;
	u8 prefix_len;
} ip4_prefix_t;

typedef struct {
	ip6_addr_t address;
	u8 prefix_len;
} ip6_prefix_t;

typedef struct {
	ip_version_t version;
	union {
		ip4_prefix_t ipv4;
		ip6_prefix_t ipv6;
	} address;
} ip_prefix_t;

typedef string hostname_t;
typedef string domain_name_t;

#endif /* _VOLTOS_INET_H_ */