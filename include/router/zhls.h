#ifndef _ZHLS_ROUTER_H_
#define _ZHLS_ROUTER_H_

#include <voltos/if.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <router/protocol.h>

struct zhls {
	struct protocol 	*p_ptr;
	struct vrf 		*vrf_ptr;

	bool 			enabled;
};

struct zhls_interface {
	struct zhls 		*zhls;
	struct interface 	*if_ptr;

	bool			enabled;
	bool			passive;
};

#endif /* _ZHLS_ROUTER_H_ */
