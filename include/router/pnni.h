// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/pnni.h
 *
 *	Private Network-to-Network Interface (PNNI)
 */

#ifndef _ROUTER_PNNI_H
#define _ROUTER_PNNI_H

struct pnni_interface {
	struct pnni_router 		*pnni;
	struct interface 		*interface;
};

struct pnni_route {
	struct pnni_router 		*pnni;
	struct route 			*route;
};

struct pnni_router {

};

extern void pnni_interface_init(void);
extern void pnni_router_init(void);

#endif /* _ROUTER_PNNI_H */
