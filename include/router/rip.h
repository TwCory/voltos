#ifndef _ROUTER_RIP_H_
#define _ROUTER_RIP_H_

#include <voltos/bfd.h>
#include <voltos/if.h>
#include <voltos/rip.h>
#include <voltos/types.h>
#include <voltos/vrf.h>

#include <router/distance.h>
#include <router/distribute.h>
#include <router/filter.h>
#include <router/redistribute.h>

struct rip {
	char 			*vrf_name;
	struct vrf 		*vrf_ptr;

	bool 			is_enabled;

	u32 			update_time;
	u32 			timeout_time;
	u32 			garbage_time;

	u8 			default_metric;
	distance_t 		distance;
	u8 			ecmp;

	char 			*bfd_profile_name;
	struct bfd_profile 	*bfd_profile_ptr;
};

struct rip_interface {
	struct rip 		*rip;
	struct interface 	*if_ptr;
};

#endif /* _ROUTER_RIP_H_ */
