// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/ip.h
 *
 *	Internet Protocol (IP)
 */

#ifndef _NBAPI_VOLTOS_IP_H
#define _NBAPI_VOLTOS_IP_H

#include <voltos/stddef.h>
#include <voltos/types.h>

#define IP_VERSION						4

#define IP_TTL_MIN						1
#define IP_TTL_MAX						255
#define IP_TTL_DEFAULT						64

#define IP_MTU_MIN						68
#define IP_MTU_MAX						9000
#define IP_MTU_DEFAULT						1500

enum {
	IP_OPTION_T_EOOL					= 0,
#define IP_OPTION_EOOL						IP_OPTION_T_EOOL
	IP_OPTION_T_NOP						= 1,
#define IP_OPTION_NOP						IP_OPTION_T_NOP
	IP_OPTION_T_SEC						= 2,
#define IP_OPTION_SEC						IP_OPTION_T_SEC
	IP_OPTION_T_LSR						= 3,
#define IP_OPTION_LSR						IP_OPTION_T_LSR
	IP_OPTION_T_TS						= 4,
#define IP_OPTION_TS						IP_OPTION_T_TS
	IP_OPTION_T_E_SEC					= 5,
#define IP_OPTION_E_SEC						IP_OPTION_T_E_SEC
	IP_OPTION_T_CIPSO					= 6,
#define IP_OPTION_CIPSO						IP_OPTION_T_CIPSO
	IP_OPTION_T_RR						= 7,
#define IP_OPTION_RR						IP_OPTION_T_RR
	IP_OPTION_T_SID						= 8,
#define IP_OPTION_SID						IP_OPTION_T_SID
	IP_OPTION_T_SSR						= 9,
#define IP_OPTION_SSR						IP_OPTION_T_SSR
	IP_OPTION_T_ZSU						= 10,
#define IP_OPTION_ZSU						IP_OPTION_T_ZSU
	IP_OPTION_T_MTUP					= 11,
#define IP_OPTION_MTUP						IP_OPTION_T_MTUP
	IP_OPTION_T_MTUR					= 12,
#define IP_OPTION_MTUR						IP_OPTION_T_MTUR
	IP_OPTION_T_FINN					= 13,
#define IP_OPTION_FINN						IP_OPTION_T_FINN
	IP_OPTION_T_VISA					= 14,
#define IP_OPTION_VISA						IP_OPTION_T_VISA
	IP_OPTION_T_ENCODE					= 15,
#define IP_OPTION_ENCODE					IP_OPTION_T_ENCODE
	IP_OPTION_T_IMITD					= 16,
#define IP_OPTION_IMITD						IP_OPTION_T_IMITD
	IP_OPTION_T_EIP						= 17,
#define IP_OPTION_EIP						IP_OPTION_T_EIP
	IP_OPTION_T_TR						= 18,
#define IP_OPTION_TR						IP_OPTION_T_TR
	IP_OPTION_T_ADDEXT					= 19,
#define IP_OPTION_ADDEXT					IP_OPTION_T_ADDEXT
	IP_OPTION_T_RTRALT					= 20,
#define IP_OPTION_RTRALT					IP_OPTION_T_RTRALT
	IP_OPTION_T_SDB						= 21,
#define IP_OPTION_SDB						IP_OPTION_T_SDB
	IP_OPTION_T_DPS						= 23,
#define IP_OPTION_DPS						IP_OPTION_T_DPS
	IP_OPTION_T_UMP						= 24,
#define IP_OPTION_UMP						IP_OPTION_T_UMP
	IP_OPTION_T_QS						= 25,
#define IP_OPTION_QS						IP_OPTION_T_QS
	IP_OPTION_T_EXP						= 30,
#define IP_OPTION_EXP						IP_OPTION_T_EXP
	__IP_OPTION_T_MAX__
};

#define IP_OPTION_MAX						(__IP_OPTION_T_MAX__ - 1)

enum {
	IP_ROUTER_ALERT_VALUE_T_EXAMINE				= 0,
#define IP_ROUTER_ALERT_VALUE_EXAMINE				IP_ROUTER_ALERT_VALUE_T_EXAMINE
#define IP_ROUTER_ALERT_VALUE_ARN_LEVEL_MIN			1
#define IP_ROUTER_ALERT_VALUE_ARN_LEVEL_MAX			32
#define IP_ROUTER_ALERT_VALUE_QOS_NSLP_AGGREGATION_LEVEL_MIN	33
#define IP_ROUTER_ALERT_VALUE_QOS_NSLP_AGGREGATION_LEVEL_MAX	64
	IP_ROUTER_ALERT_VALUE_T_NSIS_NATFW_NSLP			= 65,
#define IP_ROUTER_ALERT_VALUE_NSIS_NATFW_NSLP			IP_ROUTER_ALERT_VALUE_T_NSIS_NATFW_NSLP
	__IP_ROUTER_ALERT_VALUE_T_MAX__
};

#define IP_ROUTER_ALERT_VALUE_MAX				(__IP_ROUTER_ALERT_VALUE_T_MAX__ - 1)

struct ip_hdr {
	__u8								version:4,
									ihl:4;
	__u8 							tos;
	__net16 						total_length;
	__net16 						identification;
	__net16								flags:3,
									fragment_offset:13;
	__u8 							ttl;
	__u8 							protocol;
	__csum16 						checksum;

	__a_union(/* no tag */, addrs, /* no attrs */,
		__net32 						src_addr;
		__net32 						dst_addr;
	);
};

#endif /* _NBAPI_VOLTOS_IP_H */
