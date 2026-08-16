// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/mospf.h
 *
 */

#ifndef _ROUTER_MOSPF_H
#define _ROUTER_MOSPF_H

#include <voltos/if.h>
#include <voltos/inet.h>
#include <voltos/mospf.h>
#include <voltos/types.h>
#include <net/protocol.h>

struct mospf_interface {
	struct interface 		*interface;
};

struct mospf_protocol {
	struct protocol 		*protocol;
};

#endif /* _ROUTER_MOSPF_H */
