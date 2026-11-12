// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/nmsp.h
 *
 */

#ifndef _ROUTER_NMSP_H
#define _ROUTER_NMSP_H

struct nmsp_interface {
	struct interface 		*interface;
};

extern void nmsp_interface_init(void);

#endif /* _ROUTER_NMSP_H */
