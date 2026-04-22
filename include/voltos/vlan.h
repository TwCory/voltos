// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_VLAN_H_
#define _VOLTOS_VLAN_H_

#include <voltos/types.h>

#define VLAN_NAME_SIZE                  32
#define VLAN_NAME_DEFAULT               "default"
#define VLAN_NAME_FDDI_DEFAULT          "fddi-default"
#define VLAN_NAME_TR_DEFAULT            "token-ring-default"
#define VLAN_NAME_FDDINET_DEFAULT       "fddinet-default"
#define VLAN_NAME_TRNET_DEFAULT         "trnet-default"

#define VLAN_ID_MIN                     1
#define VLAN_ID_MAX                     4095
#define VLAN_ID_DEFAULT                 1
#define VLAN_ID_FDDI_DEFAULT            1002
#define VLAN_ID_TR_DEFAULT              1003
#define VLAN_ID_FDDINET_DEFAULT         1004
#define VLAN_ID_TRNET_DEFAULT           1005

typedef __voltos_vlan_id_t              vlan_id_t;

struct vlan {
    vlan_id_t                           vlan_id;
    string                              vlan_name[VLAN_NAME_SIZE];
};

extern const struct vlan                default_vlan;
extern const struct vlan                fddi_default_vlan;
extern const struct vlan                tr_default_vlan;
extern const struct vlan                fddinet_default_vlan;
extern const struct vlan                trnet_default_vlan;

#endif /* _VOLTOS_VLAN_H_ */