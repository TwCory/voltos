// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/carp.h
 *
 * 	Common Address Redundancy Protocol (CARP)
 */

#ifndef _ROUTER_CARP_H
#define _ROUTER_CARP_H

struct carp_protocol;

struct carp_group {
	struct carp_protocol 		*carp;
};

struct carp_interface {
	struct carp_protocol 		*carp;

};

struct carp_protocol {

};

#endif /* _ROUTER_CARP_H */
