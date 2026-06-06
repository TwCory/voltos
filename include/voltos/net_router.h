#ifndef VOLTOS_NET_ROUTER_H
#define VOLTOS_NET_ROUTER_H

#include <net/protocol.h>

typedef unsigned int 			__voltos_router_pid_t;

struct router {
	__voltos_router_pid_t 		pid;
};

struct ipv6_router {
	__voltos_router_pid_t 		pid;
	struct ipv6_protocol 		*protocol_ptr;
};

#endif /* VOLTOS_NET_ROUTER_H */
