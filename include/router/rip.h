#ifndef _ROUTER_RIP_H_
#define _ROUTER_RIP_H_

#include <voltos/bfd.h>
#include <voltos/if.h>
#include <voltos/inet.h>
#include <voltos/rip.h>
#include <voltos/thread.h>
#include <voltos/types.h>
#include <voltos/vrf.h>

#include <router/distance.h>
#include <router/distribute.h>
#include <router/filter.h>
#include <router/if.h>
#include <router/redistribute.h>

struct rip {
	char 				*vrf_name;
	struct vrf 			*vrf_ptr;

	bool 				is_enabled;

	int 				version_send;
	int 				version_recv;

	thread_t 			*read_thread;
	thread_t 			*update_thread;

	int 				triggered;
	thread_t 			*triggered_update_thread;
	thread_t 			*triggered_interval_thread;

	u32 				update_time;
	u32 				timeout_time;
	u32 				garbage_time;

	u8 				default_metric;
	distance_t 			distance;
	u8 				ecmp;

	char 				*bfd_profile_name;
	struct bfd_profile 		*bfd_profile_ptr;

	struct filter_ctx 		*filter_ctx;
	struct distribute_ctx 		*distribute_ctx;
	struct redistribute_ctx 	*redistribute_ctx;

	struct {
		u64 			route_changes;
		u64 			queries;
	} snmp_counters;
};

struct rip_interface {
	struct rip 			*rip;
	struct interface 		*if_ptr;

	bool 				is_running;
	
	bool 				enable_network;
	bool 				enable_interface;

	if_passive_type_t		passive_type;
	if_split_horizon_policy_t 	split_horizon;
	bool 				v2_broadcast;

	int 				auth_type;
	char 				*auth_ctx;

	struct {
		u32 			rx_packet_errors;
		u32 			rx_route_errors;
		u32 			tx_updates;
	};

	thread_t 			*wakeup_thread;

	bool 				bfd_enabled;
	struct bfd_profile 		*bfd_profile;
};

struct rip_peer {
	struct rip 			*rip;
	struct rip_interface 		*rif_ptr;

	ipv4_address_t 			address;

	int 				domain_tag;
	time_t 				uptime;
	u8 				version;

	struct {
		u32 			rx_packet_errors;
		u32 			rx_route_errors;
	};

	thread_t 			*timeout_thread;

	struct bfd_session_ctx 		*bfd_session;
};

#endif /* _ROUTER_RIP_H_ */
