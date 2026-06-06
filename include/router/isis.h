#ifndef ISIS_ROUTER_H
#define ISIS_ROUTER_H

#include <voltos/if.h>
#include <voltos/isis.h>
#include <voltos/lsdb.h>
#include <voltos/net_router.h>
#include <voltos/nsap.h>
#include <voltos/route.h>
#include <voltos/vrf.h>

struct isis {
	struct router 		*router;

	nsap_address_t 		domain;
	
	char 			*vrf_name;
	struct vrf 		*vrf_ptr;
};

struct isis_adjacency {
	struct isis 		*isis;
};

struct isis_area {
	struct isis 		*isis;
};

struct isis_circuit {
	struct isis 		*isis;
};

struct isis_circuit_params {

};

struct isis_dynamic_hostname_cache {

};

struct isis_flags {

};

struct isis_flex_algo_alloc_params {

};

struct isis_flex_algo_ctx {

};

struct isis_interface {
	struct isis 		*isis;
	struct interface 	*if_ptr;
};

struct isis_lfa_protected_resource {

};

struct isis_lfa_tiebreaker {

};

struct isis_lsdb {
	struct lsdb_head 	*lsdb;
};

struct isis_lsp {

};

struct isis_next_hop {

};

struct isis_passwd {

};

struct isis_rib {

};

struct isis_route {
	struct isis 		*isis;
	struct route 		*route_ptr;
};

struct isis_spf_adjacency {

};

struct isis_spf_node {

};

struct isis_spf_prefix_priority_acl {

};

struct isis_sr_adjacency {

};

struct isis_sr_local_block {

};

struct isis_sr_psid_ctx {

};

struct isis_srv6_adjacency {

};

struct isis_srv6_table {

};

struct isis_srv6_locator {

};

struct isis_srv6_sid {

};

struct isis_tlvs {

};

#endif /* ISIS_ROUTER_H */
