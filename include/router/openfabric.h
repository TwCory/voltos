// SPDX-License-Identifier: BSD-3-Clause

#ifndef _OPENFABRIC_ROUTER_H_
#define _OPENFABRIC_ROUTER_H_

#include <voltos/if.h>
#include <voltos/openfabric.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <router/protocol.h>

struct openfabric {
    struct protocol *p_ptr;
};

struct openfabric_interface {
    struct openfabric *openfabric;
    struct interface *if_ptr;
};

struct openfabric_circuit {
    struct openfabric *openfabric;
};

extern void openfabric_init(void);
extern void openfabric_interface_init(void);

#endif /* _OPENFABRIC_ROUTER_H_ */