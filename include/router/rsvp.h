// SPDX-License-Identifier: BSD-3-Clause

#ifndef _RSVP_ROUTER_H_
#define _RSVP_ROUTER_H_

#include <voltos/if.h>
#include <voltos/vrf.h>
#include <router/protocol.h>

struct rsvp {
    struct protocol *protocol;
};

struct rsvp_interface {
    struct rsvp *rsvp;
    struct interface *ifp;
};

extern void rsvp_init(void);
extern void rsvp_interface_init(void);

#endif /* _RSVP_ROUTER_H_ */