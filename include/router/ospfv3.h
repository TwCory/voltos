#ifndef _OSPFV3_ROUTER_H_
#define _OSPFV3_ROUTER_H_

#include <voltos/if.h>
#include <voltos/ospf_types.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <router/protocol.h>

struct ospfv3 {
	struct protocol 	*p_ptr;

	char 			*vrf_name;
	struct vrf 		*vrf_ptr;

	ospf_pid_t		pid;
	bool 			enabled;
};

struct ospfv3_interface {
	struct ospfv3 		*ospfv3;
	struct interface 	*if_ptr;

	bool			enabled;
	bool			passive;
};

#endif /* _OSPFV3_ROUTER_H_ */
