// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/bgp.h
 *
 *	Border Gateway Protocol (BGP)
 */

#ifndef _NBAPI_VOLTOS_BGP_H
#define _NBAPI_VOLTOS_BGP_H

#include <voltos/types.h>

#define BGP_VERSION				4
#define BGP_PORT				179

#define BGP_MARKER_SIZE				16

struct bgp_hdr {
	__u8					msg_marker[BGP_MARKER_SIZE];
	__u16					msg_length;
	__u8					msg_type;
};

struct bgp_open_msg {
	struct bgp_hdr 				msg_header;
	__u8 					version;
	__u16 					as_number;
	__u16 					hold_time;
	__u32 					identifier;
	__u8 					parameters_length;
	unsigned char 				*parameters;
};

struct bgp_update_msg {
	struct bgp_hdr 				msg_header;
	__u16 					withdrawn_routes_length;
	unsigned char 				*withdrawn_routes;
	__u16 					path_attributes_length;
	unsigned char 				*path_attributes;
	unsigned char 				*nlri;
};

struct bgp_notification_msg {
	struct bgp_hdr 				msg_header;
	__u8 					error_code;
	__u8 					error_subcode;
	unsigned char 				*data;
};

struct bgp_keepalive_msg {
	struct bgp_hdr 				msg_header;
};

struct bgp_route_refresh_msg {
	struct bgp_hdr 				msg_header;
	__u16 					afi;
	__u8 					subtype;
	__u8 					safi;
	unsigned char 				*nlri;
};

#endif /* _NBAPI_VOLTOS_BGP_H */
