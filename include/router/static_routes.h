#ifndef STATIC_ROUTES_H
#define STATIC_ROUTES_H

#include <voltos/if.h>
#include <voltos/nexthop.h>
#include <voltos/route.h>
#include <voltos/vrf.h>

#include <router/afi.h>
#include <router/distance.h>

struct static_route {
	struct route 			*route_ptr;

	__voltos_if_index_t 		if_index;
	struct interface 		*if_ptr;

	char 				*vrf_name;
	__voltos_vrf_id_t 		vrf_id;
	struct vrf 			*vrf_ptr;

	struct next_hop 		*nh_ptr;

	afi_t 				afi;
	safi_t 				safi;
	distance_t 			distance;

};

#endif /* STATIC_ROUTES_H */
