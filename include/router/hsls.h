// SPDX-License-Identifier: BSD-3-Clause

#ifndef _HSLS_ROUTER_H_
#define _HSLS_ROUTER_H_

#include <voltos/hsls.h>
#include <voltos/if.h>
#include <voltos/route.h>
#include <voltos/route_table.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <router/protocol.h>

struct hsls {
    struct protocol *p_ptr;
    struct route_table *rt_ptr;

    string *vrf_name;
    struct vrf *vrf_ptr;
};

struct hsls_interface {
    struct hsls *hsls;
    struct interface *if_ptr;
};

struct hsls_route {
    struct route *r_ptr;
};

extern void hsls_init(void);
extern void hsls_interface_init(void);

#endif /* _HSLS_ROUTER_H_ */