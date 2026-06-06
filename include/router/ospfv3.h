#ifndef OSPFV3_ROUTER_H
#define OSPFV3_ROUTER_H

#include <voltos/if.h>
#include <voltos/lsdb.h>
#include <voltos/net_router.h>
#include <voltos/ospfv3.h>
#include <voltos/route.h>
#include <voltos/vrf.h>

#include <router/ospf_types.h>

struct ospfv3 {
	struct router 			*router;
	ospf_pid_t 			pid;

	char 				*vrf_name;
	struct vrf 			*vrf_ptr;
};

struct ospfv3_area {
	struct ospfv3 			*ospfv3;
};

struct ospfv3_interface {
	struct ospfv3 			*ospfv3;
	struct interface 		*if_ptr;
};

struct ospfv3_lsdb {
	struct lsdb_head 		*lsdb;
};

struct ospfv3_neighbour {

};

struct ospfv3_next_hop {

};

struct ospfv3_path {

};

struct ospfv3_prefix {

};

struct ospfv3_route {
	struct ospfv3 			*ospfv3;
	struct route 			*route_ptr;
};

#endif /* OSPFV3_ROUTER_H */
