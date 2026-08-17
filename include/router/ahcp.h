// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/ahcp.h
 *
 * 	Ad Hoc Configuration Protocol (AHCP)
 */

#ifndef _ROUTER_AHCP_H
#define _ROUTER_AHCP_H

#include <voltos/ahcp.h>
#include <voltos/if.h>
#include <voltos/types.h>

struct ahcp_protocol;

struct ahcp_interface {
	struct ahcp_protocol 		*ahcp;
	struct interface 		*interface;
};

struct ahcp_protocol {
	bool 				enabled;
};

#endif /* _ROUTER_AHCP_H */
