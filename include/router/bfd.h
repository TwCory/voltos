// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/bfd.h
 *
 */

#ifndef _ROUTER_BFD_H
#define _ROUTER_BFD_H

#include <voltos/bfd.h>
#include <voltos/if.h>
#include <voltos/inet.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <net/protocol.h>

struct bfd_interface {
	struct interface 		*interface;
};

struct bfd_protocol {
	struct protocol 		*protocol;
	struct vrf 			*vrf;
};

#endif /* _ROUTER_BFD_H */
