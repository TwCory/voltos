#ifndef BGP_ROUTER_H
#define BGP_ROUTER_H

#include <voltos/bgp.h>
#include <voltos/if.h>
#include <voltos/net_router.h>
#include <voltos/route.h>

#include <router/bgp_types.h>

struct bgp {
	struct router 		*router;

	bgp_asn_t 		asn;
	char 			*asn_str;

	char 			*name;
	char 			*name_str;
};

struct bgp_interface {
	struct bgp 		*bgp;
	struct interface 	*if_ptr;
};

struct bgp_peer {
	struct bgp 		*bgp;

	bgp_asn_t 		asn_remote;
	bgp_asn_t 		asn_local;
	bgp_asn_t 		asn_change_local;

	bgp_router_id_t 	rid_remote;
	bgp_router_id_t 	rid_local;
};

struct bgp_peer_connection {
	struct bgp_peer 	*bp_ptr;
};

struct bgp_peer_group {
	struct bgp 		*bgp;
	char 			*name;
};

struct bgp_update_group {
	struct bgp 		*bgp;
};

struct bgp_route {
	struct bgp 		*bgp;
	struct route 		*route_ptr;
};

#endif /* BGP_ROUTER_H */
