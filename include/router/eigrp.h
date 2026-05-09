#ifndef _EIGRP_ROUTER_H_
#define _EIGRP_ROUTER_H_

#include <voltos/eigrp_const.h>
#include <voltos/eigrp_types.h>
#include <voltos/if.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <router/protocol.h>

struct eigrp {
	struct protocol 	*p_ptr;

	char 			*vrf_name;
	struct vrf 		*vrf_ptr;

	eigrp_asn_t		asn;
	char			name[EIGRP_NAME_SIZE];
	bool 			enabled;
};

struct eigrp_interface {
	struct eigrp 		*eigrp;
	struct interface 	*if_ptr;

	bool			enabled;
	bool 			passive;
};

void eigrp_init(void);

#endif /* _EIGRP_ROUTER_H_ */
