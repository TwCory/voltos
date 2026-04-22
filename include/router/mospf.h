// SPDX-License-Identifier: BSD-3-Clause

#ifndef _MOSPF_ROUTER_H_
#define _MOSPF_ROUTER_H_

#include <voltos/if.h>
#include <router/protocol.h>

struct mospf {
    struct protocol *protocol;
};

struct mospf_interface {
    struct mospf *mospf;
    struct interface *ifp;
};

extern void mospf_init(void);
extern void mospf_interface_init(void);

#endif /* _MOSPF_ROUTER_H_ */