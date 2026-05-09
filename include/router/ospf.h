#ifndef _OSPF_ROUTER_H_
#define _OSPF_ROUTER_H_

#include <voltos/if.h>
#include <voltos/ospf_types.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <router/protocol.h>

struct ospf {
	struct protocol 	*p_ptr;

	char			*vrf_name;
	struct vrf 		*vrf_ptr;

	ospf_pid_t		pid;
	bool 			enabled;
};

struct ospf_interface {
	struct ospf 		*ospf;
	struct interface 	*if_ptr;

	bool			enabled;
	bool			passive;
};

#endif /* _OSPF_ROUTER_H_ */
