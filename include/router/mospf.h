// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/mospf.h
 *
 *	Multicast Open Shortest Path First (mOSPF)
 */

#ifndef _ROUTER_MOSPF_H
#define _ROUTER_MOSPF_H

struct mospf_interface {
	struct interface 		*interface;
};

struct mospf_mroute {
	struct mroute 			*mroute;
};

extern void mospf_interface_init(void);

#endif /* _ROUTER_MOSPF_H */
