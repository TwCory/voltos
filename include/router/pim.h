// SPDX-License-Identifier: BSD-3-Clause

#ifndef _PIM_ROUTER_H_
#define _PIM_ROUTER_H_

#include <voltos/if.h>
#include <voltos/pim.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <router/protocol.h>

struct pim {
    struct protocol *p_ptr;
};

struct pim_interface {
    struct pim *pim;
    struct interface *if_ptr;
};

extern void pim_init(void);
extern void pim_interface_init(void);

#endif /* _PIM_ROUTER_H_ */