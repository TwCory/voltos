// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_NET_NAMESPACE_H_
#define _VOLTOS_NET_NAMESPACE_H_

#include <voltos/list.h>
#include <voltos/rbtree.h>
#include <voltos/types.h>

#define NETNS_NAME_SIZE         32

#define NETNS_EXEC_PATH         "/var/run/netns"
#define NETNS_DEFAULT_PATH      "/proc/self/ns/net"

typedef __voltos_netns_id_t     netns_id_t;

struct net_namespace {
    struct rb_node              *netns_node;

    netns_id_t                  netns_id;
    netns_id_t                  netns_internal_id;
    netns_id_t                  netns_default_id;

    string                      netns_name[NETNS_NAME_SIZE];
    int                         netns_fd;

    struct list                 *netns_if_list;

    void                        *netns_vrf_ctx;
    void                        *netns_user_ctx;
};

int netns_sock(int domain, int type, int protocol, netns_id_t netns_id);

extern void netns_init(void);

#endif /* _VOLTOS_NET_NAMESPACE_H_ */