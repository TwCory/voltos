// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/rift.h
 *
 *	Routing In Fat Trees (RIFT)
 */

#ifndef _ROUTER_RIFT_H
#define _ROUTER_RIFT_H

struct rift_interface {
	struct interface 		*interface;
};

extern void rift_interface_init(void);

#endif /* _ROUTER_RIFT_H */
