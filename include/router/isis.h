// SPDX-License-Identifier: BSD-3-Clause

#ifndef _ISIS_ROUTER_H_
#define _ISIS_ROUTER_H_

#include <voltos/if.h>
#include <voltos/isis.h>
#include <voltos/vrf.h>
#include <router/protocol.h>

struct isis {
    struct protocol *p_ptr;
};

struct isis_interface {
    struct isis *isis;
    struct interface *if_ptr;
};

struct isis_circuit {
    struct isis *isis;
};

extern void isis_init(void);
extern void isis_interface_init(void);

#endif /* _ISIS_ROUTER_H_ */