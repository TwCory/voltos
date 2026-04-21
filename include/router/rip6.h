// SPDX-License-Identifier: BSD-3-Clause

#ifndef _RIP6_ROUTER_H_
#define _RIP6_ROUTER_H_

#include <voltos/ripng.h>
#include <voltos/types.h>
#include <voltos/vrf.h>

struct ripng {
    string *vrf_name;
    struct vrf *vrf_ptr;

    bool is_enabled;
};

struct ripng_interface {
    struct ripng *ripng;
};

struct ripng_peer {
    struct ripng *ripng;
};

struct ripng_route_ctx {

};

struct ripng_offset_list {
    struct ripng *ripng;
};

extern int ripng_create_sock(struct vrf *vrf);

#endif /* _RIP6_ROUTER_H_ */