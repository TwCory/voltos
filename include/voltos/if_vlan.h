#ifndef _VOLTOS_IF_VLAN_H_
#define _VOLTOS_IF_VLAN_H_

#define VLAN_MTU_MIN            1500
#define VLAN_MTU_MAX            9200
#define VLAN_MTU_DEFAULT        1500

typedef enum {
    VLAN_PROTOCOL_T_NONE        = 0,
    VLAN_PROTOCOL_T_DOT1Q       = 1,
    VLAN_PROTOCOL_T_DOT1AD      = 2,
    VLAN_PROTOCOL_T_ISL         = 3,
    __VLAN_PROTOCOL_T_MAX__
} vlan_protocol_t;

#endif /* _VOLTOS_IF_VLAN_H_ */