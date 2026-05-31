#ifndef _ROUTER_OSPFV3_H_
#define _ROUTER_OSPFV3_H_

#include <voltos/if.h>
#include <voltos/ospfv3.h>

#include <router/ospf_types.h>

struct ospfv3 {
	ospf_pid_t pid;
};

struct ospfv3_area {
	struct ospfv3 *ospfv3;
};

struct ospfv3_interface {
	struct ospfv3 *ospfv3;
	struct interface *if_ptr;
};

#endif /* _ROUTER_OSPFV3_H_ */
