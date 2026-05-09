#ifndef _IDRP_ROUTER_H_
#define _IDRP_ROUTER_H_

#include <voltos/if.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <router/protocol.h>

struct idrp {
	struct protocol 	*p_ptr;
	struct vrf 		*vrf_ptr;

	bool 			enabled;
};

struct idrp_interface {
	struct idrp 		*idrp;
	struct interface 	*if_ptr;

	bool			enabled;
	bool			passive;
};

#endif /* _IDRP_ROUTER_H_ */
