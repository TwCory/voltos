#ifndef ZHLS_ROUTER_H
#define ZHLS_ROUTER_H

#include <voltos/if.h>
#include <voltos/net_router.h>
#include <voltos/route.h>
#include <voltos/vrf.h>
#include <voltos/zhls.h>

struct zhls {
	struct router 			*router;

	char 				*vrf_name;
	struct vrf 			*vrf_ptr;
};

struct zhls_interface {
	struct zhls 			*zhls;
	struct interface 		*if_ptr;
};

struct zhls_route {
	struct zhls 			*zhls;
	struct route 			*route_ptr;
};

#endif /* ZHLS_ROUTER_H */
