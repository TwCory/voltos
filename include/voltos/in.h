// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_IN_H_
#define _VOLTOS_IN_H_

#include <voltos/socket.h>
#include <voltos/types.h>

struct in_addr {
    __net32                     s_addr;
};

#define IN_SOCK_PAD_SIZE        16

struct sockaddr_in {
    sa_family_t                 sin_family;
    __net16                     sin_port;
    struct in_addr              sin_addr;
    __u8                        __pad[IN_SOCK_PAD_SIZE - sizeof(short int) -
                                    sizeof(unsigned short int) - sizeof(struct in_addr)];
};
#define sin_zero                __pad

struct in_ifaddr {
    struct sockaddr_in          ia_addr;
    struct sockaddr_in          ia_dstaddr;
    struct sockaddr_in          ia_sockmask;
};

#endif /* _VOLTOS_IN_H_ */