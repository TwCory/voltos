#ifndef _IDPR_ROUTER_H_
#define _IDPR_ROUTER_H_

#include <voltos/if.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <router/protocol.h>

struct idpr {
	struct protocol 	*p_ptr;
	struct vrf 		*vrf_ptr;

	bool 			enabled;
};

struct idpr_interface {
	struct idpr 		*idpr;
	struct interface 	*if_ptr;

	bool			enabled;
	bool			passive;
};

#endif /* _IDPR_ROUTER_H_ */
