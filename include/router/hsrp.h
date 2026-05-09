#ifndef _HSRP_ROUTER_H_
#define _HSRP_ROUTER_H_

#include <voltos/if.h>
#include <voltos/types.h>
#include <router/protocol.h>

struct hsrp {
	struct protocol 	*p_ptr;

	bool 			enabled;
};

struct hsrp_interface {
	struct hsrp 		*hsrp;
	struct interface 	*if_ptr;
}

#endif /* _HSRP_ROUTER_H_ */
