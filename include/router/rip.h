// SPDX-License-Identifier: BSD-3-Clause

#ifndef _RIP_ROUTER_H_
#define _RIP_ROUTER_H_

#include <voltos/if.h>
#include <voltos/rip.h>
#include <voltos/vrf.h>
#include <router/protocol.h>

struct rip {
    struct protocol *protocol;
};

struct rip_interface {
    struct rip *rip;
    struct interface *ifp;
};

struct rip_peer {
    struct rip *rip;
};

struct rip_route_ctx {

};

struct rip_offset_list {
    struct rip *rip;
};

extern void rip_init(void);
extern void rip_interface_init(void);
extern int rip_create_sock(struct vrf *vrf);

#endif /* _RIP_ROUTER_H_ */