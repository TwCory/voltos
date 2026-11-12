// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/vrrs.h
 *
 */

#ifndef _ROUTER_VRRS_H
#define _ROUTER_VRRS_H

struct vrrs_interface {
	struct interface 		*interface;
};

extern void vrrs_interface_init(void);

#endif /* _ROUTER_VRRS_H */
