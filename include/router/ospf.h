#ifndef _ROUTER_OSPF_H
#define _ROUTER_OSPF_H

#include <voltos/types.h>
#include <router/protocol.h>
#include <nbapi/voltos/ospf.h>

struct ospf_router_conf {
	__u16 				process;
	bool 				passive_default;
	bool 				shutdown;
};

struct ospf_interface_conf {
	bool 				passive;
};

struct ospf_protocol {
	struct protocol 		*protocol;
};

struct ospf_interface {

};

struct ospf_neighbour {

};

struct ospf_route {

};

#endif /* _ROUTER_OSPF_H */
