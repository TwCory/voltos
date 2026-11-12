// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/carp.h
 *
 *	Common Address Redundancy Protocol (CARP)
 */

#ifndef _ROUTER_CARP_H
#define _ROUTER_CARP_H

struct carp_interface {
	struct interface 		*interface;
};

extern void carp_interface_init(void);

#endif /* _ROUTER_CARP_H */
