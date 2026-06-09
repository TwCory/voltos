#ifndef VOLTOS_IP_H
#define VOLTOS_IP_H

#include <voltos/idb.h>
#include <voltos/types.h>
#include <net/protocol.h>
#include <nbapi/voltos/ip.h>

struct ip {
	struct protocol 	*protocol;

	bool 			router;
	bool 			multicast_router;
	bool 			host_router;
	bool 			source_route;
};

struct ip_interface {
	struct ip 		*ip;
	struct idb 		*idb;

	bool 			enable;
	u8 			ttl;
	u16 			mtu;
};

#endif /* VOLTOS_IP_H */
