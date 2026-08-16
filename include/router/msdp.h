// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/msdp.h
 *
 */

#ifndef _ROUTER_MSDP_H
#define _ROUTER_MSDP_H

#include <voltos/if.h>
#include <net/protocol.h>

struct msdp_interface {
	struct interface 		*interface;
};

struct msdp_protocol {
	struct protocol 		*protocol;
};

#endif /* _ROUTER_MSDP_H */
