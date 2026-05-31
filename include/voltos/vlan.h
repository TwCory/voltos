#ifndef _VOLTOS_VLAN_H_
#define _VOLTOS_VLAN_H_

#include <nbapi/voltos/vlan.h>

struct vlan {
	__voltos_vlan_id_t 	vlan_id;
	char 			vlan_name[VLAN_NAME_SIZE];
};

#endif /* _VOLTOS_VLAN_H_ */
