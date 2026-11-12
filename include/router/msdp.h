// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/msdp.h
 *
 *	Multicast Source Discovery Protocol (MSDP)
 */

#ifndef _ROUTER_MSDP_H
#define _ROUTER_MSDP_H

struct msdp_interface {
	struct interface 		*interface;
};

extern void msdp_interface_init(void);

#endif /* _ROUTER_MSDP_H */
