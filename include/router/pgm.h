// SPDX-License-Identifier: BSD-3-Clause

#ifndef _PGM_ROUTER_H_
#define _PGM_ROUTER_H_

#include <voltos/if.h>
#include <voltos/pgm.h>
#include <voltos/vrf.h>
#include <router/protocol.h>

struct pgm {
    struct protocol *protocol;
};

struct pgm_interface {
    struct pgm *pgm;
    struct interface *ifp;
};

extern void pgm_init(void);
extern void pgm_interface_init(void);

#endif /* _PGM_ROUTER_H_ */