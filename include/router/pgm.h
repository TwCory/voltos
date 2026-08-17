// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/pgm.h
 *
 * 	Pragmatic Multicast (PGM)
 */

#ifndef _ROUTER_PGM_H
#define _ROUTER_PGM_H

#include <voltos/if.h>
#include <voltos/inet.h>
#include <voltos/pgm.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <net/protocol.h>

struct pgm_protocol;

struct pgm_interface {
	struct pgm_protocol 		*pgm;
	struct interface 		*interface;
};

struct pgm_protocol {
	struct protocol 		*protocol;
	struct vrf 			*vrf;

	bool 				enabled;
};

#endif /* _ROUTER_PGM_H */
