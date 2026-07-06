#ifndef _ROUTER_OSPFV3_H
#define _ROUTER_OSPFV3_H

#include <voltos/in.h>
#include <voltos/in6.h>
#include <voltos/mbuf.h>
#include <voltos/types.h>
#include <router/afi.h>
#include <router/dijkstra.h>
#include <router/distance.h>
#include <router/distribute.h>
#include <router/filter.h>
#include <router/if.h>
#include <router/ip.h>
#include <router/ipv6.h>
#include <router/lsdb.h>
#include <router/mpls.h>
#include <router/neighbour.h>
#include <router/nexthop.h>
#include <router/prefix.h>
#include <router/redistribute.h>
#include <router/route.h>
#include <router/vrf.h>

#define OSPFV3_ROUTE_CODE		"O"
#define OSPFV3_ROUTE_DISTANCE		110

struct ospfv3_main {

};

struct ospfv3_interface {

};

struct ospfv3_area {

};

struct ospfv3_route {

};

#endif /* _ROUTER_OSPFV3_H */
