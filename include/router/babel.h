#ifndef BABEL_ROUTER_H
#define BABEL_ROUTER_H

#include <voltos/babel.h>
#include <voltos/if.h>
#include <voltos/net_router.h>
#include <voltos/route.h>
#include <voltos/types.h>
#include <voltos/vrf.h>

struct babel {
	struct router 			*router;

	char 				*vrf_name;
	struct vrf 			*vrf_ptr;

	u64 				router_id;
	u16 				update_seqno;
	u8 				update_seqno_inc;
	u8 				triggered;
};

struct babel_interface {
	struct babel 			*babel;
	struct interface 		*if_ptr;
};

struct babel_neighbour {
	struct babel 			*babel;
	struct babel_interface 		*bif_ptr;

	u16 				rx_cost;
	u16 				tx_cost;
	u16 				cost;
};

struct babel_resend {
	struct babel 			*babel;
};

struct babel_route {
	struct babel 			*babel;
	struct route 			*route_ptr;

	u64 				router_id;
	u8 				feasible;
	u16 				seqno;
	u16 				metric;
	u16 				metric_advertised;
};

struct babel_source {
	struct babel 			*babel;
	u64 				router_id;
	u16 				seqno;
	u16 				metric;
};

struct babel_xroute {
	struct babel 			*babel;
};

#endif /* BABEL_ROUTER_H */
