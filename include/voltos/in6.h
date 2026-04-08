#ifndef _VOLTOS_IN6_H_
#define _VOLTOS_IN6_H_

#include <voltos/socket.h>
#include <voltos/types.h>

struct in6_addr {
    union {
        __u8                    s6_addr8[16];
        __net16                 s6_addr16[8];
        __net32                 s6_addr32[4];
        __net64                 s6_addr64[2];
        __net128                s6_addr128;
    } in6_u;
};

struct sockaddr_in6 {
    sa_family_t                 sin6_family;
    in_port_t                   sin6_port;
    __net32                     sin6_flowinfo;
    struct in6_addr             sin6_addr;
    __u32                       sin6_scope_id;
};

#endif /* _VOLTOS_IN6_H_ */