#ifndef VOLTOS_NET_H
#define VOLTOS_NET_H

#include <voltos/net_namespace.h>
#include <voltos/vlan.h>
#include <voltos/vrf.h>
#include <nbapi/voltos/net.h>

struct net {
	__voltos_net_idx_t 		net_index;
	enum net_instance_type 		net_instance_type;
	union {
		struct vlan 		*vlan;
		struct vrf 		*vrf;
	} net_instance;

	enum net_backend_type		net_backend_type;
	union {
		struct net_namespace 	*netns;
	} net_backend;

};

#endif /* VOLTOS_NET_H */
