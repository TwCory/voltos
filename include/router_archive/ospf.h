#ifndef _ROUTER_OSPF_H
#define _ROUTER_OSPF_H

#include <voltos/in.h>
#include <voltos/mbuf.h>
#include <voltos/types.h>
#include <router/dijkstra.h>
#include <router/distance.h>
#include <router/distribute.h>
#include <router/filter.h>
#include <router/if.h>
#include <router/ip.h>
#include <router/lsdb.h>
#include <router/mpls.h>
#include <router/neighbour.h>
#include <router/nexthop.h>
#include <router/prefix.h>
#include <router/redistribute.h>
#include <router/route.h>
#include <router/vrf.h>


#define OSPF_ROUTE_CODE			"O"
#define OSPF_ROUTE_DISTANCE		110

struct ospf_main {

};

struct ospf_interface {

};

struct ospf_area {

};

struct ospf_route {

};

struct ospf_inter_area_route {

};

struct ospf_ext_type1_route {

};

struct ospf_ext_type2_route {

};

struct ospf_nssa_ext_type1_route {

};

struct ospf_nssa_ext_type2_route {

};

#endif /* _ROUTER_OSPF_H */
