// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/atalk.h
 *
 */

#ifndef _VOLTOS_ATALK_H
#define _VOLTOS_ATALK_H

#include <voltos/types.h>
#include <nbapi/voltos/atalk.h>

struct atalk_global_conf {
	bool 				alternate_addressing;
	struct {
		union {
			__u16 		probe;
			__u16 		request;
		} interval;
		union {
			__u8 		probe;
			__u8 		request;
		} retransmit_count;
	} arp;
	bool 				checksum;
	struct {
		__u32 			active_time;
		bool 			log_neighbour_changes;
	} eigrp;
	bool 				event_logging;
	__u8 				maximum_paths;
	__u16 				name_lookup_interval;
	bool 				permit_partial_zones;
	bool 				pre_fdditalk;
	bool 				require_route_zones;
	bool 				routing;
};

struct atalk_interface_conf {
	__u16 				arp_timeout;
	struct {
		__u8 			tickle_time;
		__u8 			update_interval;
	} aurp;
	__u16 				cable_range;
	bool 				client_mode;
	bool 				discovery;
	struct {
		__u8 			bandwidth_percentage;
		__u8 			hello_time;
		__u8 			hold_time;
		bool 			split_horizon;
	} eigrp;
	bool 				free_trade_zone;
	bool 				route_cache;
};

struct atalk_cable_range_conf {

};

struct atalk_domain_conf {

};

struct atalk_host_conf {

};

struct atalk_route_conf {

};

struct atalk_zone_conf {

};

#endif /* _VOLTOS_ATALK_H */
