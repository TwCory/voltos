// SPDX-License-Identifier: BSD-3-Clause

#ifndef _ZHLS_ROUTER_H_
#define _ZHLS_ROUTER_H_

#include <voltos/if.h>
#include <voltos/vrf.h>
#include <voltos/zhls.h>
#include <router/protocol.h>

struct zhls {
    struct protocol *protocol;
};

struct zhls_interface {
    struct zhls *zhls;
    struct interface *ifp;
};

extern void zhls_init(void);
extern void zhls_interface_init(void);
extern int zhls_create_sock(struct vrf *vrf);

#endif /* _ZHLS_ROUTER_H_ */