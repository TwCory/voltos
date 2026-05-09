#ifndef _RIP_ROUTER_H_
#define _RIP_ROUTER_H_

#include <voltos/if.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <router/protocol.h>

struct rip {
	struct protocol 	*p_ptr;
	struct vrf 		*vrf_ptr;

	bool 			enabled;
};

struct rip_interface {
	struct rip 		*rip;
	struct interface 	*if_ptr;

	bool			enabled;
	bool			passive;
};

#endif /* _RIP_ROUTER_H_ */
