#ifndef LDP_ROUTER_H
#define LDP_ROUTER_H

#include <voltos/if.h>
#include <voltos/ldp.h>
#include <voltos/net_router.h>

struct ldp {
	struct router 			*router;
};

struct ldp_interface {
	struct ldp 			*ldp;
	struct interface 		*if_ptr;
};

#endif /* LDP_ROUTER_H */
