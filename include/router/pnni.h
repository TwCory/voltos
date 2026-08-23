// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/pnni.h
 *
 * 	Private Network-to-Network Interface (PNNI)
 */

#ifndef _ROUTER_PNNI_H
#define _ROUTER_PNNI_H

struct pnni_protocol;

struct pnni_interface {
	struct pnni_protocol 		*pnni;

};

struct pnni_protocol {

};

struct pnni_route {
	struct pnni_protocol 		*pnni;

};

struct pnni_router {
	struct pnni_protocol 		*pnni;

};

#endif /* _ROUTER_PNNI_H */
