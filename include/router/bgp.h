#ifndef _BGP_ROUTER_H_
#define _BGP_ROUTER_H_

#include <voltos/bgp.h>
#include <voltos/if.h>
#include <voltos/route.h>
#include <voltos/route_table.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <router/protocol.h>

struct bgp {
    struct protocol *p_ptr;
    struct route_table *rt_ptr;

    string *vrf_name;
    struct vrf *vrf_ptr;
};

struct bgp_interface {
    struct bgp *bgp;
    struct interface *if_ptr;
};

struct bgp_route {
    struct route *r_ptr;
};

extern void bgp_init(void);
extern void bgp_interface_init(void);

#endif /* _BGP_ROUTER_H_ */