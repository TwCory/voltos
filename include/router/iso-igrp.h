// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/iso-igrp.h
 *
 */

#ifndef _ROUTER_ISO_IGRP_H
#define _ROUTER_ISO_IGRP_H

#include <voltos/if.h>
#include <voltos/iso-igrp.h>
#include <voltos/route.h>
#include <voltos/types.h>
#include <net/protocol.h>

struct iso_igrp_interface {
	struct interface 		*interface;
};

struct iso_igrp_protocol {
	struct protocol 		*protocol;
};

struct iso_igrp_route {
	struct route 			*route;
};

struct iso_igrp_router {
	bool 				shutdown;
};

#endif /* _ROUTER_ISO_IGRP_H */
