// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/bgp.h
 *
 * 	Border Gateway Protocol (BGP)
 */

#ifndef _NBAPI_VOLTOS_BGP_H
#define _NBAPI_VOLTOS_BGP_H

#define BGP_PORT		179
#define BGP_VERSION		4

#define BGP_MARKER_LEN		(16)

struct bgp_msg_hdr {
	unsigned char 		marker[BGP_MARKER_LEN];
	__net16 		length;
	__u8 			type;
};

struct bgp_open_msg {
	struct bgp_msg_hdr	header;
};

struct bgp_update_msg {
	struct bgp_msg_hdr	header;
};

struct bgp_notification_msg {
	struct bgp_msg_hdr	header;
};

struct bgp_keepalive_msg {
	struct bgp_msg_hdr	header;
};

struct bgp_route_refresh_msg {
	struct bgp_msg_hdr	header;
};

#endif /* _NBAPI_VOLTOS_BGP_H */
