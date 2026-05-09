#ifndef _BABEL_ROUTER_H_
#define _BABEL_ROUTER_H_

#include <voltos/if.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <router/protocol.h>

struct babel {
	struct protocol 	*p_ptr;

	char 			*vrf_name;
	struct vrf 		*vrf_ptr;

	bool 			enabled;
};

struct babel_interface {
	struct babel 		*babel;
	struct interface 	*if_ptr;

	bool			enabled;
	bool			passive;
};

struct babel_neighbour {
	struct babel 		*babel;
};

struct babel_route {
	struct babel 		*babel;
};

struct babel_source {
	struct babel 		*babel;
};

struct babel_xroute {
	struct babel 		*babel;
};

#endif /* _BABEL_ROUTER_H_ */
