#ifndef _VOLTOS_NET_NAMESPACE_H_
#define _VOLTOS_NET_NAMESPACE_H_



#define NETNS_NAME_SIZE                 36


struct net_namespace {
    signed char                         netns_name[NETNS_NAME_SIZE];
};

#endif /* _VOLTOS_NET_NAMESPACE_H_ */