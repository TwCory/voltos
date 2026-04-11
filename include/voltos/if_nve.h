#ifndef _VOLTOS_IF_NVE_H_
#define _VOLTOS_IF_NVE_H_

typedef enum {
    NVE_PROTOCOL_T_NONE                         = 0,
    NVE_PROTOCOL_T_NVGRE                        = 1,
    NVE_PROTOCOL_T_GENEVE                       = 2,
    NVE_PROTOCOL_T_VXLAN_IPV4                   = 3,
    NVE_PROTOCOL_T_VXLAN_IPV6                   = 4,
    NVE_PROTOCOL_T_VXLAN_DUAL_STACK             = 5,
    NVE_PROTOCOL_T_VXLAN_DUAL_PREFER_IPV4       = 6,
    __NVE_PROTOCOL_T_MAX__
} nve_protocol_t;

typedef enum {
    NVE_MULTICAST_T_NONE                        = 0,
    NVE_MULTICAST_T_IPV4                        = 1,
    NVE_MULTICAST_T_IPV6                        = 2,
    __NVE_MULTICAST_T_MAX__
} nve_multicast_t;


#endif /* _VOLTOS_IF_NVE_H_ */