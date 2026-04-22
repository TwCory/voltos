// SPDX-License-Identifier: BSD-3-Clause

#ifndef _PIM_ROUTER_H_
#define _PIM_ROUTER_H_

#include <voltos/if.h>
#include <voltos/pim.h>
#include <voltos/vrf.h>
#include <router/protocol.h>

struct pim {
    struct protocol *protocol;
};

struct pim_interface {
    struct pim *pim;
    struct interface *ifp;
};

extern void pim_init(void);
extern void pim_interface_init(void);

#endif /* _PIM_ROUTER_H_ */