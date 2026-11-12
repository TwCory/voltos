// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/bier.h
 *
 *	Bit Index Explicit Replication (BIER)
 */

#ifndef _ROUTER_BIER_H
#define _ROUTER_BIER_H

struct bier_interface {
	struct interface 		*interface;
};

extern void bier_interface_init(void);

#endif /* _ROUTER_BIER_H */
