// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_INET_H_
#define _VOLTOS_INET_H_

#include <voltos/types.h>

#define HOST_NAME_SIZE                      253
#define HOST_LABEL_SIZE_MIN                 1
#define HOST_LABEL_SIZE_MAX                 63

typedef string                              hostname_t;
typedef string                              domain_name_t;
typedef string                              fqdn_t;
typedef string                              uri_t;

typedef u16                                 asn16_t;
typedef u32                                 asn32_t;

typedef u8                                  ip_dscp_t;
typedef u16                                 ip_port_t;
typedef u8                                  ip_protocol_t;
typedef u8                                  ip_ttl_t;
typedef u32                                 ip_mtu_t;

typedef enum {
    IP_VERSION_T_UNSPEC                     = 0,
    IP_VERSION_T_V4                         = 1,
    IP_VERSION_T_V6                         = 2,
    __IP_VERSION_T_MAX__
} ip_version_t;

#define IP4_ADDR_FIELDS                     4

typedef struct {
    u8                                      a_fields[IP4_ADDR_FIELDS];
} ip4_addr_t;

#define IP6_ADDR_FIELDS                     8

typedef struct {
    u16                                     a_fields[IP6_ADDR_FIELDS];
} ip6_addr_t;

typedef struct {
    ip_version_t                            a_version;
    union {
        ip4_addr_t                          ip4;
        ip6_addr_t                          ip6;
    } a_addr;
} ip_addr_t;

#define IP4_PREFIX_LEN_MIN                  0
#define IP4_PREFIX_LEN_MAX                  32

typedef struct {
    ip4_addr_t                              p_addr;
    u8                                      p_len;
} ip4_prefix_t;

#define IP6_PREFIX_LEN_MIN                  0
#define IP6_PREFIX_LEN_MAX                  128

typedef struct {
    ip6_addr_t                              p_addr;
    u8                                      p_len;
} ip6_prefix_t;

typedef struct {
    ip_version_t                            p_version;
    union {
        ip4_prefix_t                        ip4;
        ip6_prefix_t                        ip6;
    } p_prefix;
} ip_prefix_t;

typedef struct {
    ip4_addr_t                              h_addr;
    hostname_t                              h_name;
} ip4_host_t;

typedef struct {
    ip6_addr_t                              h_addr;
    hostname_t                              h_name;
} ip6_host_t;

typedef struct {
    ip_version_t                            h_version;
    union {
        ip4_addr_t                          ip4;
        ip6_addr_t                          ip6;
    } h_addr;
    hostname_t                              h_name;
} ip_host_t;

typedef enum {
    IP4_ADDR_CLASS_T_UNSPEC                 = 0,
    IP4_ADDR_CLASS_T_A                      = 1,
    IP4_ADDR_CLASS_T_B                      = 2,
    IP4_ADDR_CLASS_T_C                      = 3,
    IP4_ADDR_CLASS_T_D                      = 4,
    IP4_ADDR_CLASS_T_E                      = 5,
    __IP4_ADDR_CLASS_T_MAX__
} ip4_addr_class_t;

typedef enum {
    IP6_ADDR_SCOPE_T_UNSPEC                 = 0,
    IP6_ADDR_SCOPE_T_UNICAST                = 1,
    IP6_ADDR_SCOPE_T_MULTICAST              = 2,
    IP6_ADDR_SCOPE_T_ANYCAST                = 3,
    __IP6_ADDR_SCOPE_T_MAX__
} ip6_addr_scope_t;

typedef u32                                 ip6_flow_label_t;

#define __ip4_address                       100
#define __ip6_address                       101

#define __ip4_prefix                        200
#define __ip6_prefix                        201

#endif /* _VOLTOS_INET_H_ */