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

struct iso_igrp_protocol;

struct iso_igrp_interface {
	struct iso_igrp_protocol 	*iso_igrp;
	struct interface 		*interface;
};

struct iso_igrp_protocol {
	struct protocol 		*protocol;

	struct route_table 		*route_table;

	bool 				enabled;
};

struct iso_igrp_route {
	struct iso_igrp_protocol 	*iso_igrp;
	struct route 			*route;
};

struct iso_igrp_router {
	struct iso_igrp_protocol 	*iso_igrp;
	
	bool 				shutdown;
};

#endif /* _ROUTER_ISO_IGRP_H */
