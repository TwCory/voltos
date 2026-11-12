// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/omp.h
 *
 *	Overlay Management Protocol (OMP)
 */

#ifndef _ROUTER_OMP_H
#define _ROUTER_OMP_H

struct omp_interface {
	struct omp_router		*omp;
	struct interface 		*interface;
};

struct omp_route {
	struct omp_router		*omp;
	struct route 			*route;
};

struct omp_router {

};

extern void omp_interface_init(void);
extern void omp_router_init(void);

#endif /* _ROUTER_OMP_H */
