// SPDX-License-Identifier: BSD-3-Clause

#ifndef _DVMRP_ROUTER_H_
#define _DVMRP_ROUTER_H_

#include <voltos/dvmrp.h>
#include <voltos/if.h>
#include <voltos/vrf.h>
#include <router/protocol.h>

struct dvmrp {
    struct protocol *protocol;
};

struct dvmrp_interface {
    struct dvmrp *dvmrp;
    struct interface *ifp;
};

extern void dvmrp_init(void);
extern void dvmrp_interface_init(void);
extern int dvmrp_create_sock(struct vrf *vrf);

#endif /* _DVMRP_ROUTER_H_ */