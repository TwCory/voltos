#ifndef MOBILE_ROUTER_H
#define MOBILE_ROUTER_H

#include <voltos/if.h>
#include <voltos/ip_mobile.h>
#include <voltos/net_router.h>
#include <voltos/route.h>

struct mobile {
	struct router 			*router;
};

struct mobile_interface {
	struct mobile 			*mobile;
	struct interface 		*if_ptr;
};

struct mobile_route {
	struct mobile 			*mobile;
	struct route 			*route_ptr;
};

#endif /* MOBILE_ROUTER_H */
