// SPDX-License-Identifier: BSD-3-Clause

#ifndef _HSLS_ROUTER_H_
#define _HSLS_ROUTER_H_

#include <voltos/hsls.h>
#include <voltos/if.h>
#include <voltos/vrf.h>
#include <router/protocol.h>

struct hsls {
    struct protocol *protocol;
};

struct hsls_interface {
    struct hsls *hsls;
    struct interface *ifp;
};

extern void hsls_init(void);
extern void hsls_interface_init(void);
extern int hsls_create_sock(struct vrf *vrf);

#endif /* _HSLS_ROUTER_H_ */