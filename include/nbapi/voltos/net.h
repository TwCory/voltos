#ifndef NBAPI_VOLTOS_NET_H
#define NBAPI_VOLTOS_NET_H

typedef unsigned int 				__voltos_net_idx_t;

enum net_instance_type {
	NET_INSTANCE_TYPE_T_UNSPEC		= 0,
	NET_INSTANCE_TYPE_T_DEFAULT		= 1,
	NET_INSTANCE_TYPE_T_VLAN		= 2,
	NET_INSTANCE_TYPE_T_VRF			= 3,
	__NET_INSTANCE_TYPE_T_MAX__
};

enum net_backend_type {
	NET_BACKEND_TYPE_T_UNSPEC		= 0,
	NET_BACKEND_TYPE_T_NET_NAMESPACE	= 1,
	NET_BACKEND_TYPE_T_VRF_LITE		= 2,
	__NET_BACKEND_TYPE_T_MAX__
};

#endif /* NBAPI_VOLTOS_NET_H */
