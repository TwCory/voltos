#ifndef _ROUTER_BATMAN_ADV_H
#define _ROUTER_BATMAN_ADV_H

#include <voltos/batman-adv.h>
#include <voltos/types.h>
#include <router/distance.h>
#include <router/if.h>
#include <router/prefix.h>
#include <router/protocol.h>
#include <router/route.h>

struct batadv_protocol {
	struct rt_protocol 		*protocol;
};

struct batadv_interface {
	struct batadv_protocol 		*batadv;
	struct rt_interface 		*interface;
};

struct batadv_route {
	struct batadv_protocol 		*batadv;
	struct rt_route 		*route;
};

extern void batadv_init(void);

#endif /* _ROUTER_BATMAN_ADV_H */
