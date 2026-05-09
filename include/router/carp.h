#ifndef _CARP_ROUTER_H_
#define _CARP_ROUTER_H_

#include <voltos/if.h>
#include <voltos/types.h>
#include <router/protocol.h>

struct carp {
	struct protocol 	*p_ptr;

	bool 			enabled;
};

struct carp_interface {
	struct carp 		*carp;
	struct interface 	*if_ptr;
};

#endif /* _CARP_ROUTER_H_ */
