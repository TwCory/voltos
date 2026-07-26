#ifndef _ROUTER_VRF_H
#define _ROUTER_VRF_H

#include <voltos/types.h>
#include <voltos/vrf.h>

struct rt_vrf {
	struct vrf *vrf_ptr;
};

#endif /* _ROUTER_VRF_H */
