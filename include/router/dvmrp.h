#ifndef _ROUTER_DVMRP_H
#define _ROUTER_DVMRP_H

#include <voltos/dvmrp.h>
#include <voltos/types.h>
#include <router/protocol.h>

struct dvmrp_protocol {
	struct rt_protocol 		*protocol;
};

extern void dvmrp_init(void);

#endif /* _ROUTER_DVMRP_H */
