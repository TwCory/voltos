// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/nhrp.h
 *
 *	Next-Hop Resolution Protocol (NHRP)
 */

#ifndef _ROUTER_NHRP_H
#define _ROUTER_NHRP_H

struct nhrp_cache {
	struct nhrp_interface 		*interface;
};

struct nhrp_interface {
	struct interface 		*interface;
};

struct nhrp_multicast {
	struct nhrp_interface		*interface;
};

struct nhrp_nhs {
	struct nhrp_interface		*interface;
};

struct nhrp_peer {
	struct nhrp_interface 		*interface;
	struct nhrp_vc			*vc;
};

struct nhrp_registration {
	struct nhrp_nhs			*nhs;
	struct nhrp_peer		*peer;
};

struct nhrp_route {
	struct route 			*route;
};

struct nhrp_shortcut {
	struct nhrp_cache		*cache;
};

struct nhrp_vc {

};

#endif /* _ROUTER_NHRP_H */
