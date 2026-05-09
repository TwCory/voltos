#ifndef _OLSR_ROUTER_H_
#define _OLSR_ROUTER_H_

#include <voltos/if.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <router/protocol.h>

struct olsr {
	struct protocol 	*p_ptr;
	struct vrf 		*vrf_ptr;

	bool 			enabled;
};

struct olsr_interface {
	struct olsr 		*olsr;
	struct interface 	*if_ptr;

	bool			passive;
};

#endif /* _OLSR_ROUTER_H_ */
