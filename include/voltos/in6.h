// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_IN6_H_
#define _VOLTOS_IN6_H_

#include <voltos/socket.h>
#include <voltos/types.h>

struct in6_addr {
    __net128                s6_addr;
};

struct sockaddr_in6 {
    sa_family_t             sin6_family;
    __net16                 sin6_port;
    __net32                 sin6_flowinfo;
    struct in6_addr         sin6_addr;
    __u32                   sin6_scope_id;
};

struct in6_ifaddr {
    struct sockaddr_in6     ia6_addr;
};

#endif /* _VOLTOS_IN6_H_ */