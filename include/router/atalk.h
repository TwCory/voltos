// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/atalk.h
 *
 */

#ifndef _ROUTER_ATALK_H
#define _ROUTER_ATALK_H

#include <voltos/atalk.h>
#include <voltos/if.h>
#include <net/protocol.h>

struct atalk_protocol;

struct atalk_interface {
	struct atalk_protocol 		*atalk;
	struct interface 		*interface;
};

struct atalk_protocol {
	struct protocol 		*protocol;
};

#endif /* _ROUTER_ATALK_H */
