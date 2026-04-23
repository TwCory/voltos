// SPDX-License-Identifier: BSD-3-Clause

#ifndef _OSPF_ROUTER_H_
#define _OSPF_ROUTER_H_

#include <voltos/if.h>
#include <voltos/ospf.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <router/protocol.h>

struct ospf {
    struct protocol *p_ptr;
};

struct ospf_interface {
    struct ospf *ospf;
    struct interface *if_ptr;
};

struct ospf_area {
    struct ospf *ospf;
};

extern void ospf_init(void);
extern void ospf_interface_init(void);

#endif /* _OSPF_ROUTER_H_ */