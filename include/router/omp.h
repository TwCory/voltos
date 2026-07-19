#ifndef _ROUTER_OMP_H
#define _ROUTER_OMP_H

#include <voltos/types.h>
#include <router/protocol.h>
#include <nbapi/voltos/omp.h>

struct omp_router_conf {
	bool 				passive_default;
	bool 				shutdown;
};

struct omp_interface_conf {
	bool 				passive;
};

struct omp_protocol {
	struct protocol 		*protocol;
};

struct omp_interface {

};

struct omp_route {

};

#endif /* _ROUTER_OMP_H */
