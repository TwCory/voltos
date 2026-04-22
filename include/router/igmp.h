// SPDX-License-Identifier: BSD-3-Clause

#ifndef _IGMP_ROUTER_H_
#define _IGMP_ROUTER_H_

#include <voltos/if.h>
#include <voltos/igmp.h>
#include <voltos/vrf.h>
#include <router/protocol.h>

struct igmp {
    struct protocol *protocol;
};

struct igmp_interface {
    struct igmp *igmp;
    struct interface *ifp;
};

extern void igmp_init(void);
extern void igmp_interface_init(void);

#endif /* _IGMP_ROUTER_H_ */