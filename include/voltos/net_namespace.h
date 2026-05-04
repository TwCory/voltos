#ifndef _VOLTOS_NET_NAMESPACE_H_
#define _VOLTOS_NET_NAMESPACE_H_

#define NETNS_NAME_SIZE         64

typedef unsigned int            __voltos_netns_id_t;

struct net_namespace {
    char                        netns_name[NETNS_NAME_SIZE];

    __voltos_netns_id_t         netns_id;
    __voltos_netns_id_t         netns_internal_id;
    __voltos_netns_id_t         netns_default_id;

    int                         netns_fd;

    void                        *netns_vrf_ctx;
    void                        *netns_user_ctx;
};

#endif /* _VOLTOS_NET_NAMESPACE_H_ */