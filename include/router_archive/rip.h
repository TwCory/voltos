#ifndef _ROUTER_RIP_H
#define _ROUTER_RIP_H

#include <voltos/in.h>
#include <voltos/inet.h>
#include <voltos/types.h>
#include <router/distance.h>
#include <router/distribute.h>
#include <router/filter.h>
#include <router/if.h>
#include <router/ip.h>
#include <router/ipx.h>
#include <router/neighbour.h>
#include <router/nexthop.h>
#include <router/prefix.h>
#include <router/redistribute.h>
#include <router/route.h>
#include <router/vrf.h>

#define RIP_METRIC_MIN					1
#define RIP_METRIC_MAX					15
#define RIP_METRIC_INFINITY				16

#define RIP_ROUTE_CODE					"R"
#define RIP_ROUTE_DISTANCE				120

enum rip_version {
	RIP_VERSION_T_V1				= 1,
	RIP_VERSION_T_V2				= 2,
	RIP_VERSION_T_BOTH				= 3,
	__RIP_VERSION_T_MAX__
};

enum rip_auth_mode {
	RIP_AUTH_MODE_T_NONE				= 0,
	RIP_AUTH_MODE_T_PLAINTEXT			= 1,
	RIP_AUTH_MODE_T_MD5				= 2,
	__RIP_AUTH_MODE_T_MAX__
};

enum rip_split_horizon {
	RIP_SPLIT_HORIZON_T_NONE			= 0,
	RIP_SPLIT_HORIZON_T_ENABLE			= 1,
	RIP_SPLIT_HORIZON_T_ENABLE_POISON_REVERSE	= 2,
	__RIP_SPLIT_HORIZON_T_MAX__
};

struct rip {
	bool 						auto_summary;
	distance_t 					distance;
	bool 						enabled;
	u8 						flash_update_threshold;
	u16 						input_queue;
	u8 						maximum_paths;
	bool 						passive_default;
	u8 						output_delay;
	bool 						throttle;
	struct {
		u32 					update;
		u32 					timeout;
		u32 					garbage;
	} timers;
	bool 						validate_update_source;
	enum rip_version 				version;
};

struct rip_interface {
	struct rip 					*rip;
	struct interface 				*interface;

	bool 						advertise;
	u16 						initial_delay;
	bool 						passive;
	enum rip_split_horizon 				split_horizon;
	bool 						triggered;
	bool 						v2_broadcast;
	struct {
		enum rip_version 			receive;
		enum rip_version 			send;
	} version;
};

struct rip_neighbour {
	struct rip 					*rip;
	struct neighbour_entry 				*neighbour;

	ipv4_addr_t 					address;
	bool 						bfd;
	enum rip_version 				version;
};

struct rip_filter {
	struct rip 					*rip;
	struct filter_ctx 				*filter;
};

struct rip_redistribute {
	struct rip 					*rip;
	struct redistribute_ctx 			*redistribute;
};

struct rip_route {
	struct rip 					*rip;
	struct route_entry 				*route;

	ipv4_prefix_t 					network;
	distance_t 					distance;
	u8 						metric;
};

struct rip_offset_list {
	struct rip 					*rip;
};

#endif /* _ROUTER_RIP_H */
