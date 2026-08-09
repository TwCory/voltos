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

struct bgp_hdr {
	__u8					marker[16];
	__net16					length;
	__u8					type;
};

struct bgp_open_msg {

};

struct bgp_update_msg {

};

struct bgp_notification_msg {

};

struct bgp_keepalive_msg {

};

struct bgp_route_refresh_msg {

};

#endif /* _NBAPI_VOLTOS_BGP_H */
