#ifndef BATMAN_ADV_ROUTER_H
#define BATMAN_ADV_ROUTER_H

#include <voltos/batman-adv.h>
#include <voltos/if.h>
#include <voltos/net_router.h>
#include <voltos/route.h>

struct batadv {
	struct router 			*router;
};

struct batadv_interface {
	struct batadv 			*batadv;
	struct interface 		*if_ptr;
};

struct batadv_route {
	struct batadv 			*batadv;
	struct route 			*route_ptr;
};

#endif /* BATMAN_ADV_ROUTER_H */
