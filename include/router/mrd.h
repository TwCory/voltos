// SPDX-License-Identifier: BSD-3-Clause

#ifndef _MRD_ROUTER_H_
#define _MRD_ROUTER_H_

#include <voltos/if.h>
#include <voltos/mrd.h>
#include <voltos/vrf.h>

struct mrd {
};

struct mrd_interface {
    struct mrd *mrd;
    struct interface *if_ptr;
};

extern void mrd_init(void);
extern void mrd_interface_init(void);

#endif /* _MRD_ROUTER_H_ */