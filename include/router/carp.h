#ifndef _ROUTER_CARP_H
#define _ROUTER_CARP_H

#include <voltos/carp.h>
#include <voltos/types.h>
#include <router/protocol.h>

struct carp_protocol {
	struct rt_protocol 		*protocol;
};

extern void carp_init(void);

#endif /* _ROUTER_CARP_H */
