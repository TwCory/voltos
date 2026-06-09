#ifndef VOLTOS_VLAN_H
#define VOLTOS_VLAN_H

#include <nbapi/voltos/vlan.h>

struct vlan {
	__voltos_vlan_id_t 	vlan_id;
	char 			vlan_name[VLAN_NAME_SIZE];
};

#endif /* VOLTOS_VLAN_H */
