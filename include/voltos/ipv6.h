#ifndef VOLTOS_IPV6_H
#define VOLTOS_IPV6_H

#include <voltos/idb.h>
#include <voltos/types.h>
#include <net/protocol.h>
#include <nbapi/voltos/ipv6.h>

struct ipv6 {
	struct protocol 	*protocol;

	u8 			hop_limit;
	bool 			deny_echo_reply;
	bool 			flowset;

	bool 			unicast_router;
	bool 			multicast_router;
	bool 			source_route;
};

struct ipv6_interface {
	struct ipv6 		*ipv6;
	struct idb 		*idb;

	bool 			enable;
};

#endif /* VOLTOS_IPV6_H */
