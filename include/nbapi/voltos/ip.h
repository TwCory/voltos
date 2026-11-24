// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/ip.h
 *
 * 	Internet Protocol, Version 4 (IPv4)
 */

#ifndef _NBAPI_VOLTOS_IP_H
#define _NBAPI_VOLTOS_IP_H

#define IP_ETHERTYPE			0x0800
#define IP_VERSION			4

#define IP_MTU_MIN			60
#define IP_MTU_MAX			9216
#define IP_MTU_DEFAULT			1500

#define IP_TTL_MIN			0
#define IP_TTL_MAX			255
#define IP_TTL_DEFAULT			64

enum {
	IP_OPTION_T_EOOL		= 0,
#define IP_OPTION_EOOL			IP_OPTION_T_EOOL
	IP_OPTION_T_NOP			= 1,
#define IP_OPTION_NOP			IP_OPTION_T_NOP
	IP_OPTION_T_RR			= 7,
#define IP_OPTION_RR			IP_OPTION_T_RR
	IP_OPTION_T_ZSU			= 10,
#define IP_OPTION_ZSU			IP_OPTION_T_ZSU
	IP_OPTION_T_MTUP		= 11,
#define IP_OPTION_MTUP			IP_OPTION_T_MTUP
	IP_OPTION_T_MTUR		= 12,
#define IP_OPTION_MTUR			IP_OPTION_T_MTUR
	IP_OPTION_T_ENCODE		= 15,
#define IP_OPTION_ENCODE		IP_OPTION_T_ENCODE
	IP_OPTION_T_QS			= 25,
#define IP_OPTION_QS			IP_OPTION_T_QS
	IP_OPTION_T_EXP_1		= 30,
#define IP_OPTION_EXP_1			IP_OPTION_T_EXP_1
	IP_OPTION_T_TS			= 68,
#define IP_OPTION_TS			IP_OPTION_T_TS
	IP_OPTION_T_TR			= 82,
#define IP_OPTION_TR			IP_OPTION_T_TR
	IP_OPTION_T_EXP_2		= 94,
#define IP_OPTION_EXP_2			IP_OPTION_T_EXP_2
	IP_OPTION_T_SEC			= 130,
#define IP_OPTION_SEC			IP_OPTION_T_SEC
	IP_OPTION_T_LSR			= 131,
#define IP_OPTION_LSR			IP_OPTION_T_LSR
	IP_OPTION_T_E_SEC		= 133,
#define IP_OPTION_E_SEC			IP_OPTION_T_E_SEC
	IP_OPTION_T_CIPSO		= 134,
#define IP_OPTION_CIPSO			IP_OPTION_T_CIPSO
	IP_OPTION_T_SID			= 136,
#define IP_OPTION_SID			IP_OPTION_T_SID
	IP_OPTION_T_SSR			= 137,
#define IP_OPTION_SSR			IP_OPTION_T_SSR
	IP_OPTION_T_VISA		= 142,
#define IP_OPTION_VISA			IP_OPTION_T_VISA
	IP_OPTION_T_IMITD		= 144,
#define IP_OPTION_IMITD			IP_OPTION_T_IMITD
	IP_OPTION_T_EIP			= 145,
#define IP_OPTION_EIP			IP_OPTION_T_EIP
	IP_OPTION_T_ADDEXT		= 147,
#define IP_OPTION_ADDEXT		IP_OPTION_T_ADDEXT
	IP_OPTION_T_RTRALT		= 148,
#define IP_OPTION_RTRALT		IP_OPTION_T_RTRALT
	IP_OPTION_T_SDB			= 149,
#define IP_OPTION_SDB			IP_OPTION_T_SDB
	IP_OPTION_T_DPS			= 151,
#define IP_OPTION_DPS			IP_OPTION_T_DPS
	IP_OPTION_T_UMP			= 152,
#define IP_OPTION_UMP			IP_OPTION_T_UMP
	IP_OPTION_T_EXP_3		= 158,
#define IP_OPTION_EXP_3			IP_OPTION_T_EXP_3
	IP_OPTION_T_FINN		= 205,
#define IP_OPTION_FINN			IP_OPTION_T_FINN
	IP_OPTION_T_EXP_4		= 222,
#define IP_OPTION_EXP_4			IP_OPTION_T_EXP_4
	__IP_OPTION_T_MAX__
};

#define IP_OPTION_MAX			(__IP_OPTION_T_MAX__ - 1)

struct ip_hdr {
	__u8					version:4,
						ihl:4;
	__u8					dscp:6,
						ecn:2;
	__net16				total_length;
	__net16				identification;
	__u16					flags:3,
						fragment_offset:13;
	__u8				ttl;
	__u8				protocol;
	__csum16			checksum;
	__a_union(/* no tag */, addrs, /* no attrs */,
		__net32				src_addr;
		__net32				dst_addr;
	);
};

#endif /* _NBAPI_VOLTOS_IP_H */
