#ifndef OPENFABRIC_ROUTER_H
#define OPENFABRIC_ROUTER_H

#include <voltos/if.h>
#include <voltos/lsdb.h>
#include <voltos/net_router.h>
#include <voltos/nsap.h>
#include <voltos/openfabric.h>
#include <voltos/route.h>
#include <voltos/vrf.h>

struct openfabric {
	struct router 			*router;
	nsap_address_t 			domain;

	char 				*vrf_name;
	struct vrf 			*vrf_ptr;
};

struct openfabric_interface {
	struct openfabric 		*openfabric;
	struct interface 		*if_ptr;
};

struct openfabric_lsdb {
	struct lsdb_head 		*lsdb;
};

struct openfabric_route {
	struct openfabric 		*openfabric;
	struct route 			*route_ptr;
};

#endif /* OPENFABRIC_ROUTER_H */
