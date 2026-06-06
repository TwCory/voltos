#ifndef OSPF_ROUTER_H
#define OSPF_ROUTER_H

#include <voltos/if.h>
#include <voltos/lsdb.h>
#include <voltos/net_router.h>
#include <voltos/ospf.h>
#include <voltos/route.h>
#include <voltos/vrf.h>

#include <router/ospf_types.h>

struct ospf {
	struct router 			*router;
	ospf_pid_t 			pid;

	char 				*vrf_name;
	struct vrf 			*vrf_ptr;
};

struct ospf_area {
	struct ospf 			*ospf;
};

struct ospf_interface {
	struct ospf 			*ospf;
	struct interface 		*if_ptr;
};

struct ospf_lsdb {
	struct lsdb_head 		*lsdb;
};

struct ospf_route {
	struct ospf 			*ospf;
	struct route 			*route_ptr;
};

#endif /* OSPF_ROUTER_H */
