// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/mldp.h
 *
 *	Multicast Label Distribution Protocol (mLDP)
 */

#ifndef _ROUTER_MLDP_H
#define _ROUTER_MLDP_H

struct mldp_interface {
	struct interface 		*interface;
};

extern void mldp_interface_init(void);

#endif /* _ROUTER_MLDP_H */
