// SPDX-License-Identifier: BSD-3-Clause

#ifndef _OLSR_ROUTER_H_
#define _OLSR_ROUTER_H_

#include <voltos/if.h>
#include <router/protocol.h>

struct olsr {
    struct protocol *protocol;
};

struct olsr_interface {
    struct olsr *olsr;
    struct interface *ifp;
};

extern void olsr_init(void);
extern void olsr_interface_init(void);

#endif /* _OLSR_ROUTER_H_ */