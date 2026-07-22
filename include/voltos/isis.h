#ifndef _VOLTOS_ISIS_H
#define _VOLTOS_ISIS_H

#include <nbapi/voltos/isis.h>

struct isis_global_conf {

};

struct isis_router_conf {
	struct {
		struct {

		} ipv4_unicast;
		struct {

		} ipv6_unicast;
	} address_family;
};

struct isis_ipv6_router_conf {

};

struct isis_interface_conf {

};

#endif /* _VOLTOS_ISIS_H */
