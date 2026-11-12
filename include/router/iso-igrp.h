// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/iso-igrp.h
 *
 *	Interior Gateway Routing Protocol (IGRP)
 *	for ISO/OSI-Based Networks
 */

#ifndef _ROUTER_ISO_IGRP_H
#define _ROUTER_ISO_IGRP_H

struct igrp_interface {
	struct igrp_router 		*igrp;
	struct interface 		*interface;
};

struct igrp_neighbour {
	struct igrp_router 		*igrp;
};

struct igrp_route {
	struct igrp_router 		*igrp;
	struct route 			*route;
};

struct igrp_router {

};

extern void igrp_interface_init(void);
extern void igrp_router_init(void);

#endif /* _ROUTER_ISO_IGRP_H */
