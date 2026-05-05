#ifndef _VOLTOS_VLAN_H_
#define _VOLTOS_VLAN_H_

#include <nbapi/voltos/vlan.h>

struct vlan {
    char                        vlan_name[VLAN_NAME_SIZE];
    __voltos_vlan_id_t          vlan_id;

    void                        *vlan_user_ctx;
};

struct vlan_group {
    char                        vg_name[VLAN_GROUP_NAME_SIZE];
    __voltos_vlan_group_id_t    vg_index;
};

#endif /* _VOLTOS_VLAN_H_ */