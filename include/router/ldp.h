// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/ldp.h
 *
 *	Label Distribution Protocol (LDP)
 */

#ifndef _ROUTER_LDP_H
#define _ROUTER_LDP_H

struct ldp_interface {
	struct interface 		*interface;
};

extern void ldp_interface_init(void);

#endif /* _ROUTER_LDP_H */
