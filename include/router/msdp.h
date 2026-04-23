// SPDX-License-Identifier: BSD-3-Clause

#ifndef _MSDP_ROUTER_H_
#define _MSDP_ROUTER_H_

#include <voltos/if.h>
#include <voltos/msdp.h>
#include <voltos/vrf.h>
#include <router/protocol.h>

struct msdp {
    struct protocol *p_ptr;
};

struct msdp_interface {
    struct msdp *msdp;
    struct interface *if_ptr;
};

extern void msdp_init(void);
extern void msdp_interface_init(void);

#endif /* _MSDP_ROUTER_H_ */