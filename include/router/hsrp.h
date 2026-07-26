#ifndef _ROUTER_HSRP_H
#define _ROUTER_HSRP_H

#include <voltos/hsrp.h>
#include <voltos/types.h>
#include <router/protocol.h>

struct hsrp_protocol {
	struct rt_protocol 		*protocol;
};

extern void hsrp_init(void);

#endif /* _ROUTER_HSRP_H */
