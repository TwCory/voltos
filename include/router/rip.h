#ifndef _RIP_ROUTER_H_
#define _RIP_ROUTER_H_

#include <voltos/if.h>
#include <voltos/inet.h>
#include <voltos/nexthop.h>
#include <voltos/route.h>
#include <voltos/types.h>
#include <voltos/vrf.h>

struct rip {
	signed char *vrf_name;
    struct vrf *vrf;

    bool is_enabled;
};

struct rip_route_ctx {

    struct next_hop nexthop;
    ip4_addr_t source;
    u32 metric;
    u32 external_metric;

    route_tag_t tag;

	route_distance_t distance;
};

struct rip_interface {
	struct rip *rip;
    struct interface *ifp;
};

struct rip_peer {
	struct rip *rip;
    struct rip_interface *rip_ifp;

    ip4_addr_t address;
};

struct rip_offset_list {
	struct rip *rip;
};

extern int rip_create_sock(struct vrf *vrf);

#endif /* _RIP_ROUTER_H_ */