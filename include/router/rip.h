#ifndef _ROUTER_RIP_H
#define _ROUTER_RIP_H

#include <voltos/rip.h>
#include <voltos/types.h>
#include <router/distance.h>
#include <router/prefix.h>
#include <router/protocol.h>
#include <router/route.h>

struct rip_protocol {

};

struct rip_route {
	struct prefix 		prefix;
	__u8 			metric;
};

#endif /* _ROUTER_RIP_H */
