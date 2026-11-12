// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/pim.h
 *
 *	Protocol-Independent Multicast (PIM)
 */

#ifndef _ROUTER_PIM_H
#define _ROUTER_PIM_H

struct pim_interface {
	struct interface 		*interface;
};

struct pim_mroute {
	struct mroute 			*mroute;
};

#endif /* _ROUTER_PIM_H */
