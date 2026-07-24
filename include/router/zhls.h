#ifndef _ROUTER_ZHLS_H
#define _ROUTER_ZHLS_H

#include <voltos/types.h>
#include <voltos/zhls.h>
#include <router/distance.h>
#include <router/prefix.h>
#include <router/protocol.h>
#include <router/route.h>

struct zhls_protocol {

};

struct zhls_route {
	struct route 		*route;
};

#endif /* _ROUTER_ZHLS_H */
