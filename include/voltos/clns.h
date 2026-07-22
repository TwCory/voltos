#ifndef _VOLTOS_CLNS_H
#define _VOLTOS_CLNS_H

#include <voltos/nsap.h>
#include <voltos/types.h>
#include <nbapi/voltos/clns.h>

struct clns_global_conf {
	struct {
					__u16 min_delay_time;
					__u16 max_delay_time;
					__u16 quiet_interval_time;
					__u32 quiet_threshold_time;
	} cache_invalidate_delay;

	__u16 				configuration_time;
	__u16				holding_time;
	__u16 				packet_lifetime;
	__u16				packet_rate;
	__u32				queue_depth;
	bool 				routing;
	bool				security_pass_through;
	bool 				want_erpdu;
};

struct clns_interface_conf {
	bool 				checksum;
	bool 				cluster_alias;
	__u16				congestion_threshold;
	bool 				dec_compatible;
	bool 				enable;
	__u16				erpdu_interval;
	__u16				esct_time;
	__u16 				mtu;
	__u16 				rdpdu_interval;
	bool				route_cache;
	bool				send_erpdu;
	bool				send_rdpdu;
	bool				split_horizon;
};

struct clns_host_conf {
	char				hostname;
	struct nsap_addr		nsap;
};

struct clns_net_conf {

};

struct clns_route_conf {

};

#endif /* _VOLTOS_CLNS_H */
