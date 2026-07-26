#ifndef _ROUTER_OMP_H
#define _ROUTER_OMP_H

#include <voltos/omp.h>
#include <voltos/types.h>
#include <router/distance.h>
#include <router/if.h>
#include <router/prefix.h>
#include <router/protocol.h>
#include <router/route.h>

struct omp_protocol {
	struct rt_protocol 		*protocol;
};

struct omp_interface {
	struct omp_protocol 		*omp;
	struct rt_interface 		*interface;
};

struct omp_route {
	struct omp_protocol 		*omp;
	struct rt_route 		*route;
};

extern void omp_init(void);

#endif /* _ROUTER_OMP_H */
