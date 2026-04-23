// SPDX-License-Identifier: BSD-3-Clause

#ifndef _EIGRP_ROUTER_H_
#define _EIGRP_ROUTER_H_

#include <voltos/eigrp.h>
#include <voltos/if.h>
#include <voltos/route.h>
#include <voltos/route_table.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <router/protocol.h>

struct eigrp {
    struct protocol *p_ptr;
    struct route_table *rt_ptr;

    string *vrf_name;
    struct vrf *vrf_ptr;
};

struct eigrp_interface {
    struct eigrp *eigrp;
    struct interface *if_ptr;
};

struct eigrp_route {
    struct route *r_ptr;
};

extern void eigrp_init(void);
extern void eigrp_interface_init(void);


#endif /* _EIGRP_ROUTER_H_ */