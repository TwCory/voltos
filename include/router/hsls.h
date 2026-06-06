#ifndef HSLS_ROUTER_H
#define HSLS_ROUTER_H

#include <voltos/hsls.h>
#include <voltos/if.h>
#include <voltos/net_router.h>
#include <voltos/route.h>
#include <voltos/vrf.h>

struct hsls {
	struct router 			*router;

	char 				*vrf_name;
	struct vrf 			*vrf_ptr;
};

struct hsls_interface {
	struct hsls 			*hsls;
	struct interface 		*if_ptr;
};

struct hsls_route {
	struct hsls 			*hsls;
	struct route 			*route_ptr;
};

#endif /* HSLS_ROUTER_H */
