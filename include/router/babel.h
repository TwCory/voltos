#ifndef _ROUTER_BABEL_H_
#define _ROUTER_BABEL_H_

#include <voltos/babel.h>
#include <voltos/if.h>
#include <voltos/types.h>

struct babel {
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

#endif /* _ROUTER_BABEL_H_ */
