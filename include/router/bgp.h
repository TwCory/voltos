#ifndef _BGP_ROUTER_H_
#define _BGP_ROUTER_H_

#include <voltos/bgp_types.h>
#include <voltos/if.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <router/protocol.h>

struct bgp {
	struct protocol 	*p_ptr;

	char 			*vrf_name;
	struct vrf 		*vrf_ptr;

	bgp_asn_t		asn;
	char			*name;
	bool 			enabled;
};

struct bgp_interface {
	struct bgp 		*bgp;
	struct interface 	*if_ptr;
};

#endif /* _BGP_ROUTER_H_ */
