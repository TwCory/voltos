// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/tdp.h
 *
 *	Tag Distribution Protocol (TDP)
 */

#ifndef _ROUTER_TDP_H
#define _ROUTER_TDP_H

struct tdp_interface {
	struct interface 		*interface;
};

extern void tdp_interface_init(void);

#endif /* _ROUTER_TDP_H */
