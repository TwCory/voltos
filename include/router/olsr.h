#ifndef OLSR_ROUTER_H
#define OLSR_ROUTER_H

#include <voltos/if.h>
#include <voltos/lsdb.h>
#include <voltos/net_router.h>
#include <voltos/olsr.h>
#include <voltos/route.h>
#include <voltos/vrf.h>

struct olsr {
	struct router 			*router;

	char 				*vrf_name;
	struct vrf 			*vrf_ptr;
};

struct olsr_interface {
	struct olsr 			*olsr;
	struct interface 		*if_ptr;
};

struct olsr_lsdb {
	struct lsdb_head 		*lsdb;
};

struct olsr_route {
	struct olsr 			*olsr;
	struct route 			*route_ptr;
};

#endif /* OLSR_ROUTER_H */
