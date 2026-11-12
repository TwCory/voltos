// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/nemo.h
 *
 *	Network Mobility (NEMO)
 */

#ifndef _ROUTER_NEMO_H
#define _ROUTER_NEMO_H

struct nemo_interface {
	struct nemo_router		*nemo;
	struct interface 		*interface;
};

struct nemo_route {
	struct nemo_router		*nemo;
	struct route 			*route;
};

struct nemo_router {

};

extern void nemo_router_init(void);
extern void nemo_interface_init(void);

#endif /* _ROUTER_NEMO_H */
