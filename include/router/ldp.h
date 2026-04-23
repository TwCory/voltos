// SPDX-License-Identifier: BSD-3-Clause

#ifndef _LDP_ROUTER_H_
#define _LDP_ROUTER_H_

#include <voltos/if.h>
#include <voltos/inet.h>
#include <voltos/mpls.h>
#include <voltos/mpls_ldp.h>
#include <voltos/vrf.h>
#include <router/protocol.h>

enum ldp_socket_type {
    LDP_SOCKET_TYPE_T_DISC,
    LDP_SOCKET_TYPE_T_EDISC,
    LDP_SOCKET_TYPE_T_SESSION,
    __LDP_SOCKET_TYPE_T_MAX__
};

enum ldp_hello_type {
    LDP_HELLO_TYPE_T_LINK,
    LDP_HELLO_TYPE_T_TARGETED,
    __LDP_HELLO_TYPE_T_MAX__
};

struct ldp {
    struct protocol *p_ptr;
    ip4_addr_t router_id;
    ip4_addr_t mc_addr_ipv4;
    ip6_addr_t mc_addr_ipv6;
};

struct ldp_interface {
    struct ldp *ldp;
    struct interface *if_ptr;
};

extern void ldp_init(void);
extern void ldp_interface_init(void);

#endif /* _LDP_ROUTER_H_ */