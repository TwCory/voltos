// SPDX-License-Identifier: BSD-3-Clause

#ifndef _ZHLS_ROUTER_H_
#define _ZHLS_ROUTER_H_

#include <voltos/if.h>
#include <voltos/route.h>
#include <voltos/route_table.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <voltos/zhls.h>
#include <router/protocol.h>

struct zhls {
    struct protocol *p_ptr;
    struct route_table *rt_ptr;

    string *vrf_name;
    struct vrf *vrf_ptr;
};

struct zhls_interface {
    struct zhls *zhls;
    struct interface *if_ptr;
};

struct zhls_route {
    struct route *r_ptr;
};

extern void zhls_init(void);
extern void zhls_interface_init(void);

#endif /* _ZHLS_ROUTER_H_ */