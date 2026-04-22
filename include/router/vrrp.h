// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VRRP_ROUTER_H_
#define _VRRP_ROUTER_H_

#include <voltos/types.h>
#include <voltos/vrrp.h>

struct vrrp_router {
    struct interface *ifp;
};

struct vrrp_virtual_router {
    struct interface *ifp;
};

extern void vrrp_init(void);

#endif /* _VRRP_ROUTER_H_ */