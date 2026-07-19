#ifndef _ROUTER_BATMAN_ADV_H
#define _ROUTER_BATMAN_ADV_H

#include <voltos/types.h>
#include <router/protocol.h>
#include <nbapi/voltos/batman-adv.h>

struct batadv_router_conf {
	bool 				passive_default;
	bool 				shutdown;
};

struct batadv_interface_conf {
	bool 				passive;
};

struct batadv_protocol {
	struct protocol 		*protocol;
};

struct batadv_interface {

};

struct batadv_route {

};

#endif /* _ROUTER_BATMAN_ADV_H */
