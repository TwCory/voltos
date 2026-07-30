#ifndef _NBAPI_VOLTOS_IF_H
#define _NBAPI_VOLTOS_IF_H

#include <voltos/types.h>

typedef __u32 						__voltos_if_index_t;
typedef __u16 						__voltos_if_flags_t;

enum if_state {
	IF_STATE_T_UNKNOWN				= 0,
	IF_STATE_T_UP					= 1,
	IF_STATE_T_DOWN					= 2,
	IF_STATE_T_TEST					= 3,
	__IF_STATE_T_MAX__
};

enum oper_state {
	OPER_STATE_T_INVALID				= 0,
	OPER_STATE_T_READY				= 1,
	OPER_STATE_T_NO_PASS				= 2,
	OPER_STATE_T_TEST				= 3,
	OPER_STATE_T_UNKNOWN				= 4,
	OPER_STATE_T_DORMANT				= 5,
	OPER_STATE_T_NOT_PRESENT			= 6,
	OPER_STATE_T_LOWER_LAYER_DOWN			= 7,
	__OPER_STATE_T_MAX__
};

enum if_type {
	IF_TYPE_T_OTHER					= 1,
	IF_TYPE_T_REGULAR1822				= 2,
	IF_TYPE_T_HDH1822				= 3,
	IF_TYPE_T_DDNX25				= 4,
	IF_TYPE_T_RFC877X25				= 5,
	IF_TYPE_T_ETHERNET_CSMA_CD			= 6,
	IF_TYPE_T_ISO88023_CSMA_CD			= 7,
	__IF_TYPE_T_MAX__
};

enum if_class {
	IF_CLASS_T_UNSPEC				= 0,
	IF_CLASS_T_AppGigabitEthernet			= 1,
	IF_CLASS_T_AppleTalk				= 2,
	IF_CLASS_T_AppNav_Compress			= 3,
	IF_CLASS_T_AppNav_UnCompress			= 4,
	IF_CLASS_T_ARCnet				= 5,
	IF_CLASS_T_Async				= 6,
	IF_CLASS_T_ATM					= 7,
	IF_CLASS_T_ATM_ACR				= 8,
	IF_CLASS_T_Auto_Template			= 9,
	IF_CLASS_T_BATMAN_Advanced			= 10,
	IF_CLASS_T_BDI					= 11,
	IF_CLASS_T_Bluetooth				= 12,
	IF_CLASS_T_Bundle				= 13,
	IF_CLASS_T_BVI					= 14,
	IF_CLASS_T_Cable_Modem				= 15,
	IF_CLASS_T_CAN					= 16,
	IF_CLASS_T_CDMA_1x				= 17,
	IF_CLASS_T_Cellular				= 18,
	IF_CLASS_T_CTunnel				= 19,
	IF_CLASS_T_Dialer				= 20,
	IF_CLASS_T_DSA					= 21,
	IF_CLASS_T_EightHundredGigE			= 22,
	IF_CLASS_T_Embedded_Service_Engine		= 23,
	IF_CLASS_T_Ethernet				= 24,
	IF_CLASS_T_FastEthernet				= 25,
	IF_CLASS_T_FDDI					= 26,
	IF_CLASS_T_FibreChannel				= 27,
	IF_CLASS_T_FiftyGigabitEthernet			= 28,
	IF_CLASS_T_FiveGigabitEthernet			= 29,
	IF_CLASS_T_FortyGigabitEthernet			= 30,
	IF_CLASS_T_FourHundredGigE			= 31,
	IF_CLASS_T_GigabitEthernet			= 32,
	IF_CLASS_T_GMPLS				= 33,
	IF_CLASS_T_Group_Async				= 34,
	IF_CLASS_T_HIPPI				= 35,
	IF_CLASS_T_HSSI					= 36,
	IF_CLASS_T_HundredGigE				= 37,
	IF_CLASS_T_InfiniBand				= 38,
	IF_CLASS_T_ISDN_BRI				= 39,
	IF_CLASS_T_ISDN_PRI				= 40,
	IF_CLASS_T_LISP					= 41,
	IF_CLASS_T_LongReachEthernet			= 42,
	IF_CLASS_T_Loopback				= 43,
	IF_CLASS_T_LSP_VIF				= 44,
	IF_CLASS_T_MFR					= 45,
	IF_CLASS_T_Multilink				= 46,
	IF_CLASS_T_Nebula				= 47,
	IF_CLASS_T_Netlink_Monitor			= 48,
	IF_CLASS_T_NFC					= 49,
	IF_CLASS_T_Null					= 50,
	IF_CLASS_T_NVE					= 51,
	IF_CLASS_T_OmniPath				= 52,
	IF_CLASS_T_OpenVPN				= 53,
	IF_CLASS_T_Overlay				= 54,
	IF_CLASS_T_Parallel				= 55,
	IF_CLASS_T_Port_Channel				= 56,
	IF_CLASS_T_PRP_Channel				= 57,
	IF_CLASS_T_Pseudowire				= 58,
	IF_CLASS_T_Serial				= 59,
	IF_CLASS_T_SM					= 60,
	IF_CLASS_T_SoftEther				= 61,
	IF_CLASS_T_STunnel				= 62,
	IF_CLASS_T_Tailscale				= 63,
	IF_CLASS_T_TenGigabitEthernet			= 64,
	IF_CLASS_T_TerabitEthernet			= 65,
	IF_CLASS_T_Tunnel				= 66,
	IF_CLASS_T_TwentyFiveGigE			= 67,
	IF_CLASS_T_TwoGigabitEthernet			= 68,
	IF_CLASS_T_TwoHundredGigE			= 69,
	IF_CLASS_T_VasiLeft				= 70,
	IF_CLASS_T_VasiRight				= 71,
	IF_CLASS_T_VIF					= 72,
	IF_CLASS_T_Virtual_Access			= 73,
	IF_CLASS_T_Virtual_CAN				= 74,
	IF_CLASS_T_Virtual_Ethernet			= 75,
	IF_CLASS_T_Virtual_PPP				= 76,
	IF_CLASS_T_Virtual_Template			= 77,
	IF_CLASS_T_Virtual_TokenRing			= 78,
	IF_CLASS_T_VirtualPortGroup			= 79,
	IF_CLASS_T_VLAN					= 80,
	IF_CLASS_T_VMI					= 81,
	IF_CLASS_T_Wi_Fi				= 82,
	IF_CLASS_T_ZeroTier				= 83,
	__IF_CLASS_T_MAX__
};

#endif /* _NBAPI_VOLTOS_IF_H */
