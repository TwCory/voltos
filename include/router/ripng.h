#ifndef _ROUTER_RIPNG_H
#define _ROUTER_RIPNG_H

#include <voltos/ripng.h>
#include <voltos/types.h>
#include <router/distance.h>
#include <router/prefix.h>
#include <router/protocol.h>
#include <router/route.h>

struct ripng_protocol {

};

struct ripng_route {
	__u8 			metric;
};

#endif /* _ROUTER_RIPNG_H */
