#ifndef RIPNG_ROUTER_H
#define RIPNG_ROUTER_H

#include <voltos/if.h>
#include <voltos/net_router.h>
#include <voltos/ripng.h>
#include <voltos/route.h>
#include <voltos/vrf.h>

struct ripng {
	struct ipv6_router 		*router;

	char 				*vrf_name;
	struct vrf 			*vrf_ptr;
};

struct ripng_interface {
	struct ripng 			*ripng;
	struct interface 		*if_ptr;
};

struct ripng_peer {
	struct ripng 			*ripng;
};

struct ripng_route {
	struct ripng 			*ripng;
	struct route 			*route_ptr;
};

struct ripng_offset_list {
	struct ripng 			*ripng;
};

#endif /* RIPNG_ROUTER_H */
