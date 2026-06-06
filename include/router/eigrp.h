#ifndef EIGRP_ROUTER_H
#define EIGRP_ROUTER_H

#include <voltos/dual.h>
#include <voltos/eigrp.h>
#include <voltos/if.h>
#include <voltos/net_router.h>
#include <voltos/route.h>

#include <router/eigrp_types.h>

struct eigrp {
	struct router 			*router;

	eigrp_asn_t 			asn;
	char 				*asn_str;
};

struct eigrp_interface {
	struct eigrp 			*eigrp;
	struct interface 		*if_ptr;
};

struct eigrp_neighbour {
	struct eigrp 			*eigrp;
};

struct eigrp_route {
	struct eigrp 			*eigrp;
	struct route 			*route_ptr;
};

#endif /* EIGRP_ROUTER_H */
