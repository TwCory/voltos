#ifndef _ROUTER_VRRP_H
#define _ROUTER_VRRP_H

#include <voltos/types.h>
#include <voltos/vrrp.h>
#include <router/protocol.h>

struct vrrp_protocol {
	struct rt_protocol 		*protocol;
};

extern void vrrp_init(void);

#endif /* _ROUTER_VRRP_H */
