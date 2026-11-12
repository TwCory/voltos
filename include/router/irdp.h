// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/irdp.h
 *
 *	Internet Router Discovery Protocol (IRDP)
 */

#ifndef _ROUTER_IRDP_H
#define _ROUTER_IRDP_H

struct irdp_interface {
	struct interface 		*interface;
};

extern irdp_interface_init(void);

#endif /* _ROUTER_IRDP_H */
