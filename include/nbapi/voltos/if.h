// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/if.h
 *
 * 	Network Interfaces
 */

#ifndef _NBAPI_VOLTOS_IF_H
#define _NBAPI_VOLTOS_IF_H

typedef int 						__voltos_if_index_t;
typedef unsigned short 					__voltos_if_flags_t;

enum if_class_type {
	IF_CLASS_TYPE_T_AppGigabitEthernet		= 1,
	IF_CLASS_TYPE_T_AppleTalk			= 2,
	IF_CLASS_TYPE_T_AppNav_Compress			= 3,
	IF_CLASS_TYPE_T_AppNav_UnCompress		= 4,
	IF_CLASS_TYPE_T_ARCnet				= 5,
	IF_CLASS_TYPE_T_Async				= 6,
	IF_CLASS_TYPE_T_ATM				= 7,
	IF_CLASS_TYPE_T_ATM_ACR				= 8,
	IF_CLASS_TYPE_T_Auto_Template			= 9,

	IF_CLASS_TYPE_T_BDI				= 10,
	IF_CLASS_TYPE_T_Bluetooth			= 11,
	IF_CLASS_TYPE_T_Bundle				= 12,
	IF_CLASS_TYPE_T_BVI				= 13,

	IF_CLASS_TYPE_T_Cable_Modem			= 14,
	IF_CLASS_TYPE_T_CAN				= 15,
	IF_CLASS_TYPE_T_CDMA_1x				= 16,
	IF_CLASS_TYPE_T_Cellular			= 17,
	IF_CLASS_TYPE_T_CEM				= 18,
	IF_CLASS_TYPE_T_Content_Engine			= 19,
	IF_CLASS_TYPE_T_CTunnel				= 20,

	IF_CLASS_TYPE_T_Dialer				= 21,
	IF_CLASS_TYPE_T_DSA				= 22,

	IF_CLASS_TYPE_T_EightHundredGigE		= 23,
	IF_CLASS_TYPE_T_Ethernet			= 24,

	IF_CLASS_TYPE_T_FastEthernet			= 25,
	IF_CLASS_TYPE_T_FDDI				= 26,
	IF_CLASS_TYPE_T_FibreChannel			= 27,
	IF_CLASS_TYPE_T_FiftyGigabitEthernet		= 28,
	IF_CLASS_TYPE_T_FiveGigabitEthernet		= 29,
	IF_CLASS_TYPE_T_FortyGigabitEthernet		= 30,
	IF_CLASS_TYPE_T_FourHundredGigE			= 31,

	IF_CLASS_TYPE_T_GigabitEthernet			= 32,
	IF_CLASS_TYPE_T_GMPLS				= 33,
	IF_CLASS_TYPE_T_Group_Async			= 34,

	IF_CLASS_TYPE_T_HIPPI				= 35,
	IF_CLASS_TYPE_T_HSSI				= 36,
	IF_CLASS_TYPE_T_HundredGigE			= 37,

	IF_CLASS_TYPE_T_InfiniBand			= 38,
	IF_CLASS_TYPE_T_Integrated_Service_Engine	= 39,
	IF_CLASS_TYPE_T_ISDN_BRI			= 40,
	IF_CLASS_TYPE_T_ISDN_PRI			= 41,

	IF_CLASS_TYPE_T_LISP				= 42,
	IF_CLASS_TYPE_T_LongReachEthernet		= 43,
	IF_CLASS_TYPE_T_Loopback			= 44,
	IF_CLASS_TYPE_T_LSP_VIF				= 45,
	IF_CLASS_TYPE_T_LTE450				= 46,

	IF_CLASS_TYPE_T_MFR				= 47,
	IF_CLASS_TYPE_T_Multilink			= 48,

	IF_CLASS_TYPE_T_Nebula				= 49,
	IF_CLASS_TYPE_T_Netlink_Monitor			= 50,
	IF_CLASS_TYPE_T_NFC				= 51,
	IF_CLASS_TYPE_T_Null				= 52,
	IF_CLASS_TYPE_T_NVE				= 53,

	IF_CLASS_TYPE_T_OmniPath			= 54,
	IF_CLASS_TYPE_T_OpenVPN				= 55,
	IF_CLASS_TYPE_T_Overlay				= 56,

	IF_CLASS_TYPE_T_Parallel			= 57,
	IF_CLASS_TYPE_T_Port_Channel			= 58,
	IF_CLASS_TYPE_T_POS				= 59,
	IF_CLASS_TYPE_T_PRP_Channel			= 60,
	IF_CLASS_TYPE_T_Pseudowire			= 61,

	IF_CLASS_TYPE_T_Satellite			= 62,
	IF_CLASS_TYPE_T_Serial				= 63,
	IF_CLASS_TYPE_T_SM				= 64,
	IF_CLASS_TYPE_T_SoftEther			= 65,
	IF_CLASS_TYPE_T_STunnel				= 66,

	IF_CLASS_TYPE_T_Tailscale			= 67,
	IF_CLASS_TYPE_T_TenGigabitEthernet		= 68,
	IF_CLASS_TYPE_T_TerabitEthernet			= 69,
	IF_CLASS_TYPE_T_TokenRing			= 70,
	IF_CLASS_TYPE_T_Tunnel				= 71,
	IF_CLASS_TYPE_T_TwentyFiveGigE			= 72,
	IF_CLASS_TYPE_T_TwoGigabitEthernet		= 73,
	IF_CLASS_TYPE_T_TwoHundredGigE			= 74,

	IF_CLASS_TYPE_T_VasiLeft			= 75,
	IF_CLASS_TYPE_T_VasiRight			= 76,
	IF_CLASS_TYPE_T_VG_AnyLan			= 77,
	IF_CLASS_TYPE_T_VIF				= 78,
	IF_CLASS_TYPE_T_Virtual_Access			= 79,
	IF_CLASS_TYPE_T_Virtual_CAN			= 80,
	IF_CLASS_TYPE_T_Virtual_Ethernet		= 81,
	IF_CLASS_TYPE_T_Virtual_PPP			= 82,
	IF_CLASS_TYPE_T_Virtual_Template		= 83,
	IF_CLASS_TYPE_T_Virtual_TokenRing		= 84,
	IF_CLASS_TYPE_T_VirtualPortGroup		= 85,
	IF_CLASS_TYPE_T_VLAN				= 86,
	IF_CLASS_TYPE_T_VMI				= 87,

	IF_CLASS_TYPE_T_Wi_Fi				= 88,

	IF_CLASS_TYPE_T_ZeroTier			= 89,
	__IF_CLASS_TYPE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_IF_H */
