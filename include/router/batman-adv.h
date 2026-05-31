#ifndef _ROUTER_BATMAN_ADV_H_
#define _ROUTER_BATMAN_ADV_H_

#include <voltos/batman-adv.h>
#include <voltos/if.h>

struct batadv {

};

struct batadv_interface {
	struct batadv *batadv;
	struct interface *if_ptr;
};

#endif /* _ROUTER_BATMAN_ADV_H_ */
