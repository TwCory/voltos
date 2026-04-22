// SPDX-License-Identifier: BSD-3-Clause

#ifndef _MLD_ROUTER_H_
#define _MLD_ROUTER_H_

#include <voltos/if.h>
#include <voltos/mld.h>
#include <voltos/vrf.h>
#include <router/protocol.h>

struct mld {
    struct protocol *protocol;
};

struct mld_interface {
    struct mld *mld;
    struct interface *ifp;
};

extern void mld_init(void);
extern void mld_interface_init(void);

#endif /* _MLD_ROUTER_H_ */