#ifndef _ROUTER_BGP_H
#define _ROUTER_BGP_H

#include <voltos/in.h>
#include <voltos/in6.h>
#include <voltos/types.h>
#include <router/afi.h>
#include <router/asn.h>
#include <router/distance.h>
#include <router/distribute.h>
#include <router/filter.h>
#include <router/if.h>
#include <router/ip.h>
#include <router/ipv6.h>
#include <router/mpls.h>
#include <router/prefix.h>
#include <router/redistribute.h>
#include <router/route.h>
#include <router/vrf.h>

#define BGP_ROUTE_CODE			"B"
#define BGP_ROUTE_HELP			"B - BGP\n"

#define EBGP_ROUTE_DISTANCE		20
#define IBGP_ROUTE_DISTANCE		200


struct bgp_main {

};

struct bgp_interface {

};

struct bgp_route {

};

#endif /* _ROUTER_BGP_H */
