// SPDX-License-Identifier: BSD-3-Clause

#ifndef _OSPF6_ROUTER_H_
#define _OSPF6_ROUTER_H_

#include <voltos/if.h>
#include <voltos/ospfv3.h>
#include <voltos/vrf.h>
#include <router/protocol.h>

struct ospfv3 {
    struct protocol *protocol;
};

struct ospfv3_interface {
    struct ospfv3 *ospfv3;
    struct interface *ifp;
};

extern void ospfv3_init(void);
extern void ospfv3_interface_init(void);

#endif /* _OSPF6_ROUTER_H_ */