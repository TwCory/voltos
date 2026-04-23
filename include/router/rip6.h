// SPDX-License-Identifier: BSD-3-Clause

#ifndef _RIP6_ROUTER_H_
#define _RIP6_ROUTER_H_

#include <voltos/if.h>
#include <voltos/ripng.h>
#include <voltos/route.h>
#include <voltos/route_table.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <router/protocol.h>

struct ripng {
    struct protocol *p_ptr;
    struct route_table *rt_ptr;

    string *vrf_name;
    struct vrf *vrf_ptr;

    bool is_enabled;
};

struct ripng_interface {
    struct ripng *ripng;
    struct interface *if_ptr;
};

struct ripng_peer {
    struct ripng *ripng;
};

struct ripng_route {
    struct route *r_ptr;
};

struct ripng_offset_list {
    struct ripng *ripng;
};

extern void ripng_init(void);
extern void ripng_interface_init(void);

#endif /* _RIP6_ROUTER_H_ */