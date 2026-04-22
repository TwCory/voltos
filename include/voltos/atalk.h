// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_ATALK_H_
#define _VOLTOS_ATALK_H_

#include <voltos/byteorder.h>
#include <voltos/socket.h>
#include <voltos/types.h>

#define AT_PORT_MIN             1
#define AT_PORT_MAX             254
#define AT_PORT_RESERVED        128

#define AT_ADDR_ANY_NET         (__u16)0
#define AT_ADDR_ANY_NODE        (__u8)0
#define AT_ADDR_ANY_PORT        (__u8)0
#define AT_ADDR_BROADCAST       (__u8)255

#define DDP_SIZE_MAX            587
#define DDP_HOPS_MAX            15

struct atalk_addr {
    __net16                     s_net;
    __u8                        s_node;
};

#define AT_SOCK_PAD_SIZE        8

struct sockaddr_at {
    sa_family_t                 sat_family;
    __u8                        sat_port;
    struct atalk_addr           sat_addr;
    char                        sat_zero[AT_SOCK_PAD_SIZE];
};

struct atalk_net_range {
    __u8                        nr_phase;
    __net16                     nr_first_net;
    __net16                     nr_last_net;
};

#endif /* _VOLTOS_ATALK_H_ */