#ifndef _ROUTER_EIGRP_H_
#define _ROUTER_EIGRP_H_

#include <voltos/eigrp.h>
#include <voltos/if.h>

#include <router/eigrp_types.h>

struct eigrp {
	eigrp_asn_t asn;
	char *asn_str;
};

struct eigrp_interface {
	struct eigrp *eigrp;
	struct interface *if_ptr;
};

struct eigrp_neighbour {
	struct eigrp *eigrp;
};

#endif /* _ROUTER_EIGRP_H_ */
