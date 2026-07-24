#ifndef _ROUTER_OLSR_H
#define _ROUTER_OLSR_H

#include <voltos/olsr.h>
#include <voltos/types.h>
#include <router/distance.h>
#include <router/prefix.h>
#include <router/protocol.h>

struct olsr_protocol {

};

struct olsr_route {
	struct prefix prefix;
};

#endif /* _ROUTER_OLSR_H */
