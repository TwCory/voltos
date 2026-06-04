// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_NET_NAMESPACE_H_
#define _VOLTOS_NET_NAMESPACE_H_

#define NETNS_NAME_SIZE		32
#define NETNS_NAME_DEFAULT	"default-netns"

#define NETNS_DEFAULT_PATH	"/proc/self/ns/net"
#define NETNS_EXEC_PATH		"/var/run/netns"

typedef unsigned long 		__voltos_netns_id_t;

struct net_namespace {
	__voltos_netns_id_t 	netns_id;
	__voltos_netns_id_t 	netns_default_id;
	char 			netns_name[NETNS_NAME_SIZE];
	int 			netns_fd;

	void 			*netns_user_ctx;
	void 			*netns_vrf_ctx;
};

#endif /* _VOLTOS_NET_NAMESPACE_H_ */
