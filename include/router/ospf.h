#ifndef _ROUTER_OSPF_H_
#define _ROUTER_OSPF_H_

#include <voltos/if.h>
#include <voltos/ospf.h>

#include <router/ospf_types.h>

struct ospf {
	ospf_pid_t pid;
};

struct ospf_area {
	struct ospf *ospf;
};

struct ospf_interface {
	struct ospf *ospf;
	struct interface *if_ptr;
};

#endif /* _ROUTER_OSPF_H_ */
