#ifndef _VOLTOS_VLAN_H_
#define _VOLTOS_VLAN_H_

#include <voltos/avl-tree.h>
#include <voltos/if.h>
#include <voltos/inet.h>
#include <voltos/list.h>
#include <voltos/types.h>
#include <nbapi/voltos/vlan.h>

struct vlan_svi;

struct vlan {
	__avl_entry(vlan)		by_id;
	__avl_entry(vlan)		by_name;

    	char                        	vlan_name[VLAN_NAME_SIZE];
    	__voltos_vlan_id_t          	vlan_id;

	int				vlan_media;
	int				vlan_state;

	bool				vlan_svi;
	struct vlan_svi			*vlan_svi_ptr;

    	void                        	*vlan_user_ctx;
	void				*vlan_internal_ctx;
};

struct vlan_group {
	__avl_entry(vlan_group)		by_index;
	__avl_entry(vlan_group)		by_name;

    	char                        	name[VLAN_GROUP_NAME_SIZE];
    	__voltos_vlan_group_id_t    	index;
	struct list_head		member_list;

    	void				*user_ctx;
};

struct vlan_filter {
	char				name[VLAN_FILTER_NAME_SIZE];
	struct list_head		apply_list;

};

struct vlan_filter_entry {
	struct vlan_filter		*filter;

	__u16				value;
	int				match_type;
	union {
		ipv4_address_list_t	ipv4_match;
		ipv6_address_list_t	ipv6_match;
	} match_ctx;
	int				action;
};

struct vlan_svi {
	struct vlan 			*vlan_ptr;
	struct interface		*if_ptr;
};

#endif /* _VOLTOS_VLAN_H_ */
