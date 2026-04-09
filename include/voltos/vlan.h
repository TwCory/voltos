#ifndef _VOLTOS_VLAN_H_
#define _VOLTOS_VLAN_H_

#define VLAN_NAME_SIZE              24

#define VLAN_ID_MIN                 1
#define VLAN_ID_MAX                 4095

typedef unsigned short              __voltos_vlan_id_t;

struct vlan {
    __voltos_vlan_id_t              vlan_id;
    signed char                     vlan_name[VLAN_NAME_SIZE];
};

#endif /* _VOLTOS_VLAN_H_ */