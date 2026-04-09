#ifndef _VOLTOS_NET_NAMESPACE_H_
#define _VOLTOS_NET_NAMESPACE_H_

#define NETNS_NAME_SIZE                 36

typedef unsigned int                    __voltos_netns_id_t;

struct net_namespace {
    __voltos_netns_id_t                 netns_id;
    signed char                         netns_name[NETNS_NAME_SIZE];
};

#endif /* _VOLTOS_NET_NAMESPACE_H_ */