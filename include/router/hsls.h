#ifndef _HSLS_ROUTER_H_
#define _HSLS_ROUTER_H_

#include <voltos/if.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <router/protocol.h>

struct hsls {
	struct protocol 	*p_ptr;
	struct vrf 		*vrf_ptr;

	bool 			enabled;
};

struct hsls_interface {
	struct hsls 		*hsls;
	struct interface 	*if_ptr;

	bool 			enabled;
	bool			passive;
};

#endif /* _HSLS_ROUTER_H_ */
