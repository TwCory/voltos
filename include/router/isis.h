#ifndef _ISIS_ROUTER_H_
#define _ISIS_ROUTER_H_

#include <voltos/if.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <router/protocol.h>

struct isis {
	struct protocol 	*p_ptr;
	struct vrf 		*vrf_ptr;

	bool 			enabled;
};

struct isis_interface {
	struct isis 		*isis;
	struct interface 	*if_ptr;

	bool			enabled;
	bool			passive;
};

#endif /* _ISIS_ROUTER_H_ */
