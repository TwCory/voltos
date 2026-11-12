// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/mld.h
 *
 *	Multicast Listener Discovery (MLD)
 */

#ifndef _ROUTER_MLD_H
#define _ROUTER_MLD_H

struct mld_interface {
	struct interface 		*interface;
};

extern void mld_interface_init(void);

#endif /* _ROUTER_MLD_H */
