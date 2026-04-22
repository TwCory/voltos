#ifndef _BGP_ROUTER_H_
#define _BGP_ROUTER_H_

#include <voltos/bgp.h>
#include <voltos/if.h>
#include <voltos/vrf.h>
#include <router/protocol.h>

struct bgp {
    struct protocol *protocol;
};

struct bgp_interface {
    struct bgp *bgp;
    struct interface *ifp;
};

extern void bgp_init(void);
extern void bgp_interface_init(void);
extern int bgp_create_sock(struct vrf *vrf);

#endif /* _BGP_ROUTER_H_ */