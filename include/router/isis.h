#ifndef _ROUTER_ISIS_H
#define _ROUTER_ISIS_H

#include <voltos/in.h>
#include <voltos/in6.h>
#include <voltos/mbuf.h>
#include <voltos/types.h>
#include <router/afi.h>
#include <router/clns.h>
#include <router/cspf.h>
#include <router/dijkstra.h>
#include <router/distance.h>
#include <router/distribute.h>
#include <router/filter.h>
#include <router/flex.h>
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
#include <router/spf_backoff.h>
#include <router/vrf.h>

#define ISIS_ROUTE_CODE				"i"
#define ISIS_SUMMARY_ROUTE_CODE			"su"
#define ISIS_LEVEL1_ROUTE_CODE			"L1"
#define ISIS_LEVEL2_ROUTE_CODE			"L2"
#define ISIS_INTER_AREA_ROUTE_CODE		"ia"

#define ISIS_ROUTE_DISTANCE			115

struct isis_main {

};

struct isis_interface {

};

struct isis_route {

};

struct isis_summary_route {

};

struct isis_level1_route {

};

struct isis_level2_route {

};

struct isis_inter_area_route {

};

#endif /* _ROUTER_ISIS_H */
