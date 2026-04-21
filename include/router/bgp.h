#ifndef _BGP_ROUTER_H_
#define _BGP_ROUTER_H_

#include <voltos/bgp.h>
#include <voltos/vrf.h>

struct bgp {

};

extern int bgp_create_sock(struct vrf *vrf);

#endif /* _BGP_ROUTER_H_ */