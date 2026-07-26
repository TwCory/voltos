#ifndef _ROUTER_ISO_IGRP_H
#define _ROUTER_ISO_IGRP_H

#include <voltos/iso-igrp.h>
#include <voltos/types.h>
#include <router/distance.h>
#include <router/if.h>
#include <router/prefix.h>
#include <router/protocol.h>
#include <router/route.h>

struct iso_igrp_protocol {
	struct rt_protocol 		*protocol;
};

struct iso_igrp_interface {
	struct iso_igrp_protocol 	*iso_igrp;
	struct rt_interface 		*interface;
};

struct iso_igrp_route {
	struct iso_igrp_protocol 	*iso_igrp;
	struct rt_route 		*route;
};

extern void iso_igrp_init(void);

#endif /* _ROUTER_ISO_IGRP_H */
