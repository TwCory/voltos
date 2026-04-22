// SPDX-License-Identifier: BSD-3-Clause

#ifndef _EIGRP_ROUTER_H_
#define _EIGRP_ROUTER_H_

#include <voltos/eigrp.h>
#include <voltos/if.h>
#include <voltos/vrf.h>
#include <router/protocol.h>

struct eigrp {
    struct protocol *protocol;
};

struct eigrp_interface {
    struct eigrp *eigrp;
    struct interface *ifp;
};

extern void eigrp_init(void);
extern void eigrp_interface_init(void);
extern int eigrp_create_sock(struct vrf *vrf);

#endif /* _EIGRP_ROUTER_H_ */