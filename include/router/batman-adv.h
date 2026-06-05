#ifndef BATMAN_ADV_ROUTER_H
#define BATMAN_ADV_ROUTER_H

#include <voltos/batman-adv.h>
#include <voltos/if.h>

struct batadv {

};

struct batadv_interface {
	struct batadv *batadv;
	struct interface *if_ptr;
};

#endif /* BATMAN_ADV_ROUTER_H */
