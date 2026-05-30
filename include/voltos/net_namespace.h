#ifndef _VOLTOS_NET_NAMESPACE_H_
#define _VOLTOS_NET_NAMESPACE_H_

#define NETNS_NAME_SIZE		32

#define NETNS_NAME_DEFAULT	"/proc/self/ns/net"
#define NETNS_RUN_PATH		"/var/run/netns"

typedef unsigned long 		__voltos_netns_id_t;

struct net_namespace {

};

#endif /* _VOLTOS_NET_NAMESPACE_H_ */
