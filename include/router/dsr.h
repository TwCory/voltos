#ifndef DSR_ROUTER_H
#define DSR_ROUTER_H

#include <voltos/dsr.h>
#include <voltos/if.h>
#include <voltos/net_router.h>
#include <voltos/route.h>
#include <voltos/types.h>

struct dsr {
	struct router 			*router;

	char 				*vrf_name;
	struct vrf 			*vrf_ptr;
};

struct dsr_interface {
	struct dsr 			*dsr;
	struct interface 		*if_ptr;
};

struct dsr_route {
	struct dsr 			*dsr;
	struct route 			*route_ptr;
};

#endif /* DSR_ROUTER_H */
