// SPDX-License-Identifier: BSD-3-Clause

#ifndef _PIM6_ROUTER_H_
#define _PIM6_ROUTER_H_

#include <voltos/if.h>
#include <voltos/pimv6.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <router/protocol.h>

struct pimv6 {
    struct protocol *p_ptr;
};

struct pimv6_interface {
    struct pimv6 *pimv6;
    struct interface *if_ptr;
};

extern void pimv6_init(void);
extern void pimv6_interface_init(void);

#endif /* _PIM6_ROUTER_H_ */