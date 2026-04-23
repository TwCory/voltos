// SPDX-License-Identifier: BSD-3-Clause

#ifndef _RIP_ROUTER_H_
#define _RIP_ROUTER_H_

#include <voltos/if.h>
#include <voltos/rip.h>
#include <voltos/route.h>
#include <voltos/route_table.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <router/protocol.h>

struct rip {
    struct protocol *p_ptr;
    struct route_table *rt_ptr;

    string *vrf_name;
    struct vrf *vrf_ptr;

    bool is_enabled;
};

struct rip_interface {
    struct rip *rip;
    struct interface *if_ptr;
};

struct rip_peer {
    struct rip *rip;
};

struct rip_route {
    struct route *r_ptr;
};

struct rip_offset_list {
    struct rip *rip;
};

extern void rip_init(void);
extern void rip_interface_init(void);

#endif /* _RIP_ROUTER_H_ */