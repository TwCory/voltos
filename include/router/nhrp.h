// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/nhrp.h
 *
 * 	Next-Hop Resolution Protocol (NHRP)
 */

#ifndef _ROUTER_NHRP_H
#define _ROUTER_NHRP_H

struct nhrp_protocol;

struct nhrp_interface {
	struct nhrp_protocol 		*nhrp;

};

struct nhrp_protocol {

};

struct nhrp_route {
	struct nhrp_protocol 		*nhrp;

};

#endif /* _ROUTER_NHRP_H */
