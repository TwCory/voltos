#ifndef _ROUTER_VRRP_H_
#define _ROUTER_VRRP_H_

#include <voltos/if.h>
#include <voltos/socket.h>
#include <voltos/types.h>
#include <voltos/vrrp.h>

struct vrrp_router {
	bool 			is_active;
	bool 			is_owner;

	__voltos_sa_family_t 	family;
};

struct vrrp_virtual_router {
	bool 			is_autoconf;
	bool 			is_shutdown;

	struct vrrp_router 	*ipv4;
	struct vrrp_router 	*ipv6;
};

#endif /* _ROUTER_VRRP_H_ */
