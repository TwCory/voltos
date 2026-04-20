// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_IPX_H_
#define _VOLTOS_IPX_H_

#include <voltos/socket.h>
#include <voltos/types.h>

struct ipx_net {
    __net32                     s_net;
};

#define IPX_NODE_SIZE           6

struct ipx_node {
    __u8                        s_node[IPX_NODE_SIZE];
};

struct sockaddr_ipx {
    sa_family_t                 sipx_family;
    __net16                     sipx_port;
    struct ipx_net              sipx_network;
    struct ipx_node             sipx_node;
    __u8                        sipx_type;
    __u8                        sipx_zero;
};

#endif /* _VOLTOS_IPX_H_ */