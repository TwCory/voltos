// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/omp.h
 *
 * 	Overlay Management Protocol (OMP)
 */

#ifndef _ROUTER_OMP_H
#define _ROUTER_OMP_H

#include <voltos/if.h>
#include <voltos/inet.h>
#include <voltos/omp.h>
#include <voltos/route.h>
#include <voltos/types.h>
#include <net/protocol.h>

struct omp_interface {
	struct interface 		*interface;
};

struct omp_protocol {
	struct protocol 		*protocol;
};

struct omp_route {
	struct route 			*route;

	ip_prefix_t 			prefix;
};

#endif /* _ROUTER_OMP_H */
