// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/msdp.h
 *
 * 	Multicast Source Discovery Protocol (MSDP)
 */

#ifndef _NBAPI_VOLTOS_MSDP_H
#define _NBAPI_VOLTOS_MSDP_H

#define MSDP_PORT					639

enum {
	MSDP_TLV_T_UNSPEC				= 0,
#define MSDP_TLV_UNSPEC					MSDP_TLV_T_UNSPEC
	MSDP_TLV_T_IPv4_Source_Active			= 1,
#define MSDP_TLV_IPv4_Source_Active			MSDP_TLV_T_IPv4_Source_Active
	MSDP_TLV_T_IPv4_Source_Active_Request		= 2,
#define MSDP_TLV_IPv4_Source_Active_Request		MSDP_TLV_T_IPv4_Source_Active_Request
	MSDP_TLV_T_IPv4_Source_Active_Response		= 3,
#define MSDP_TLV_IPv4_Source_Active_Response		MSDP_TLV_T_IPv4_Source_Active_Response
	MSDP_TLV_T_KeepAlive				= 4,
#define MSDP_TLV_KeepAlive				MSDP_TLV_T_KeepAlive
	MSDP_TLV_T_Traceroute_In_Progress		= 6,
#define MSDP_TLV_Traceroute_In_Progress			MSDP_TLV_T_Traceroute_In_Progress
	MSDP_TLV_T_Traceroute_Reply			= 7,
#define MSDP_TLV_Traceroute_Reply			MSDP_TLV_T_Traceroute_Reply
	__MSDP_TLV_T_MAX__
};

#define MSDP_TLV_MAX					(__MSDP_TLV_T_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_MSDP_H */
