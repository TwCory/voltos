#ifndef _VRRP_ROUTER_H_
#define _VRRP_ROUTER_H_

#include <voltos/if.h>
#include <router/protocol.h>

struct vrrp {
	struct protocol 	*p_ptr;
};

struct vrrp_interface {
	struct vrrp 		*vrrp;
	struct interface 	*if_ptr;
};

#endif /* _VRRP_ROUTER_H_ */
