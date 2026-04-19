// SPDX-License-Identifier: BSD-3-Clause

#ifndef _ROUTER_PROTOCOL_H_
#define _ROUTER_PROTOCOL_H_

#include <router/distance.h>
#include <voltos/types.h>

typedef enum {
    PROTOCOL_TYPE_T_BABEL,
    PROTOCOL_TYPE_T_BFD,
    PROTOCOL_TYPE_T_BGP,
    PROTOCOL_TYPE_T_CARP,
    PROTOCOL_TYPE_T_DVMRP,
    PROTOCOL_TYPE_T_EIGRP,
    PROTOCOL_TYPE_T_HSLS,
    PROTOCOL_TYPE_T_HSRP,
    PROTOCOL_TYPE_T_IGMP,
    PROTOCOL_TYPE_T_ISIS,
    PROTOCOL_TYPE_T_ISO_IGRP,
    PROTOCOL_TYPE_T_LDP,
    PROTOCOL_TYPE_T_LISP,
    PROTOCOL_TYPE_T_MLD,
    PROTOCOL_TYPE_T_MOSPF,
    PROTOCOL_TYPE_T_MRD,
    PROTOCOL_TYPE_T_MSDP,
    PROTOCOL_TYPE_T_OLSR,
    PROTOCOL_TYPE_T_OPENFABRIC,
    PROTOCOL_TYPE_T_OSPF,
    PROTOCOL_TYPE_T_OSPFV3,
    PROTOCOL_TYPE_T_PGM,
    PROTOCOL_TYPE_T_PIM,
    PROTOCOL_TYPE_T_PIMV6,
    PROTOCOL_TYPE_T_RIP,
    PROTOCOL_TYPE_T_RIPNG,
    PROTOCOL_TYPE_T_RSVP,
    PROTOCOL_TYPE_T_STATIC,
    PROTOCOL_TYPE_T_VRRP,
    PROTOCOL_TYPE_T_ZHLS,
    __PROTOCOL_TYPE_T_MAX__
} protocol_type_t;

struct protocol {
    string                      *p_name;
    int                         p_name_counter;
    protocol_type_t             p_type;

    u_size                      p_size;
    u_size                      p_conf_size;

    distance_t                  p_distance;
};

#endif /* _ROUTER_PROTOCOL_H_ */