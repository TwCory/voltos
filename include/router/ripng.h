#ifndef _RIPNG_ROUTER_H_
#define _RIPNG_ROUTER_H_

#include <voltos/if.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <router/protocol.h>

struct ripng {
	struct protocol 	*p_ptr;
	struct vrf 		*vrf_ptr;

	bool 			enabled;
};

struct ripng_interface {
	struct ripng 		*ripng;
	struct interface 	*if_ptr;

	bool			enabled;
	bool 			passive;
};

#endif /* _RIPNG_ROUTER_H_ */
