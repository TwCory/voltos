#ifndef _OPENFABRIC_ROUTER_H_
#define _OPENFABRIC_ROUTER_H_

#include <voltos/if.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <router/protocol.h>

struct openfabric {
	struct protocol 	*p_ptr;
	struct vrf 		*vrf_ptr;

	bool 			enabled;
};

struct openfabric_interface {
	struct openfabric 	*openfabric;
	struct interface 	*if_ptr;

	bool			enabled;
	bool			passive;
};

#endif /* _OPENFABRIC_ROUTER_H_ */
