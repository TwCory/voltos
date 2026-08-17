// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/aurp.h
 *
 */

#ifndef _ROUTER_AURP_H
#define _ROUTER_AURP_H

#include <voltos/aurp.h>
#include <voltos/if.h>
#include <voltos/types.h>
#include <net/protocol.h>

struct aurp_protocol;

struct aurp_interface {
	struct aurp_protocol 		*aurp;
	struct interface 		*interface;
};

struct aurp_protocol {
	struct protocol 		*protocol;

	bool 				enabled;
};

#endif /* _ROUTER_AURP_H */
