// SPDX-License-Identifier: BSD-3-Clause

#ifndef _OSPF_ROUTER_H_
#define _OSPF_ROUTER_H_

#include <voltos/if.h>
#include <voltos/ospf.h>
#include <voltos/vrf.h>
#include <router/protocol.h>

struct ospf {
    struct protocol *protocol;
};

struct ospf_interface {
    struct ospf *ospf;
    struct interface *ifp;
};

extern void ospf_init(void);
extern void ospf_interface_init(void);

#endif /* _OSPF_ROUTER_H_ */