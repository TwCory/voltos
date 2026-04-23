// SPDX-License-Identifier: BSD-3-Clause

#ifndef _ISO_IGRP_ROUTER_H_
#define _ISO_IGRP_ROUTER_H_

#include <voltos/if.h>
#include <voltos/iso-igrp.h>
#include <router/protocol.h>

struct iso_igrp {
    struct protocol *p_ptr;
};

struct iso_igrp_interface {
    struct iso_igrp *iso_igrp;
    struct interface *if_ptr;
};

extern void iso_igrp_init(void);
extern void iso_igrp_interface_init(void);

#endif /* _ISO_IGRP_ROUTER_H_ */