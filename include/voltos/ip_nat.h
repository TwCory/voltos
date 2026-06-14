#ifndef VOLTOS_IP_NAT_H
#define VOLTOS_IP_NAT_H

#include <voltos/in.h>
#include <voltos/list.h>
#include <voltos/types.h>

#define IP_NAT_POOL_NAME_SIZE			32

enum ip_nat_pool_type {
	IP_NAT_POOL_TYPE_T_UNSPEC		= 0,
	IP_NAT_POOL_TYPE_T_MATCH_HOST		= 1,
	IP_NAT_POOL_TYPE_T_ROTARY		= 2,
	__IP_NAT_POOL_TYPE_T_MAX__
};

enum ip_nat_mode {
	IP_NAT_MODE_T_DEFAULT			= 0,
	IP_NAT_MODE_T_CGN			= 1,
	__IP_NAT_MODE_T_MAX__
};

struct nat44 {
	bool 					create_flow_entries;
	__u16 					dia_track_id;
};

struct nat44_interface {
	bool 					overload;
	bool 					ext_overload;
	bool 					oer;
};

struct ip_nat_pool_ctx {
	char 					name[IP_NAT_POOL_NAME_SIZE];

	struct in_addr 				start_address;
	struct in_addr 				end_address;
	__u8 					prefix_length;

	char 					*acct_str;
	bool 					arp_ping;
	enum ip_nat_pool_type 			type;
	bool 					add_route;
};

struct ip_nat_inside_ctx {
	struct {

	} src_ctx;
	struct {

	} dst_ctx;
};

struct ip_nat_outside_ctx {
	struct {

	} src_ctx;
};

struct ip_nat_route_ctx {
	char 					*vrf;
	struct in_addr 				address;
	__u8 					prefix_length;
	bool 					global;
};

struct ip_nat_settings_ctx {
	bool fbd;
	bool log_destination;
	bool reserve_ports;
	bool preserve_sdwan_ports;
	bool central_policy;
	enum ip_nat_mode mode;
	bool static_map_remove_check;
	__u32 gatekeeper_size;

	bool nonpat_drop;
	bool nonpat_log;

	bool high_performance;
	__u16 trans_error_limit_per_pool;

	__u8 pool_watermark_high;
	__u8 pool_watermark_low;

	bool scale_bind;
	bool outside_mapping;

	__u16 pap_limit;
	bool pap_bpa_enable;
	__u16 pap_bpa_set_size;
	__u8 pap_bpa_step_size;
	bool pap_bpa_single_set;
	bool pap_restricted;

	struct {
		struct list_head tcp_port_block_list;
		struct list_head udp_port_block_list;

		__u16 port_block_start;
		__u16 port_block_stop;
	} overload_ctx;
};

struct ip_nat_service_ctx {
	bool h225;
	bool all_algs;
	bool dns_tcp;
	bool dns_udp;
	bool dns_reset_ttl;
	bool ftp;
	__u16 full_range_tcp;
	__u16 full_range_udp;
};

#endif /* VOLTOS_IP_NAT_H */
