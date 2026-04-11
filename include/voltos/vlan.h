#ifndef _VOLTOS_VLAN_H_
#define _VOLTOS_VLAN_H_

#include <voltos/types.h>

#define VLAN_NAME_SIZE              24

#define VLAN_ID_MIN                 1
#define VLAN_ID_MAX                 4095

typedef __voltos_vlan_id_t          vlan_id_t;

struct vlan {
    vlan_id_t                       vlan_id;
    string                          vlan_name[VLAN_NAME_SIZE];
};

#endif /* _VOLTOS_VLAN_H_ */