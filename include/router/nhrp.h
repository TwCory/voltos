#ifndef _ROUTER_NHRP_H
#define _ROUTER_NHRP_H

#include <voltos/nhrp.h>
#include <voltos/types.h>
#include <router/distance.h>
#include <router/prefix.h>
#include <router/protocol.h>

struct nhrp_protocol {

};

struct nhrp_route {
	struct prefix prefix;
};

#endif /* _ROUTER_NHRP_H */
