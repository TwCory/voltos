// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/aurp.h
 *
 */

#ifndef _ROUTER_AURP_H
#define _ROUTER_AURP_H

#include <voltos/if.h>
#include <net/protocol.h>

struct aurp_interface {
	struct interface 		*interface;
};

struct aurp_protocol {
	struct protocol 		*protocol;
};

#endif /* _ROUTER_AURP_H */
