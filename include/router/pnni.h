// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/pnni.h
 *
 * 	Private Network-to-Network Interface (PNNI)
 */

#ifndef _ROUTER_PNNI_H
#define _ROUTER_PNNI_H

#include <voltos/types.h>

struct pnni_protocol {
	bool enabled;
};

struct pnni_interface {
	bool passive;
};

struct pnni_route {

};

#endif /* _ROUTER_PNNI_H */
