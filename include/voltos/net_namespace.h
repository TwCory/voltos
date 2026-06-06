// SPDX-License-Identifier: BSD-3-Clause

#ifndef VOLTOS_NET_NAMESPACE_H
#define VOLTOS_NET_NAMESPACE_H

#include <voltos/refcount.h>

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

	refcount_t 		netns_ref_count;

	void 			*netns_user_ctx;
	void 			*netns_vrf_ctx;
};

#endif /* VOLTOS_NET_NAMESPACE_H */
