#ifndef _VOLTOS_NET_BRIDGE_H_
#define _VOLTOS_NET_BRIDGE_H_

enum vlan_alloc_policy {
	VLAN_ALLOC_POLICY_T_ASCENDING	= 1,
	VLAN_ALLOC_POLICY_T_DESCENDING	= 2,
	__VLAN_ALLOC_POLICY_T_MAX__
};

struct net_bridge_conf {
	enum vlan_alloc_policy		vlan_alloc_type;
};

#endif /* _VOLTOS_NET_BRIDGE_H_ */
