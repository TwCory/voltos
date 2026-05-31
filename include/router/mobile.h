#ifndef _ROUTER_MOBILE_H_
#define _ROUTER_MOBILE_H_

#include <voltos/if.h>
#include <voltos/ip_mobile.h>

struct mobile {

};

struct mobile_interface {
	struct mobile *mobile;
	struct interface *if_ptr;
};

#endif /* _ROUTER_MOBILE_H_ */
