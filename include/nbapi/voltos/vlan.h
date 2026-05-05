#ifndef _NBAPI_VOLTOS_VLAN_H_
#define _NBAPI_VOLTOS_VLAN_H_

#define VLAN_NAME_SIZE                  24
#define VLAN_GROUP_NAME_SIZE            24
#define VLAN_COMMENT_SIZE               128

#define VLAN_ID_MIN                     1
#define VLAN_ID_MAX                     4095

#define VLAN_ID_DEFAULT                 1
#define VLAN_ID_FDDI_DEFAULT            1002
#define VLAN_ID_TR_DEFAULT              1003
#define VLAN_ID_FDDINET_DEFAULT         1004
#define VLAN_ID_TRNET_DEFAULT           1005

#define VLAN_NAME_DEFAULT               "default"
#define VLAN_NAME_FDDI_DEFAULT          "fddi-default"
#define VLAN_NAME_TR_DEFAULT            "token-ring-default"
#define VLAN_NAME_FDDINET_DEFAULT       "fddinet-default"
#define VLAN_NAME_TRNET_DEFAULT         "trnet-default"

typedef unsigned short                  __voltos_vlan_id_t;
typedef unsigned int                    __voltos_vlan_group_id_t;

enum {
    VLAN_MEDIA_T_NONE                   = 0,
    VLAN_MEDIA_T_ETHERNET               = 1,
    VLAN_MEDIA_T_FDDI                   = 2,
    VLAN_MEDIA_T_TOKEN_RING             = 3,
    __VLAN_MEDIA_T_MAX__
};

enum {
    VLAN_STATE_T_NONE                   = 0,
    VLAN_STATE_T_ACTIVE                 = 1,
    VLAN_STATE_T_SUSPENDED              = 2,
    VLAN_STATE_T_UNSUPPORTED            = 3,
    __VLAN_STATE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_VLAN_H_ */